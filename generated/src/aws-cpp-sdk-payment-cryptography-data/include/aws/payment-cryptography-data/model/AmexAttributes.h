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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API AmexAttributes() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API AmexAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API AmexAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The method to use when deriving the master key for a payment card using Amex
     * derivation.</p>
     */
    inline MajorKeyDerivationMode GetMajorKeyDerivationMode() const { return m_majorKeyDerivationMode; }
    inline bool MajorKeyDerivationModeHasBeenSet() const { return m_majorKeyDerivationModeHasBeenSet; }
    inline void SetMajorKeyDerivationMode(MajorKeyDerivationMode value) { m_majorKeyDerivationModeHasBeenSet = true; m_majorKeyDerivationMode = value; }
    inline AmexAttributes& WithMajorKeyDerivationMode(MajorKeyDerivationMode value) { SetMajorKeyDerivationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Primary Account Number (PAN) of the cardholder.</p>
     */
    inline const Aws::String& GetPrimaryAccountNumber() const { return m_primaryAccountNumber; }
    inline bool PrimaryAccountNumberHasBeenSet() const { return m_primaryAccountNumberHasBeenSet; }
    template<typename PrimaryAccountNumberT = Aws::String>
    void SetPrimaryAccountNumber(PrimaryAccountNumberT&& value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber = std::forward<PrimaryAccountNumberT>(value); }
    template<typename PrimaryAccountNumberT = Aws::String>
    AmexAttributes& WithPrimaryAccountNumber(PrimaryAccountNumberT&& value) { SetPrimaryAccountNumber(std::forward<PrimaryAccountNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A number that identifies and differentiates payment cards with the same
     * Primary Account Number (PAN). Typically 00 is used, if no value is provided by
     * the terminal.</p>
     */
    inline const Aws::String& GetPanSequenceNumber() const { return m_panSequenceNumber; }
    inline bool PanSequenceNumberHasBeenSet() const { return m_panSequenceNumberHasBeenSet; }
    template<typename PanSequenceNumberT = Aws::String>
    void SetPanSequenceNumber(PanSequenceNumberT&& value) { m_panSequenceNumberHasBeenSet = true; m_panSequenceNumber = std::forward<PanSequenceNumberT>(value); }
    template<typename PanSequenceNumberT = Aws::String>
    AmexAttributes& WithPanSequenceNumber(PanSequenceNumberT&& value) { SetPanSequenceNumber(std::forward<PanSequenceNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transaction counter of the current transaction that is provided by the
     * terminal during transaction processing.</p>
     */
    inline const Aws::String& GetApplicationTransactionCounter() const { return m_applicationTransactionCounter; }
    inline bool ApplicationTransactionCounterHasBeenSet() const { return m_applicationTransactionCounterHasBeenSet; }
    template<typename ApplicationTransactionCounterT = Aws::String>
    void SetApplicationTransactionCounter(ApplicationTransactionCounterT&& value) { m_applicationTransactionCounterHasBeenSet = true; m_applicationTransactionCounter = std::forward<ApplicationTransactionCounterT>(value); }
    template<typename ApplicationTransactionCounterT = Aws::String>
    AmexAttributes& WithApplicationTransactionCounter(ApplicationTransactionCounterT&& value) { SetApplicationTransactionCounter(std::forward<ApplicationTransactionCounterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>keyArn</code> of the issuer master key for cryptogram (IMK-AC) for
     * the payment card.</p>
     */
    inline const Aws::String& GetAuthorizationRequestKeyIdentifier() const { return m_authorizationRequestKeyIdentifier; }
    inline bool AuthorizationRequestKeyIdentifierHasBeenSet() const { return m_authorizationRequestKeyIdentifierHasBeenSet; }
    template<typename AuthorizationRequestKeyIdentifierT = Aws::String>
    void SetAuthorizationRequestKeyIdentifier(AuthorizationRequestKeyIdentifierT&& value) { m_authorizationRequestKeyIdentifierHasBeenSet = true; m_authorizationRequestKeyIdentifier = std::forward<AuthorizationRequestKeyIdentifierT>(value); }
    template<typename AuthorizationRequestKeyIdentifierT = Aws::String>
    AmexAttributes& WithAuthorizationRequestKeyIdentifier(AuthorizationRequestKeyIdentifierT&& value) { SetAuthorizationRequestKeyIdentifier(std::forward<AuthorizationRequestKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encrypted pinblock of the old pin stored on the chip card.</p>
     */
    inline const CurrentPinAttributes& GetCurrentPinAttributes() const { return m_currentPinAttributes; }
    inline bool CurrentPinAttributesHasBeenSet() const { return m_currentPinAttributesHasBeenSet; }
    template<typename CurrentPinAttributesT = CurrentPinAttributes>
    void SetCurrentPinAttributes(CurrentPinAttributesT&& value) { m_currentPinAttributesHasBeenSet = true; m_currentPinAttributes = std::forward<CurrentPinAttributesT>(value); }
    template<typename CurrentPinAttributesT = CurrentPinAttributes>
    AmexAttributes& WithCurrentPinAttributes(CurrentPinAttributesT&& value) { SetCurrentPinAttributes(std::forward<CurrentPinAttributesT>(value)); return *this;}
    ///@}
  private:

    MajorKeyDerivationMode m_majorKeyDerivationMode{MajorKeyDerivationMode::NOT_SET};
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
