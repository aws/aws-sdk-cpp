/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supportauthz/SupportAuthZ_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SupportAuthZ {
namespace Model {
class RejectSupportPermitRequestResult {
 public:
  AWS_SUPPORTAUTHZ_API RejectSupportPermitRequestResult() = default;
  AWS_SUPPORTAUTHZ_API RejectSupportPermitRequestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SUPPORTAUTHZ_API RejectSupportPermitRequestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the rejected permit request.</p>
   */
  inline const Aws::String& GetRequestArn() const { return m_requestArn; }
  template <typename RequestArnT = Aws::String>
  void SetRequestArn(RequestArnT&& value) {
    m_requestArnHasBeenSet = true;
    m_requestArn = std::forward<RequestArnT>(value);
  }
  template <typename RequestArnT = Aws::String>
  RejectSupportPermitRequestResult& WithRequestArn(RequestArnT&& value) {
    SetRequestArn(std::forward<RequestArnT>(value));
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
  RejectSupportPermitRequestResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_requestArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_requestArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
