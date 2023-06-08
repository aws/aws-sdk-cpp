/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Card data parameters that are required to verify CVV (Card Verification
   * Value) for the payment card.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/CardVerificationValue1">AWS
   * API Reference</a></p>
   */
  class CardVerificationValue1
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CardVerificationValue1();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CardVerificationValue1(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CardVerificationValue1& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The expiry date of a payment card.</p>
     */
    inline const Aws::String& GetCardExpiryDate() const{ return m_cardExpiryDate; }

    /**
     * <p>The expiry date of a payment card.</p>
     */
    inline bool CardExpiryDateHasBeenSet() const { return m_cardExpiryDateHasBeenSet; }

    /**
     * <p>The expiry date of a payment card.</p>
     */
    inline void SetCardExpiryDate(const Aws::String& value) { m_cardExpiryDateHasBeenSet = true; m_cardExpiryDate = value; }

    /**
     * <p>The expiry date of a payment card.</p>
     */
    inline void SetCardExpiryDate(Aws::String&& value) { m_cardExpiryDateHasBeenSet = true; m_cardExpiryDate = std::move(value); }

    /**
     * <p>The expiry date of a payment card.</p>
     */
    inline void SetCardExpiryDate(const char* value) { m_cardExpiryDateHasBeenSet = true; m_cardExpiryDate.assign(value); }

    /**
     * <p>The expiry date of a payment card.</p>
     */
    inline CardVerificationValue1& WithCardExpiryDate(const Aws::String& value) { SetCardExpiryDate(value); return *this;}

    /**
     * <p>The expiry date of a payment card.</p>
     */
    inline CardVerificationValue1& WithCardExpiryDate(Aws::String&& value) { SetCardExpiryDate(std::move(value)); return *this;}

    /**
     * <p>The expiry date of a payment card.</p>
     */
    inline CardVerificationValue1& WithCardExpiryDate(const char* value) { SetCardExpiryDate(value); return *this;}


    /**
     * <p>The service code of the payment card. This is different from Card Security
     * Code (CSC).</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }

    /**
     * <p>The service code of the payment card. This is different from Card Security
     * Code (CSC).</p>
     */
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    /**
     * <p>The service code of the payment card. This is different from Card Security
     * Code (CSC).</p>
     */
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    /**
     * <p>The service code of the payment card. This is different from Card Security
     * Code (CSC).</p>
     */
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    /**
     * <p>The service code of the payment card. This is different from Card Security
     * Code (CSC).</p>
     */
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }

    /**
     * <p>The service code of the payment card. This is different from Card Security
     * Code (CSC).</p>
     */
    inline CardVerificationValue1& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>The service code of the payment card. This is different from Card Security
     * Code (CSC).</p>
     */
    inline CardVerificationValue1& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>The service code of the payment card. This is different from Card Security
     * Code (CSC).</p>
     */
    inline CardVerificationValue1& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}

  private:

    Aws::String m_cardExpiryDate;
    bool m_cardExpiryDateHasBeenSet = false;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
