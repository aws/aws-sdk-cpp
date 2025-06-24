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
  class GetParametersForImportResult
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API GetParametersForImportResult() = default;
    AWS_PAYMENTCRYPTOGRAPHY_API GetParametersForImportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHY_API GetParametersForImportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The wrapping key certificate in PEM format (base64 encoded) of the wrapping
     * key for use within the TR-34 key block. The certificate expires in 30 days.</p>
     */
    inline const Aws::String& GetWrappingKeyCertificate() const { return m_wrappingKeyCertificate; }
    template<typename WrappingKeyCertificateT = Aws::String>
    void SetWrappingKeyCertificate(WrappingKeyCertificateT&& value) { m_wrappingKeyCertificateHasBeenSet = true; m_wrappingKeyCertificate = std::forward<WrappingKeyCertificateT>(value); }
    template<typename WrappingKeyCertificateT = Aws::String>
    GetParametersForImportResult& WithWrappingKeyCertificate(WrappingKeyCertificateT&& value) { SetWrappingKeyCertificate(std::forward<WrappingKeyCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Payment Cryptography root certificate authority (CA)
     * that signed the wrapping key certificate in PEM format (base64 encoded).</p>
     */
    inline const Aws::String& GetWrappingKeyCertificateChain() const { return m_wrappingKeyCertificateChain; }
    template<typename WrappingKeyCertificateChainT = Aws::String>
    void SetWrappingKeyCertificateChain(WrappingKeyCertificateChainT&& value) { m_wrappingKeyCertificateChainHasBeenSet = true; m_wrappingKeyCertificateChain = std::forward<WrappingKeyCertificateChainT>(value); }
    template<typename WrappingKeyCertificateChainT = Aws::String>
    GetParametersForImportResult& WithWrappingKeyCertificateChain(WrappingKeyCertificateChainT&& value) { SetWrappingKeyCertificateChain(std::forward<WrappingKeyCertificateChainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm of the wrapping key for use within TR-34 WrappedKeyBlock or RSA
     * WrappedKeyCryptogram.</p>
     */
    inline KeyAlgorithm GetWrappingKeyAlgorithm() const { return m_wrappingKeyAlgorithm; }
    inline void SetWrappingKeyAlgorithm(KeyAlgorithm value) { m_wrappingKeyAlgorithmHasBeenSet = true; m_wrappingKeyAlgorithm = value; }
    inline GetParametersForImportResult& WithWrappingKeyAlgorithm(KeyAlgorithm value) { SetWrappingKeyAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The import token to initiate key import into Amazon Web Services Payment
     * Cryptography. The import token expires after 30 days. You can use the same
     * import token to import multiple keys to the same service account.</p>
     */
    inline const Aws::String& GetImportToken() const { return m_importToken; }
    template<typename ImportTokenT = Aws::String>
    void SetImportToken(ImportTokenT&& value) { m_importTokenHasBeenSet = true; m_importToken = std::forward<ImportTokenT>(value); }
    template<typename ImportTokenT = Aws::String>
    GetParametersForImportResult& WithImportToken(ImportTokenT&& value) { SetImportToken(std::forward<ImportTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validity period of the import token.</p>
     */
    inline const Aws::Utils::DateTime& GetParametersValidUntilTimestamp() const { return m_parametersValidUntilTimestamp; }
    template<typename ParametersValidUntilTimestampT = Aws::Utils::DateTime>
    void SetParametersValidUntilTimestamp(ParametersValidUntilTimestampT&& value) { m_parametersValidUntilTimestampHasBeenSet = true; m_parametersValidUntilTimestamp = std::forward<ParametersValidUntilTimestampT>(value); }
    template<typename ParametersValidUntilTimestampT = Aws::Utils::DateTime>
    GetParametersForImportResult& WithParametersValidUntilTimestamp(ParametersValidUntilTimestampT&& value) { SetParametersValidUntilTimestamp(std::forward<ParametersValidUntilTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetParametersForImportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_wrappingKeyCertificate;
    bool m_wrappingKeyCertificateHasBeenSet = false;

    Aws::String m_wrappingKeyCertificateChain;
    bool m_wrappingKeyCertificateChainHasBeenSet = false;

    KeyAlgorithm m_wrappingKeyAlgorithm{KeyAlgorithm::NOT_SET};
    bool m_wrappingKeyAlgorithmHasBeenSet = false;

    Aws::String m_importToken;
    bool m_importTokenHasBeenSet = false;

    Aws::Utils::DateTime m_parametersValidUntilTimestamp{};
    bool m_parametersValidUntilTimestampHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
