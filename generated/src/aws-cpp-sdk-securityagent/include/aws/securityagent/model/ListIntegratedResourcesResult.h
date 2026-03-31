/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/IntegratedResourceSummary.h>

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
class ListIntegratedResourcesResult {
 public:
  AWS_SECURITYAGENT_API ListIntegratedResourcesResult() = default;
  AWS_SECURITYAGENT_API ListIntegratedResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API ListIntegratedResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of integrated resources</p>
   */
  inline const Aws::Vector<IntegratedResourceSummary>& GetIntegratedResourceSummaries() const { return m_integratedResourceSummaries; }
  template <typename IntegratedResourceSummariesT = Aws::Vector<IntegratedResourceSummary>>
  void SetIntegratedResourceSummaries(IntegratedResourceSummariesT&& value) {
    m_integratedResourceSummariesHasBeenSet = true;
    m_integratedResourceSummaries = std::forward<IntegratedResourceSummariesT>(value);
  }
  template <typename IntegratedResourceSummariesT = Aws::Vector<IntegratedResourceSummary>>
  ListIntegratedResourcesResult& WithIntegratedResourceSummaries(IntegratedResourceSummariesT&& value) {
    SetIntegratedResourceSummaries(std::forward<IntegratedResourceSummariesT>(value));
    return *this;
  }
  template <typename IntegratedResourceSummariesT = IntegratedResourceSummary>
  ListIntegratedResourcesResult& AddIntegratedResourceSummaries(IntegratedResourceSummariesT&& value) {
    m_integratedResourceSummariesHasBeenSet = true;
    m_integratedResourceSummaries.emplace_back(std::forward<IntegratedResourceSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token for pagination to retrieve the next set of results</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListIntegratedResourcesResult& WithNextToken(NextTokenT&& value) {
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
  ListIntegratedResourcesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<IntegratedResourceSummary> m_integratedResourceSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_integratedResourceSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
