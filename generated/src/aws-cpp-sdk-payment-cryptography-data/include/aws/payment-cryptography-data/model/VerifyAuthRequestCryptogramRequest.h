/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/MajorKeyDerivationMode.h>
#include <aws/payment-cryptography-data/model/SessionKeyDerivation.h>
#include <aws/payment-cryptography-data/model/CryptogramAuthResponse.h>
#include <utility>

namespace Aws
{
namespace PaymentCryptographyData
{
namespace Model
{

  /**
   */
  class VerifyAuthRequestCryptogramRequest : public PaymentCryptographyDataRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VerifyAuthRequestCryptogramRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "VerifyAuthRequestCryptogram"; }

    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <code>keyARN</code> of the major encryption key that Amazon Web Services
     * Payment Cryptography uses for ARQC verification.</p>
     */
    inline const Aws::String& GetKeyIdentifier() const { return m_keyIdentifier; }
    inline bool KeyIdentifierHasBeenSet() const { return m_keyIdentifierHasBeenSet; }
    template<typename KeyIdentifierT = Aws::String>
    void SetKeyIdentifier(KeyIdentifierT&& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = std::forward<KeyIdentifierT>(value); }
    template<typename KeyIdentifierT = Aws::String>
    VerifyAuthRequestCryptogramRequest& WithKeyIdentifier(KeyIdentifierT&& value) { SetKeyIdentifier(std::forward<KeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transaction data that Amazon Web Services Payment Cryptography uses for
     * ARQC verification. The same transaction is used for ARQC generation outside of
     * Amazon Web Services Payment Cryptography.</p>
     */
    inline const Aws::String& GetTransactionData() const { return m_transactionData; }
    inline bool TransactionDataHasBeenSet() const { return m_transactionDataHasBeenSet; }
    template<typename TransactionDataT = Aws::String>
    void SetTransactionData(TransactionDataT&& value) { m_transactionDataHasBeenSet = true; m_transactionData = std::forward<TransactionDataT>(value); }
    template<typename TransactionDataT = Aws::String>
    VerifyAuthRequestCryptogramRequest& WithTransactionData(TransactionDataT&& value) { SetTransactionData(std::forward<TransactionDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The auth request cryptogram imported into Amazon Web Services Payment
     * Cryptography for ARQC verification using a major encryption key and transaction
     * data.</p>
     */
    inline const Aws::String& GetAuthRequestCryptogram() const { return m_authRequestCryptogram; }
    inline bool AuthRequestCryptogramHasBeenSet() const { return m_authRequestCryptogramHasBeenSet; }
    template<typename AuthRequestCryptogramT = Aws::String>
    void SetAuthRequestCryptogram(AuthRequestCryptogramT&& value) { m_authRequestCryptogramHasBeenSet = true; m_authRequestCryptogram = std::forward<AuthRequestCryptogramT>(value); }
    template<typename AuthRequestCryptogramT = Aws::String>
    VerifyAuthRequestCryptogramRequest& WithAuthRequestCryptogram(AuthRequestCryptogramT&& value) { SetAuthRequestCryptogram(std::forward<AuthRequestCryptogramT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method to use when deriving the major encryption key for ARQC
     * verification within Amazon Web Services Payment Cryptography. The same key
     * derivation mode was used for ARQC generation outside of Amazon Web Services
     * Payment Cryptography.</p>
     */
    inline MajorKeyDerivationMode GetMajorKeyDerivationMode() const { return m_majorKeyDerivationMode; }
    inline bool MajorKeyDerivationModeHasBeenSet() const { return m_majorKeyDerivationModeHasBeenSet; }
    inline void SetMajorKeyDerivationMode(MajorKeyDerivationMode value) { m_majorKeyDerivationModeHasBeenSet = true; m_majorKeyDerivationMode = value; }
    inline VerifyAuthRequestCryptogramRequest& WithMajorKeyDerivationMode(MajorKeyDerivationMode value) { SetMajorKeyDerivationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes and values to use for deriving a session key for ARQC
     * verification within Amazon Web Services Payment Cryptography. The same
     * attributes were used for ARQC generation outside of Amazon Web Services Payment
     * Cryptography.</p>
     */
    inline const SessionKeyDerivation& GetSessionKeyDerivationAttributes() const { return m_sessionKeyDerivationAttributes; }
    inline bool SessionKeyDerivationAttributesHasBeenSet() const { return m_sessionKeyDerivationAttributesHasBeenSet; }
    template<typename SessionKeyDerivationAttributesT = SessionKeyDerivation>
    void SetSessionKeyDerivationAttributes(SessionKeyDerivationAttributesT&& value) { m_sessionKeyDerivationAttributesHasBeenSet = true; m_sessionKeyDerivationAttributes = std::forward<SessionKeyDerivationAttributesT>(value); }
    template<typename SessionKeyDerivationAttributesT = SessionKeyDerivation>
    VerifyAuthRequestCryptogramRequest& WithSessionKeyDerivationAttributes(SessionKeyDerivationAttributesT&& value) { SetSessionKeyDerivationAttributes(std::forward<SessionKeyDerivationAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes and values for auth request cryptogram verification. These
     * parameters are required in case using ARPC Method 1 or Method 2 for ARQC
     * verification.</p>
     */
    inline const CryptogramAuthResponse& GetAuthResponseAttributes() const { return m_authResponseAttributes; }
    inline bool AuthResponseAttributesHasBeenSet() const { return m_authResponseAttributesHasBeenSet; }
    template<typename AuthResponseAttributesT = CryptogramAuthResponse>
    void SetAuthResponseAttributes(AuthResponseAttributesT&& value) { m_authResponseAttributesHasBeenSet = true; m_authResponseAttributes = std::forward<AuthResponseAttributesT>(value); }
    template<typename AuthResponseAttributesT = CryptogramAuthResponse>
    VerifyAuthRequestCryptogramRequest& WithAuthResponseAttributes(AuthResponseAttributesT&& value) { SetAuthResponseAttributes(std::forward<AuthResponseAttributesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyIdentifier;
    bool m_keyIdentifierHasBeenSet = false;

    Aws::String m_transactionData;
    bool m_transactionDataHasBeenSet = false;

    Aws::String m_authRequestCryptogram;
    bool m_authRequestCryptogramHasBeenSet = false;

    MajorKeyDerivationMode m_majorKeyDerivationMode{MajorKeyDerivationMode::NOT_SET};
    bool m_majorKeyDerivationModeHasBeenSet = false;

    SessionKeyDerivation m_sessionKeyDerivationAttributes;
    bool m_sessionKeyDerivationAttributesHasBeenSet = false;

    CryptogramAuthResponse m_authResponseAttributes;
    bool m_authResponseAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
