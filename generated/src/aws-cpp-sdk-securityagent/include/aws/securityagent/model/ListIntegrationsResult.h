/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/IntegrationSummary.h>

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
class ListIntegrationsResult {
 public:
  AWS_SECURITYAGENT_API ListIntegrationsResult() = default;
  AWS_SECURITYAGENT_API ListIntegrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API ListIntegrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of integration summaries</p>
   */
  inline const Aws::Vector<IntegrationSummary>& GetIntegrationSummaries() const { return m_integrationSummaries; }
  template <typename IntegrationSummariesT = Aws::Vector<IntegrationSummary>>
  void SetIntegrationSummaries(IntegrationSummariesT&& value) {
    m_integrationSummariesHasBeenSet = true;
    m_integrationSummaries = std::forward<IntegrationSummariesT>(value);
  }
  template <typename IntegrationSummariesT = Aws::Vector<IntegrationSummary>>
  ListIntegrationsResult& WithIntegrationSummaries(IntegrationSummariesT&& value) {
    SetIntegrationSummaries(std::forward<IntegrationSummariesT>(value));
    return *this;
  }
  template <typename IntegrationSummariesT = IntegrationSummary>
  ListIntegrationsResult& AddIntegrationSummaries(IntegrationSummariesT&& value) {
    m_integrationSummariesHasBeenSet = true;
    m_integrationSummaries.emplace_back(std::forward<IntegrationSummariesT>(value));
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
  ListIntegrationsResult& WithNextToken(NextTokenT&& value) {
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
  ListIntegrationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<IntegrationSummary> m_integrationSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_integrationSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
