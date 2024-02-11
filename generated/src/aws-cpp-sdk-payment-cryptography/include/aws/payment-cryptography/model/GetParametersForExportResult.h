/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/payment-cryptography/model/KeyAlgorithm.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PaymentCryptography
{
namespace Model
{
  class GetParametersForExportResult
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API GetParametersForExportResult();
    AWS_PAYMENTCRYPTOGRAPHY_API GetParametersForExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHY_API GetParametersForExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The export token to initiate key export from Amazon Web Services Payment
     * Cryptography. The export token expires after 7 days. You can use the same export
     * token to export multiple keys from the same service account.</p>
     */
    inline const Aws::String& GetExportToken() const{ return m_exportToken; }

    /**
     * <p>The export token to initiate key export from Amazon Web Services Payment
     * Cryptography. The export token expires after 7 days. You can use the same export
     * token to export multiple keys from the same service account.</p>
     */
    inline void SetExportToken(const Aws::String& value) { m_exportToken = value; }

    /**
     * <p>The export token to initiate key export from Amazon Web Services Payment
     * Cryptography. The export token expires after 7 days. You can use the same export
     * token to export multiple keys from the same service account.</p>
     */
    inline void SetExportToken(Aws::String&& value) { m_exportToken = std::move(value); }

    /**
     * <p>The export token to initiate key export from Amazon Web Services Payment
     * Cryptography. The export token expires after 7 days. You can use the same export
     * token to export multiple keys from the same service account.</p>
     */
    inline void SetExportToken(const char* value) { m_exportToken.assign(value); }

    /**
     * <p>The export token to initiate key export from Amazon Web Services Payment
     * Cryptography. The export token expires after 7 days. You can use the same export
     * token to export multiple keys from the same service account.</p>
     */
    inline GetParametersForExportResult& WithExportToken(const Aws::String& value) { SetExportToken(value); return *this;}

    /**
     * <p>The export token to initiate key export from Amazon Web Services Payment
     * Cryptography. The export token expires after 7 days. You can use the same export
     * token to export multiple keys from the same service account.</p>
     */
    inline GetParametersForExportResult& WithExportToken(Aws::String&& value) { SetExportToken(std::move(value)); return *this;}

    /**
     * <p>The export token to initiate key export from Amazon Web Services Payment
     * Cryptography. The export token expires after 7 days. You can use the same export
     * token to export multiple keys from the same service account.</p>
     */
    inline GetParametersForExportResult& WithExportToken(const char* value) { SetExportToken(value); return *this;}


    /**
     * <p>The validity period of the export token.</p>
     */
    inline const Aws::Utils::DateTime& GetParametersValidUntilTimestamp() const{ return m_parametersValidUntilTimestamp; }

    /**
     * <p>The validity period of the export token.</p>
     */
    inline void SetParametersValidUntilTimestamp(const Aws::Utils::DateTime& value) { m_parametersValidUntilTimestamp = value; }

    /**
     * <p>The validity period of the export token.</p>
     */
    inline void SetParametersValidUntilTimestamp(Aws::Utils::DateTime&& value) { m_parametersValidUntilTimestamp = std::move(value); }

    /**
     * <p>The validity period of the export token.</p>
     */
    inline GetParametersForExportResult& WithParametersValidUntilTimestamp(const Aws::Utils::DateTime& value) { SetParametersValidUntilTimestamp(value); return *this;}

    /**
     * <p>The validity period of the export token.</p>
     */
    inline GetParametersForExportResult& WithParametersValidUntilTimestamp(Aws::Utils::DateTime&& value) { SetParametersValidUntilTimestamp(std::move(value)); return *this;}


    /**
     * <p>The algorithm of the signing key certificate for use in TR-34 key block
     * generation. <code>RSA_2048</code> is the only signing key algorithm allowed.</p>
     */
    inline const KeyAlgorithm& GetSigningKeyAlgorithm() const{ return m_signingKeyAlgorithm; }

    /**
     * <p>The algorithm of the signing key certificate for use in TR-34 key block
     * generation. <code>RSA_2048</code> is the only signing key algorithm allowed.</p>
     */
    inline void SetSigningKeyAlgorithm(const KeyAlgorithm& value) { m_signingKeyAlgorithm = value; }

    /**
     * <p>The algorithm of the signing key certificate for use in TR-34 key block
     * generation. <code>RSA_2048</code> is the only signing key algorithm allowed.</p>
     */
    inline void SetSigningKeyAlgorithm(KeyAlgorithm&& value) { m_signingKeyAlgorithm = std::move(value); }

    /**
     * <p>The algorithm of the signing key certificate for use in TR-34 key block
     * generation. <code>RSA_2048</code> is the only signing key algorithm allowed.</p>
     */
    inline GetParametersForExportResult& WithSigningKeyAlgorithm(const KeyAlgorithm& value) { SetSigningKeyAlgorithm(value); return *this;}

    /**
     * <p>The algorithm of the signing key certificate for use in TR-34 key block
     * generation. <code>RSA_2048</code> is the only signing key algorithm allowed.</p>
     */
    inline GetParametersForExportResult& WithSigningKeyAlgorithm(KeyAlgorithm&& value) { SetSigningKeyAlgorithm(std::move(value)); return *this;}


    /**
     * <p>The signing key certificate in PEM format (base64 encoded) of the public key
     * for signature within the TR-34 key block. The certificate expires after 7
     * days.</p>
     */
    inline const Aws::String& GetSigningKeyCertificate() const{ return m_signingKeyCertificate; }

    /**
     * <p>The signing key certificate in PEM format (base64 encoded) of the public key
     * for signature within the TR-34 key block. The certificate expires after 7
     * days.</p>
     */
    inline void SetSigningKeyCertificate(const Aws::String& value) { m_signingKeyCertificate = value; }

    /**
     * <p>The signing key certificate in PEM format (base64 encoded) of the public key
     * for signature within the TR-34 key block. The certificate expires after 7
     * days.</p>
     */
    inline void SetSigningKeyCertificate(Aws::String&& value) { m_signingKeyCertificate = std::move(value); }

    /**
     * <p>The signing key certificate in PEM format (base64 encoded) of the public key
     * for signature within the TR-34 key block. The certificate expires after 7
     * days.</p>
     */
    inline void SetSigningKeyCertificate(const char* value) { m_signingKeyCertificate.assign(value); }

    /**
     * <p>The signing key certificate in PEM format (base64 encoded) of the public key
     * for signature within the TR-34 key block. The certificate expires after 7
     * days.</p>
     */
    inline GetParametersForExportResult& WithSigningKeyCertificate(const Aws::String& value) { SetSigningKeyCertificate(value); return *this;}

    /**
     * <p>The signing key certificate in PEM format (base64 encoded) of the public key
     * for signature within the TR-34 key block. The certificate expires after 7
     * days.</p>
     */
    inline GetParametersForExportResult& WithSigningKeyCertificate(Aws::String&& value) { SetSigningKeyCertificate(std::move(value)); return *this;}

    /**
     * <p>The signing key certificate in PEM format (base64 encoded) of the public key
     * for signature within the TR-34 key block. The certificate expires after 7
     * days.</p>
     */
    inline GetParametersForExportResult& WithSigningKeyCertificate(const char* value) { SetSigningKeyCertificate(value); return *this;}


    /**
     * <p>The root certificate authority (CA) that signed the signing key certificate
     * in PEM format (base64 encoded).</p>
     */
    inline const Aws::String& GetSigningKeyCertificateChain() const{ return m_signingKeyCertificateChain; }

    /**
     * <p>The root certificate authority (CA) that signed the signing key certificate
     * in PEM format (base64 encoded).</p>
     */
    inline void SetSigningKeyCertificateChain(const Aws::String& value) { m_signingKeyCertificateChain = value; }

    /**
     * <p>The root certificate authority (CA) that signed the signing key certificate
     * in PEM format (base64 encoded).</p>
     */
    inline void SetSigningKeyCertificateChain(Aws::String&& value) { m_signingKeyCertificateChain = std::move(value); }

    /**
     * <p>The root certificate authority (CA) that signed the signing key certificate
     * in PEM format (base64 encoded).</p>
     */
    inline void SetSigningKeyCertificateChain(const char* value) { m_signingKeyCertificateChain.assign(value); }

    /**
     * <p>The root certificate authority (CA) that signed the signing key certificate
     * in PEM format (base64 encoded).</p>
     */
    inline GetParametersForExportResult& WithSigningKeyCertificateChain(const Aws::String& value) { SetSigningKeyCertificateChain(value); return *this;}

    /**
     * <p>The root certificate authority (CA) that signed the signing key certificate
     * in PEM format (base64 encoded).</p>
     */
    inline GetParametersForExportResult& WithSigningKeyCertificateChain(Aws::String&& value) { SetSigningKeyCertificateChain(std::move(value)); return *this;}

    /**
     * <p>The root certificate authority (CA) that signed the signing key certificate
     * in PEM format (base64 encoded).</p>
     */
    inline GetParametersForExportResult& WithSigningKeyCertificateChain(const char* value) { SetSigningKeyCertificateChain(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetParametersForExportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetParametersForExportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetParametersForExportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_exportToken;

    Aws::Utils::DateTime m_parametersValidUntilTimestamp;

    KeyAlgorithm m_signingKeyAlgorithm;

    Aws::String m_signingKeyCertificate;

    Aws::String m_signingKeyCertificateChain;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
