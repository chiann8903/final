#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<string.h>
#define Acct_Data 50

void Accounting(int *, int*, struct Acct[]);
void Feeding(int*, int*);
void Personality();
void Divination();
void Personality()
{
	printf("==================\n");
	printf("=    個性測驗    =\n");
	printf("==================\n");
	int a = 0;
	int s;
	printf("1.你何時感覺最好?\n(1)早晨 (2)下午或傍晚 (3)夜晚    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 2;
		break;
	case 2:
		a = a + 4;
		break;
	case 3:
		a = a + 6;
		break;
	}
	printf("2.你走路時是......\n(1)大步的快走 (2)小步的快走 (3)不快，仰著頭面對世界 (4)不快，低著頭 (5)很慢    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 6;
		break;
	case 2:
		a = a + 4;
		break;
	case 3:
		a = a + 7;
		break;
	case 4:
		a = a + 2;
		break;
	case 5:
		a = a + 1;
		break;
	}
	printf("3.和人說話時，你......\n(1)手臂交叉的站著 (2)雙手緊握著 (3)一隻手或兩手放在臀部 (4)碰著或推著與你說話的人 (5)玩著你的耳朵、摸著你的下巴或用手整理頭髮    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 4;
		break;
	case 2:
		a = a + 2;
		break;
	case 3:
		a = a + 5;
		break;
	case 4:
		a = a + 7;
		break;
	case 5:
		a = a + 6;
		break;
	}
	printf("4.坐著休息時，你的......\n(1)兩膝蓋攏 (2)兩腿交叉 (3)兩腿伸直 (4)一腿捲在身下    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 4;
		break;
	case 2:
		a = a + 6;
		break;
	case 3:
		a = a + 2;
		break;
	case 4:
		a = a + 1;
		break;
	}
	printf("5.碰到你感到發笑的事時，你的反應是......\n(1)一個欣賞的大笑 (2)笑著，但不大聲 (3)輕聲的咯咯笑 (4)羞怯的微笑    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 6;
		break;
	case 2:
		a = a + 4;
		break;
	case 3:
		a = a + 3;
		break;
	case 4:
		a = a + 5;
		break;
	}
	printf("6.當你去一個派對或社交場合時，你......\n(1)很大聲地入場以引起注意 (2)安靜地入場，找你認識的人 (3)非常安靜地入場，儘量保持不被注意    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 6;
		break;
	case 2:
		a = a + 4;
		break;
	case 3:
		a = a + 2;
		break;
	}
	printf("7.當你非常專心工作時，有人打斷你，你會......\n(1)歡迎他 (2)感到非常憤怒 (3)在上兩極端之間    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 6;
		break;
	case 2:
		a = a + 2;
		break;
	case 3:
		a = a + 4;
		break;
	}
	printf("8.下列顏色中，你最喜歡哪一顏色......\n(1)紅或橘色 (2)黑色 (3)黃或淺藍色 (4)綠色 (5)深藍或紫色 (6)白色 (7)棕或灰色    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 6;
		break;
	case 2:
		a = a + 7;
		break;
	case 3:
		a = a + 5;
		break;
	case 4:
		a = a + 4;
		break;
	case 5:
		a = a + 3;
		break;
	case 6:
		a = a + 2;
		break;
	case 7:
		a = a + 1;
		break;
	}
	printf("9.臨入睡的前幾分鐘，你的床上姿勢是......\n(1)仰躺，伸直 (2)，俯躺，伸直 (3)側躺，微捲 (4)頭睡在一手臂上 (5)被蓋過頭    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 7;
		break;
	case 2:
		a = a + 6;
		break;
	case 3:
		a = a + 4;
		break;
	case 4:
		a = a + 2;
		break;
	case 5:
		a = a + 1;
		break;
	}
	printf("10.你經常夢到你在......\n(1)落下 (2)打架或掙扎 (3)找東西或人 (4)飛或漂浮 (5)你平常不作夢 (6)你的夢都是愉快的    ");
	scanf_s("%d", &s);
	switch (s) {
	case 1:
		a = a + 4;
		break;
	case 2:
		a = a + 2;
		break;
	case 3:
		a = a + 3;
		break;
	case 4:
		a = a + 5;
		break;
	case 5:
		a = a + 6;
		break;
	case 6:
		a = a + 1;
		break;
	}
	if (a < 21) {
		printf("【你是內向的悲觀者】\n");
		printf("人們認為你是一個害羞的、神經質的、優柔寡斷的、是需要人照顧的、永遠要別人替你做決定、\n不想遇任何事或任何人有關。他們認為你是一個杞人憂天者，一個永遠看到不存在的問題的人。\n有些人認為你令人乏味，只有那些深知你的人知道你不是這樣的人。\n");
	}
	else if (a >= 21 && a < 31) {
		printf("【缺乏信心的挑剔者】\n");
		printf("你的朋友認為你勤勉刻苦、很挑剔。他們認為你是一個謹慎的、十分小心的人，一個緩慢而\n穩定新潛工作的人。如果你做任何衝動的事或無準備的事，你會令他們大吃一驚。他們認為你會\n從各個角度仔細地檢查一切之後，仍經常決定不做。他們認為對你的這種反應一部分是因為你的\n小心的天性所引起的。\n");
	}
	else if (a >= 31 && a < 41) {
		printf("【以牙還牙的自我保護者】\n");
		printf("別人認為你是一個明智、謹慎、注重時效的人，也認為你是一個伶俐、有天賦有才幹且謙虛\n的人。你不會很快、很容易和人成為朋友，卻是一個對朋友非常忠誠的人，同時要求朋友對你也\n有忠誠的回報。那些真正有機會了解你的人會知道要動搖你對朋友的信念是很難的，但對等的，\n依但這信任被破壞，會使你很難熬過。\n");
	}
	else if (a >= 41 && a < 51) {
		printf("【平衡的中道】\n");
		printf("別人認為你是一個新鮮的、有活力的、有魅力的、好玩的、講究實際的、而永遠有趣的人;\n個經常是群眾注意力的焦點，但你是一個足夠平行的人，不至於因此而昏了頭。他們也認為你\n親切、和藹、體貼、能諒解人;一個永遠會使人高興起來且會幫助別人的人。\n");
	}
	else if (a >= 51 && a < 61) {
		printf("【吸引人的冒險家】\n");
		printf("別人認為你是一個令人興奮的、高度活潑的、相當易衝動的個性;你是一個天生的領袖、一\n個做決定會很快的人，雖然你的決定不總是對的。他們認為你是大膽地和冒險的，會願意試做任何\n事至少一次;是一個願意嘗試機會而欣賞冒險的人。因為妳散發的刺激，他們喜歡跟你在一\n起。\n");
	}
	else {
		printf("【傲慢的孤獨者】");
		printf("別人認為對你必須「小心處理」。在別人眼中，你是自負的、自我中心的、是個極端有支\n配慾的、統治慾的。別人可能欽佩妳，希望能多向你一點，但不會永遠相信你，會對與你更深入的\n來往有所躊躇及猶豫。\n");
	}
	printf("\n");
}