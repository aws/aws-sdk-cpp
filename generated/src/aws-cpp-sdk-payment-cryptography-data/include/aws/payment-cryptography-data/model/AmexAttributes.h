/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/MajorKeyDerivationMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/CurrentPinAttributes.h>
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
   * <p>Parameters to derive the confidentiality and integrity keys for a payment
   * card using Amex derivation method.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/AmexAttributes">AWS
   * API Reference</a></p>
   */
  class AmexAttributes
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API AmexAttributes();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API AmexAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API AmexAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The method to use when deriving the master key for a payment card using Amex
     * derivation.</p>
     */
    inline const MajorKeyDerivationMode& GetMajorKeyDerivationMode() const{ return m_majorKeyDerivationMode; }
    inline bool MajorKeyDerivationModeHasBeenSet() const { return m_majorKeyDerivationModeHasBeenSet; }
    inline void SetMajorKeyDerivationMode(const MajorKeyDerivationMode& value) { m_majorKeyDerivationModeHasBeenSet = true; m_majorKeyDerivationMode = value; }
    inline void SetMajorKeyDerivationMode(MajorKeyDerivationMode&& value) { m_majorKeyDerivationModeHasBeenSet = true; m_majorKeyDerivationMode = std::move(value); }
    inline AmexAttributes& WithMajorKeyDerivationMode(const MajorKeyDerivationMode& value) { SetMajorKeyDerivationMode(value); return *this;}
    inline AmexAttributes& WithMajorKeyDerivationMode(MajorKeyDerivationMode&& value) { SetMajorKeyDerivationMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Primary Account Number (PAN) of the cardholder.</p>
     */
    inline const Aws::String& GetPrimaryAccountNumber() const{ return m_primaryAccountNumber; }
    inline bool PrimaryAccountNumberHasBeenSet() const { return m_primaryAccountNumberHasBeenSet; }
    inline void SetPrimaryAccountNumber(const Aws::String& value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber = value; }
    inline void SetPrimaryAccountNumber(Aws::String&& value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber = std::move(value); }
    inline void SetPrimaryAccountNumber(const char* value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber.assign(value); }
    inline AmexAttributes& WithPrimaryAccountNumber(const Aws::String& value) { SetPrimaryAccountNumber(value); return *this;}
    inline AmexAttributes& WithPrimaryAccountNumber(Aws::String&& value) { SetPrimaryAccountNumber(std::move(value)); return *this;}
    inline AmexAttributes& WithPrimaryAccountNumber(const char* value) { SetPrimaryAccountNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN). Typically 00 is used, if no value is provided by
     * the terminal.</p>
     */
    inline const Aws::String& GetPanSequenceNumber() const{ return m_panSequenceNumber; }
    inline bool PanSequenceNumberHasBeenSet() const { return m_panSequenceNumberHasBeenSet; }
    inline void SetPanSequenceNumber(const Aws::String& value) { m_panSequenceNumberHasBeenSet = true; m_panSequenceNumber = value; }
    inline void SetPanSequenceNumber(Aws::String&& value) { m_panSequenceNumberHasBeenSet = true; m_panSequenceNumber = std::move(value); }
    inline void SetPanSequenceNumber(const char* value) { m_panSequenceNumberHasBeenSet = true; m_panSequenceNumber.assign(value); }
    inline AmexAttributes& WithPanSequenceNumber(const Aws::String& value) { SetPanSequenceNumber(value); return *this;}
    inline AmexAttributes& WithPanSequenceNumber(Aws::String&& value) { SetPanSequenceNumber(std::move(value)); return *this;}
    inline AmexAttributes& WithPanSequenceNumber(const char* value) { SetPanSequenceNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transaction counter of the current transaction that is provided by the
     * terminal during transaction processing.</p>
     */
    inline const Aws::String& GetApplicationTransactionCounter() const{ return m_applicationTransactionCounter; }
    inline bool ApplicationTransactionCounterHasBeenSet() const { return m_applicationTransactionCounterHasBeenSet; }
    inline void SetApplicationTransactionCounter(const Aws::String& value) { m_applicationTransactionCounterHasBeenSet = true; m_applicationTransactionCounter = value; }
    inline void SetApplicationTransactionCounter(Aws::String&& value) { m_applicationTransactionCounterHasBeenSet = true; m_applicationTransactionCounter = std::move(value); }
    inline void SetApplicationTransactionCounter(const char* value) { m_applicationTransactionCounterHasBeenSet = true; m_applicationTransactionCounter.assign(value); }
    inline AmexAttributes& WithApplicationTransactionCounter(const Aws::String& value) { SetApplicationTransactionCounter(value); return *this;}
    inline AmexAttributes& WithApplicationTransactionCounter(Aws::String&& value) { SetApplicationTransactionCounter(std::move(value)); return *this;}
    inline AmexAttributes& WithApplicationTransactionCounter(const char* value) { SetApplicationTransactionCounter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>keyArn</code> of the issuer master key for cryptogram (IMK-AC) for
     * the payment card.</p>
     */
    inline const Aws::String& GetAuthorizationRequestKeyIdentifier() const{ return m_authorizationRequestKeyIdentifier; }
    inline bool AuthorizationRequestKeyIdentifierHasBeenSet() const { return m_authorizationRequestKeyIdentifierHasBeenSet; }
    inline void SetAuthorizationRequestKeyIdentifier(const Aws::String& value) { m_authorizationRequestKeyIdentifierHasBeenSet = true; m_authorizationRequestKeyIdentifier = value; }
    inline void SetAuthorizationRequestKeyIdentifier(Aws::String&& value) { m_authorizationRequestKeyIdentifierHasBeenSet = true; m_authorizationRequestKeyIdentifier = std::move(value); }
    inline void SetAuthorizationRequestKeyIdentifier(const char* value) { m_authorizationRequestKeyIdentifierHasBeenSet = true; m_authorizationRequestKeyIdentifier.assign(value); }
    inline AmexAttributes& WithAuthorizationRequestKeyIdentifier(const Aws::String& value) { SetAuthorizationRequestKeyIdentifier(value); return *this;}
    inline AmexAttributes& WithAuthorizationRequestKeyIdentifier(Aws::String&& value) { SetAuthorizationRequestKeyIdentifier(std::move(value)); return *this;}
    inline AmexAttributes& WithAuthorizationRequestKeyIdentifier(const char* value) { SetAuthorizationRequestKeyIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encrypted pinblock of the old pin stored on the chip card.</p>
     */
    inline const CurrentPinAttributes& GetCurrentPinAttributes() const{ return m_currentPinAttributes; }
    inline bool CurrentPinAttributesHasBeenSet() const { return m_currentPinAttributesHasBeenSet; }
    inline void SetCurrentPinAttributes(const CurrentPinAttributes& value) { m_currentPinAttributesHasBeenSet = true; m_currentPinAttributes = value; }
    inline void SetCurrentPinAttributes(CurrentPinAttributes&& value) { m_currentPinAttributesHasBeenSet = true; m_currentPinAttributes = std::move(value); }
    inline AmexAttributes& WithCurrentPinAttributes(const CurrentPinAttributes& value) { SetCurrentPinAttributes(value); return *this;}
    inline AmexAttributes& WithCurrentPinAttributes(CurrentPinAttributes&& value) { SetCurrentPinAttributes(std::move(value)); return *this;}
    ///@}
  private:

    MajorKeyDerivationMode m_majorKeyDerivationMode;
    bool m_majorKeyDerivationModeHasBeenSet = false;

    Aws::String m_primaryAccountNumber;
    bool m_primaryAccountNumberHasBeenSet = false;

    Aws::String m_panSequenceNumber;
    bool m_panSequenceNumberHasBeenSet = false;

    Aws::String m_applicationTransactionCounter;
    bool m_applicationTransactionCounterHasBeenSet = false;

    Aws::String m_authorizationRequestKeyIdentifier;
    bool m_authorizationRequestKeyIdentifierHasBeenSet = false;

    CurrentPinAttributes m_currentPinAttributes;
    bool m_currentPinAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
