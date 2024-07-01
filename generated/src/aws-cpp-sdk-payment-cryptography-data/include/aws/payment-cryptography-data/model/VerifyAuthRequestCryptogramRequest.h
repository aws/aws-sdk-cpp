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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VerifyAuthRequestCryptogramRequest();

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
    inline const Aws::String& GetKeyIdentifier() const{ return m_keyIdentifier; }
    inline bool KeyIdentifierHasBeenSet() const { return m_keyIdentifierHasBeenSet; }
    inline void SetKeyIdentifier(const Aws::String& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = value; }
    inline void SetKeyIdentifier(Aws::String&& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = std::move(value); }
    inline void SetKeyIdentifier(const char* value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier.assign(value); }
    inline VerifyAuthRequestCryptogramRequest& WithKeyIdentifier(const Aws::String& value) { SetKeyIdentifier(value); return *this;}
    inline VerifyAuthRequestCryptogramRequest& WithKeyIdentifier(Aws::String&& value) { SetKeyIdentifier(std::move(value)); return *this;}
    inline VerifyAuthRequestCryptogramRequest& WithKeyIdentifier(const char* value) { SetKeyIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transaction data that Amazon Web Services Payment Cryptography uses for
     * ARQC verification. The same transaction is used for ARQC generation outside of
     * Amazon Web Services Payment Cryptography.</p>
     */
    inline const Aws::String& GetTransactionData() const{ return m_transactionData; }
    inline bool TransactionDataHasBeenSet() const { return m_transactionDataHasBeenSet; }
    inline void SetTransactionData(const Aws::String& value) { m_transactionDataHasBeenSet = true; m_transactionData = value; }
    inline void SetTransactionData(Aws::String&& value) { m_transactionDataHasBeenSet = true; m_transactionData = std::move(value); }
    inline void SetTransactionData(const char* value) { m_transactionDataHasBeenSet = true; m_transactionData.assign(value); }
    inline VerifyAuthRequestCryptogramRequest& WithTransactionData(const Aws::String& value) { SetTransactionData(value); return *this;}
    inline VerifyAuthRequestCryptogramRequest& WithTransactionData(Aws::String&& value) { SetTransactionData(std::move(value)); return *this;}
    inline VerifyAuthRequestCryptogramRequest& WithTransactionData(const char* value) { SetTransactionData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The auth request cryptogram imported into Amazon Web Services Payment
     * Cryptography for ARQC verification using a major encryption key and transaction
     * data.</p>
     */
    inline const Aws::String& GetAuthRequestCryptogram() const{ return m_authRequestCryptogram; }
    inline bool AuthRequestCryptogramHasBeenSet() const { return m_authRequestCryptogramHasBeenSet; }
    inline void SetAuthRequestCryptogram(const Aws::String& value) { m_authRequestCryptogramHasBeenSet = true; m_authRequestCryptogram = value; }
    inline void SetAuthRequestCryptogram(Aws::String&& value) { m_authRequestCryptogramHasBeenSet = true; m_authRequestCryptogram = std::move(value); }
    inline void SetAuthRequestCryptogram(const char* value) { m_authRequestCryptogramHasBeenSet = true; m_authRequestCryptogram.assign(value); }
    inline VerifyAuthRequestCryptogramRequest& WithAuthRequestCryptogram(const Aws::String& value) { SetAuthRequestCryptogram(value); return *this;}
    inline VerifyAuthRequestCryptogramRequest& WithAuthRequestCryptogram(Aws::String&& value) { SetAuthRequestCryptogram(std::move(value)); return *this;}
    inline VerifyAuthRequestCryptogramRequest& WithAuthRequestCryptogram(const char* value) { SetAuthRequestCryptogram(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method to use when deriving the major encryption key for ARQC
     * verification within Amazon Web Services Payment Cryptography. The same key
     * derivation mode was used for ARQC generation outside of Amazon Web Services
     * Payment Cryptography.</p>
     */
    inline const MajorKeyDerivationMode& GetMajorKeyDerivationMode() const{ return m_majorKeyDerivationMode; }
    inline bool MajorKeyDerivationModeHasBeenSet() const { return m_majorKeyDerivationModeHasBeenSet; }
    inline void SetMajorKeyDerivationMode(const MajorKeyDerivationMode& value) { m_majorKeyDerivationModeHasBeenSet = true; m_majorKeyDerivationMode = value; }
    inline void SetMajorKeyDerivationMode(MajorKeyDerivationMode&& value) { m_majorKeyDerivationModeHasBeenSet = true; m_majorKeyDerivationMode = std::move(value); }
    inline VerifyAuthRequestCryptogramRequest& WithMajorKeyDerivationMode(const MajorKeyDerivationMode& value) { SetMajorKeyDerivationMode(value); return *this;}
    inline VerifyAuthRequestCryptogramRequest& WithMajorKeyDerivationMode(MajorKeyDerivationMode&& value) { SetMajorKeyDerivationMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes and values to use for deriving a session key for ARQC
     * verification within Amazon Web Services Payment Cryptography. The same
     * attributes were used for ARQC generation outside of Amazon Web Services Payment
     * Cryptography.</p>
     */
    inline const SessionKeyDerivation& GetSessionKeyDerivationAttributes() const{ return m_sessionKeyDerivationAttributes; }
    inline bool SessionKeyDerivationAttributesHasBeenSet() const { return m_sessionKeyDerivationAttributesHasBeenSet; }
    inline void SetSessionKeyDerivationAttributes(const SessionKeyDerivation& value) { m_sessionKeyDerivationAttributesHasBeenSet = true; m_sessionKeyDerivationAttributes = value; }
    inline void SetSessionKeyDerivationAttributes(SessionKeyDerivation&& value) { m_sessionKeyDerivationAttributesHasBeenSet = true; m_sessionKeyDerivationAttributes = std::move(value); }
    inline VerifyAuthRequestCryptogramRequest& WithSessionKeyDerivationAttributes(const SessionKeyDerivation& value) { SetSessionKeyDerivationAttributes(value); return *this;}
    inline VerifyAuthRequestCryptogramRequest& WithSessionKeyDerivationAttributes(SessionKeyDerivation&& value) { SetSessionKeyDerivationAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes and values for auth request cryptogram verification. These
     * parameters are required in case using ARPC Method 1 or Method 2 for ARQC
     * verification.</p>
     */
    inline const CryptogramAuthResponse& GetAuthResponseAttributes() const{ return m_authResponseAttributes; }
    inline bool AuthResponseAttributesHasBeenSet() const { return m_authResponseAttributesHasBeenSet; }
    inline void SetAuthResponseAttributes(const CryptogramAuthResponse& value) { m_authResponseAttributesHasBeenSet = true; m_authResponseAttributes = value; }
    inline void SetAuthResponseAttributes(CryptogramAuthResponse&& value) { m_authResponseAttributesHasBeenSet = true; m_authResponseAttributes = std::move(value); }
    inline VerifyAuthRequestCryptogramRequest& WithAuthResponseAttributes(const CryptogramAuthResponse& value) { SetAuthResponseAttributes(value); return *this;}
    inline VerifyAuthRequestCryptogramRequest& WithAuthResponseAttributes(CryptogramAuthResponse&& value) { SetAuthResponseAttributes(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyIdentifier;
    bool m_keyIdentifierHasBeenSet = false;

    Aws::String m_transactionData;
    bool m_transactionDataHasBeenSet = false;

    Aws::String m_authRequestCryptogram;
    bool m_authRequestCryptogramHasBeenSet = false;

    MajorKeyDerivationMode m_majorKeyDerivationMode;
    bool m_majorKeyDerivationModeHasBeenSet = false;

    SessionKeyDerivation m_sessionKeyDerivationAttributes;
    bool m_sessionKeyDerivationAttributesHasBeenSet = false;

    CryptogramAuthResponse m_authResponseAttributes;
    bool m_authResponseAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
