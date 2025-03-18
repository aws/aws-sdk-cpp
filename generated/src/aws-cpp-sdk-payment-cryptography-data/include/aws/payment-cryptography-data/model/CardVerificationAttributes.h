/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/AmexCardSecurityCodeVersion1.h>
#include <aws/payment-cryptography-data/model/AmexCardSecurityCodeVersion2.h>
#include <aws/payment-cryptography-data/model/CardVerificationValue1.h>
#include <aws/payment-cryptography-data/model/CardVerificationValue2.h>
#include <aws/payment-cryptography-data/model/CardHolderVerificationValue.h>
#include <aws/payment-cryptography-data/model/DynamicCardVerificationCode.h>
#include <aws/payment-cryptography-data/model/DynamicCardVerificationValue.h>
#include <aws/payment-cryptography-data/model/DiscoverDynamicCardVerificationCode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PaymentCryptographyData
{
namespace Model
{

  /**
   * <p>Card data parameters that are requried to verify Card Verification Values
   * (CVV/CVV2), Dynamic Card Verification Values (dCVV/dCVV2), or Card Security
   * Codes (CSC).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/CardVerificationAttributes">AWS
   * API Reference</a></p>
   */
  class CardVerificationAttributes
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CardVerificationAttributes() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CardVerificationAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CardVerificationAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const AmexCardSecurityCodeVersion1& GetAmexCardSecurityCodeVersion1() const { return m_amexCardSecurityCodeVersion1; }
    inline bool AmexCardSecurityCodeVersion1HasBeenSet() const { return m_amexCardSecurityCodeVersion1HasBeenSet; }
    template<typename AmexCardSecurityCodeVersion1T = AmexCardSecurityCodeVersion1>
    void SetAmexCardSecurityCodeVersion1(AmexCardSecurityCodeVersion1T&& value) { m_amexCardSecurityCodeVersion1HasBeenSet = true; m_amexCardSecurityCodeVersion1 = std::forward<AmexCardSecurityCodeVersion1T>(value); }
    template<typename AmexCardSecurityCodeVersion1T = AmexCardSecurityCodeVersion1>
    CardVerificationAttributes& WithAmexCardSecurityCodeVersion1(AmexCardSecurityCodeVersion1T&& value) { SetAmexCardSecurityCodeVersion1(std::forward<AmexCardSecurityCodeVersion1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Card data parameters that are required to verify a Card Security Code (CSC2)
     * for an AMEX payment card.</p>
     */
    inline const AmexCardSecurityCodeVersion2& GetAmexCardSecurityCodeVersion2() const { return m_amexCardSecurityCodeVersion2; }
    inline bool AmexCardSecurityCodeVersion2HasBeenSet() const { return m_amexCardSecurityCodeVersion2HasBeenSet; }
    template<typename AmexCardSecurityCodeVersion2T = AmexCardSecurityCodeVersion2>
    void SetAmexCardSecurityCodeVersion2(AmexCardSecurityCodeVersion2T&& value) { m_amexCardSecurityCodeVersion2HasBeenSet = true; m_amexCardSecurityCodeVersion2 = std::forward<AmexCardSecurityCodeVersion2T>(value); }
    template<typename AmexCardSecurityCodeVersion2T = AmexCardSecurityCodeVersion2>
    CardVerificationAttributes& WithAmexCardSecurityCodeVersion2(AmexCardSecurityCodeVersion2T&& value) { SetAmexCardSecurityCodeVersion2(std::forward<AmexCardSecurityCodeVersion2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Card data parameters that are required to verify Card Verification Value
     * (CVV) for the payment card.</p>
     */
    inline const CardVerificationValue1& GetCardVerificationValue1() const { return m_cardVerificationValue1; }
    inline bool CardVerificationValue1HasBeenSet() const { return m_cardVerificationValue1HasBeenSet; }
    template<typename CardVerificationValue1T = CardVerificationValue1>
    void SetCardVerificationValue1(CardVerificationValue1T&& value) { m_cardVerificationValue1HasBeenSet = true; m_cardVerificationValue1 = std::forward<CardVerificationValue1T>(value); }
    template<typename CardVerificationValue1T = CardVerificationValue1>
    CardVerificationAttributes& WithCardVerificationValue1(CardVerificationValue1T&& value) { SetCardVerificationValue1(std::forward<CardVerificationValue1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Card data parameters that are required to verify Card Verification Value
     * (CVV2) for the payment card.</p>
     */
    inline const CardVerificationValue2& GetCardVerificationValue2() const { return m_cardVerificationValue2; }
    inline bool CardVerificationValue2HasBeenSet() const { return m_cardVerificationValue2HasBeenSet; }
    template<typename CardVerificationValue2T = CardVerificationValue2>
    void SetCardVerificationValue2(CardVerificationValue2T&& value) { m_cardVerificationValue2HasBeenSet = true; m_cardVerificationValue2 = std::forward<CardVerificationValue2T>(value); }
    template<typename CardVerificationValue2T = CardVerificationValue2>
    CardVerificationAttributes& WithCardVerificationValue2(CardVerificationValue2T&& value) { SetCardVerificationValue2(std::forward<CardVerificationValue2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Card data parameters that are required to verify a cardholder verification
     * value for the payment card.</p>
     */
    inline const CardHolderVerificationValue& GetCardHolderVerificationValue() const { return m_cardHolderVerificationValue; }
    inline bool CardHolderVerificationValueHasBeenSet() const { return m_cardHolderVerificationValueHasBeenSet; }
    template<typename CardHolderVerificationValueT = CardHolderVerificationValue>
    void SetCardHolderVerificationValue(CardHolderVerificationValueT&& value) { m_cardHolderVerificationValueHasBeenSet = true; m_cardHolderVerificationValue = std::forward<CardHolderVerificationValueT>(value); }
    template<typename CardHolderVerificationValueT = CardHolderVerificationValue>
    CardVerificationAttributes& WithCardHolderVerificationValue(CardHolderVerificationValueT&& value) { SetCardHolderVerificationValue(std::forward<CardHolderVerificationValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Card data parameters that are required to verify CDynamic Card Verification
     * Code (dCVC) for the payment card.</p>
     */
    inline const DynamicCardVerificationCode& GetDynamicCardVerificationCode() const { return m_dynamicCardVerificationCode; }
    inline bool DynamicCardVerificationCodeHasBeenSet() const { return m_dynamicCardVerificationCodeHasBeenSet; }
    template<typename DynamicCardVerificationCodeT = DynamicCardVerificationCode>
    void SetDynamicCardVerificationCode(DynamicCardVerificationCodeT&& value) { m_dynamicCardVerificationCodeHasBeenSet = true; m_dynamicCardVerificationCode = std::forward<DynamicCardVerificationCodeT>(value); }
    template<typename DynamicCardVerificationCodeT = DynamicCardVerificationCode>
    CardVerificationAttributes& WithDynamicCardVerificationCode(DynamicCardVerificationCodeT&& value) { SetDynamicCardVerificationCode(std::forward<DynamicCardVerificationCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Card data parameters that are required to verify CDynamic Card Verification
     * Value (dCVV) for the payment card.</p>
     */
    inline const DynamicCardVerificationValue& GetDynamicCardVerificationValue() const { return m_dynamicCardVerificationValue; }
    inline bool DynamicCardVerificationValueHasBeenSet() const { return m_dynamicCardVerificationValueHasBeenSet; }
    template<typename DynamicCardVerificationValueT = DynamicCardVerificationValue>
    void SetDynamicCardVerificationValue(DynamicCardVerificationValueT&& value) { m_dynamicCardVerificationValueHasBeenSet = true; m_dynamicCardVerificationValue = std::forward<DynamicCardVerificationValueT>(value); }
    template<typename DynamicCardVerificationValueT = DynamicCardVerificationValue>
    CardVerificationAttributes& WithDynamicCardVerificationValue(DynamicCardVerificationValueT&& value) { SetDynamicCardVerificationValue(std::forward<DynamicCardVerificationValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Card data parameters that are required to verify CDynamic Card Verification
     * Code (dCVC) for the payment card.</p>
     */
    inline const DiscoverDynamicCardVerificationCode& GetDiscoverDynamicCardVerificationCode() const { return m_discoverDynamicCardVerificationCode; }
    inline bool DiscoverDynamicCardVerificationCodeHasBeenSet() const { return m_discoverDynamicCardVerificationCodeHasBeenSet; }
    template<typename DiscoverDynamicCardVerificationCodeT = DiscoverDynamicCardVerificationCode>
    void SetDiscoverDynamicCardVerificationCode(DiscoverDynamicCardVerificationCodeT&& value) { m_discoverDynamicCardVerificationCodeHasBeenSet = true; m_discoverDynamicCardVerificationCode = std::forward<DiscoverDynamicCardVerificationCodeT>(value); }
    template<typename DiscoverDynamicCardVerificationCodeT = DiscoverDynamicCardVerificationCode>
    CardVerificationAttributes& WithDiscoverDynamicCardVerificationCode(DiscoverDynamicCardVerificationCodeT&& value) { SetDiscoverDynamicCardVerificationCode(std::forward<DiscoverDynamicCardVerificationCodeT>(value)); return *this;}
    ///@}
  private:

    AmexCardSecurityCodeVersion1 m_amexCardSecurityCodeVersion1;
    bool m_amexCardSecurityCodeVersion1HasBeenSet = false;

    AmexCardSecurityCodeVersion2 m_amexCardSecurityCodeVersion2;
    bool m_amexCardSecurityCodeVersion2HasBeenSet = false;

    CardVerificationValue1 m_cardVerificationValue1;
    bool m_cardVerificationValue1HasBeenSet = false;

    CardVerificationValue2 m_cardVerificationValue2;
    bool m_cardVerificationValue2HasBeenSet = false;

    CardHolderVerificationValue m_cardHolderVerificationValue;
    bool m_cardHolderVerificationValueHasBeenSet = false;

    DynamicCardVerificationCode m_dynamicCardVerificationCode;
    bool m_dynamicCardVerificationCodeHasBeenSet = false;

    DynamicCardVerificationValue m_dynamicCardVerificationValue;
    bool m_dynamicCardVerificationValueHasBeenSet = false;

    DiscoverDynamicCardVerificationCode m_discoverDynamicCardVerificationCode;
    bool m_discoverDynamicCardVerificationCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
