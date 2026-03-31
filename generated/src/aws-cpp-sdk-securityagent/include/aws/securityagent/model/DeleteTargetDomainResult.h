/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {
/**
 * <p>Output for the DeleteTargetDomain operation</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/DeleteTargetDomainOutput">AWS
 * API Reference</a></p>
 */
class DeleteTargetDomainResult {
 public:
  AWS_SECURITYAGENT_API DeleteTargetDomainResult() = default;
  AWS_SECURITYAGENT_API DeleteTargetDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API DeleteTargetDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Unique identifier of the deleted target domain</p>
   */
  inline const Aws::String& GetTargetDomainId() const { return m_targetDomainId; }
  template <typename TargetDomainIdT = Aws::String>
  void SetTargetDomainId(TargetDomainIdT&& value) {
    m_targetDomainIdHasBeenSet = true;
    m_targetDomainId = std::forward<TargetDomainIdT>(value);
  }
  template <typename TargetDomainIdT = Aws::String>
  DeleteTargetDomainResult& WithTargetDomainId(TargetDomainIdT&& value) {
    SetTargetDomainId(std::forward<TargetDomainIdT>(value));
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
  DeleteTargetDomainResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_targetDomainId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_targetDomainIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
