/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataRequest.h>
#include <aws/payment-cryptography-data/model/EncryptionDecryptionAttributes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EncryptDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EncryptData"; }

    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String SerializePayload() const override;


    /**
     * <p>The encryption key type and attributes for plaintext encryption.</p>
     */
    inline const EncryptionDecryptionAttributes& GetEncryptionAttributes() const{ return m_encryptionAttributes; }

    /**
     * <p>The encryption key type and attributes for plaintext encryption.</p>
     */
    inline bool EncryptionAttributesHasBeenSet() const { return m_encryptionAttributesHasBeenSet; }

    /**
     * <p>The encryption key type and attributes for plaintext encryption.</p>
     */
    inline void SetEncryptionAttributes(const EncryptionDecryptionAttributes& value) { m_encryptionAttributesHasBeenSet = true; m_encryptionAttributes = value; }

    /**
     * <p>The encryption key type and attributes for plaintext encryption.</p>
     */
    inline void SetEncryptionAttributes(EncryptionDecryptionAttributes&& value) { m_encryptionAttributesHasBeenSet = true; m_encryptionAttributes = std::move(value); }

    /**
     * <p>The encryption key type and attributes for plaintext encryption.</p>
     */
    inline EncryptDataRequest& WithEncryptionAttributes(const EncryptionDecryptionAttributes& value) { SetEncryptionAttributes(value); return *this;}

    /**
     * <p>The encryption key type and attributes for plaintext encryption.</p>
     */
    inline EncryptDataRequest& WithEncryptionAttributes(EncryptionDecryptionAttributes&& value) { SetEncryptionAttributes(std::move(value)); return *this;}


    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses for plaintext encryption.</p>
     */
    inline const Aws::String& GetKeyIdentifier() const{ return m_keyIdentifier; }

    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses for plaintext encryption.</p>
     */
    inline bool KeyIdentifierHasBeenSet() const { return m_keyIdentifierHasBeenSet; }

    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses for plaintext encryption.</p>
     */
    inline void SetKeyIdentifier(const Aws::String& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = value; }

    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses for plaintext encryption.</p>
     */
    inline void SetKeyIdentifier(Aws::String&& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = std::move(value); }

    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses for plaintext encryption.</p>
     */
    inline void SetKeyIdentifier(const char* value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier.assign(value); }

    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses for plaintext encryption.</p>
     */
    inline EncryptDataRequest& WithKeyIdentifier(const Aws::String& value) { SetKeyIdentifier(value); return *this;}

    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses for plaintext encryption.</p>
     */
    inline EncryptDataRequest& WithKeyIdentifier(Aws::String&& value) { SetKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses for plaintext encryption.</p>
     */
    inline EncryptDataRequest& WithKeyIdentifier(const char* value) { SetKeyIdentifier(value); return *this;}


    /**
     * <p>The plaintext to be encrypted.</p>  <p>For encryption using asymmetric
     * keys, plaintext data length is constrained by encryption key strength that you
     * define in <code>KeyAlgorithm</code> and padding type that you define in
     * <code>AsymmetricEncryptionAttributes</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/encrypt-data.html">Encrypt
     * data</a> in the <i>Amazon Web Services Payment Cryptography User Guide</i>.</p>
     * 
     */
    inline const Aws::String& GetPlainText() const{ return m_plainText; }

    /**
     * <p>The plaintext to be encrypted.</p>  <p>For encryption using asymmetric
     * keys, plaintext data length is constrained by encryption key strength that you
     * define in <code>KeyAlgorithm</code> and padding type that you define in
     * <code>AsymmetricEncryptionAttributes</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/encrypt-data.html">Encrypt
     * data</a> in the <i>Amazon Web Services Payment Cryptography User Guide</i>.</p>
     * 
     */
    inline bool PlainTextHasBeenSet() const { return m_plainTextHasBeenSet; }

    /**
     * <p>The plaintext to be encrypted.</p>  <p>For encryption using asymmetric
     * keys, plaintext data length is constrained by encryption key strength that you
     * define in <code>KeyAlgorithm</code> and padding type that you define in
     * <code>AsymmetricEncryptionAttributes</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/encrypt-data.html">Encrypt
     * data</a> in the <i>Amazon Web Services Payment Cryptography User Guide</i>.</p>
     * 
     */
    inline void SetPlainText(const Aws::String& value) { m_plainTextHasBeenSet = true; m_plainText = value; }

    /**
     * <p>The plaintext to be encrypted.</p>  <p>For encryption using asymmetric
     * keys, plaintext data length is constrained by encryption key strength that you
     * define in <code>KeyAlgorithm</code> and padding type that you define in
     * <code>AsymmetricEncryptionAttributes</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/encrypt-data.html">Encrypt
     * data</a> in the <i>Amazon Web Services Payment Cryptography User Guide</i>.</p>
     * 
     */
    inline void SetPlainText(Aws::String&& value) { m_plainTextHasBeenSet = true; m_plainText = std::move(value); }

    /**
     * <p>The plaintext to be encrypted.</p>  <p>For encryption using asymmetric
     * keys, plaintext data length is constrained by encryption key strength that you
     * define in <code>KeyAlgorithm</code> and padding type that you define in
     * <code>AsymmetricEncryptionAttributes</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/encrypt-data.html">Encrypt
     * data</a> in the <i>Amazon Web Services Payment Cryptography User Guide</i>.</p>
     * 
     */
    inline void SetPlainText(const char* value) { m_plainTextHasBeenSet = true; m_plainText.assign(value); }

    /**
     * <p>The plaintext to be encrypted.</p>  <p>For encryption using asymmetric
     * keys, plaintext data length is constrained by encryption key strength that you
     * define in <code>KeyAlgorithm</code> and padding type that you define in
     * <code>AsymmetricEncryptionAttributes</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/encrypt-data.html">Encrypt
     * data</a> in the <i>Amazon Web Services Payment Cryptography User Guide</i>.</p>
     * 
     */
    inline EncryptDataRequest& WithPlainText(const Aws::String& value) { SetPlainText(value); return *this;}

    /**
     * <p>The plaintext to be encrypted.</p>  <p>For encryption using asymmetric
     * keys, plaintext data length is constrained by encryption key strength that you
     * define in <code>KeyAlgorithm</code> and padding type that you define in
     * <code>AsymmetricEncryptionAttributes</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/encrypt-data.html">Encrypt
     * data</a> in the <i>Amazon Web Services Payment Cryptography User Guide</i>.</p>
     * 
     */
    inline EncryptDataRequest& WithPlainText(Aws::String&& value) { SetPlainText(std::move(value)); return *this;}

    /**
     * <p>The plaintext to be encrypted.</p>  <p>For encryption using asymmetric
     * keys, plaintext data length is constrained by encryption key strength that you
     * define in <code>KeyAlgorithm</code> and padding type that you define in
     * <code>AsymmetricEncryptionAttributes</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/encrypt-data.html">Encrypt
     * data</a> in the <i>Amazon Web Services Payment Cryptography User Guide</i>.</p>
     * 
     */
    inline EncryptDataRequest& WithPlainText(const char* value) { SetPlainText(value); return *this;}

  private:

    EncryptionDecryptionAttributes m_encryptionAttributes;
    bool m_encryptionAttributesHasBeenSet = false;

    Aws::String m_keyIdentifier;
    bool m_keyIdentifierHasBeenSet = false;

    Aws::String m_plainText;
    bool m_plainTextHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
