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
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/DynamicCardVerificationCode">AWS
   * API Reference</a></p>
   */
  class DynamicCardVerificationCode
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DynamicCardVerificationCode();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DynamicCardVerificationCode(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DynamicCardVerificationCode& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline DynamicCardVerificationCode& WithApplicationTransactionCounter(const Aws::String& value) { SetApplicationTransactionCounter(value); return *this;}

    /**
     * <p>The transaction counter value that comes from the terminal.</p>
     */
    inline DynamicCardVerificationCode& WithApplicationTransactionCounter(Aws::String&& value) { SetApplicationTransactionCounter(std::move(value)); return *this;}

    /**
     * <p>The transaction counter value that comes from the terminal.</p>
     */
    inline DynamicCardVerificationCode& WithApplicationTransactionCounter(const char* value) { SetApplicationTransactionCounter(value); return *this;}


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
    inline DynamicCardVerificationCode& WithPanSequenceNumber(const Aws::String& value) { SetPanSequenceNumber(value); return *this;}

    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline DynamicCardVerificationCode& WithPanSequenceNumber(Aws::String&& value) { SetPanSequenceNumber(std::move(value)); return *this;}

    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN).</p>
     */
    inline DynamicCardVerificationCode& WithPanSequenceNumber(const char* value) { SetPanSequenceNumber(value); return *this;}


    /**
     * <p>The data on the two tracks of magnetic cards used for financial transactions.
     * This includes the cardholder name, PAN, expiration date, bank ID (BIN) and
     * several other numbers the issuing bank uses to validate the data received.</p>
     */
    inline const Aws::String& GetTrackData() const{ return m_trackData; }

    /**
     * <p>The data on the two tracks of magnetic cards used for financial transactions.
     * This includes the cardholder name, PAN, expiration date, bank ID (BIN) and
     * several other numbers the issuing bank uses to validate the data received.</p>
     */
    inline bool TrackDataHasBeenSet() const { return m_trackDataHasBeenSet; }

    /**
     * <p>The data on the two tracks of magnetic cards used for financial transactions.
     * This includes the cardholder name, PAN, expiration date, bank ID (BIN) and
     * several other numbers the issuing bank uses to validate the data received.</p>
     */
    inline void SetTrackData(const Aws::String& value) { m_trackDataHasBeenSet = true; m_trackData = value; }

    /**
     * <p>The data on the two tracks of magnetic cards used for financial transactions.
     * This includes the cardholder name, PAN, expiration date, bank ID (BIN) and
     * several other numbers the issuing bank uses to validate the data received.</p>
     */
    inline void SetTrackData(Aws::String&& value) { m_trackDataHasBeenSet = true; m_trackData = std::move(value); }

    /**
     * <p>The data on the two tracks of magnetic cards used for financial transactions.
     * This includes the cardholder name, PAN, expiration date, bank ID (BIN) and
     * several other numbers the issuing bank uses to validate the data received.</p>
     */
    inline void SetTrackData(const char* value) { m_trackDataHasBeenSet = true; m_trackData.assign(value); }

    /**
     * <p>The data on the two tracks of magnetic cards used for financial transactions.
     * This includes the cardholder name, PAN, expiration date, bank ID (BIN) and
     * several other numbers the issuing bank uses to validate the data received.</p>
     */
    inline DynamicCardVerificationCode& WithTrackData(const Aws::String& value) { SetTrackData(value); return *this;}

    /**
     * <p>The data on the two tracks of magnetic cards used for financial transactions.
     * This includes the cardholder name, PAN, expiration date, bank ID (BIN) and
     * several other numbers the issuing bank uses to validate the data received.</p>
     */
    inline DynamicCardVerificationCode& WithTrackData(Aws::String&& value) { SetTrackData(std::move(value)); return *this;}

    /**
     * <p>The data on the two tracks of magnetic cards used for financial transactions.
     * This includes the cardholder name, PAN, expiration date, bank ID (BIN) and
     * several other numbers the issuing bank uses to validate the data received.</p>
     */
    inline DynamicCardVerificationCode& WithTrackData(const char* value) { SetTrackData(value); return *this;}


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
    inline DynamicCardVerificationCode& WithUnpredictableNumber(const Aws::String& value) { SetUnpredictableNumber(value); return *this;}

    /**
     * <p>A random number generated by the issuer.</p>
     */
    inline DynamicCardVerificationCode& WithUnpredictableNumber(Aws::String&& value) { SetUnpredictableNumber(std::move(value)); return *this;}

    /**
     * <p>A random number generated by the issuer.</p>
     */
    inline DynamicCardVerificationCode& WithUnpredictableNumber(const char* value) { SetUnpredictableNumber(value); return *this;}

  private:

    Aws::String m_applicationTransactionCounter;
    bool m_applicationTransactionCounterHasBeenSet = false;

    Aws::String m_panSequenceNumber;
    bool m_panSequenceNumberHasBeenSet = false;

    Aws::String m_trackData;
    bool m_trackDataHasBeenSet = false;

    Aws::String m_unpredictableNumber;
    bool m_unpredictableNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
