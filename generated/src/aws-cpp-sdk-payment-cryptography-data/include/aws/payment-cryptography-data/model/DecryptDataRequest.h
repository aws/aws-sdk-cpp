/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/EncryptionDecryptionAttributes.h>
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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DecryptDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DecryptData"; }

    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String SerializePayload() const override;


    /**
     * <p>The ciphertext to decrypt.</p>
     */
    inline const Aws::String& GetCipherText() const{ return m_cipherText; }

    /**
     * <p>The ciphertext to decrypt.</p>
     */
    inline bool CipherTextHasBeenSet() const { return m_cipherTextHasBeenSet; }

    /**
     * <p>The ciphertext to decrypt.</p>
     */
    inline void SetCipherText(const Aws::String& value) { m_cipherTextHasBeenSet = true; m_cipherText = value; }

    /**
     * <p>The ciphertext to decrypt.</p>
     */
    inline void SetCipherText(Aws::String&& value) { m_cipherTextHasBeenSet = true; m_cipherText = std::move(value); }

    /**
     * <p>The ciphertext to decrypt.</p>
     */
    inline void SetCipherText(const char* value) { m_cipherTextHasBeenSet = true; m_cipherText.assign(value); }

    /**
     * <p>The ciphertext to decrypt.</p>
     */
    inline DecryptDataRequest& WithCipherText(const Aws::String& value) { SetCipherText(value); return *this;}

    /**
     * <p>The ciphertext to decrypt.</p>
     */
    inline DecryptDataRequest& WithCipherText(Aws::String&& value) { SetCipherText(std::move(value)); return *this;}

    /**
     * <p>The ciphertext to decrypt.</p>
     */
    inline DecryptDataRequest& WithCipherText(const char* value) { SetCipherText(value); return *this;}


    /**
     * <p>The encryption key type and attributes for ciphertext decryption.</p>
     */
    inline const EncryptionDecryptionAttributes& GetDecryptionAttributes() const{ return m_decryptionAttributes; }

    /**
     * <p>The encryption key type and attributes for ciphertext decryption.</p>
     */
    inline bool DecryptionAttributesHasBeenSet() const { return m_decryptionAttributesHasBeenSet; }

    /**
     * <p>The encryption key type and attributes for ciphertext decryption.</p>
     */
    inline void SetDecryptionAttributes(const EncryptionDecryptionAttributes& value) { m_decryptionAttributesHasBeenSet = true; m_decryptionAttributes = value; }

    /**
     * <p>The encryption key type and attributes for ciphertext decryption.</p>
     */
    inline void SetDecryptionAttributes(EncryptionDecryptionAttributes&& value) { m_decryptionAttributesHasBeenSet = true; m_decryptionAttributes = std::move(value); }

    /**
     * <p>The encryption key type and attributes for ciphertext decryption.</p>
     */
    inline DecryptDataRequest& WithDecryptionAttributes(const EncryptionDecryptionAttributes& value) { SetDecryptionAttributes(value); return *this;}

    /**
     * <p>The encryption key type and attributes for ciphertext decryption.</p>
     */
    inline DecryptDataRequest& WithDecryptionAttributes(EncryptionDecryptionAttributes&& value) { SetDecryptionAttributes(std::move(value)); return *this;}


    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses for ciphertext decryption.</p>
     */
    inline const Aws::String& GetKeyIdentifier() const{ return m_keyIdentifier; }

    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses for ciphertext decryption.</p>
     */
    inline bool KeyIdentifierHasBeenSet() const { return m_keyIdentifierHasBeenSet; }

    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses for ciphertext decryption.</p>
     */
    inline void SetKeyIdentifier(const Aws::String& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = value; }

    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses for ciphertext decryption.</p>
     */
    inline void SetKeyIdentifier(Aws::String&& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = std::move(value); }

    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses for ciphertext decryption.</p>
     */
    inline void SetKeyIdentifier(const char* value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier.assign(value); }

    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses for ciphertext decryption.</p>
     */
    inline DecryptDataRequest& WithKeyIdentifier(const Aws::String& value) { SetKeyIdentifier(value); return *this;}

    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses for ciphertext decryption.</p>
     */
    inline DecryptDataRequest& WithKeyIdentifier(Aws::String&& value) { SetKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses for ciphertext decryption.</p>
     */
    inline DecryptDataRequest& WithKeyIdentifier(const char* value) { SetKeyIdentifier(value); return *this;}

  private:

    Aws::String m_cipherText;
    bool m_cipherTextHasBeenSet = false;

    EncryptionDecryptionAttributes m_decryptionAttributes;
    bool m_decryptionAttributesHasBeenSet = false;

    Aws::String m_keyIdentifier;
    bool m_keyIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
