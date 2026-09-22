/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/DatasetIntegrationSummary.h>

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
class ListDatasetIntegrationsResult {
 public:
  AWS_OBSERVABILITYADMIN_API ListDatasetIntegrationsResult() = default;
  AWS_OBSERVABILITYADMIN_API ListDatasetIntegrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OBSERVABILITYADMIN_API ListDatasetIntegrationsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The dataset integrations in your account.</p>
   */
  inline const Aws::Vector<DatasetIntegrationSummary>& GetDatasetIntegrationSummaries() const { return m_datasetIntegrationSummaries; }
  template <typename DatasetIntegrationSummariesT = Aws::Vector<DatasetIntegrationSummary>>
  void SetDatasetIntegrationSummaries(DatasetIntegrationSummariesT&& value) {
    m_datasetIntegrationSummariesHasBeenSet = true;
    m_datasetIntegrationSummaries = std::forward<DatasetIntegrationSummariesT>(value);
  }
  template <typename DatasetIntegrationSummariesT = Aws::Vector<DatasetIntegrationSummary>>
  ListDatasetIntegrationsResult& WithDatasetIntegrationSummaries(DatasetIntegrationSummariesT&& value) {
    SetDatasetIntegrationSummaries(std::forward<DatasetIntegrationSummariesT>(value));
    return *this;
  }
  template <typename DatasetIntegrationSummariesT = DatasetIntegrationSummary>
  ListDatasetIntegrationsResult& AddDatasetIntegrationSummaries(DatasetIntegrationSummariesT&& value) {
    m_datasetIntegrationSummariesHasBeenSet = true;
    m_datasetIntegrationSummaries.emplace_back(std::forward<DatasetIntegrationSummariesT>(value));
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
  ListDatasetIntegrationsResult& WithNextToken(NextTokenT&& value) {
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
  ListDatasetIntegrationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DatasetIntegrationSummary> m_datasetIntegrationSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_datasetIntegrationSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
