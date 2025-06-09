import os
import re

# Configurable target values
TARGET_WINDOWS_VERSION = "10.0"
TARGET_TOOLSET = "v143"

def update_vcxproj(file_path):
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()

        # Replace WindowsTargetPlatformVersion
        content = re.sub(
            r'<WindowsTargetPlatformVersion>.*?</WindowsTargetPlatformVersion>',
            f'<WindowsTargetPlatformVersion>{TARGET_WINDOWS_VERSION}</WindowsTargetPlatformVersion>',
            content
        )

        # Replace PlatformToolset
        content = re.sub(
            r'<PlatformToolset>.*?</PlatformToolset>',
            f'<PlatformToolset>{TARGET_TOOLSET}</PlatformToolset>',
            content
        )

        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)

        print(f"Updated: {file_path}")
    except Exception as e:
        print(f"Error processing {file_path}: {e}")

def walk_and_update(root_dir):
    for dirpath, _, filenames in os.walk(root_dir):
        for filename in filenames:
            if filename.endswith('.vcxproj'):
                update_vcxproj(os.path.join(dirpath, filename))

if __name__ == "__main__":
    walk_and_update(".")
