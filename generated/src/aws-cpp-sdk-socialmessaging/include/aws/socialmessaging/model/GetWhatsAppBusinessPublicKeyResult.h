/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SocialMessaging {
namespace Model {
class GetWhatsAppBusinessPublicKeyResult {
 public:
  AWS_SOCIALMESSAGING_API GetWhatsAppBusinessPublicKeyResult() = default;
  AWS_SOCIALMESSAGING_API GetWhatsAppBusinessPublicKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SOCIALMESSAGING_API GetWhatsAppBusinessPublicKeyResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The stored RSA business public key (PEM), if present.</p>
   */
  inline const Aws::String& GetBusinessPublicKey() const { return m_businessPublicKey; }
  template <typename BusinessPublicKeyT = Aws::String>
  void SetBusinessPublicKey(BusinessPublicKeyT&& value) {
    m_businessPublicKeyHasBeenSet = true;
    m_businessPublicKey = std::forward<BusinessPublicKeyT>(value);
  }
  template <typename BusinessPublicKeyT = Aws::String>
  GetWhatsAppBusinessPublicKeyResult& WithBusinessPublicKey(BusinessPublicKeyT&& value) {
    SetBusinessPublicKey(std::forward<BusinessPublicKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Meta's signing status: &quot;VALID&quot; | &quot;MISMATCH&quot;.</p>
   */
  inline const Aws::String& GetBusinessPublicKeySignatureStatus() const { return m_businessPublicKeySignatureStatus; }
  template <typename BusinessPublicKeySignatureStatusT = Aws::String>
  void SetBusinessPublicKeySignatureStatus(BusinessPublicKeySignatureStatusT&& value) {
    m_businessPublicKeySignatureStatusHasBeenSet = true;
    m_businessPublicKeySignatureStatus = std::forward<BusinessPublicKeySignatureStatusT>(value);
  }
  template <typename BusinessPublicKeySignatureStatusT = Aws::String>
  GetWhatsAppBusinessPublicKeyResult& WithBusinessPublicKeySignatureStatus(BusinessPublicKeySignatureStatusT&& value) {
    SetBusinessPublicKeySignatureStatus(std::forward<BusinessPublicKeySignatureStatusT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetWhatsAppBusinessPublicKeyResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_businessPublicKey;

  Aws::String m_businessPublicKeySignatureStatus;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_businessPublicKeyHasBeenSet = false;
  bool m_businessPublicKeySignatureStatusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
