/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/AmexCardSecurityCodeVersion1.h>
#include <aws/payment-cryptography-data/model/AmexCardSecurityCodeVersion2.h>
#include <aws/payment-cryptography-data/model/CardHolderVerificationValue.h>
#include <aws/payment-cryptography-data/model/CardVerificationValue1.h>
#include <aws/payment-cryptography-data/model/CardVerificationValue2.h>
#include <aws/payment-cryptography-data/model/DynamicCardVerificationCode.h>
#include <aws/payment-cryptography-data/model/DynamicCardVerificationValue.h>
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
   * <p>Card data parameters that are required to generate Card Verification Values
   * (CVV/CVV2), Dynamic Card Verification Values (dCVV/dCVV2), or Card Security
   * Codes (CSC).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/CardGenerationAttributes">AWS
   * API Reference</a></p>
   */
  class CardGenerationAttributes
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CardGenerationAttributes();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CardGenerationAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CardGenerationAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AmexCardSecurityCodeVersion1& GetAmexCardSecurityCodeVersion1() const{ return m_amexCardSecurityCodeVersion1; }

    
    inline bool AmexCardSecurityCodeVersion1HasBeenSet() const { return m_amexCardSecurityCodeVersion1HasBeenSet; }

    
    inline void SetAmexCardSecurityCodeVersion1(const AmexCardSecurityCodeVersion1& value) { m_amexCardSecurityCodeVersion1HasBeenSet = true; m_amexCardSecurityCodeVersion1 = value; }

    
    inline void SetAmexCardSecurityCodeVersion1(AmexCardSecurityCodeVersion1&& value) { m_amexCardSecurityCodeVersion1HasBeenSet = true; m_amexCardSecurityCodeVersion1 = std::move(value); }

    
    inline CardGenerationAttributes& WithAmexCardSecurityCodeVersion1(const AmexCardSecurityCodeVersion1& value) { SetAmexCardSecurityCodeVersion1(value); return *this;}

    
    inline CardGenerationAttributes& WithAmexCardSecurityCodeVersion1(AmexCardSecurityCodeVersion1&& value) { SetAmexCardSecurityCodeVersion1(std::move(value)); return *this;}


    /**
     * <p>Card data parameters that are required to generate a Card Security Code
     * (CSC2) for an AMEX payment card.</p>
     */
    inline const AmexCardSecurityCodeVersion2& GetAmexCardSecurityCodeVersion2() const{ return m_amexCardSecurityCodeVersion2; }

    /**
     * <p>Card data parameters that are required to generate a Card Security Code
     * (CSC2) for an AMEX payment card.</p>
     */
    inline bool AmexCardSecurityCodeVersion2HasBeenSet() const { return m_amexCardSecurityCodeVersion2HasBeenSet; }

    /**
     * <p>Card data parameters that are required to generate a Card Security Code
     * (CSC2) for an AMEX payment card.</p>
     */
    inline void SetAmexCardSecurityCodeVersion2(const AmexCardSecurityCodeVersion2& value) { m_amexCardSecurityCodeVersion2HasBeenSet = true; m_amexCardSecurityCodeVersion2 = value; }

    /**
     * <p>Card data parameters that are required to generate a Card Security Code
     * (CSC2) for an AMEX payment card.</p>
     */
    inline void SetAmexCardSecurityCodeVersion2(AmexCardSecurityCodeVersion2&& value) { m_amexCardSecurityCodeVersion2HasBeenSet = true; m_amexCardSecurityCodeVersion2 = std::move(value); }

    /**
     * <p>Card data parameters that are required to generate a Card Security Code
     * (CSC2) for an AMEX payment card.</p>
     */
    inline CardGenerationAttributes& WithAmexCardSecurityCodeVersion2(const AmexCardSecurityCodeVersion2& value) { SetAmexCardSecurityCodeVersion2(value); return *this;}

    /**
     * <p>Card data parameters that are required to generate a Card Security Code
     * (CSC2) for an AMEX payment card.</p>
     */
    inline CardGenerationAttributes& WithAmexCardSecurityCodeVersion2(AmexCardSecurityCodeVersion2&& value) { SetAmexCardSecurityCodeVersion2(std::move(value)); return *this;}


    /**
     * <p>Card data parameters that are required to generate a cardholder verification
     * value for the payment card.</p>
     */
    inline const CardHolderVerificationValue& GetCardHolderVerificationValue() const{ return m_cardHolderVerificationValue; }

    /**
     * <p>Card data parameters that are required to generate a cardholder verification
     * value for the payment card.</p>
     */
    inline bool CardHolderVerificationValueHasBeenSet() const { return m_cardHolderVerificationValueHasBeenSet; }

    /**
     * <p>Card data parameters that are required to generate a cardholder verification
     * value for the payment card.</p>
     */
    inline void SetCardHolderVerificationValue(const CardHolderVerificationValue& value) { m_cardHolderVerificationValueHasBeenSet = true; m_cardHolderVerificationValue = value; }

    /**
     * <p>Card data parameters that are required to generate a cardholder verification
     * value for the payment card.</p>
     */
    inline void SetCardHolderVerificationValue(CardHolderVerificationValue&& value) { m_cardHolderVerificationValueHasBeenSet = true; m_cardHolderVerificationValue = std::move(value); }

    /**
     * <p>Card data parameters that are required to generate a cardholder verification
     * value for the payment card.</p>
     */
    inline CardGenerationAttributes& WithCardHolderVerificationValue(const CardHolderVerificationValue& value) { SetCardHolderVerificationValue(value); return *this;}

    /**
     * <p>Card data parameters that are required to generate a cardholder verification
     * value for the payment card.</p>
     */
    inline CardGenerationAttributes& WithCardHolderVerificationValue(CardHolderVerificationValue&& value) { SetCardHolderVerificationValue(std::move(value)); return *this;}


    /**
     * <p>Card data parameters that are required to generate Card Verification Value
     * (CVV) for the payment card.</p>
     */
    inline const CardVerificationValue1& GetCardVerificationValue1() const{ return m_cardVerificationValue1; }

    /**
     * <p>Card data parameters that are required to generate Card Verification Value
     * (CVV) for the payment card.</p>
     */
    inline bool CardVerificationValue1HasBeenSet() const { return m_cardVerificationValue1HasBeenSet; }

    /**
     * <p>Card data parameters that are required to generate Card Verification Value
     * (CVV) for the payment card.</p>
     */
    inline void SetCardVerificationValue1(const CardVerificationValue1& value) { m_cardVerificationValue1HasBeenSet = true; m_cardVerificationValue1 = value; }

    /**
     * <p>Card data parameters that are required to generate Card Verification Value
     * (CVV) for the payment card.</p>
     */
    inline void SetCardVerificationValue1(CardVerificationValue1&& value) { m_cardVerificationValue1HasBeenSet = true; m_cardVerificationValue1 = std::move(value); }

    /**
     * <p>Card data parameters that are required to generate Card Verification Value
     * (CVV) for the payment card.</p>
     */
    inline CardGenerationAttributes& WithCardVerificationValue1(const CardVerificationValue1& value) { SetCardVerificationValue1(value); return *this;}

    /**
     * <p>Card data parameters that are required to generate Card Verification Value
     * (CVV) for the payment card.</p>
     */
    inline CardGenerationAttributes& WithCardVerificationValue1(CardVerificationValue1&& value) { SetCardVerificationValue1(std::move(value)); return *this;}


    /**
     * <p>Card data parameters that are required to generate Card Verification Value
     * (CVV2) for the payment card.</p>
     */
    inline const CardVerificationValue2& GetCardVerificationValue2() const{ return m_cardVerificationValue2; }

    /**
     * <p>Card data parameters that are required to generate Card Verification Value
     * (CVV2) for the payment card.</p>
     */
    inline bool CardVerificationValue2HasBeenSet() const { return m_cardVerificationValue2HasBeenSet; }

    /**
     * <p>Card data parameters that are required to generate Card Verification Value
     * (CVV2) for the payment card.</p>
     */
    inline void SetCardVerificationValue2(const CardVerificationValue2& value) { m_cardVerificationValue2HasBeenSet = true; m_cardVerificationValue2 = value; }

    /**
     * <p>Card data parameters that are required to generate Card Verification Value
     * (CVV2) for the payment card.</p>
     */
    inline void SetCardVerificationValue2(CardVerificationValue2&& value) { m_cardVerificationValue2HasBeenSet = true; m_cardVerificationValue2 = std::move(value); }

    /**
     * <p>Card data parameters that are required to generate Card Verification Value
     * (CVV2) for the payment card.</p>
     */
    inline CardGenerationAttributes& WithCardVerificationValue2(const CardVerificationValue2& value) { SetCardVerificationValue2(value); return *this;}

    /**
     * <p>Card data parameters that are required to generate Card Verification Value
     * (CVV2) for the payment card.</p>
     */
    inline CardGenerationAttributes& WithCardVerificationValue2(CardVerificationValue2&& value) { SetCardVerificationValue2(std::move(value)); return *this;}


    /**
     * <p>Card data parameters that are required to generate CDynamic Card Verification
     * Code (dCVC) for the payment card.</p>
     */
    inline const DynamicCardVerificationCode& GetDynamicCardVerificationCode() const{ return m_dynamicCardVerificationCode; }

    /**
     * <p>Card data parameters that are required to generate CDynamic Card Verification
     * Code (dCVC) for the payment card.</p>
     */
    inline bool DynamicCardVerificationCodeHasBeenSet() const { return m_dynamicCardVerificationCodeHasBeenSet; }

    /**
     * <p>Card data parameters that are required to generate CDynamic Card Verification
     * Code (dCVC) for the payment card.</p>
     */
    inline void SetDynamicCardVerificationCode(const DynamicCardVerificationCode& value) { m_dynamicCardVerificationCodeHasBeenSet = true; m_dynamicCardVerificationCode = value; }

    /**
     * <p>Card data parameters that are required to generate CDynamic Card Verification
     * Code (dCVC) for the payment card.</p>
     */
    inline void SetDynamicCardVerificationCode(DynamicCardVerificationCode&& value) { m_dynamicCardVerificationCodeHasBeenSet = true; m_dynamicCardVerificationCode = std::move(value); }

    /**
     * <p>Card data parameters that are required to generate CDynamic Card Verification
     * Code (dCVC) for the payment card.</p>
     */
    inline CardGenerationAttributes& WithDynamicCardVerificationCode(const DynamicCardVerificationCode& value) { SetDynamicCardVerificationCode(value); return *this;}

    /**
     * <p>Card data parameters that are required to generate CDynamic Card Verification
     * Code (dCVC) for the payment card.</p>
     */
    inline CardGenerationAttributes& WithDynamicCardVerificationCode(DynamicCardVerificationCode&& value) { SetDynamicCardVerificationCode(std::move(value)); return *this;}


    /**
     * <p>Card data parameters that are required to generate CDynamic Card Verification
     * Value (dCVV) for the payment card.</p>
     */
    inline const DynamicCardVerificationValue& GetDynamicCardVerificationValue() const{ return m_dynamicCardVerificationValue; }

    /**
     * <p>Card data parameters that are required to generate CDynamic Card Verification
     * Value (dCVV) for the payment card.</p>
     */
    inline bool DynamicCardVerificationValueHasBeenSet() const { return m_dynamicCardVerificationValueHasBeenSet; }

    /**
     * <p>Card data parameters that are required to generate CDynamic Card Verification
     * Value (dCVV) for the payment card.</p>
     */
    inline void SetDynamicCardVerificationValue(const DynamicCardVerificationValue& value) { m_dynamicCardVerificationValueHasBeenSet = true; m_dynamicCardVerificationValue = value; }

    /**
     * <p>Card data parameters that are required to generate CDynamic Card Verification
     * Value (dCVV) for the payment card.</p>
     */
    inline void SetDynamicCardVerificationValue(DynamicCardVerificationValue&& value) { m_dynamicCardVerificationValueHasBeenSet = true; m_dynamicCardVerificationValue = std::move(value); }

    /**
     * <p>Card data parameters that are required to generate CDynamic Card Verification
     * Value (dCVV) for the payment card.</p>
     */
    inline CardGenerationAttributes& WithDynamicCardVerificationValue(const DynamicCardVerificationValue& value) { SetDynamicCardVerificationValue(value); return *this;}

    /**
     * <p>Card data parameters that are required to generate CDynamic Card Verification
     * Value (dCVV) for the payment card.</p>
     */
    inline CardGenerationAttributes& WithDynamicCardVerificationValue(DynamicCardVerificationValue&& value) { SetDynamicCardVerificationValue(std::move(value)); return *this;}

  private:

    AmexCardSecurityCodeVersion1 m_amexCardSecurityCodeVersion1;
    bool m_amexCardSecurityCodeVersion1HasBeenSet = false;

    AmexCardSecurityCodeVersion2 m_amexCardSecurityCodeVersion2;
    bool m_amexCardSecurityCodeVersion2HasBeenSet = false;

    CardHolderVerificationValue m_cardHolderVerificationValue;
    bool m_cardHolderVerificationValueHasBeenSet = false;

    CardVerificationValue1 m_cardVerificationValue1;
    bool m_cardVerificationValue1HasBeenSet = false;

    CardVerificationValue2 m_cardVerificationValue2;
    bool m_cardVerificationValue2HasBeenSet = false;

    DynamicCardVerificationCode m_dynamicCardVerificationCode;
    bool m_dynamicCardVerificationCodeHasBeenSet = false;

    DynamicCardVerificationValue m_dynamicCardVerificationValue;
    bool m_dynamicCardVerificationValueHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
