#include <vector>
#include "stdint.h"
//#include "CommandResponseBase.h"

/**
 * XBee device address
 * reference: https://developer.mbed.org/users/yangcq88517/code/SmartLabXBeeAPI/file/e863071f1c9e/Type/DeviceAddress.h
 * @file DeviceAddress.h
 * @brief 64byte XBee address
 * @author Soichi
 * @date 2015-03-15 08:06:39 Sunday
 */
class DeviceAddress
{
protected : 
    std::vector<uint8_t> value;
 
public :
    /**
     * @fn
     * ここに関数の説明を書く
     * @breaf 要約説明
     * @param (引数名) 引数の説明
     * @param (引数名) 引数の説明
     * @return 戻り値の説明
     * @sa 参照すべき関数を書けばリンクが貼れる
     * @detail 詳細な説明
     */
    DeviceAddress();
 
    DeviceAddress(const uint8_t* msb_lsb_net);
    
    DeviceAddress(const uint8_t* msb_lsb, const uint8_t* net);
    
    DeviceAddress(uint32_t msb,uint32_t lsb, uint16_t net);
 
    uint32_t GetMSB() const;
 
    uint32_t GetLSB() const;
 
    uint16_t GetNET() const;
    
    const uint8_t* GetValue() const;
    
    //static DeviceAddress Parse(const CommandResponseBase *response);
    
    friend bool operator ==(const DeviceAddress &a,const DeviceAddress &b);
    
    friend bool operator !=(const DeviceAddress &a,const DeviceAddress &b);
};
