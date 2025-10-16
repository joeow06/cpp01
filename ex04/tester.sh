make

# abc@==@123
echo 'test.txt\n
abc@==@123'

# abc==123
echo '------------------------\n
Test 1\n
./main test.txt '@' ""'
echo 'Answer: abc==123'
./main test.txt '@' ""
echo 'Result:'
cat test.txt.replace
echo '------------------------\n'


# abc@@123
echo 'Test 2\n
./main test.txt '=' ""'
echo 'Answer: abc@@123'
./main test.txt '=' ""
echo 'Result:'
cat test.txt.replace
echo '------------------------\n'

# @==@123
echo './main test.txt 'abc' ""'
echo 'Answer: @==@123'
./main test.txt 'abc' ""
echo 'Result:'
cat test.txt.replace
echo '------------------------\n'

# abc@==@
echo './main test.txt '123' ""'
echo 'Answer: abc@==@'
./main test.txt '123' ""
echo 'Result:'
cat test.txt.replace
echo '------------------------\n'

# 123@==@123
echo './main test.txt 'abc' "123"'
echo 'Answer: 123@==@123'
./main test.txt 'abc' "123"
echo 'Result:'
cat test.txt.replace
echo '------------------------\n'

# abc@asdasd@123
echo './main test.txt '=' "asd"'
echo 'Answer: abc@asdasd@123'
./main test.txt '=' "asd"
echo 'Result:'
cat test.txt.replace
echo '------------------------\n'

# 1234@==@123
echo './main test.txt 'abc' "1234"'
echo 'Answer: 1234@==@123'
./main test.txt 'abc' "1234"
echo 'Result:'
cat test.txt.replace
echo '------------------------\n'

# 12@==@123
echo './main test.txt 'abc' "12"'
echo 'Answer: 12@==@123'
./main test.txt 'abc' "12"
echo 'Result:'
cat test.txt.replace
echo '------------------------\n'

echo "Multiple lines test\n"
cat test_2.txt
echo '\n------------------------\n'
echo './main test_2.txt 'no' "yes"'
echo 'Answer:'
echo 'yes yes yes yes yes
yes yes yes yes yes
yes123yes456yes789
@yes#yes$yes%yes^yes*yes(yes)



yesyesyesyesyes'
./main test_2.txt no yes
echo "Result:"
cat test_2.txt.replace
echo '--------------------------\n'
make fclean