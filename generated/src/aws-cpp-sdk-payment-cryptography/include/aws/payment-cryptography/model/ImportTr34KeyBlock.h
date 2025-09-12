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
    AWS_PAYMENTCRYPTOGRAPHY_API ImportTr34KeyBlock() = default;
    AWS_PAYMENTCRYPTOGRAPHY_API ImportTr34KeyBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API ImportTr34KeyBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>KeyARN</code> of the certificate chain that signs the signing key
     * certificate during TR-34 key import.</p>
     */
    inline const Aws::String& GetCertificateAuthorityPublicKeyIdentifier() const { return m_certificateAuthorityPublicKeyIdentifier; }
    inline bool CertificateAuthorityPublicKeyIdentifierHasBeenSet() const { return m_certificateAuthorityPublicKeyIdentifierHasBeenSet; }
    template<typename CertificateAuthorityPublicKeyIdentifierT = Aws::String>
    void SetCertificateAuthorityPublicKeyIdentifier(CertificateAuthorityPublicKeyIdentifierT&& value) { m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true; m_certificateAuthorityPublicKeyIdentifier = std::forward<CertificateAuthorityPublicKeyIdentifierT>(value); }
    template<typename CertificateAuthorityPublicKeyIdentifierT = Aws::String>
    ImportTr34KeyBlock& WithCertificateAuthorityPublicKeyIdentifier(CertificateAuthorityPublicKeyIdentifierT&& value) { SetCertificateAuthorityPublicKeyIdentifier(std::forward<CertificateAuthorityPublicKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public key component in PEM certificate format of the private key that
     * signs the KDH TR-34 WrappedKeyBlock.</p>
     */
    inline const Aws::String& GetSigningKeyCertificate() const { return m_signingKeyCertificate; }
    inline bool SigningKeyCertificateHasBeenSet() const { return m_signingKeyCertificateHasBeenSet; }
    template<typename SigningKeyCertificateT = Aws::String>
    void SetSigningKeyCertificate(SigningKeyCertificateT&& value) { m_signingKeyCertificateHasBeenSet = true; m_signingKeyCertificate = std::forward<SigningKeyCertificateT>(value); }
    template<typename SigningKeyCertificateT = Aws::String>
    ImportTr34KeyBlock& WithSigningKeyCertificate(SigningKeyCertificateT&& value) { SetSigningKeyCertificate(std::forward<SigningKeyCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The import token that initiates key import using the asymmetric TR-34 key
     * exchange method into Amazon Web Services Payment Cryptography. It expires after
     * 30 days. You can use the same import token to import multiple keys to the same
     * service account.</p>
     */
    inline const Aws::String& GetImportToken() const { return m_importToken; }
    inline bool ImportTokenHasBeenSet() const { return m_importTokenHasBeenSet; }
    template<typename ImportTokenT = Aws::String>
    void SetImportToken(ImportTokenT&& value) { m_importTokenHasBeenSet = true; m_importToken = std::forward<ImportTokenT>(value); }
    template<typename ImportTokenT = Aws::String>
    ImportTr34KeyBlock& WithImportToken(ImportTokenT&& value) { SetImportToken(std::forward<ImportTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key Identifier used for unwrapping the import key</p>
     */
    inline const Aws::String& GetWrappingKeyIdentifier() const { return m_wrappingKeyIdentifier; }
    inline bool WrappingKeyIdentifierHasBeenSet() const { return m_wrappingKeyIdentifierHasBeenSet; }
    template<typename WrappingKeyIdentifierT = Aws::String>
    void SetWrappingKeyIdentifier(WrappingKeyIdentifierT&& value) { m_wrappingKeyIdentifierHasBeenSet = true; m_wrappingKeyIdentifier = std::forward<WrappingKeyIdentifierT>(value); }
    template<typename WrappingKeyIdentifierT = Aws::String>
    ImportTr34KeyBlock& WithWrappingKeyIdentifier(WrappingKeyIdentifierT&& value) { SetWrappingKeyIdentifier(std::forward<WrappingKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key Identifier used for unwrapping the import key</p>
     */
    inline const Aws::String& GetWrappingKeyCertificate() const { return m_wrappingKeyCertificate; }
    inline bool WrappingKeyCertificateHasBeenSet() const { return m_wrappingKeyCertificateHasBeenSet; }
    template<typename WrappingKeyCertificateT = Aws::String>
    void SetWrappingKeyCertificate(WrappingKeyCertificateT&& value) { m_wrappingKeyCertificateHasBeenSet = true; m_wrappingKeyCertificate = std::forward<WrappingKeyCertificateT>(value); }
    template<typename WrappingKeyCertificateT = Aws::String>
    ImportTr34KeyBlock& WithWrappingKeyCertificate(WrappingKeyCertificateT&& value) { SetWrappingKeyCertificate(std::forward<WrappingKeyCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TR-34 wrapped key block to import.</p>
     */
    inline const Aws::String& GetWrappedKeyBlock() const { return m_wrappedKeyBlock; }
    inline bool WrappedKeyBlockHasBeenSet() const { return m_wrappedKeyBlockHasBeenSet; }
    template<typename WrappedKeyBlockT = Aws::String>
    void SetWrappedKeyBlock(WrappedKeyBlockT&& value) { m_wrappedKeyBlockHasBeenSet = true; m_wrappedKeyBlock = std::forward<WrappedKeyBlockT>(value); }
    template<typename WrappedKeyBlockT = Aws::String>
    ImportTr34KeyBlock& WithWrappedKeyBlock(WrappedKeyBlockT&& value) { SetWrappedKeyBlock(std::forward<WrappedKeyBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key block format to use during key import. The only value allowed is
     * <code>X9_TR34_2012</code>.</p>
     */
    inline Tr34KeyBlockFormat GetKeyBlockFormat() const { return m_keyBlockFormat; }
    inline bool KeyBlockFormatHasBeenSet() const { return m_keyBlockFormatHasBeenSet; }
    inline void SetKeyBlockFormat(Tr34KeyBlockFormat value) { m_keyBlockFormatHasBeenSet = true; m_keyBlockFormat = value; }
    inline ImportTr34KeyBlock& WithKeyBlockFormat(Tr34KeyBlockFormat value) { SetKeyBlockFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A random number value that is unique to the TR-34 key block generated using 2
     * pass. The operation will fail, if a random nonce value is not provided for a
     * TR-34 key block generated using 2 pass.</p>
     */
    inline const Aws::String& GetRandomNonce() const { return m_randomNonce; }
    inline bool RandomNonceHasBeenSet() const { return m_randomNonceHasBeenSet; }
    template<typename RandomNonceT = Aws::String>
    void SetRandomNonce(RandomNonceT&& value) { m_randomNonceHasBeenSet = true; m_randomNonce = std::forward<RandomNonceT>(value); }
    template<typename RandomNonceT = Aws::String>
    ImportTr34KeyBlock& WithRandomNonce(RandomNonceT&& value) { SetRandomNonce(std::forward<RandomNonceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateAuthorityPublicKeyIdentifier;
    bool m_certificateAuthorityPublicKeyIdentifierHasBeenSet = false;

    Aws::String m_signingKeyCertificate;
    bool m_signingKeyCertificateHasBeenSet = false;

    Aws::String m_importToken;
    bool m_importTokenHasBeenSet = false;

    Aws::String m_wrappingKeyIdentifier;
    bool m_wrappingKeyIdentifierHasBeenSet = false;

    Aws::String m_wrappingKeyCertificate;
    bool m_wrappingKeyCertificateHasBeenSet = false;

    Aws::String m_wrappedKeyBlock;
    bool m_wrappedKeyBlockHasBeenSet = false;

    Tr34KeyBlockFormat m_keyBlockFormat{Tr34KeyBlockFormat::NOT_SET};
    bool m_keyBlockFormatHasBeenSet = false;

    Aws::String m_randomNonce;
    bool m_randomNonceHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
