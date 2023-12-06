/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography/model/Tr34KeyBlockFormat.h>
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
namespace PaymentCryptography
{
namespace Model
{

  /**
   * <p>Parameter information for key material import using the asymmetric TR-34 key
   * exchange method.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/ImportTr34KeyBlock">AWS
   * API Reference</a></p>
   */
  class ImportTr34KeyBlock
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API ImportTr34KeyBlock();
    AWS_PAYMENTCRYPTOGRAPHY_API ImportTr34KeyBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API ImportTr34KeyBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>KeyARN</code> of the certificate chain that signs the signing key
     * certificate during TR-34 key import.</p>
     */
    inline const Aws::String& GetCertificateAuthorityPublicKeyIdentifier() const{ return m_certificateAuthorityPublicKeyIdentifier; }

    /**
     * <p>The <code>KeyARN</code> of the certificate chain that signs the signing key
     * certificate during TR-34 key import.</p>
     */
    inline bool CertificateAuthorityPublicKeyIdentifierHasBeenSet() const { return m_certificateAuthorityPublicKeyIdentifierHasBeenSet; }

    /**
     * <p>The <code>KeyARN</code> of the certificate chain that signs the signing key
     * certificate during TR-34 key import.</p>
     */
    inline void SetCertificateAuthorityPublicKeyIdentifier(const Aws::String& value) { m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true; m_certificateAuthorityPublicKeyIdentifier = value; }

    /**
     * <p>The <code>KeyARN</code> of the certificate chain that signs the signing key
     * certificate during TR-34 key import.</p>
     */
    inline void SetCertificateAuthorityPublicKeyIdentifier(Aws::String&& value) { m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true; m_certificateAuthorityPublicKeyIdentifier = std::move(value); }

    /**
     * <p>The <code>KeyARN</code> of the certificate chain that signs the signing key
     * certificate during TR-34 key import.</p>
     */
    inline void SetCertificateAuthorityPublicKeyIdentifier(const char* value) { m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true; m_certificateAuthorityPublicKeyIdentifier.assign(value); }

    /**
     * <p>The <code>KeyARN</code> of the certificate chain that signs the signing key
     * certificate during TR-34 key import.</p>
     */
    inline ImportTr34KeyBlock& WithCertificateAuthorityPublicKeyIdentifier(const Aws::String& value) { SetCertificateAuthorityPublicKeyIdentifier(value); return *this;}

    /**
     * <p>The <code>KeyARN</code> of the certificate chain that signs the signing key
     * certificate during TR-34 key import.</p>
     */
    inline ImportTr34KeyBlock& WithCertificateAuthorityPublicKeyIdentifier(Aws::String&& value) { SetCertificateAuthorityPublicKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>KeyARN</code> of the certificate chain that signs the signing key
     * certificate during TR-34 key import.</p>
     */
    inline ImportTr34KeyBlock& WithCertificateAuthorityPublicKeyIdentifier(const char* value) { SetCertificateAuthorityPublicKeyIdentifier(value); return *this;}


    /**
     * <p>The import token that initiates key import using the asymmetric TR-34 key
     * exchange method into Amazon Web Services Payment Cryptography. It expires after
     * 7 days. You can use the same import token to import multiple keys to the same
     * service account.</p>
     */
    inline const Aws::String& GetImportToken() const{ return m_importToken; }

    /**
     * <p>The import token that initiates key import using the asymmetric TR-34 key
     * exchange method into Amazon Web Services Payment Cryptography. It expires after
     * 7 days. You can use the same import token to import multiple keys to the same
     * service account.</p>
     */
    inline bool ImportTokenHasBeenSet() const { return m_importTokenHasBeenSet; }

    /**
     * <p>The import token that initiates key import using the asymmetric TR-34 key
     * exchange method into Amazon Web Services Payment Cryptography. It expires after
     * 7 days. You can use the same import token to import multiple keys to the same
     * service account.</p>
     */
    inline void SetImportToken(const Aws::String& value) { m_importTokenHasBeenSet = true; m_importToken = value; }

    /**
     * <p>The import token that initiates key import using the asymmetric TR-34 key
     * exchange method into Amazon Web Services Payment Cryptography. It expires after
     * 7 days. You can use the same import token to import multiple keys to the same
     * service account.</p>
     */
    inline void SetImportToken(Aws::String&& value) { m_importTokenHasBeenSet = true; m_importToken = std::move(value); }

    /**
     * <p>The import token that initiates key import using the asymmetric TR-34 key
     * exchange method into Amazon Web Services Payment Cryptography. It expires after
     * 7 days. You can use the same import token to import multiple keys to the same
     * service account.</p>
     */
    inline void SetImportToken(const char* value) { m_importTokenHasBeenSet = true; m_importToken.assign(value); }

    /**
     * <p>The import token that initiates key import using the asymmetric TR-34 key
     * exchange method into Amazon Web Services Payment Cryptography. It expires after
     * 7 days. You can use the same import token to import multiple keys to the same
     * service account.</p>
     */
    inline ImportTr34KeyBlock& WithImportToken(const Aws::String& value) { SetImportToken(value); return *this;}

    /**
     * <p>The import token that initiates key import using the asymmetric TR-34 key
     * exchange method into Amazon Web Services Payment Cryptography. It expires after
     * 7 days. You can use the same import token to import multiple keys to the same
     * service account.</p>
     */
    inline ImportTr34KeyBlock& WithImportToken(Aws::String&& value) { SetImportToken(std::move(value)); return *this;}

    /**
     * <p>The import token that initiates key import using the asymmetric TR-34 key
     * exchange method into Amazon Web Services Payment Cryptography. It expires after
     * 7 days. You can use the same import token to import multiple keys to the same
     * service account.</p>
     */
    inline ImportTr34KeyBlock& WithImportToken(const char* value) { SetImportToken(value); return *this;}


    /**
     * <p>The key block format to use during key import. The only value allowed is
     * <code>X9_TR34_2012</code>.</p>
     */
    inline const Tr34KeyBlockFormat& GetKeyBlockFormat() const{ return m_keyBlockFormat; }

    /**
     * <p>The key block format to use during key import. The only value allowed is
     * <code>X9_TR34_2012</code>.</p>
     */
    inline bool KeyBlockFormatHasBeenSet() const { return m_keyBlockFormatHasBeenSet; }

    /**
     * <p>The key block format to use during key import. The only value allowed is
     * <code>X9_TR34_2012</code>.</p>
     */
    inline void SetKeyBlockFormat(const Tr34KeyBlockFormat& value) { m_keyBlockFormatHasBeenSet = true; m_keyBlockFormat = value; }

    /**
     * <p>The key block format to use during key import. The only value allowed is
     * <code>X9_TR34_2012</code>.</p>
     */
    inline void SetKeyBlockFormat(Tr34KeyBlockFormat&& value) { m_keyBlockFormatHasBeenSet = true; m_keyBlockFormat = std::move(value); }

    /**
     * <p>The key block format to use during key import. The only value allowed is
     * <code>X9_TR34_2012</code>.</p>
     */
    inline ImportTr34KeyBlock& WithKeyBlockFormat(const Tr34KeyBlockFormat& value) { SetKeyBlockFormat(value); return *this;}

    /**
     * <p>The key block format to use during key import. The only value allowed is
     * <code>X9_TR34_2012</code>.</p>
     */
    inline ImportTr34KeyBlock& WithKeyBlockFormat(Tr34KeyBlockFormat&& value) { SetKeyBlockFormat(std::move(value)); return *this;}


    /**
     * <p>A random number value that is unique to the TR-34 key block generated using 2
     * pass. The operation will fail, if a random nonce value is not provided for a
     * TR-34 key block generated using 2 pass.</p>
     */
    inline const Aws::String& GetRandomNonce() const{ return m_randomNonce; }

    /**
     * <p>A random number value that is unique to the TR-34 key block generated using 2
     * pass. The operation will fail, if a random nonce value is not provided for a
     * TR-34 key block generated using 2 pass.</p>
     */
    inline bool RandomNonceHasBeenSet() const { return m_randomNonceHasBeenSet; }

    /**
     * <p>A random number value that is unique to the TR-34 key block generated using 2
     * pass. The operation will fail, if a random nonce value is not provided for a
     * TR-34 key block generated using 2 pass.</p>
     */
    inline void SetRandomNonce(const Aws::String& value) { m_randomNonceHasBeenSet = true; m_randomNonce = value; }

    /**
     * <p>A random number value that is unique to the TR-34 key block generated using 2
     * pass. The operation will fail, if a random nonce value is not provided for a
     * TR-34 key block generated using 2 pass.</p>
     */
    inline void SetRandomNonce(Aws::String&& value) { m_randomNonceHasBeenSet = true; m_randomNonce = std::move(value); }

    /**
     * <p>A random number value that is unique to the TR-34 key block generated using 2
     * pass. The operation will fail, if a random nonce value is not provided for a
     * TR-34 key block generated using 2 pass.</p>
     */
    inline void SetRandomNonce(const char* value) { m_randomNonceHasBeenSet = true; m_randomNonce.assign(value); }

    /**
     * <p>A random number value that is unique to the TR-34 key block generated using 2
     * pass. The operation will fail, if a random nonce value is not provided for a
     * TR-34 key block generated using 2 pass.</p>
     */
    inline ImportTr34KeyBlock& WithRandomNonce(const Aws::String& value) { SetRandomNonce(value); return *this;}

    /**
     * <p>A random number value that is unique to the TR-34 key block generated using 2
     * pass. The operation will fail, if a random nonce value is not provided for a
     * TR-34 key block generated using 2 pass.</p>
     */
    inline ImportTr34KeyBlock& WithRandomNonce(Aws::String&& value) { SetRandomNonce(std::move(value)); return *this;}

    /**
     * <p>A random number value that is unique to the TR-34 key block generated using 2
     * pass. The operation will fail, if a random nonce value is not provided for a
     * TR-34 key block generated using 2 pass.</p>
     */
    inline ImportTr34KeyBlock& WithRandomNonce(const char* value) { SetRandomNonce(value); return *this;}


    /**
     * <p>The public key component in PEM certificate format of the private key that
     * signs the KDH TR-34 WrappedKeyBlock.</p>
     */
    inline const Aws::String& GetSigningKeyCertificate() const{ return m_signingKeyCertificate; }

    /**
     * <p>The public key component in PEM certificate format of the private key that
     * signs the KDH TR-34 WrappedKeyBlock.</p>
     */
    inline bool SigningKeyCertificateHasBeenSet() const { return m_signingKeyCertificateHasBeenSet; }

    /**
     * <p>The public key component in PEM certificate format of the private key that
     * signs the KDH TR-34 WrappedKeyBlock.</p>
     */
    inline void SetSigningKeyCertificate(const Aws::String& value) { m_signingKeyCertificateHasBeenSet = true; m_signingKeyCertificate = value; }

    /**
     * <p>The public key component in PEM certificate format of the private key that
     * signs the KDH TR-34 WrappedKeyBlock.</p>
     */
    inline void SetSigningKeyCertificate(Aws::String&& value) { m_signingKeyCertificateHasBeenSet = true; m_signingKeyCertificate = std::move(value); }

    /**
     * <p>The public key component in PEM certificate format of the private key that
     * signs the KDH TR-34 WrappedKeyBlock.</p>
     */
    inline void SetSigningKeyCertificate(const char* value) { m_signingKeyCertificateHasBeenSet = true; m_signingKeyCertificate.assign(value); }

    /**
     * <p>The public key component in PEM certificate format of the private key that
     * signs the KDH TR-34 WrappedKeyBlock.</p>
     */
    inline ImportTr34KeyBlock& WithSigningKeyCertificate(const Aws::String& value) { SetSigningKeyCertificate(value); return *this;}

    /**
     * <p>The public key component in PEM certificate format of the private key that
     * signs the KDH TR-34 WrappedKeyBlock.</p>
     */
    inline ImportTr34KeyBlock& WithSigningKeyCertificate(Aws::String&& value) { SetSigningKeyCertificate(std::move(value)); return *this;}

    /**
     * <p>The public key component in PEM certificate format of the private key that
     * signs the KDH TR-34 WrappedKeyBlock.</p>
     */
    inline ImportTr34KeyBlock& WithSigningKeyCertificate(const char* value) { SetSigningKeyCertificate(value); return *this;}


    /**
     * <p>The TR-34 wrapped key block to import.</p>
     */
    inline const Aws::String& GetWrappedKeyBlock() const{ return m_wrappedKeyBlock; }

    /**
     * <p>The TR-34 wrapped key block to import.</p>
     */
    inline bool WrappedKeyBlockHasBeenSet() const { return m_wrappedKeyBlockHasBeenSet; }

    /**
     * <p>The TR-34 wrapped key block to import.</p>
     */
    inline void SetWrappedKeyBlock(const Aws::String& value) { m_wrappedKeyBlockHasBeenSet = true; m_wrappedKeyBlock = value; }

    /**
     * <p>The TR-34 wrapped key block to import.</p>
     */
    inline void SetWrappedKeyBlock(Aws::String&& value) { m_wrappedKeyBlockHasBeenSet = true; m_wrappedKeyBlock = std::move(value); }

    /**
     * <p>The TR-34 wrapped key block to import.</p>
     */
    inline void SetWrappedKeyBlock(const char* value) { m_wrappedKeyBlockHasBeenSet = true; m_wrappedKeyBlock.assign(value); }

    /**
     * <p>The TR-34 wrapped key block to import.</p>
     */
    inline ImportTr34KeyBlock& WithWrappedKeyBlock(const Aws::String& value) { SetWrappedKeyBlock(value); return *this;}

    /**
     * <p>The TR-34 wrapped key block to import.</p>
     */
    inline ImportTr34KeyBlock& WithWrappedKeyBlock(Aws::String&& value) { SetWrappedKeyBlock(std::move(value)); return *this;}

    /**
     * <p>The TR-34 wrapped key block to import.</p>
     */
    inline ImportTr34KeyBlock& WithWrappedKeyBlock(const char* value) { SetWrappedKeyBlock(value); return *this;}

  private:

    Aws::String m_certificateAuthorityPublicKeyIdentifier;
    bool m_certificateAuthorityPublicKeyIdentifierHasBeenSet = false;

    Aws::String m_importToken;
    bool m_importTokenHasBeenSet = false;

    Tr34KeyBlockFormat m_keyBlockFormat;
    bool m_keyBlockFormatHasBeenSet = false;

    Aws::String m_randomNonce;
    bool m_randomNonceHasBeenSet = false;

    Aws::String m_signingKeyCertificate;
    bool m_signingKeyCertificateHasBeenSet = false;

    Aws::String m_wrappedKeyBlock;
    bool m_wrappedKeyBlockHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
