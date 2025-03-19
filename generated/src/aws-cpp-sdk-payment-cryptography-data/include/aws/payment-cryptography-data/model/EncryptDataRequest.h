/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/EncryptionDecryptionAttributes.h>
#include <aws/payment-cryptography-data/model/WrappedKey.h>
#include <utility>

namespace Aws
{
namespace PaymentCryptographyData
{
namespace Model
{

  /**
   */
  class EncryptDataRequest : public PaymentCryptographyDataRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EncryptDataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EncryptData"; }

    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses for plaintext encryption.</p> <p>When a
     * WrappedKeyBlock is provided, this value will be the identifier to the key
     * wrapping key. Otherwise, it is the key identifier used to perform the
     * operation.</p>
     */
    inline const Aws::String& GetKeyIdentifier() const { return m_keyIdentifier; }
    inline bool KeyIdentifierHasBeenSet() const { return m_keyIdentifierHasBeenSet; }
    template<typename KeyIdentifierT = Aws::String>
    void SetKeyIdentifier(KeyIdentifierT&& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = std::forward<KeyIdentifierT>(value); }
    template<typename KeyIdentifierT = Aws::String>
    EncryptDataRequest& WithKeyIdentifier(KeyIdentifierT&& value) { SetKeyIdentifier(std::forward<KeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plaintext to be encrypted.</p>  <p>For encryption using asymmetric
     * keys, plaintext data length is constrained by encryption key strength that you
     * define in <code>KeyAlgorithm</code> and padding type that you define in
     * <code>AsymmetricEncryptionAttributes</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/encrypt-data.html">Encrypt
     * data</a> in the <i>Amazon Web Services Payment Cryptography User Guide</i>.</p>
     * 
     */
    inline const Aws::String& GetPlainText() const { return m_plainText; }
    inline bool PlainTextHasBeenSet() const { return m_plainTextHasBeenSet; }
    template<typename PlainTextT = Aws::String>
    void SetPlainText(PlainTextT&& value) { m_plainTextHasBeenSet = true; m_plainText = std::forward<PlainTextT>(value); }
    template<typename PlainTextT = Aws::String>
    EncryptDataRequest& WithPlainText(PlainTextT&& value) { SetPlainText(std::forward<PlainTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption key type and attributes for plaintext encryption.</p>
     */
    inline const EncryptionDecryptionAttributes& GetEncryptionAttributes() const { return m_encryptionAttributes; }
    inline bool EncryptionAttributesHasBeenSet() const { return m_encryptionAttributesHasBeenSet; }
    template<typename EncryptionAttributesT = EncryptionDecryptionAttributes>
    void SetEncryptionAttributes(EncryptionAttributesT&& value) { m_encryptionAttributesHasBeenSet = true; m_encryptionAttributes = std::forward<EncryptionAttributesT>(value); }
    template<typename EncryptionAttributesT = EncryptionDecryptionAttributes>
    EncryptDataRequest& WithEncryptionAttributes(EncryptionAttributesT&& value) { SetEncryptionAttributes(std::forward<EncryptionAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The WrappedKeyBlock containing the encryption key for plaintext
     * encryption.</p>
     */
    inline const WrappedKey& GetWrappedKey() const { return m_wrappedKey; }
    inline bool WrappedKeyHasBeenSet() const { return m_wrappedKeyHasBeenSet; }
    template<typename WrappedKeyT = WrappedKey>
    void SetWrappedKey(WrappedKeyT&& value) { m_wrappedKeyHasBeenSet = true; m_wrappedKey = std::forward<WrappedKeyT>(value); }
    template<typename WrappedKeyT = WrappedKey>
    EncryptDataRequest& WithWrappedKey(WrappedKeyT&& value) { SetWrappedKey(std::forward<WrappedKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyIdentifier;
    bool m_keyIdentifierHasBeenSet = false;

    Aws::String m_plainText;
    bool m_plainTextHasBeenSet = false;

    EncryptionDecryptionAttributes m_encryptionAttributes;
    bool m_encryptionAttributesHasBeenSet = false;

    WrappedKey m_wrappedKey;
    bool m_wrappedKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
