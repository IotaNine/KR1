#include <iostream>
#include <string>
#include <cmath>

int main() {
    int Letters;
    float L;
    Letters = 0;
    L = 0;
    std::string Text("DHJOHG WJ XRE OCYWXCP CMQ DHJX RECSWPV YHYAPCXEQ OWXV WM\n"
        "ZAJJWC, CJ GEPP CJ FEWMN XRE PCZNEJX OWXV HM XRE EAZHYECM\n"
        "OHMXWMEMX. WX WJ CM WOHMWO CMQ NPHFCP OWXV CMQ WJ XRE LEV\n"
        "YHPWXWOCP, EOHMHDWO, OAPXAZCP CMQ JOWEMXWKWO OEMXZE HK MHX\n"
        "HMPV ZAJJWC FAX HK ECJXEZM EAZHYE CJ GEPP. WX WJ C OWXV ZEMHGMEQ\n"
        "KHZ XRE ZEQ JTACZE, XRE LZEDPWM CMQ JX. FCJWP’J OCXREQZCP CMQ\n"
        "KAZXREZDHZE, JRHAPQ FE HM VHAZ XZCSEP FAOLEX PWJX. JH, VHA GCMX XH\n"
        "NH XH XRWJ DVJXEZWHAJ FAX EMXWOWMN OWXV? REZE CZE 13\n"
        "KCJOWMCXWMN KCOXJ CFHAX DHJOHG. 1. DHJOHG OPCWDJ XRE PCZNEJX\n"
        "MADFEZ HK FWPPWHMCWZEJ WM XRE GHZPQ. YEZ KHZFEJ, XREZE CZE 84\n"
        "FWPPWHMCWZEJ WM XRE OWXV. 2. XRE KWZJX DOQHMCPQ’J HYEMEQ WM\n"
        "YAJRLWM JTACZE HM ICMACZV 31, 1990. XRE PWME XH XRE ZEJXCAZCMX ZCM\n"
        "KHZ JESEZCP LWPHDEXZEJ. 3. XZCD MADFEZ 3 WJ XRE HPQEJX ZHAXE WM\n"
        "DHJOHG CMQ OHDDEMOEQ HM CYZWP 6, 1899. 4. XRE DHJOHG LZEDPWM WJ XRE\n"
        "GHZPQ’J PCZNEJX DEQWESCP KHZXZEJJ. 5. DHJOHG WJ MCDEQ CKXEZ C ZWSEZ.\n"
        "6. XRE KPCN HK EMNPCMQ CMQ DHJOHG RCSE XRE JCDE KWNAZE HK JX. NEHZNE\n"
        "WM CZDHAZ CMQ ZWQWMN C RHZJE FCOL GRWPE JPCVWMN C QZCNHM GWXR\n"
        "RWJ PCMOE. 7. CZFCX JXZEEX WJ 520 VECZJ DCLWMN WX HME HK XRE HPQEJX\n"
        "JXZEEXJ WM DHJOHG. 8. XRE DWPPWHMXR OWXWUEM HK DHJOHG GCJ FHZM\n"
        "WM 1897. 9. HSEZ 6 DWPPWHM YCJJEMNEZJ AJE XRE DHJOHG DEXZH QCWPV\n"
        "DCLWMN WX XRE XRWZQ FAJWEJX DEXZH WM XRE GHZPQ. 10. DHJOHG JXCXE\n"
        "AMWSEZJWXV WJ XRE GHZPQ’J PCZNEJX AMWSEZJWXV FAWPQWMN. 11. DHJOHG\n"
        "WJ ZENAPCZPV MCDEQ HME HK XRE DHJX EBYEMJWSE OWXWEJ WM XRE GHZPQ.\n"
        "12. XZCWMJ WM DHJOHG DEXZH ZAM DHZE ZENAPCZPV XRCM WM CMV HXREZ\n"
        "DEXZH WM XRE GHZPQ. CX YECL XWDEJ XRE WMXEZSCP FEXGEEM XZCWMJ WJ\n"
        "IAJX 1.5 DWMAXEJ. 13. DHJOHG’J ZAJJWCM JXCXE PWFZCZV GCJ KHAMQEQ WM\n"
        "1862, WJ XRE FWNNEJX WM EAZHYE CMQ JEOHMQ FWNNEJX WM XRE GHZPQ\n"
        "CKXEZ PWFZCZV HK OHMNZEJJ WM AJC.");
    for (int i = 0; i < Text.length(); i++) {
        if (Text[i] > 64 && Text[i] < 91) {
            Letters++;
        }
    }
    std::cout << "Kol-vo bykv: " << Letters << std::endl;
    for (int m = 0; m < 26; m++) {
        for (int i = 0; i < Text.length(); i++) {
            if (Text[i] == static_cast<char>(65 + m)) {
                L++;
            }
        }
        std::cout << "  Chastota: " << ((100 * L) / Letters) << "   ";
        std::cout << static_cast<char>(65 + m) << "==" << L << std::endl;
        L = 0;
    }
    for (int i = 0; i < Text.length(); i++) {
        switch (Text[i]) {
            case static_cast<char>(65) :
                Text[i] = 'U';
                break;
            case static_cast<char>(66) :
                Text[i] = 'X';
                break;
            case static_cast<char>(67) :
                Text[i] = 'A';
                break;
            case static_cast<char>(68) :
                Text[i] = 'M';
                break;
            case static_cast<char>(69) :
                Text[i] = 'E';
                break;
            case static_cast<char>(70) :
                Text[i] = 'B';
                break;
            case static_cast<char>(71) :
                Text[i] = 'W';
                break;
            case static_cast<char>(72) :
                Text[i] = 'O';
                break;
            case static_cast<char>(73) :
                Text[i] = 'J';
                break;
            case static_cast<char>(74) :
                Text[i] = 'S';
                break;
            case static_cast<char>(75) :
                Text[i] = 'F';
                break;
            case static_cast<char>(76) :
                Text[i] = 'K';
                break;
            case static_cast<char>(77) :
                Text[i] = 'N';
                break;
            case static_cast<char>(78) :
                Text[i] = 'G';
                break;
            case static_cast<char>(79) :
                Text[i] = 'C';
                break;
            case static_cast<char>(80) :
                Text[i] = 'L';
                break;
            case static_cast<char>(81) :
                Text[i] = 'D';
                break;
            case static_cast<char>(82) :
                Text[i] = 'H';
                break;
            case static_cast<char>(83) :
                Text[i] = 'V';
                break;
            case static_cast<char>(84) :
                Text[i] = 'Q';
                break;
            case static_cast<char>(85) :
                Text[i] = 'Z';
                break;
            case static_cast<char>(86) :
                Text[i] = 'Y';
                break;
            case static_cast<char>(87) :
                Text[i] = 'I';
                break;
            case static_cast<char>(88) :
                Text[i] = 'T';
                break;
            case static_cast<char>(89) :
                Text[i] = 'P';
                break;
            case static_cast<char>(90) :
                Text[i] = 'R';
                break;
        }
    }
    std::cout << Text;
}