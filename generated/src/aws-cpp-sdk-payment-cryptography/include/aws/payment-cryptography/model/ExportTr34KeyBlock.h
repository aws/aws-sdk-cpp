/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography/model/Tr34KeyBlockFormat.h>
#include <aws/payment-cryptography/model/KeyBlockHeaders.h>
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
   * <p>Parameter information for key material export using the asymmetric TR-34 key
   * exchange method.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/ExportTr34KeyBlock">AWS
   * API Reference</a></p>
   */
  class ExportTr34KeyBlock
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API ExportTr34KeyBlock() = default;
    AWS_PAYMENTCRYPTOGRAPHY_API ExportTr34KeyBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API ExportTr34KeyBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>KeyARN</code> of the certificate chain that signs the wrapping key
     * certificate during TR-34 key export.</p>
     */
    inline const Aws::String& GetCertificateAuthorityPublicKeyIdentifier() const { return m_certificateAuthorityPublicKeyIdentifier; }
    inline bool CertificateAuthorityPublicKeyIdentifierHasBeenSet() const { return m_certificateAuthorityPublicKeyIdentifierHasBeenSet; }
    template<typename CertificateAuthorityPublicKeyIdentifierT = Aws::String>
    void SetCertificateAuthorityPublicKeyIdentifier(CertificateAuthorityPublicKeyIdentifierT&& value) { m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true; m_certificateAuthorityPublicKeyIdentifier = std::forward<CertificateAuthorityPublicKeyIdentifierT>(value); }
    template<typename CertificateAuthorityPublicKeyIdentifierT = Aws::String>
    ExportTr34KeyBlock& WithCertificateAuthorityPublicKeyIdentifier(CertificateAuthorityPublicKeyIdentifierT&& value) { SetCertificateAuthorityPublicKeyIdentifier(std::forward<CertificateAuthorityPublicKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>KeyARN</code> of the wrapping key certificate. Amazon Web Services
     * Payment Cryptography uses this certificate to wrap the key under export.</p>
     */
    inline const Aws::String& GetWrappingKeyCertificate() const { return m_wrappingKeyCertificate; }
    inline bool WrappingKeyCertificateHasBeenSet() const { return m_wrappingKeyCertificateHasBeenSet; }
    template<typename WrappingKeyCertificateT = Aws::String>
    void SetWrappingKeyCertificate(WrappingKeyCertificateT&& value) { m_wrappingKeyCertificateHasBeenSet = true; m_wrappingKeyCertificate = std::forward<WrappingKeyCertificateT>(value); }
    template<typename WrappingKeyCertificateT = Aws::String>
    ExportTr34KeyBlock& WithWrappingKeyCertificate(WrappingKeyCertificateT&& value) { SetWrappingKeyCertificate(std::forward<WrappingKeyCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The export token to initiate key export from Amazon Web Services Payment
     * Cryptography. It also contains the signing key certificate that will sign the
     * wrapped key during TR-34 key block generation. Call <a
     * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_GetParametersForExport.html">GetParametersForExport</a>
     * to receive an export token. It expires after 30 days. You can use the same
     * export token to export multiple keys from the same service account.</p>
     */
    inline const Aws::String& GetExportToken() const { return m_exportToken; }
    inline bool ExportTokenHasBeenSet() const { return m_exportTokenHasBeenSet; }
    template<typename ExportTokenT = Aws::String>
    void SetExportToken(ExportTokenT&& value) { m_exportTokenHasBeenSet = true; m_exportToken = std::forward<ExportTokenT>(value); }
    template<typename ExportTokenT = Aws::String>
    ExportTr34KeyBlock& WithExportToken(ExportTokenT&& value) { SetExportToken(std::forward<ExportTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key Identifier used for signing the export key</p>
     */
    inline const Aws::String& GetSigningKeyIdentifier() const { return m_signingKeyIdentifier; }
    inline bool SigningKeyIdentifierHasBeenSet() const { return m_signingKeyIdentifierHasBeenSet; }
    template<typename SigningKeyIdentifierT = Aws::String>
    void SetSigningKeyIdentifier(SigningKeyIdentifierT&& value) { m_signingKeyIdentifierHasBeenSet = true; m_signingKeyIdentifier = std::forward<SigningKeyIdentifierT>(value); }
    template<typename SigningKeyIdentifierT = Aws::String>
    ExportTr34KeyBlock& WithSigningKeyIdentifier(SigningKeyIdentifierT&& value) { SetSigningKeyIdentifier(std::forward<SigningKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Certificate used for signing the export key</p>
     */
    inline const Aws::String& GetSigningKeyCertificate() const { return m_signingKeyCertificate; }
    inline bool SigningKeyCertificateHasBeenSet() const { return m_signingKeyCertificateHasBeenSet; }
    template<typename SigningKeyCertificateT = Aws::String>
    void SetSigningKeyCertificate(SigningKeyCertificateT&& value) { m_signingKeyCertificateHasBeenSet = true; m_signingKeyCertificate = std::forward<SigningKeyCertificateT>(value); }
    template<typename SigningKeyCertificateT = Aws::String>
    ExportTr34KeyBlock& WithSigningKeyCertificate(SigningKeyCertificateT&& value) { SetSigningKeyCertificate(std::forward<SigningKeyCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of key block that Amazon Web Services Payment Cryptography will
     * use during key export.</p>
     */
    inline Tr34KeyBlockFormat GetKeyBlockFormat() const { return m_keyBlockFormat; }
    inline bool KeyBlockFormatHasBeenSet() const { return m_keyBlockFormatHasBeenSet; }
    inline void SetKeyBlockFormat(Tr34KeyBlockFormat value) { m_keyBlockFormatHasBeenSet = true; m_keyBlockFormat = value; }
    inline ExportTr34KeyBlock& WithKeyBlockFormat(Tr34KeyBlockFormat value) { SetKeyBlockFormat(value); return *this;}
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
    ExportTr34KeyBlock& WithRandomNonce(RandomNonceT&& value) { SetRandomNonce(std::forward<RandomNonceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional metadata for export associated with the key material. This data is
     * signed but transmitted in clear text.</p>
     */
    inline const KeyBlockHeaders& GetKeyBlockHeaders() const { return m_keyBlockHeaders; }
    inline bool KeyBlockHeadersHasBeenSet() const { return m_keyBlockHeadersHasBeenSet; }
    template<typename KeyBlockHeadersT = KeyBlockHeaders>
    void SetKeyBlockHeaders(KeyBlockHeadersT&& value) { m_keyBlockHeadersHasBeenSet = true; m_keyBlockHeaders = std::forward<KeyBlockHeadersT>(value); }
    template<typename KeyBlockHeadersT = KeyBlockHeaders>
    ExportTr34KeyBlock& WithKeyBlockHeaders(KeyBlockHeadersT&& value) { SetKeyBlockHeaders(std::forward<KeyBlockHeadersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateAuthorityPublicKeyIdentifier;
    bool m_certificateAuthorityPublicKeyIdentifierHasBeenSet = false;

    Aws::String m_wrappingKeyCertificate;
    bool m_wrappingKeyCertificateHasBeenSet = false;

    Aws::String m_exportToken;
    bool m_exportTokenHasBeenSet = false;

    Aws::String m_signingKeyIdentifier;
    bool m_signingKeyIdentifierHasBeenSet = false;

    Aws::String m_signingKeyCertificate;
    bool m_signingKeyCertificateHasBeenSet = false;

    Tr34KeyBlockFormat m_keyBlockFormat{Tr34KeyBlockFormat::NOT_SET};
    bool m_keyBlockFormatHasBeenSet = false;

    Aws::String m_randomNonce;
    bool m_randomNonceHasBeenSet = false;

    KeyBlockHeaders m_keyBlockHeaders;
    bool m_keyBlockHeadersHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
