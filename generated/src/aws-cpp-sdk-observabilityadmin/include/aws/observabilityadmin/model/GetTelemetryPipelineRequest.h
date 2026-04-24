/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdminRequest.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

/**
 */
class GetTelemetryPipelineRequest : public ObservabilityAdminRequest {
 public:
  AWS_OBSERVABILITYADMIN_API GetTelemetryPipelineRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetTelemetryPipeline"; }

  AWS_OBSERVABILITYADMIN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier (name or ARN) of the telemetry pipeline to retrieve.</p>
   */
  inline const Aws::String& GetPipelineIdentifier() const { return m_pipelineIdentifier; }
  inline bool PipelineIdentifierHasBeenSet() const { return m_pipelineIdentifierHasBeenSet; }
  template <typename PipelineIdentifierT = Aws::String>
  void SetPipelineIdentifier(PipelineIdentifierT&& value) {
    m_pipelineIdentifierHasBeenSet = true;
    m_pipelineIdentifier = std::forward<PipelineIdentifierT>(value);
  }
  template <typename PipelineIdentifierT = Aws::String>
  GetTelemetryPipelineRequest& WithPipelineIdentifier(PipelineIdentifierT&& value) {
    SetPipelineIdentifier(std::forward<PipelineIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_pipelineIdentifier;
  bool m_pipelineIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
