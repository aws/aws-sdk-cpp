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
    AWS_PAYMENTCRYPTOGRAPHY_API ExportTr34KeyBlock();
    AWS_PAYMENTCRYPTOGRAPHY_API ExportTr34KeyBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API ExportTr34KeyBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>KeyARN</code> of the certificate chain that signs the wrapping key
     * certificate during TR-34 key export.</p>
     */
    inline const Aws::String& GetCertificateAuthorityPublicKeyIdentifier() const{ return m_certificateAuthorityPublicKeyIdentifier; }
    inline bool CertificateAuthorityPublicKeyIdentifierHasBeenSet() const { return m_certificateAuthorityPublicKeyIdentifierHasBeenSet; }
    inline void SetCertificateAuthorityPublicKeyIdentifier(const Aws::String& value) { m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true; m_certificateAuthorityPublicKeyIdentifier = value; }
    inline void SetCertificateAuthorityPublicKeyIdentifier(Aws::String&& value) { m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true; m_certificateAuthorityPublicKeyIdentifier = std::move(value); }
    inline void SetCertificateAuthorityPublicKeyIdentifier(const char* value) { m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true; m_certificateAuthorityPublicKeyIdentifier.assign(value); }
    inline ExportTr34KeyBlock& WithCertificateAuthorityPublicKeyIdentifier(const Aws::String& value) { SetCertificateAuthorityPublicKeyIdentifier(value); return *this;}
    inline ExportTr34KeyBlock& WithCertificateAuthorityPublicKeyIdentifier(Aws::String&& value) { SetCertificateAuthorityPublicKeyIdentifier(std::move(value)); return *this;}
    inline ExportTr34KeyBlock& WithCertificateAuthorityPublicKeyIdentifier(const char* value) { SetCertificateAuthorityPublicKeyIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>KeyARN</code> of the wrapping key certificate. Amazon Web Services
     * Payment Cryptography uses this certificate to wrap the key under export.</p>
     */
    inline const Aws::String& GetWrappingKeyCertificate() const{ return m_wrappingKeyCertificate; }
    inline bool WrappingKeyCertificateHasBeenSet() const { return m_wrappingKeyCertificateHasBeenSet; }
    inline void SetWrappingKeyCertificate(const Aws::String& value) { m_wrappingKeyCertificateHasBeenSet = true; m_wrappingKeyCertificate = value; }
    inline void SetWrappingKeyCertificate(Aws::String&& value) { m_wrappingKeyCertificateHasBeenSet = true; m_wrappingKeyCertificate = std::move(value); }
    inline void SetWrappingKeyCertificate(const char* value) { m_wrappingKeyCertificateHasBeenSet = true; m_wrappingKeyCertificate.assign(value); }
    inline ExportTr34KeyBlock& WithWrappingKeyCertificate(const Aws::String& value) { SetWrappingKeyCertificate(value); return *this;}
    inline ExportTr34KeyBlock& WithWrappingKeyCertificate(Aws::String&& value) { SetWrappingKeyCertificate(std::move(value)); return *this;}
    inline ExportTr34KeyBlock& WithWrappingKeyCertificate(const char* value) { SetWrappingKeyCertificate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The export token to initiate key export from Amazon Web Services Payment
     * Cryptography. It also contains the signing key certificate that will sign the
     * wrapped key during TR-34 key block generation. Call <a
     * href="https://docs.aws.amazon.com/payment-cryptography/latest/APIReference/API_GetParametersForExport.html">GetParametersForExport</a>
     * to receive an export token. It expires after 7 days. You can use the same export
     * token to export multiple keys from the same service account.</p>
     */
    inline const Aws::String& GetExportToken() const{ return m_exportToken; }
    inline bool ExportTokenHasBeenSet() const { return m_exportTokenHasBeenSet; }
    inline void SetExportToken(const Aws::String& value) { m_exportTokenHasBeenSet = true; m_exportToken = value; }
    inline void SetExportToken(Aws::String&& value) { m_exportTokenHasBeenSet = true; m_exportToken = std::move(value); }
    inline void SetExportToken(const char* value) { m_exportTokenHasBeenSet = true; m_exportToken.assign(value); }
    inline ExportTr34KeyBlock& WithExportToken(const Aws::String& value) { SetExportToken(value); return *this;}
    inline ExportTr34KeyBlock& WithExportToken(Aws::String&& value) { SetExportToken(std::move(value)); return *this;}
    inline ExportTr34KeyBlock& WithExportToken(const char* value) { SetExportToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of key block that Amazon Web Services Payment Cryptography will
     * use during key export.</p>
     */
    inline const Tr34KeyBlockFormat& GetKeyBlockFormat() const{ return m_keyBlockFormat; }
    inline bool KeyBlockFormatHasBeenSet() const { return m_keyBlockFormatHasBeenSet; }
    inline void SetKeyBlockFormat(const Tr34KeyBlockFormat& value) { m_keyBlockFormatHasBeenSet = true; m_keyBlockFormat = value; }
    inline void SetKeyBlockFormat(Tr34KeyBlockFormat&& value) { m_keyBlockFormatHasBeenSet = true; m_keyBlockFormat = std::move(value); }
    inline ExportTr34KeyBlock& WithKeyBlockFormat(const Tr34KeyBlockFormat& value) { SetKeyBlockFormat(value); return *this;}
    inline ExportTr34KeyBlock& WithKeyBlockFormat(Tr34KeyBlockFormat&& value) { SetKeyBlockFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A random number value that is unique to the TR-34 key block generated using 2
     * pass. The operation will fail, if a random nonce value is not provided for a
     * TR-34 key block generated using 2 pass.</p>
     */
    inline const Aws::String& GetRandomNonce() const{ return m_randomNonce; }
    inline bool RandomNonceHasBeenSet() const { return m_randomNonceHasBeenSet; }
    inline void SetRandomNonce(const Aws::String& value) { m_randomNonceHasBeenSet = true; m_randomNonce = value; }
    inline void SetRandomNonce(Aws::String&& value) { m_randomNonceHasBeenSet = true; m_randomNonce = std::move(value); }
    inline void SetRandomNonce(const char* value) { m_randomNonceHasBeenSet = true; m_randomNonce.assign(value); }
    inline ExportTr34KeyBlock& WithRandomNonce(const Aws::String& value) { SetRandomNonce(value); return *this;}
    inline ExportTr34KeyBlock& WithRandomNonce(Aws::String&& value) { SetRandomNonce(std::move(value)); return *this;}
    inline ExportTr34KeyBlock& WithRandomNonce(const char* value) { SetRandomNonce(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional metadata for export associated with the key material. This data is
     * signed but transmitted in clear text.</p>
     */
    inline const KeyBlockHeaders& GetKeyBlockHeaders() const{ return m_keyBlockHeaders; }
    inline bool KeyBlockHeadersHasBeenSet() const { return m_keyBlockHeadersHasBeenSet; }
    inline void SetKeyBlockHeaders(const KeyBlockHeaders& value) { m_keyBlockHeadersHasBeenSet = true; m_keyBlockHeaders = value; }
    inline void SetKeyBlockHeaders(KeyBlockHeaders&& value) { m_keyBlockHeadersHasBeenSet = true; m_keyBlockHeaders = std::move(value); }
    inline ExportTr34KeyBlock& WithKeyBlockHeaders(const KeyBlockHeaders& value) { SetKeyBlockHeaders(value); return *this;}
    inline ExportTr34KeyBlock& WithKeyBlockHeaders(KeyBlockHeaders&& value) { SetKeyBlockHeaders(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateAuthorityPublicKeyIdentifier;
    bool m_certificateAuthorityPublicKeyIdentifierHasBeenSet = false;

    Aws::String m_wrappingKeyCertificate;
    bool m_wrappingKeyCertificateHasBeenSet = false;

    Aws::String m_exportToken;
    bool m_exportTokenHasBeenSet = false;

    Tr34KeyBlockFormat m_keyBlockFormat;
    bool m_keyBlockFormatHasBeenSet = false;

    Aws::String m_randomNonce;
    bool m_randomNonceHasBeenSet = false;

    KeyBlockHeaders m_keyBlockHeaders;
    bool m_keyBlockHeadersHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
