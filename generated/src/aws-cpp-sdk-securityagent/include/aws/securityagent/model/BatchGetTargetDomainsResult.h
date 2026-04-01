/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/TargetDomain.h>

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
 * <p>Output for the BatchGetTargetDomains operation</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetTargetDomainsOutput">AWS
 * API Reference</a></p>
 */
class BatchGetTargetDomainsResult {
 public:
  AWS_SECURITYAGENT_API BatchGetTargetDomainsResult() = default;
  AWS_SECURITYAGENT_API BatchGetTargetDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API BatchGetTargetDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of target domains that were successfully retrieved</p>
   */
  inline const Aws::Vector<TargetDomain>& GetTargetDomains() const { return m_targetDomains; }
  template <typename TargetDomainsT = Aws::Vector<TargetDomain>>
  void SetTargetDomains(TargetDomainsT&& value) {
    m_targetDomainsHasBeenSet = true;
    m_targetDomains = std::forward<TargetDomainsT>(value);
  }
  template <typename TargetDomainsT = Aws::Vector<TargetDomain>>
  BatchGetTargetDomainsResult& WithTargetDomains(TargetDomainsT&& value) {
    SetTargetDomains(std::forward<TargetDomainsT>(value));
    return *this;
  }
  template <typename TargetDomainsT = TargetDomain>
  BatchGetTargetDomainsResult& AddTargetDomains(TargetDomainsT&& value) {
    m_targetDomainsHasBeenSet = true;
    m_targetDomains.emplace_back(std::forward<TargetDomainsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of target domain IDs that could not be found</p>
   */
  inline const Aws::Vector<Aws::String>& GetNotFound() const { return m_notFound; }
  template <typename NotFoundT = Aws::Vector<Aws::String>>
  void SetNotFound(NotFoundT&& value) {
    m_notFoundHasBeenSet = true;
    m_notFound = std::forward<NotFoundT>(value);
  }
  template <typename NotFoundT = Aws::Vector<Aws::String>>
  BatchGetTargetDomainsResult& WithNotFound(NotFoundT&& value) {
    SetNotFound(std::forward<NotFoundT>(value));
    return *this;
  }
  template <typename NotFoundT = Aws::String>
  BatchGetTargetDomainsResult& AddNotFound(NotFoundT&& value) {
    m_notFoundHasBeenSet = true;
    m_notFound.emplace_back(std::forward<NotFoundT>(value));
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
  BatchGetTargetDomainsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<TargetDomain> m_targetDomains;

  Aws::Vector<Aws::String> m_notFound;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_targetDomainsHasBeenSet = false;
  bool m_notFoundHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
