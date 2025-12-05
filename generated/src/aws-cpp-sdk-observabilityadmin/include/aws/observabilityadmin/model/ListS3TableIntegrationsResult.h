/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/IntegrationSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {
class ListS3TableIntegrationsResult {
 public:
  AWS_OBSERVABILITYADMIN_API ListS3TableIntegrationsResult() = default;
  AWS_OBSERVABILITYADMIN_API ListS3TableIntegrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OBSERVABILITYADMIN_API ListS3TableIntegrationsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of S3 Table integration summaries containing key information about
   * each integration.</p>
   */
  inline const Aws::Vector<IntegrationSummary>& GetIntegrationSummaries() const { return m_integrationSummaries; }
  template <typename IntegrationSummariesT = Aws::Vector<IntegrationSummary>>
  void SetIntegrationSummaries(IntegrationSummariesT&& value) {
    m_integrationSummariesHasBeenSet = true;
    m_integrationSummaries = std::forward<IntegrationSummariesT>(value);
  }
  template <typename IntegrationSummariesT = Aws::Vector<IntegrationSummary>>
  ListS3TableIntegrationsResult& WithIntegrationSummaries(IntegrationSummariesT&& value) {
    SetIntegrationSummaries(std::forward<IntegrationSummariesT>(value));
    return *this;
  }
  template <typename IntegrationSummariesT = IntegrationSummary>
  ListS3TableIntegrationsResult& AddIntegrationSummaries(IntegrationSummariesT&& value) {
    m_integrationSummariesHasBeenSet = true;
    m_integrationSummaries.emplace_back(std::forward<IntegrationSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to resume pagination of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListS3TableIntegrationsResult& WithNextToken(NextTokenT&& value) {
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
  ListS3TableIntegrationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<IntegrationSummary> m_integrationSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_integrationSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
