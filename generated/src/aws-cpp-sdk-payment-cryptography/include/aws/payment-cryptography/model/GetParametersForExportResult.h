/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography/model/KeyAlgorithm.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_PAYMENTCRYPTOGRAPHY_API GetParametersForExportResult() = default;
    AWS_PAYMENTCRYPTOGRAPHY_API GetParametersForExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHY_API GetParametersForExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The signing key certificate in PEM format (base64 encoded) of the public key
     * for signature within the TR-34 key block. The certificate expires after 30
     * days.</p>
     */
    inline const Aws::String& GetSigningKeyCertificate() const { return m_signingKeyCertificate; }
    template<typename SigningKeyCertificateT = Aws::String>
    void SetSigningKeyCertificate(SigningKeyCertificateT&& value) { m_signingKeyCertificateHasBeenSet = true; m_signingKeyCertificate = std::forward<SigningKeyCertificateT>(value); }
    template<typename SigningKeyCertificateT = Aws::String>
    GetParametersForExportResult& WithSigningKeyCertificate(SigningKeyCertificateT&& value) { SetSigningKeyCertificate(std::forward<SigningKeyCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The root certificate authority (CA) that signed the signing key certificate
     * in PEM format (base64 encoded).</p>
     */
    inline const Aws::String& GetSigningKeyCertificateChain() const { return m_signingKeyCertificateChain; }
    template<typename SigningKeyCertificateChainT = Aws::String>
    void SetSigningKeyCertificateChain(SigningKeyCertificateChainT&& value) { m_signingKeyCertificateChainHasBeenSet = true; m_signingKeyCertificateChain = std::forward<SigningKeyCertificateChainT>(value); }
    template<typename SigningKeyCertificateChainT = Aws::String>
    GetParametersForExportResult& WithSigningKeyCertificateChain(SigningKeyCertificateChainT&& value) { SetSigningKeyCertificateChain(std::forward<SigningKeyCertificateChainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm of the signing key certificate for use in TR-34 key block
     * generation. <code>RSA_2048</code> is the only signing key algorithm allowed.</p>
     */
    inline KeyAlgorithm GetSigningKeyAlgorithm() const { return m_signingKeyAlgorithm; }
    inline void SetSigningKeyAlgorithm(KeyAlgorithm value) { m_signingKeyAlgorithmHasBeenSet = true; m_signingKeyAlgorithm = value; }
    inline GetParametersForExportResult& WithSigningKeyAlgorithm(KeyAlgorithm value) { SetSigningKeyAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The export token to initiate key export from Amazon Web Services Payment
     * Cryptography. The export token expires after 30 days. You can use the same
     * export token to export multiple keys from the same service account.</p>
     */
    inline const Aws::String& GetExportToken() const { return m_exportToken; }
    template<typename ExportTokenT = Aws::String>
    void SetExportToken(ExportTokenT&& value) { m_exportTokenHasBeenSet = true; m_exportToken = std::forward<ExportTokenT>(value); }
    template<typename ExportTokenT = Aws::String>
    GetParametersForExportResult& WithExportToken(ExportTokenT&& value) { SetExportToken(std::forward<ExportTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validity period of the export token.</p>
     */
    inline const Aws::Utils::DateTime& GetParametersValidUntilTimestamp() const { return m_parametersValidUntilTimestamp; }
    template<typename ParametersValidUntilTimestampT = Aws::Utils::DateTime>
    void SetParametersValidUntilTimestamp(ParametersValidUntilTimestampT&& value) { m_parametersValidUntilTimestampHasBeenSet = true; m_parametersValidUntilTimestamp = std::forward<ParametersValidUntilTimestampT>(value); }
    template<typename ParametersValidUntilTimestampT = Aws::Utils::DateTime>
    GetParametersForExportResult& WithParametersValidUntilTimestamp(ParametersValidUntilTimestampT&& value) { SetParametersValidUntilTimestamp(std::forward<ParametersValidUntilTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetParametersForExportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_signingKeyCertificate;
    bool m_signingKeyCertificateHasBeenSet = false;

    Aws::String m_signingKeyCertificateChain;
    bool m_signingKeyCertificateChainHasBeenSet = false;

    KeyAlgorithm m_signingKeyAlgorithm{KeyAlgorithm::NOT_SET};
    bool m_signingKeyAlgorithmHasBeenSet = false;

    Aws::String m_exportToken;
    bool m_exportTokenHasBeenSet = false;

    Aws::Utils::DateTime m_parametersValidUntilTimestamp{};
    bool m_parametersValidUntilTimestampHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
