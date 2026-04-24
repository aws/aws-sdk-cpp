/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>Defines the configuration for a pipeline, including how data flows from
 * sources through processors to destinations. The configuration is specified in
 * YAML format and must include a valid pipeline definition with required source
 * and sink components. This pipeline enables end-to-end telemetry data collection,
 * transformation, and delivery while supporting optional processing steps and
 * extensions for enhanced functionality.</p> <p>The primary pipeline configuration
 * section are:</p> <ul> <li> <p> <b>Source:</b> Defines where log data originates
 * from (S3 buckets, CloudWatch Logs, third-party APIs). Each pipeline must have
 * exactly one source.</p> </li> <li> <p> <b>Processors (optional):</b> Transform,
 * parse, and enrich log data as it flows through the pipeline. Processors are
 * applied sequentially in the order they are defined.</p> </li> <li> <p>
 * <b>Sink:</b> Defines the destination where processed log data is sent. Each
 * pipeline must have exactly one sink.</p> </li> <li> <p> <b>Extensions
 * (optional):</b> Provide additional functionality such as Amazon Web Services
 * Secrets Manager integration for credential management.</p> </li> </ul> <p>For
 * more details on each configuration section see <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch-pipelines.html">CloudWatch
 * pipelines User Guide</a>. Additional comprehensive configuration examples can be
 * found in the <a
 * href="https://docs.aws.amazon.com/cloudwatch/latest/observabilityadmin/API_CreateTelemetryPipeline.html#API_CreateTelemetryPipeline_Examples">CreateTelemetryPipeline
 * API docs</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/TelemetryPipelineConfiguration">AWS
 * API Reference</a></p>
 */
class TelemetryPipelineConfiguration {
 public:
  AWS_OBSERVABILITYADMIN_API TelemetryPipelineConfiguration() = default;
  AWS_OBSERVABILITYADMIN_API TelemetryPipelineConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API TelemetryPipelineConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The pipeline configuration body that defines the data processing rules and
   * transformations.</p>
   */
  inline const Aws::String& GetBody() const { return m_body; }
  inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
  template <typename BodyT = Aws::String>
  void SetBody(BodyT&& value) {
    m_bodyHasBeenSet = true;
    m_body = std::forward<BodyT>(value);
  }
  template <typename BodyT = Aws::String>
  TelemetryPipelineConfiguration& WithBody(BodyT&& value) {
    SetBody(std::forward<BodyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_body;
  bool m_bodyHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
