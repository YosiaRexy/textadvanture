#include <iostream>
#include <string>  // Ganti cstring jadi string
using namespace std;

int main() {
    // Menggunakan string instead of char array
    string start;  // Gak perlu ukuran [20]
    int choice;
    
    cout << "The Crypto Investing Game Made by Yosh\n";
    cout << "=====================================\n";
    
    // Introduction
    cout << "Type 'start' to begin: ";
    cin >> start;
    
    // Membandingkan string langsung (gak perlu strcmp)
    if (start == "start") {  // Simpel banget!
        cout << "\nWelcome to the Crypto Investment Game!\n";
        cout << "=====================================\n";
        
        cout << "You want to invest in some crypto!\n";
        cout << "Choose what sector you want to invest in:\n";
        cout << "1. Bitcoin (BTC)\n";
        cout << "2. Ethereum (ETH)\n";
        cout << "3. Meme Coins\n";
        cout << "4. Exit Game\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                cout << "\nYou chose Bitcoin!\n";
                cout << "Bitcoin is the king of crypto - stable but expensive.\n";
                cout << "Current price simulation: $45,000\n";
                cout << "This is a safe long-term investment!\n";
                cout << "--------------------------------------\n";
                cout << "How long do you want to hold BTC?\n";
                cout << "a) 1 day (Day Trading)\n";
                cout << "b) 3 days (Short Swing)\n";
                cout << "c) 1 week (Weekly Hold)\n";
                cout << "d) 1 month (Monthly Hold)\n";
                cout << "e) 3 months (Quarterly Hold)\n";
                cout << "f) 1 year (HODLer)\n";
                cout << "Enter your choice (a-f): ";
                
                char timeChoice;
                cin >> timeChoice;
                
                if (timeChoice == 'a') {
                    cout << "\n--- DAY TRADING RESULT ---\n";
                    cout << "5:30 AM - You wake up, market already moved 8%\n";
                    cout << "Panic sell at $41,200 - DOWN $3,800\n";
                    cout << "10 minutes later: Bitcoin pumps to $48,000\n";
                    cout << "You just lost your rent money to algos\n";
                    cout << "Welcome to day trading hell, amateur\n";
                } else if (timeChoice == 'b') {
                    cout << "\n--- 3 DAYS RESULT ---\n";
                    cout << "Day 1: China FUD drops BTC to $39,000\n";
                    cout << "Day 2: You're down $6,000, sweating bullets\n";
                    cout << "Day 3: Binance gets hacked rumor spreads\n";
                    cout << "You capitulate at $37,500 - LOST $7,500\n";
                    cout << "Weak hands got shaken out by whales\n";
                } else if (timeChoice == 'c') {
                    cout << "\n--- 1 WEEK RESULT ---\n";
                    cout << "Week of pure psychological torture begins\n";
                    cout << "Down 15%, up 8%, down 12%, up 20%\n";
                    cout << "Final price: $47,800 - GAINED $2,800\n";
                    cout << "You survived the volatility rollercoaster\n";
                    cout << "But your hairline didn't\n";
                } else if (timeChoice == 'd') {
                    cout << "\n--- 1 MONTH RESULT ---\n";
                    cout << "Week 1: Elon tweets, BTC pumps to $52,000\n";
                    cout << "Week 2: SEC investigation, drops to $38,000\n";
                    cout << "Week 3: BlackRock accumulates, back to $49,000\n";
                    cout << "Week 4: Monthly close at $54,200\n";
                    cout << "GAINED $9,200 - You survived the manipulation\n";
                } else if (timeChoice == 'e') {
                    cout << "\n--- 3 MONTHS RESULT ---\n";
                    cout << "Month 1: Institutional FOMO, hits $58,000\n";
                    cout << "Month 2: Bear market fears, crashes to $32,000\n";
                    cout << "Month 3: Halving hype builds, moons to $62,000\n";
                    cout << "GAINED $17,000 - Diamond hands paid off\n";
                    cout << "You witnessed a full market cycle\n";
                } else if (timeChoice == 'f') {
                    cout << "\n--- 1 YEAR RESULT ---\n";
                    cout << "The ultimate test of conviction begins\n";
                    cout << "Survived 3 major crashes, 7 pump and dumps\n";
                    cout << "Ignored 847 FUD articles, 23 death predictions\n";
                    cout << "Final price: $89,000 - GAINED $44,000\n";
                    cout << "You're now a battle-tested Bitcoin veteran\n";
                    cout << "Few understand what you've been through\n";
                } else {
                    cout << "\nInvalid choice! You panic sold everything\n";
                    cout << "Bought high, sold low - classic retail move\n";
                }
                break;
                
            case 2:
                cout << "\nYou chose Ethereum!\n";
                cout << "Ethereum powers DeFi and NFTs - good growth potential.\n";
                cout << "Current price simulation: $2,500\n";
                cout << "Smart choice for tech-savvy investors!\n";
                cout << "--------------------------------------\n";
                cout << "How much leverage do you want to use?\n";
                cout << "a) No leverage (Spot trading)\n";
                cout << "b) 5x leverage (Moderate risk)\n";
                cout << "c) 10x leverage (High risk)\n";
                cout << "d) 25x leverage (YOLO mode)\n";
                cout << "e) 50x leverage (Financial suicide)\n";
                cout << "Enter your choice (a-e): ";
                
                char leverageChoice;
                cin >> leverageChoice;
                
                if (leverageChoice == 'a') {
                    cout << "\n--- SPOT TRADING RESULT ---\n";
                    cout << "Shanghai upgrade successful, ETH pumps to $3,100\n";
                    cout << "GAINED $600 per ETH - Safe 24% return\n";
                    cout << "Boring but your wife still loves you\n";
                    cout << "No liquidation risk, no sleepless nights\n";
                } else if (leverageChoice == 'b') {
                    cout << "\n--- 5X LEVERAGE RESULT ---\n";
                    cout << "DeFi TVL hits new record, ETH rises to $2,850\n";
                    cout << "5x leverage: $350 gain becomes $1,750 profit\n";
                    cout << "Your calculated risk paid off handsomely\n";
                    cout << "You're officially smarter than most degens\n";
                } else if (leverageChoice == 'c') {
                    cout << "\n--- 10X LEVERAGE RESULT ---\n";
                    cout << "Sudden whale dump triggers cascade liquidations\n";
                    cout << "ETH flash crashes to $2,150 in 3 minutes\n";
                    cout << "10x leverage: $350 loss becomes $3,500 nightmare\n";
                    cout << "You're still alive but wallet is bleeding\n";
                    cout << "Time to explain this to your wife\n";
                } else if (leverageChoice == 'd') {
                    cout << "\n--- 25X LEVERAGE RESULT ---\n";
                    cout << "LIQUIDATION ALERT: Position size too large\n";
                    cout << "ETH drops 4% to $2,400 within 10 minutes\n";
                    cout << "Your entire position gets liquidated instantly\n";
                    cout << "Exchange keeps your collateral as fees\n";
                    cout << "You just donated to Binance's profit margins\n";
                    cout << "Welcome to the 90% of traders who lose money\n";
                } else if (leverageChoice == 'e') {
                    cout << "\n--- 50X LEVERAGE RESULT ---\n";
                    cout << "INSTANT LIQUIDATION: 2% move = 100% loss\n";
                    cout << "ETH moves $50 and you're completely wiped out\n";
                    cout << "Position liquidated in 45 seconds flat\n";
                    cout << "Your account balance now shows $0.00\n";
                    cout << "Congratulations, you speedran bankruptcy\n";
                    cout << "The exchange sends you a 'thank you' email\n";
                } else {
                    cout << "\nInvalid choice! You fat-fingered the order\n";
                    cout << "Accidentally market sold instead of buying\n";
                    cout << "Lost money on slippage and fees\n";
                }
                break;
                
            case 3:
                cout << "\nYou chose Meme Coins!\n";
                cout << "High risk, high reward - very volatile!\n";
                cout << "Current price simulation: $0.001\n";
                cout << "Warning: This is pure speculation!\n";
                cout << "--------------------------------------\n";
                cout << "Which meme coin strategy do you choose?\n";
                cout << "a) FOMO buy at ATH (Rookie mistake)\n";
                cout << "b) Buy the dip (Contrarian play)\n";
                cout << "c) Wait for influencer pump (Sheep mode)\n";
                cout << "d) Diamond hands everything (Delusional)\n";
                cout << "e) Jump between coins daily (Degen gambler)\n";
                cout << "Enter your choice (a-e): ";
                
                char memeChoice;
                cin >> memeChoice;
                
                if (memeChoice == 'a') {
                    cout << "\n--- FOMO BUY AT ATH RESULT ---\n";
                    cout << "Classic retail behavior detected\n";
                    cout << "You bought at $0.001 when everyone was euphoric\n";
                    cout << "Smart money already took profits and left\n";
                    cout << "Price immediately dumps to $0.0002\n";
                    cout << "DOWN 80% - You're now holding heavy bags\n";
                    cout << "Every pump gets sold into by whales\n";
                } else if (memeChoice == 'b') {
                    cout << "\n--- BUY THE DIP RESULT ---\n";
                    cout << "Contrarian play: bought at $0.0005 when everyone panicked\n";
                    cout << "TikTok influencer makes viral video about the coin\n";
                    cout << "FOMO buyers rush in, price explodes to $0.0032\n";
                    cout << "UP 540% - You timed the market perfectly\n";
                    cout << "Retail investors are now buying your bags\n";
                } else if (memeChoice == 'c') {
                    cout << "\n--- INFLUENCER PUMP RESULT ---\n";
                    cout << "Crypto Twitter influencer with 2M followers tweets\n";
                    cout << "His army of followers immediately start buying\n";
                    cout << "Price rockets from $0.001 to $0.0087 in 12 minutes\n";
                    cout << "UP 770% - Influence marketing worked perfectly\n";
                    cout << "You rode the wave of manufactured hype\n";
                    cout << "Now pray he doesn't dump on his followers\n";
                } else if (memeChoice == 'd') {
                    cout << "\n--- DIAMOND HANDS RESULT ---\n";
                    cout << "Diamond hands activated through all volatility\n";
                    cout << "Held through +500% pump, held through -80% dump\n";
                    cout << "Refused to sell during three separate moon missions\n";
                    cout << "Final outcome: Developer rugpulled everything\n";
                    cout << "Coin is now worthless, liquidity completely drained\n";
                    cout << "Your conviction was admirable but financially stupid\n";
                } else if (memeChoice == 'e') {
                    cout << "\n--- DEGEN ROTATION RESULT ---\n";
                    cout << "Day 1: Bought SafeMoon clone, got rugpulled\n";
                    cout << "Day 2: Bought Doge fork, honeypot contract\n";
                    cout << "Day 3: Bought Shiba copy, exit scam\n";
                    cout << "Day 4: Bought Pepe variant, dev dumped\n";
                    cout << "Day 5: Bought Floki ripoff, rug pulled again\n";
                    cout << "Portfolio value: $3.47 from original $1000\n";
                    cout << "You got rekt by every scam in existence\n";
                } else {
                    cout << "\nInvalid choice! You hesitated too long\n";
                    cout << "While you were thinking, the pump already happened\n";
                    cout << "Classic analysis paralysis cost you profits\n";
                }
                break;
                
            case 4:
                cout << "\nThanks for playing! See you next time!\n";
                break;
                
            default:
                cout << "\nInvalid choice! Game ended.\n";
        }
    } else {
        cout << "\nPlease type 'start' to begin the game!\n";
    }
    
    cout << "\nkeep learning!\n";
    return 0;
}