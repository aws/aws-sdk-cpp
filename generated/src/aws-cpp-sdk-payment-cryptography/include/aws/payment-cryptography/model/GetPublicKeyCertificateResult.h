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
  class GetPublicKeyCertificateResult
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API GetPublicKeyCertificateResult() = default;
    AWS_PAYMENTCRYPTOGRAPHY_API GetPublicKeyCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHY_API GetPublicKeyCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The public key component of the asymmetric key pair in a certificate PEM
     * format (base64 encoded). It is signed by the root certificate authority (CA).
     * The certificate expires in 90 days.</p>
     */
    inline const Aws::String& GetKeyCertificate() const { return m_keyCertificate; }
    template<typename KeyCertificateT = Aws::String>
    void SetKeyCertificate(KeyCertificateT&& value) { m_keyCertificateHasBeenSet = true; m_keyCertificate = std::forward<KeyCertificateT>(value); }
    template<typename KeyCertificateT = Aws::String>
    GetPublicKeyCertificateResult& WithKeyCertificate(KeyCertificateT&& value) { SetKeyCertificate(std::forward<KeyCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The root certificate authority (CA) that signed the public key certificate in
     * PEM format (base64 encoded) of the asymmetric key pair.</p>
     */
    inline const Aws::String& GetKeyCertificateChain() const { return m_keyCertificateChain; }
    template<typename KeyCertificateChainT = Aws::String>
    void SetKeyCertificateChain(KeyCertificateChainT&& value) { m_keyCertificateChainHasBeenSet = true; m_keyCertificateChain = std::forward<KeyCertificateChainT>(value); }
    template<typename KeyCertificateChainT = Aws::String>
    GetPublicKeyCertificateResult& WithKeyCertificateChain(KeyCertificateChainT&& value) { SetKeyCertificateChain(std::forward<KeyCertificateChainT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPublicKeyCertificateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyCertificate;
    bool m_keyCertificateHasBeenSet = false;

    Aws::String m_keyCertificateChain;
    bool m_keyCertificateChainHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
