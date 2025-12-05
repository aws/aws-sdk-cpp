/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/TelemetryPipeline.h>

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
class GetTelemetryPipelineResult {
 public:
  AWS_OBSERVABILITYADMIN_API GetTelemetryPipelineResult() = default;
  AWS_OBSERVABILITYADMIN_API GetTelemetryPipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OBSERVABILITYADMIN_API GetTelemetryPipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The complete telemetry pipeline resource information, including
   * configuration, status, and metadata.</p>
   */
  inline const TelemetryPipeline& GetPipeline() const { return m_pipeline; }
  template <typename PipelineT = TelemetryPipeline>
  void SetPipeline(PipelineT&& value) {
    m_pipelineHasBeenSet = true;
    m_pipeline = std::forward<PipelineT>(value);
  }
  template <typename PipelineT = TelemetryPipeline>
  GetTelemetryPipelineResult& WithPipeline(PipelineT&& value) {
    SetPipeline(std::forward<PipelineT>(value));
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
  GetTelemetryPipelineResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  TelemetryPipeline m_pipeline;

  Aws::String m_requestId;
  bool m_pipelineHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
