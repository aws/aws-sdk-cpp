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
   * <p>Parameters that are required to generate or verify Dynamic Card Verification
   * Value (dCVV).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/DynamicCardVerificationValue">AWS
   * API Reference</a></p>
   */
  class DynamicCardVerificationValue
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DynamicCardVerificationValue();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DynamicCardVerificationValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DynamicCardVerificationValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The transaction counter value that comes from the terminal.</p>
     */
    inline const Aws::String& GetApplicationTransactionCounter() const{ return m_applicationTransactionCounter; }

    /**
     * <p>The transaction counter value that comes from the terminal.</p>
     */
    inline bool ApplicationTransactionCounterHasBeenSet() const { return m_applicationTransactionCounterHasBeenSet; }

    /**
     * <p>The transaction counter value that comes from the terminal.</p>
     */
    inline void SetApplicationTransactionCounter(const Aws::String& value) { m_applicationTransactionCounterHasBeenSet = true; m_applicationTransactionCounter = value; }

    /**
     * <p>The transaction counter value that comes from the terminal.</p>
     */
    inline void SetApplicationTransactionCounter(Aws::String&& value) { m_applicationTransactionCounterHasBeenSet = true; m_applicationTransactionCounter = std::move(value); }

    /**
     * <p>The transaction counter value that comes from the terminal.</p>
     */
    inline void SetApplicationTransactionCounter(const char* value) { m_applicationTransactionCounterHasBeenSet = true; m_applicationTransactionCounter.assign(value); }

    /**
     * <p>The transaction counter value that comes from the terminal.</p>
     */
    inline DynamicCardVerificationValue& WithApplicationTransactionCounter(const Aws::String& value) { SetApplicationTransactionCounter(value); return *this;}

    /**
     * <p>The transaction counter value that comes from the terminal.</p>
     */
    inline DynamicCardVerificationValue& WithApplicationTransactionCounter(Aws::String&& value) { SetApplicationTransactionCounter(std::move(value)); return *this;}

    /**
     * <p>The transaction counter value that comes from the terminal.</p>
     */
    inline DynamicCardVerificationValue& WithApplicationTransactionCounter(const char* value) { SetApplicationTransactionCounter(value); return *this;}


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
    inline DynamicCardVerificationValue& WithCardExpiryDate(const Aws::String& value) { SetCardExpiryDate(value); return *this;}

    /**
     * <p>The expiry date of a payment card.</p>
     */
    inline DynamicCardVerificationValue& WithCardExpiryDate(Aws::String&& value) { SetCardExpiryDate(std::move(value)); return *this;}

    /**
     * <p>The expiry date of a payment card.</p>
     */
    inline DynamicCardVerificationValue& WithCardExpiryDate(const char* value) { SetCardExpiryDate(value); return *this;}


    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline const Aws::String& GetPanSequenceNumber() const{ return m_panSequenceNumber; }

    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline bool PanSequenceNumberHasBeenSet() const { return m_panSequenceNumberHasBeenSet; }

    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline void SetPanSequenceNumber(const Aws::String& value) { m_panSequenceNumberHasBeenSet = true; m_panSequenceNumber = value; }

    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline void SetPanSequenceNumber(Aws::String&& value) { m_panSequenceNumberHasBeenSet = true; m_panSequenceNumber = std::move(value); }

    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline void SetPanSequenceNumber(const char* value) { m_panSequenceNumberHasBeenSet = true; m_panSequenceNumber.assign(value); }

    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline DynamicCardVerificationValue& WithPanSequenceNumber(const Aws::String& value) { SetPanSequenceNumber(value); return *this;}

    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline DynamicCardVerificationValue& WithPanSequenceNumber(Aws::String&& value) { SetPanSequenceNumber(std::move(value)); return *this;}

    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline DynamicCardVerificationValue& WithPanSequenceNumber(const char* value) { SetPanSequenceNumber(value); return *this;}


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
    inline DynamicCardVerificationValue& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>The service code of the payment card. This is different from Card Security
     * Code (CSC).</p>
     */
    inline DynamicCardVerificationValue& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>The service code of the payment card. This is different from Card Security
     * Code (CSC).</p>
     */
    inline DynamicCardVerificationValue& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}

  private:

    Aws::String m_applicationTransactionCounter;
    bool m_applicationTransactionCounterHasBeenSet = false;

    Aws::String m_cardExpiryDate;
    bool m_cardExpiryDateHasBeenSet = false;

    Aws::String m_panSequenceNumber;
    bool m_panSequenceNumberHasBeenSet = false;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
