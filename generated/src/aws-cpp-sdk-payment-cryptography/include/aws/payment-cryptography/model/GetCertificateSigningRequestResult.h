/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetCertificateSigningRequestResult
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API GetCertificateSigningRequestResult() = default;
    AWS_PAYMENTCRYPTOGRAPHY_API GetCertificateSigningRequestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHY_API GetCertificateSigningRequestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Certificate signing request</p>
     */
    inline const Aws::String& GetCertificateSigningRequest() const { return m_certificateSigningRequest; }
    template<typename CertificateSigningRequestT = Aws::String>
    void SetCertificateSigningRequest(CertificateSigningRequestT&& value) { m_certificateSigningRequestHasBeenSet = true; m_certificateSigningRequest = std::forward<CertificateSigningRequestT>(value); }
    template<typename CertificateSigningRequestT = Aws::String>
    GetCertificateSigningRequestResult& WithCertificateSigningRequest(CertificateSigningRequestT&& value) { SetCertificateSigningRequest(std::forward<CertificateSigningRequestT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCertificateSigningRequestResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateSigningRequest;
    bool m_certificateSigningRequestHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
