/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/TelemetryPipelineSummary.h>

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
class ListTelemetryPipelinesResult {
 public:
  AWS_OBSERVABILITYADMIN_API ListTelemetryPipelinesResult() = default;
  AWS_OBSERVABILITYADMIN_API ListTelemetryPipelinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OBSERVABILITYADMIN_API ListTelemetryPipelinesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of telemetry pipeline summaries containing key information about each
   * pipeline.</p>
   */
  inline const Aws::Vector<TelemetryPipelineSummary>& GetPipelineSummaries() const { return m_pipelineSummaries; }
  template <typename PipelineSummariesT = Aws::Vector<TelemetryPipelineSummary>>
  void SetPipelineSummaries(PipelineSummariesT&& value) {
    m_pipelineSummariesHasBeenSet = true;
    m_pipelineSummaries = std::forward<PipelineSummariesT>(value);
  }
  template <typename PipelineSummariesT = Aws::Vector<TelemetryPipelineSummary>>
  ListTelemetryPipelinesResult& WithPipelineSummaries(PipelineSummariesT&& value) {
    SetPipelineSummaries(std::forward<PipelineSummariesT>(value));
    return *this;
  }
  template <typename PipelineSummariesT = TelemetryPipelineSummary>
  ListTelemetryPipelinesResult& AddPipelineSummaries(PipelineSummariesT&& value) {
    m_pipelineSummariesHasBeenSet = true;
    m_pipelineSummaries.emplace_back(std::forward<PipelineSummariesT>(value));
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
  ListTelemetryPipelinesResult& WithNextToken(NextTokenT&& value) {
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
  ListTelemetryPipelinesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TelemetryPipelineSummary> m_pipelineSummaries;
  bool m_pipelineSummariesHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
