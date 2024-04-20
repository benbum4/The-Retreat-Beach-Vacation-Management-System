#include <iostream>




//Function declarations
void randomHouse();
void payBalance();
void homeSpecs();
void feedback();
void activities();


int main () {

//Welcomes users to the website
std::cout << "\nWelcome to The Retreat Vacation Management System!\n";
srand(time(NULL));
int beachFlag = rand() % 5 + 1;
switch(beachFlag){
    case 1: std::cout << "The beach flag today is green\n";
        break;
    case 2: std::cout << "The beach flag today is yellow\n";
        break;
    case 3: std::cout << "The beach flag today is red\n";
        break;
    case 4: std::cout << "The beach flag today is double red (closed to public)\n";
        break;
    case 5: std::cout << "The beach flag today is purple\n";
        break;
}
int temperature = rand() % 5 + 1;
switch(temperature){
    case 1: std::cout << "The temperature today is 68 degrees\n";
        break;
    case 2: std::cout << "The temperature today is 75 degrees\n";
        break;
    case 3: std::cout << "The temperature today is 85 degrees\n";
        break;
    case 4: std::cout << "The temperature today is 87 degrees\n";
        break;
    case 5: std::cout << "The temperature today is 89 degrees\n";
        break;
}
std::string address;
int choice = 0;
do{
std::cout << "\nHow may we serve you today?\n";
std::cout << "1. Discover homes availible to rent\n";
std::cout << "2. Pay balance\n";
std::cout << "3. Home specifications\n";
std::cout << "4. Provide feedback\n";
std::cout << "5. Things to do\n";
std::cout << "6. Exit website\n";
std::cin >> choice;

std::cin.clear();
fflush(stdin);

switch(choice){
    case 1: randomHouse();
        break;
    case 2: payBalance();
        break;
    case 3: homeSpecs();
        break;
    case 4: feedback();
        break;
    case 5: activities();
        break;
    case 6: std::cout << "Thanks for visiting and see you soon!\n";
        break;
    default: std::cout << "Invalid choice!\n";
}
}while(choice != 6);


    return 0;
}



//Function definitions
void randomHouse(){
    
    std::string answer;
    std::cout << "\nWould you like to view an oceanfront home or a non-oceanfront home?\n";
    while(answer.empty()){
    std::getline(std::cin , answer);
    }
    srand(time(NULL));
    int oceanFront = rand() % 10 + 1;
    int nonOceanFront = rand() % 10 + 1;
if(answer == "oceanfront home"){
    switch(oceanFront){
        case 1: std::cout << "\n243 W Bermuda Dr and 143 W Saint Lucia Ln\n";
            break;
        case 2: std::cout << "\n131 W Saint Lucia Ln and 119 W Saint Lucia Ln\n";
            break;
        case 3: std::cout << "\n105 W Saint Lucia Ln and 81 W Saint Lucia Ln\n";
            break;
        case 4: std::cout << "\n61 W Saint Lucia Ln and 43 West Saint Lucia Ln\n";
            break;
        case 5: std::cout << "\n33 W Saint Lucia Ln and 17 W Saint Lucia Ln\n";
            break;
        case 6: std::cout << "\n26 E Saint Lucia Ln and 36 E Saint Lucia Ln\n";
            break;
        case 7: std::cout << "\n50 E Saint Lucia Ln and 76 E Saint Lucia Ln\n";
            break;
        case 8: std::cout << "\n80 E Saint Lucia Ln and 110 E Saint Lucia Ln\n";
            break;
        case 9: std::cout << "\n120 E Saint Lucia Ln and 140 E Saint Lucia Ln\n";
            break;
        case 10: std::cout << "\n152 E Saint Lucia Ln and 166 E Saint Lucia Ln\n";
            break;
    }
}

else if(answer == "non-oceanfront home"){
    switch(nonOceanFront){
        case 1: std::cout << "\n244 W Bermuda Dr and 238 W Bermuda Dr\n";
            break;
        case 2: std::cout << "\n230 W Bermuda Dr and 202 W Bermuda Dr\n";
            break;
        case 3: std::cout << "\n190 W Bermuda Dr and 231 W Bermuda Dr\n";
            break;
        case 4: std::cout << "\n201 W Bermuda Dr and 171 W Bermuda Dr\n";
            break;
        case 5: std::cout << "\n168 W Bermuda Dr and 115 W Bermuda Dr\n";
            break;
        case 6: std::cout << "\n40 Tortola Ln and 94 W Saint Lucia Ln\n";
            break;
        case 7: std::cout << "\n40 Antigua Ln and 40 W Bermuda Dr\n";
            break;
        case 8: std::cout << "\n38 W Saint Lucia Ln and 20 W Saint Lucia Ln\n";
            break;
        case 9: std::cout << "\n37 E Saint Lucia Ln and 65 E Saint Lucia Ln\n";
            break;
        case 10: std::cout << "\n107 E Bermuda Dr and 61 E Bermuda Dr\n";
            break;
    }
}

else{
    std::cout << "You did not enter a valid answer!\n";
}

}
void payBalance(){

//Asks users to input what month they are staying (numerically)
int response;
int oof;
int card;
std::cout << "What month are you renting (1-12)?: ";
std::cin >> response;


//Winter rates = $999.99
if(response == 1){
    std::cout << "How many days are you staying?: ";
    std::cin >> oof;
    std::cout << "Your balance is " << oof * 999.99 << '\n';
    std::cout << "Enter credit card number below\n";
    std::cin >> card;
    std::cout << "\nThank you for choosing to stay at The Retreat!\n";
}
else if(response == 2){
    std::cout << "How many days are you staying?: ";
    std::cin >> oof;
    std::cout << "Your balance is " << oof * 999.99 << '\n';
    std::cout << "Enter credit card number below\n";
    std::cin >> card;
    std::cout << "\nThank you for choosing to stay at The Retreat!\n";
}
else if(response == 3){
    std::cout << "How many days are you staying?: ";
    std::cin >> oof;
    std::cout << "Your balance is " << oof * 999.99 << '\n';
    std::cout << "Enter credit card number below\n";
    std::cin >> card;
    std::cout << "\nThank you for choosing to stay at The Retreat!\n";
}
//Spring rates = $1399.99
else if(response == 4){
    std::cout << "How many days are you staying?: ";
    std::cin >> oof;
    std::cout << "Your balance is " << oof * 1399.99 << '\n';
    std::cout << "Enter credit card number below\n";
    std::cin >> card;
    std::cout << "\nThank you for choosing to stay at The Retreat!\n";
}
else if(response == 5){
    std::cout << "How many days are you staying?: ";
    std::cin >> oof;
    std::cout << "Your balance is " << oof * 1399.99 << '\n';
    std::cout << "Enter credit card number below\n";
    std::cin >> card;
    std::cout << "\nThank you for choosing to stay at The Retreat!\n";
}
//Summer rates = $1999.99
else if(response == 6){
    std::cout << "How many days are you staying?: ";
    std::cin >> oof;
    std::cout << "Your balance is " << oof * 1999.99 << '\n';
    std::cout << "Enter credit card number below\n";
    std::cin >> card;
    std::cout << "\nThank you for choosing to stay at The Retreat!\n";
}
else if(response == 7){
    std::cout << "How many days are you staying?: ";
    std::cin >> oof;
    std::cout << "Your balance is " << oof * 1999.99 << '\n';
    std::cout << "Enter credit card number below\n";
    std::cin >> card;
    std::cout << "\nThank you for choosing to stay at The Retreat!\n";
}
else if(response == 8){
    std::cout << "How many days are you staying?: ";
    std::cin >> oof;
    std::cout << "Your balance is " << oof * 1999.99 << '\n';
    std::cout << "Enter credit card number below\n";
    std::cin >> card;
    std::cout << "\nThank you for choosing to stay at The Retreat!\n";
}
//Fall rates = $1399.99
else if(response == 9){
    std::cout << "How many days are you staying?: ";
    std::cin >> oof;
    std::cout << "Your balance is " << oof * 1399.99 << '\n';
    std::cout << "Enter credit card number below\n";
    std::cin >> card;
    std::cout << "\nThank you for choosing to stay at The Retreat!\n";
}
else if(response == 10){
    std::cout << "How many days are you staying?: ";
    std::cin >> oof;
    std::cout << "Your balance is " << oof * 1399.99 << '\n';
    std::cout << "Enter credit card number below\n";
    std::cin >> card;
    std::cout << "\nThank you for choosing to stay at The Retreat!\n";
}
//Winter rates = $999.99
else if(response == 11){
    std::cout << "How many days are you staying?: ";
    std::cin >> oof;
    std::cout << "Your balance is " << oof * 999.99 << '\n';
    std::cout << "Enter credit card number below\n";
    std::cin >> card;
    std::cout << "\nThank you for choosing to stay at The Retreat!\n";
}
else if(response == 12){
    std::cout << "How many days are you staying?: ";
    std::cin >> oof;
    std::cout << "Your balance is " << oof * 999.99 << '\n';
    std::cout << "Enter credit card number below\n";
    std::cin >> card;
    std::cout << "\nThank you for choosing to stay at The Retreat!\n";
}

else{
    std::cout << "\nYou did not enter a valid month!\n";
}




}
void homeSpecs(){
std::string address;
std::cout << "\nWhat home would you like to learn more about?: ";
while(address.empty()){
std::getline(std::cin , address);
}
if(address == "115 W Bermuda Dr"){
    std::cout << "\n4 bedrooms and 6 bathrooms with 4,598 sqft\n";
}
else if(address == "149 W Bermuda Dr"){
    std::cout << "\n3 bedrooms and 4 bathrooms with 3,513 sqft\n";
}
else if(address == "171 W Bermuda Dr"){
    std::cout << "\n7 bedrooms and 11 bathrooms with 6,956 sqft\n";
}
else if(address == "201 W Bermuda Dr"){
    std::cout << "\n6 bedrooms and 6 bathrooms with 5,558 sqft\n";
}
else if(address == "231 W Bermuda Dr"){
    std::cout << "\n6 bedrooms and 7 bathrooms with 6,645 sqft\n";
}
else if(address == "243 W Bermuda Dr"){
    std::cout << "\n5 bedrooms and 8 bathrooms with 6,080 sqft\n";
}
else if(address == "244 W Bermuda Dr"){
    std::cout << "\n5 bedrooms and 5 bathrooms with 3,876 sqft\n";
}
else if(address == "238 W Bermuda Dr"){
    std::cout << "\n4 bedrooms and 5 bathrooms with 6,679 sqft\n";
}
else if(address == "230 W Bermuda Dr"){
    std::cout << "\n5 bedrooms and 7 bathrooms with 6,737 sqft\n";
}
else if(address == "202 W Bermuda Dr"){
    std::cout << "\n4 bedrooms and 6 bathrooms with 4,222 sqft\n";
}
else if(address == "190 W Bermuda Dr"){
    std::cout << "\n5 bedrooms and 3.5 bathrooms with 5,119 sqft\n";
}
else if(address == "176 W Bermuda Dr"){
    std::cout << "\n2 bedrooms and 3.5 bathrooms with 2,469 sqft\n";
}
else if(address == "168 W Bermuda Dr"){
    std::cout << "\n4 bedrooms and 3 bathrooms with 2,878 sqft\n";
}
else if(address == "108 W Bermuda Dr"){
    std::cout << "\n3 bedrooms and 3.5 bathrooms with 4,128 sqft\n";
}
else if(address == "88 W Bermuda Dr"){
    std::cout << "\n4 bedrooms and 4 bathrooms with 3,034 sqft\n";
}
else if(address == "40 Tortola Ln"){
    std::cout << "\n6 bedrooms and 6 bathrooms with 6,296 sqft\n";
}
else if(address == "54 Tortola Ln"){
    std::cout << "\n4 bedrooms and 4.5 bathrooms with 3,955 sqft\n";
}
else if(address == "136 W Saint Lucia Ln"){
    std::cout << "\n4 bedrooms and 4.5 bathrooms with 6,808 sqft\n";
}
else if(address == "39 Tortola Ln"){
    std::cout << "\n6 bedrooms and 7 bathrooms with 5,000 sqft\n";
}
else if(address == "49 Tortola Ln"){
    std::cout << "\n5 bedrooms and 6 bathrooms with 5,718 sqft\n";
}
else if(address == "94 W Saint Lucia Ln"){
    std::cout << "\n4 bedrooms and 6 bathrooms with 5,508 sqft\n";
}
else if(address == "143 W Saint Lucia Ln"){
    std::cout << "\n4 bedrooms and 4.5 bathrooms with 4,400 sqft\n";
}
else if(address == "131 W Saint Lucia Ln"){
    std::cout << "\n5 bedrooms and 5 bathrooms with 4,126 sqft\n";
}
else if(address == "119 W Saint Lucia Ln"){
    std::cout << "\n4 bedrooms and 4 bathrooms with 4,527 sqft\n";
}
else if(address == "105 W Saint Lucia Ln"){
    std::cout << "\n4 bedrooms and 5 bathrooms with 4,512 sqft\n";
}
else if(address == "81 W Saint Lucia Ln"){
    std::cout << "\n4 bedrooms and 4 bathrooms with 4,761 sqft\n";
}
else if(address == "61 W Saint Lucia Ln"){
    std::cout << "\n5 bedrooms and 6 bathrooms with 4,665 sqft\n";
}
else if(address == "40 Antigua Ln"){
    std::cout << "\n5 bedrooms and 7 bathrooms with 4,518 sqft\n";
}
else if(address == "67 W Bermuda Dr"){
    std::cout << "\n3 bedrooms and 2.5 bathrooms with 2,507 sqft\n";
}
else if(address == "40 W Bermuda Dr"){
    std::cout << "\n14 bedrooms and 9 bathrooms with 8,300 sqft\n";
}
else if(address == "43 W Saint Lucia Ln"){
    std::cout << "\n4 bedrooms and unknown bathrooms with 6,039 sqft\n";
}
else if(address == "33 W Saint Lucia Ln"){
    std::cout << "\n5 bedrooms and 5 bathrooms with 7,341 sqft\n";
}
else if(address == "17 W Saint Lucia Ln"){
    std::cout << "\n8 bedrooms and 8 bathrooms with 6,474 sqft\n";
}
else if(address == "38 W Saint Lucia Ln"){
    std::cout << "\n5 bedrooms and 5 bathrooms with 5,000 sqft\n";
}
else if(address == "20 W Saint Lucia Ln"){
    std::cout << "\n4 bedrooms and 4 bathrooms with 4,517 sqft\n";
}
else if(address == "19 E Saint Lucia Ln"){
    std::cout << "\n4 bedrooms and 4.5 bathrooms with 4,098 sqft\n";
}
else if(address == "26 E Saint Lucia Ln"){
    std::cout << "\n4 bedrooms and 5 bathrooms with 6,257 sqft\n";
}
else if(address == "36 E Saint Lucia Ln"){
    std::cout << "\n5 bedrooms and 7 bathrooms with 5,523 sqft\n";
}
else if(address == "37 E Saint Lucia Ln"){
    std::cout << "\n5 bedrooms and 5 bathrooms with 4,647 sqft\n";
}
else if(address == "25 Saint Kitts Ln"){
    std::cout << "\n4 bedrooms and 4 bathrooms with 4,120 sqft\n";
}
else if(address == "42 E Bermuda Dr"){
    std::cout << "\n5 bedrooms and 5 bathrooms with 4,150 sqft\n";
}
else if(address == "53 E Bermuda Dr"){
    std::cout << "\n6 bedrooms and 6.5 bathrooms with 4,867 sqft\n";
}
else if(address == "61 E Bermuda Dr"){
    std::cout << "\n4 bedrooms and 4 bathrooms with 4,517 sqft\n";
}
else if(address == "75 E Bermuda Dr"){
    std::cout << "\n4 bedrooms and 5 bathrooms with 3,738 sqft\n";
}
else if(address == "65 E Saint Lucia Ln"){
    std::cout << "\n5 bedrooms and 5 bathrooms with 6,006 sqft\n";
}
else if(address == "50 E Saint Lucia Ln"){
    std::cout << "\n5 bedrooms and 5 bathrooms with 3,956 sqft\n";
}
else if(address == "76 E Saint Lucia Ln"){
    std::cout << "\n4 bedrooms and 6 bathrooms with 4,806 sqft\n";
}
else if(address == "85 E Bermuda Dr"){
    std::cout << "\n5 bedrooms and 6 bathrooms with 4,358 sqft\n";
}
else if(address == "99 E Bermuda Dr"){
    std::cout << "\n5 bedrooms and 5 bathrooms with 4,340 sqft\n";
}
else if(address == "107 E Bermuda Dr"){
    std::cout << "\n5 bedrooms and 7 bathrooms with 4,698 sqft\n";
}
else if(address == "96 E Bermuda Dr"){
    std::cout << "\n4 bedrooms and 4 bathrooms with 2,962 sqft\n";
}
else if(address == "110 E Saint Lucia Ln"){
    std::cout << "\n4 bedrooms and 5 bathrooms with 5,873 sqft\n";
}
else if(address == "120 E Saint Lucia Ln"){
    std::cout << "\n5 bedrooms and 5 bathrooms with 5,889 sqft\n";
}
else if(address == "147 E Saint Lucia Ln"){
    std::cout << "\n6 bedrooms and 6 bathrooms with 5,022 sqft\n";
}
else if(address == "140 E Saint Lucia Ln"){
    std::cout << "\n3 bedrooms and 3.5 bathrooms with 4,166 sqft\n";
}
else if(address == "152 E Saint Lucia Ln"){
    std::cout << "\n5 bedrooms and 6 bathrooms with 4,646 sqft\n";
}
else if(address == "166 E Saint Lucia Ln"){
    std::cout << "\n5 bedrooms and 5 bathrooms with 4,893 sqft\n";
}
else{
    std::cout << "\nYou did not enter a valid address!\n";
}

}
void feedback(){
std::string result;
int rating;
std::string oof;

std::cout << "Would you like to leave written feedback or stars?\n";
while(result.empty()){
std::getline(std::cin , result);
}

if(result == "written feedback"){
    std::cout << "Submit feedback here: ";
    while(oof.empty()){
    std::getline(std::cin , oof);
    }
    std::cout << "\nThank you for the feedback!\n";
}
else if(result == "stars"){
    std::cout << "How many stars would you rate the house (1-5)?: ";
    std::cin >> rating;
    std::cout << "\nThank you for the feedback!\n";
}
else{
    std::cout << "\nYou did not enter a valid option!\n";
}

}
void activities(){
std::string destin;

std::cout << "Would you like to view dining options or activities?\n";
while(destin.empty()){
std::getline(std::cin , destin);
}

if(destin == "dining options"){
    srand(time(NULL));
    int food = rand() % 10 + 1;
    switch(food){
        case 1: std::cout << "\nCantina Laredo in Grand Boulevard and Fleming's in Grand Boulevard\n";
            break;
        case 2: std::cout << "\nBud and Alley's Taco Bar in Seaside and Barefoot BBQ in Seaside\n";
            break;
        case 3: std::cout << "\nShunk Gulley Oyster Bar in Gulf PLace and Pizza By The Sea in Gulf Place\n";
            break;
        case 4: std::cout << "\nPickle's Beachside Grill in Seaside and Mimmo's in Blue Mountain Beach\n";
            break;
        case 5: std::cout << "\nAmavida Coffee Roasters in Rosemary Beach and La Crema Tapas & Chocolate in Rosemary Beach\n";
            break;
        case 6: std::cout << "\nSummer Kitchen Cafe in Rosemary Beach and Amigos 30A Mexican Kitchen\n";
            break;
        case 7: std::cout << "\nKith and Kin Coffee in Santa Rosa Beach and Red Fish Taco in Blue Mountain Beach\n";
            break;
        case 8: std::cout << "\nGeorge's in Alys Beach and Havana Beach Bar and Grill in Alys Beach\n";
            break;
        case 9: std::cout << "\nThe Perfect Pig in Santa Rosa Beach and Black Bear Bread Co. in Grayton Beach\n";
            break;
        case 10: std::cout << "\nNigel's Bananas in Seaside and Dawson's Yogurt & Fudgeworks in Seaside\n";
            break;
    }
}

else if(destin == "activities"){
    srand(time(NULL));
    int activities = rand() % 10 + 1;
    switch(activities){
        case 1: std::cout << "\nSundog Books in Seaside and ride bikes along 30A\n";
            break;
        case 2: std::cout << "\nGrayton Beach State Park in Grayton Beach and Harborwalk Village in Destin\n";
            break;
        case 3: std::cout << "\nRent a pontoon boat or jet skis at Wet-n-Wild Watersports in Destin and Dolphin tours with Boogies Watersports in Destin\n";
            break;
        case 4: std::cout << "\nDeep Sea Charter Boats in Destin and snorkeling off the jetties at Destin Snorkel in Destin\n";
            break;
        case 5: std::cout << "\nHenderson Beach State Park in Destin and Big Kahuna's Water & Adventure Park in Destin\n";
            break;
        case 6: std::cout << "\nHydrojet Dolphin Cruise in Destin and Crab Island in Destin\n";
            break;
        case 7: std::cout << "\nJust Chute Me Parasail in Destin and Silversands Outlets in Miramar Beach\n";
            break;
        case 8: std::cout << "\nBaytowne Wharf Vilage in Miramar Beach and Baytowne Golf Club in Miramar Beach\n";
            break;
        case 9: std::cout << "\nGrand Boulevard in Sandestin and The Farmer's Market at Baytowne Wharf in Sandestin\n";
            break;
        case 10: std::cout << "\nThe Track in Destin and Fat Daddy's Arcade in Destin\n";
            break;
    }
}

else{
    std::cout << "\nYou did not enter a valid option!\n";
}


}