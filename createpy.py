import os

def read_c_program(file_path):
    with open(file_path, 'r') as file:
        return file.read()

def add_c_programs_to_text_file(directory_path, output_file_path):
    with open(output_file_path, 'w') as output_file:
        for root, dirs, files in os.walk(directory_path):
            for file_name in files:
                if file_name.endswith('.c'):
                    file_path = os.path.join(root, file_name)
                    c_program = read_c_program(file_path)
                    output_file.write(f'Program: {file_name}\n')
                    output_file.write(f'-' * 20 + '\n')
                    output_file.write(f'```' + '\n')
                    output_file.write(c_program)
                    output_file.write(f'```' + '\n')
                    output_file.write('\n' + '=' * 20 + '\n\n')

# Example usage
directory = 'D:\PSG\C Lab\C-ProgrammingSem2'
output_file = 'D:\PSG\C Lab\C-ProgrammingSem2\DocumentationFinal.md'

add_c_programs_to_text_file(directory, output_file)
