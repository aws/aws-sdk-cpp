﻿/**
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
   * <p>Parameters that are required to generate or verify dCVC (Dynamic Card
   * Verification Code).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/DiscoverDynamicCardVerificationCode">AWS
   * API Reference</a></p>
   */
  class DiscoverDynamicCardVerificationCode
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DiscoverDynamicCardVerificationCode();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DiscoverDynamicCardVerificationCode(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DiscoverDynamicCardVerificationCode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The expiry date of a payment card.</p>
     */
    inline const Aws::String& GetCardExpiryDate() const{ return m_cardExpiryDate; }
    inline bool CardExpiryDateHasBeenSet() const { return m_cardExpiryDateHasBeenSet; }
    inline void SetCardExpiryDate(const Aws::String& value) { m_cardExpiryDateHasBeenSet = true; m_cardExpiryDate = value; }
    inline void SetCardExpiryDate(Aws::String&& value) { m_cardExpiryDateHasBeenSet = true; m_cardExpiryDate = std::move(value); }
    inline void SetCardExpiryDate(const char* value) { m_cardExpiryDateHasBeenSet = true; m_cardExpiryDate.assign(value); }
    inline DiscoverDynamicCardVerificationCode& WithCardExpiryDate(const Aws::String& value) { SetCardExpiryDate(value); return *this;}
    inline DiscoverDynamicCardVerificationCode& WithCardExpiryDate(Aws::String&& value) { SetCardExpiryDate(std::move(value)); return *this;}
    inline DiscoverDynamicCardVerificationCode& WithCardExpiryDate(const char* value) { SetCardExpiryDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A random number that is generated by the issuer.</p>
     */
    inline const Aws::String& GetUnpredictableNumber() const{ return m_unpredictableNumber; }
    inline bool UnpredictableNumberHasBeenSet() const { return m_unpredictableNumberHasBeenSet; }
    inline void SetUnpredictableNumber(const Aws::String& value) { m_unpredictableNumberHasBeenSet = true; m_unpredictableNumber = value; }
    inline void SetUnpredictableNumber(Aws::String&& value) { m_unpredictableNumberHasBeenSet = true; m_unpredictableNumber = std::move(value); }
    inline void SetUnpredictableNumber(const char* value) { m_unpredictableNumberHasBeenSet = true; m_unpredictableNumber.assign(value); }
    inline DiscoverDynamicCardVerificationCode& WithUnpredictableNumber(const Aws::String& value) { SetUnpredictableNumber(value); return *this;}
    inline DiscoverDynamicCardVerificationCode& WithUnpredictableNumber(Aws::String&& value) { SetUnpredictableNumber(std::move(value)); return *this;}
    inline DiscoverDynamicCardVerificationCode& WithUnpredictableNumber(const char* value) { SetUnpredictableNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transaction counter value that comes from the terminal.</p>
     */
    inline const Aws::String& GetApplicationTransactionCounter() const{ return m_applicationTransactionCounter; }
    inline bool ApplicationTransactionCounterHasBeenSet() const { return m_applicationTransactionCounterHasBeenSet; }
    inline void SetApplicationTransactionCounter(const Aws::String& value) { m_applicationTransactionCounterHasBeenSet = true; m_applicationTransactionCounter = value; }
    inline void SetApplicationTransactionCounter(Aws::String&& value) { m_applicationTransactionCounterHasBeenSet = true; m_applicationTransactionCounter = std::move(value); }
    inline void SetApplicationTransactionCounter(const char* value) { m_applicationTransactionCounterHasBeenSet = true; m_applicationTransactionCounter.assign(value); }
    inline DiscoverDynamicCardVerificationCode& WithApplicationTransactionCounter(const Aws::String& value) { SetApplicationTransactionCounter(value); return *this;}
    inline DiscoverDynamicCardVerificationCode& WithApplicationTransactionCounter(Aws::String&& value) { SetApplicationTransactionCounter(std::move(value)); return *this;}
    inline DiscoverDynamicCardVerificationCode& WithApplicationTransactionCounter(const char* value) { SetApplicationTransactionCounter(value); return *this;}
    ///@}
  private:

    Aws::String m_cardExpiryDate;
    bool m_cardExpiryDateHasBeenSet = false;

    Aws::String m_unpredictableNumber;
    bool m_unpredictableNumberHasBeenSet = false;

    Aws::String m_applicationTransactionCounter;
    bool m_applicationTransactionCounterHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
