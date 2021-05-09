echo "$(tput setaf 31)+---------------------------------+"
echo "$(tput setaf 31)|                                 |"
echo "$(tput setaf 31)|            @Akash671            |"
echo "$(tput setaf 31)|                                 |"
echo "$(tput setaf 31)+---------------------------------+"
echo "$(tput setaf 21)-----------Hello Akash! welcome in gihub---------"
echo "$(tput setaf 46)+-----------------+ +--------------------------|+"
read -p "| Enter file name |:|" name
echo "$(tput setaf 46)+-----------------+ +--------------------------|+"
git add $name

echo "$(tput setaf 10)+----------------------+ +---------------------+"
read -p "| Enter pin |:|" pin
echo "$(tput setaf 10)+----------------------+ +---------------------+"
message="author : @akash kumar "
git commit -m "$message"
git push
echo "$(tput setaf 31)+---------------------------------+"
echo "$(tput setaf 31)|    Thank You! Akash Kumar       |"
echo "$(tput setaf 31)+---------------------------------+"
echo "$(tput setaf 31)+-----------+"
echo "$(tput setaf 38)| Bye Akash |"
echo "$(tput setaf 31)+-----------+"

