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
   * <p>Card data parameters that are required to generate a cardholder verification
   * value for the payment card.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/CardHolderVerificationValue">AWS
   * API Reference</a></p>
   */
  class CardHolderVerificationValue
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CardHolderVerificationValue();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CardHolderVerificationValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CardHolderVerificationValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The transaction counter value that comes from a point of sale terminal.</p>
     */
    inline const Aws::String& GetApplicationTransactionCounter() const{ return m_applicationTransactionCounter; }

    /**
     * <p>The transaction counter value that comes from a point of sale terminal.</p>
     */
    inline bool ApplicationTransactionCounterHasBeenSet() const { return m_applicationTransactionCounterHasBeenSet; }

    /**
     * <p>The transaction counter value that comes from a point of sale terminal.</p>
     */
    inline void SetApplicationTransactionCounter(const Aws::String& value) { m_applicationTransactionCounterHasBeenSet = true; m_applicationTransactionCounter = value; }

    /**
     * <p>The transaction counter value that comes from a point of sale terminal.</p>
     */
    inline void SetApplicationTransactionCounter(Aws::String&& value) { m_applicationTransactionCounterHasBeenSet = true; m_applicationTransactionCounter = std::move(value); }

    /**
     * <p>The transaction counter value that comes from a point of sale terminal.</p>
     */
    inline void SetApplicationTransactionCounter(const char* value) { m_applicationTransactionCounterHasBeenSet = true; m_applicationTransactionCounter.assign(value); }

    /**
     * <p>The transaction counter value that comes from a point of sale terminal.</p>
     */
    inline CardHolderVerificationValue& WithApplicationTransactionCounter(const Aws::String& value) { SetApplicationTransactionCounter(value); return *this;}

    /**
     * <p>The transaction counter value that comes from a point of sale terminal.</p>
     */
    inline CardHolderVerificationValue& WithApplicationTransactionCounter(Aws::String&& value) { SetApplicationTransactionCounter(std::move(value)); return *this;}

    /**
     * <p>The transaction counter value that comes from a point of sale terminal.</p>
     */
    inline CardHolderVerificationValue& WithApplicationTransactionCounter(const char* value) { SetApplicationTransactionCounter(value); return *this;}


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
    inline CardHolderVerificationValue& WithPanSequenceNumber(const Aws::String& value) { SetPanSequenceNumber(value); return *this;}

    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline CardHolderVerificationValue& WithPanSequenceNumber(Aws::String&& value) { SetPanSequenceNumber(std::move(value)); return *this;}

    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline CardHolderVerificationValue& WithPanSequenceNumber(const char* value) { SetPanSequenceNumber(value); return *this;}


    /**
     * <p>A random number generated by the issuer.</p>
     */
    inline const Aws::String& GetUnpredictableNumber() const{ return m_unpredictableNumber; }

    /**
     * <p>A random number generated by the issuer.</p>
     */
    inline bool UnpredictableNumberHasBeenSet() const { return m_unpredictableNumberHasBeenSet; }

    /**
     * <p>A random number generated by the issuer.</p>
     */
    inline void SetUnpredictableNumber(const Aws::String& value) { m_unpredictableNumberHasBeenSet = true; m_unpredictableNumber = value; }

    /**
     * <p>A random number generated by the issuer.</p>
     */
    inline void SetUnpredictableNumber(Aws::String&& value) { m_unpredictableNumberHasBeenSet = true; m_unpredictableNumber = std::move(value); }

    /**
     * <p>A random number generated by the issuer.</p>
     */
    inline void SetUnpredictableNumber(const char* value) { m_unpredictableNumberHasBeenSet = true; m_unpredictableNumber.assign(value); }

    /**
     * <p>A random number generated by the issuer.</p>
     */
    inline CardHolderVerificationValue& WithUnpredictableNumber(const Aws::String& value) { SetUnpredictableNumber(value); return *this;}

    /**
     * <p>A random number generated by the issuer.</p>
     */
    inline CardHolderVerificationValue& WithUnpredictableNumber(Aws::String&& value) { SetUnpredictableNumber(std::move(value)); return *this;}

    /**
     * <p>A random number generated by the issuer.</p>
     */
    inline CardHolderVerificationValue& WithUnpredictableNumber(const char* value) { SetUnpredictableNumber(value); return *this;}

  private:

    Aws::String m_applicationTransactionCounter;
    bool m_applicationTransactionCounterHasBeenSet = false;

    Aws::String m_panSequenceNumber;
    bool m_panSequenceNumberHasBeenSet = false;

    Aws::String m_unpredictableNumber;
    bool m_unpredictableNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
