/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/TargetDomainSummary.h>

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
 * <p>Output for the ListTargetDomains operation</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListTargetDomainsOutput">AWS
 * API Reference</a></p>
 */
class ListTargetDomainsResult {
 public:
  AWS_SECURITYAGENT_API ListTargetDomainsResult() = default;
  AWS_SECURITYAGENT_API ListTargetDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API ListTargetDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of target domain summaries</p>
   */
  inline const Aws::Vector<TargetDomainSummary>& GetTargetDomainSummaries() const { return m_targetDomainSummaries; }
  template <typename TargetDomainSummariesT = Aws::Vector<TargetDomainSummary>>
  void SetTargetDomainSummaries(TargetDomainSummariesT&& value) {
    m_targetDomainSummariesHasBeenSet = true;
    m_targetDomainSummaries = std::forward<TargetDomainSummariesT>(value);
  }
  template <typename TargetDomainSummariesT = Aws::Vector<TargetDomainSummary>>
  ListTargetDomainsResult& WithTargetDomainSummaries(TargetDomainSummariesT&& value) {
    SetTargetDomainSummaries(std::forward<TargetDomainSummariesT>(value));
    return *this;
  }
  template <typename TargetDomainSummariesT = TargetDomainSummary>
  ListTargetDomainsResult& AddTargetDomainSummaries(TargetDomainSummariesT&& value) {
    m_targetDomainSummariesHasBeenSet = true;
    m_targetDomainSummaries.emplace_back(std::forward<TargetDomainSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token for next page of results</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListTargetDomainsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListTargetDomainsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<TargetDomainSummary> m_targetDomainSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_targetDomainSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
