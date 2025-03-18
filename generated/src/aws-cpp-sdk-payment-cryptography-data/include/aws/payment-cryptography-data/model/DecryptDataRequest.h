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
  class DecryptDataRequest : public PaymentCryptographyDataRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DecryptDataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DecryptData"; }

    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses for ciphertext decryption.</p> <p>When a
     * WrappedKeyBlock is provided, this value will be the identifier to the key
     * wrapping key. Otherwise, it is the key identifier used to perform the
     * operation.</p>
     */
    inline const Aws::String& GetKeyIdentifier() const { return m_keyIdentifier; }
    inline bool KeyIdentifierHasBeenSet() const { return m_keyIdentifierHasBeenSet; }
    template<typename KeyIdentifierT = Aws::String>
    void SetKeyIdentifier(KeyIdentifierT&& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = std::forward<KeyIdentifierT>(value); }
    template<typename KeyIdentifierT = Aws::String>
    DecryptDataRequest& WithKeyIdentifier(KeyIdentifierT&& value) { SetKeyIdentifier(std::forward<KeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ciphertext to decrypt.</p>
     */
    inline const Aws::String& GetCipherText() const { return m_cipherText; }
    inline bool CipherTextHasBeenSet() const { return m_cipherTextHasBeenSet; }
    template<typename CipherTextT = Aws::String>
    void SetCipherText(CipherTextT&& value) { m_cipherTextHasBeenSet = true; m_cipherText = std::forward<CipherTextT>(value); }
    template<typename CipherTextT = Aws::String>
    DecryptDataRequest& WithCipherText(CipherTextT&& value) { SetCipherText(std::forward<CipherTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption key type and attributes for ciphertext decryption.</p>
     */
    inline const EncryptionDecryptionAttributes& GetDecryptionAttributes() const { return m_decryptionAttributes; }
    inline bool DecryptionAttributesHasBeenSet() const { return m_decryptionAttributesHasBeenSet; }
    template<typename DecryptionAttributesT = EncryptionDecryptionAttributes>
    void SetDecryptionAttributes(DecryptionAttributesT&& value) { m_decryptionAttributesHasBeenSet = true; m_decryptionAttributes = std::forward<DecryptionAttributesT>(value); }
    template<typename DecryptionAttributesT = EncryptionDecryptionAttributes>
    DecryptDataRequest& WithDecryptionAttributes(DecryptionAttributesT&& value) { SetDecryptionAttributes(std::forward<DecryptionAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The WrappedKeyBlock containing the encryption key for ciphertext
     * decryption.</p>
     */
    inline const WrappedKey& GetWrappedKey() const { return m_wrappedKey; }
    inline bool WrappedKeyHasBeenSet() const { return m_wrappedKeyHasBeenSet; }
    template<typename WrappedKeyT = WrappedKey>
    void SetWrappedKey(WrappedKeyT&& value) { m_wrappedKeyHasBeenSet = true; m_wrappedKey = std::forward<WrappedKeyT>(value); }
    template<typename WrappedKeyT = WrappedKey>
    DecryptDataRequest& WithWrappedKey(WrappedKeyT&& value) { SetWrappedKey(std::forward<WrappedKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyIdentifier;
    bool m_keyIdentifierHasBeenSet = false;

    Aws::String m_cipherText;
    bool m_cipherTextHasBeenSet = false;

    EncryptionDecryptionAttributes m_decryptionAttributes;
    bool m_decryptionAttributesHasBeenSet = false;

    WrappedKey m_wrappedKey;
    bool m_wrappedKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
