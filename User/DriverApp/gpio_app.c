#include "gpio_app.h"

/*
J13
J12
J14
*/

void USBCT(uint8_t num, uint8_t en)
{
	switch(num)
	{
	//second board J12
		case 11:
			if(en)
			{
				HUB_Enable(2);
				USB_Disable_1_5();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(2,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(2,1);//先上电
				bsp_mDelay(100);
				USB_Enable_1_5(1);//后上信号
			}
			else
			{
				USB_Disable_1_5();
				bsp_mDelay(100);
				USB_5V_CT(2,0);
			}
			break;
		case 12:
			if(en)
			{
				HUB_Enable(2);
				USB_Disable_1_5();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(2,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(2,1);//先上电
				bsp_mDelay(100);
				USB_Enable_1_5(2);
			}
			else
			{
				USB_Disable_1_5();
				bsp_mDelay(100);
				USB_5V_CT(2,0);
			}
			break;
		case 13:
			if(en)
			{
				HUB_Enable(2);
				USB_Disable_1_5();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(2,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(2,1);//先上电
				bsp_mDelay(100);
				USB_Enable_1_5(3);
			}
			else
			{
				USB_Disable_1_5();
				bsp_mDelay(100);
				USB_5V_CT(2,0);
			}
			break;
		case 14:
			if(en)
			{
				HUB_Enable(2);
				USB_Disable_1_5();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(2,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(2,1);//先上电
				bsp_mDelay(100);
				USB_Enable_1_5(4);
			}
			else
			{
				USB_Disable_1_5();
				bsp_mDelay(100);
				USB_5V_CT(2,0);
			}
			break;
		case 15:
			if(en)
			{
				HUB_Enable(2);
				USB_Disable_1_5();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(2,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(2,1);//先上电
				bsp_mDelay(100);
				USB_Enable_1_5(5);
			}
			else
			{
				USB_Disable_1_5();
				bsp_mDelay(100);
				USB_5V_CT(2,0);
			}
			break;
		case 16:
			if(en)
			{
				HUB_Enable(2);
				USB_Disable_6_10();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(3,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(3,1);//先上电
				bsp_mDelay(100);
				USB_Enable_6_10(6);
			}
			else
			{
				USB_Disable_6_10();
				bsp_mDelay(100);
				USB_5V_CT(3,0);
			}
			break;
		case 17:
			if(en)
			{
				HUB_Enable(2);
				USB_Disable_6_10();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(3,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(3,1);//先上电
				bsp_mDelay(100);
				USB_Enable_6_10(7);
			}
			else
			{
				USB_Disable_6_10();
				bsp_mDelay(100);
				USB_5V_CT(3,0);
			}
			break;
		case 18:
			if(en)
			{
				HUB_Enable(2);
				USB_Disable_6_10();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(3,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(3,1);//先上电
				bsp_mDelay(100);
				USB_Enable_6_10(8);
			}
			else
			{
				USB_Disable_6_10();
				bsp_mDelay(100);
				USB_5V_CT(3,0);
			}
			break;
		case 19:
			if(en)
			{
				HUB_Enable(2);
				USB_Disable_6_10();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(3,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(3,1);//先上电
				bsp_mDelay(100);
				USB_Enable_6_10(9);
			}
			else
			{
				USB_Disable_6_10();
				bsp_mDelay(100);
				USB_5V_CT(3,0);
			}
			break;
		case 20:
			if(en)
			{
				HUB_Enable(2);
				USB_Disable_6_10();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(3,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(3,1);//先上电
				bsp_mDelay(100);
				USB_Enable_6_10(10);
			}
			else
			{
				USB_Disable_6_10();
				bsp_mDelay(100);
				USB_5V_CT(3,0);
			}
			break;
		//first board J13
		case 1:
			if(en)
			{
				HUB_Enable(1);
				USB_Disable_21_25();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(0,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(0,1);//先上电
				bsp_mDelay(100);
				USB_Enable_21_25(21);
			}
			else
			{
				USB_Disable_21_25();
				bsp_mDelay(100);
				USB_5V_CT(0,0);
			}
			break;
		case 2:
			if(en)
			{
				HUB_Enable(1);
				USB_Disable_21_25();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(0,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(0,1);//先上电
				bsp_mDelay(100);
				USB_Enable_21_25(22);
			}
			else
			{
				USB_Disable_21_25();
				bsp_mDelay(100);
				USB_5V_CT(0,0);
			}
			break;
		case 3:
			if(en)
			{
				HUB_Enable(1);
				USB_Disable_21_25();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(0,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(0,1);//先上电
				bsp_mDelay(100);
				USB_Enable_21_25(23);
			}
			else
			{
				USB_Disable_21_25();
				bsp_mDelay(100);
				USB_5V_CT(0,0);
			}
			break;
		case 4:
			if(en)
			{
				HUB_Enable(1);
				USB_Disable_21_25();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(0,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(0,1);//先上电
				bsp_mDelay(100);
				USB_Enable_21_25(24);
			}
			else
			{
				USB_Disable_21_25();
				bsp_mDelay(100);
				USB_5V_CT(0,0);
			}
			break;
		case 5:
			if(en)
			{
				HUB_Enable(1);
				USB_Disable_21_25();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(0,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(0,1);//先上电
				bsp_mDelay(100);
				USB_Enable_21_25(25);
			}
			else
			{
				USB_Disable_21_25();
				bsp_mDelay(100);
				USB_5V_CT(0,0);
			}
			break;
		case 6:
			if(en)
			{
				HUB_Enable(1);
				USB_Disable_26_30();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(1,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(1,1);//先上电
				bsp_mDelay(100);
				USB_Enable_26_30(26);
			}
			else
			{
				USB_Disable_26_30();
				bsp_mDelay(100);
				USB_5V_CT(1,0);
			}
			break;
		case 7:
			if(en)
			{
				HUB_Enable(1);
				USB_Disable_26_30();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(1,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(1,1);//先上电
				bsp_mDelay(100);
				USB_Enable_26_30(27);
			}
			else
			{
				USB_Disable_26_30();
				bsp_mDelay(100);
				USB_5V_CT(1,0);
			}
			break;
		case 8:
			if(en)
			{
				HUB_Enable(1);
				USB_Disable_26_30();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(1,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(1,1);//先上电
				bsp_mDelay(100);
				USB_Enable_26_30(28);
			}
			else
			{
				USB_Disable_26_30();
				bsp_mDelay(100);
				USB_5V_CT(1,0);
			}
			break;
		case 9:
			if(en)
			{
				HUB_Enable(1);
				USB_Disable_26_30();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(1,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(1,1);//先上电
				bsp_mDelay(100);
				USB_Enable_26_30(29);
			}
			else
			{
				USB_Disable_26_30();
				bsp_mDelay(100);
				USB_5V_CT(1,0);
			}
			break;
		case 10:
			if(en)
			{
				HUB_Enable(1);
				USB_Disable_26_30();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(1,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(1,1);//先上电
				bsp_mDelay(100);
				USB_Enable_26_30(30);
			}
			else
			{
				USB_Disable_26_30();
				bsp_mDelay(100);
				USB_5V_CT(1,0);
			}
			break;
		//third board J14
		case 21:
			if(en)
			{
				HUB_Enable(3);
				USB_Disable_11_15();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(4,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(4,1);//先上电
				bsp_mDelay(100);
				USB_Enable_11_15(11);
			}
			else
			{
				USB_Disable_11_15();
				bsp_mDelay(100);
				USB_5V_CT(4,0);
			}
			break;
		case 22:
			if(en)
			{
				HUB_Enable(3);
				USB_Disable_11_15();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(4,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(4,1);//先上电
				bsp_mDelay(100);
				USB_Enable_11_15(12);
			}
			else
			{
				USB_Disable_11_15();
				bsp_mDelay(100);
				USB_5V_CT(4,0);
			}
			break;
		case 23:
			if(en)
			{
				HUB_Enable(3);
				USB_Disable_11_15();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(4,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(4,1);//先上电
				bsp_mDelay(100);
				USB_Enable_11_15(13);
			}
			else
			{
				USB_Disable_11_15();
				bsp_mDelay(100);
				USB_5V_CT(4,0);
			}
			break;
		case 24:
			if(en)
			{
				HUB_Enable(3);
				USB_Disable_11_15();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(4,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(4,1);//先上电
				bsp_mDelay(100);
				USB_Enable_11_15(14);
			}
			else
			{
				USB_Disable_11_15();
				bsp_mDelay(100);
				USB_5V_CT(4,0);
			}
			break;
		case 25:
			if(en)
			{
				HUB_Enable(3);
				USB_Disable_11_15();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(4,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(4,1);//先上电
				bsp_mDelay(100);
				USB_Enable_11_15(15);
			}
			else
			{
				USB_Disable_11_15();
				bsp_mDelay(100);
				USB_5V_CT(4,0);
			}
			break;
		case 26:
			if(en)
			{
				HUB_Enable(3);
				USB_Disable_16_20();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(5,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(5,1);//先上电
				bsp_mDelay(100);
				USB_Enable_16_20(16);
			}
			else
			{
				USB_Disable_16_20();
				bsp_mDelay(100);
				USB_5V_CT(5,0);
			}
			break;
		case 27:
			if(en)
			{
				HUB_Enable(3);
				USB_Disable_16_20();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(5,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(5,1);//先上电
				bsp_mDelay(100);
				USB_Enable_16_20(17);
			}
			else
			{
				USB_Disable_16_20();
				bsp_mDelay(100);
				USB_5V_CT(5,0);
			}
			break;
		case 28:
			if(en)
			{
				HUB_Enable(3);
				USB_Disable_16_20();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(5,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(5,1);//先上电
				bsp_mDelay(100);
				USB_Enable_16_20(18);
			}
			else
			{
				USB_Disable_16_20();
				bsp_mDelay(100);
				USB_5V_CT(5,0);
			}
			break;
		case 29:
			if(en)
			{
				HUB_Enable(3);
				USB_Disable_16_20();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(5,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(5,1);//先上电
				bsp_mDelay(100);
				USB_Enable_16_20(19);
			}
			else
			{
				USB_Disable_16_20();
				bsp_mDelay(100);
				USB_5V_CT(5,0);
			}
			break;
		case 30:
			if(en)
			{
				HUB_Enable(3);
				USB_Disable_16_20();//断开同组信号
				bsp_mDelay(50);
				USB_5V_CT(5,0);//断开同组电源
				bsp_mDelay(100);
				USB_5V_CT(5,1);//先上电
				bsp_mDelay(100);
				USB_Enable_16_20(20);
			}
			else
			{
				USB_Disable_16_20();
				bsp_mDelay(100);
				USB_5V_CT(5,0);
			}
			break;
		default:
			break;
	}
}

//调试时考虑加入关闭其他2路sd
void SD_CT(uint8_t num, uint8_t en)
{
	switch(num)
	{
		case 1:
			HUB_Enable(1);
			SD3_Switch(en);
			break;
		case 2:
			HUB_Enable(1);
			SD1_Switch(en);
			break;
		case 3:
			HUB_Enable(1);
			SD2_Switch(en);
			break;
		default:
			break;
	}
}

//调试时考虑加入关闭其他2路aux
//调试时考虑加入lamp
