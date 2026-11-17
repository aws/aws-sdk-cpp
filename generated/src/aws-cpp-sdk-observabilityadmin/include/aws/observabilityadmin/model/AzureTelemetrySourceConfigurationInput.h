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
 * <p>The Microsoft Azure source configuration for a third-party telemetry
 * enrichment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AzureTelemetrySourceConfigurationInput">AWS
 * API Reference</a></p>
 */
class AzureTelemetrySourceConfigurationInput {
 public:
  AWS_OBSERVABILITYADMIN_API AzureTelemetrySourceConfigurationInput() = default;
  AWS_OBSERVABILITYADMIN_API AzureTelemetrySourceConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API AzureTelemetrySourceConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Config connector
   * for the Microsoft Azure tenant to collect resource metadata from.</p>
   */
  inline const Aws::String& GetAwsConfigConnectorArn() const { return m_awsConfigConnectorArn; }
  inline bool AwsConfigConnectorArnHasBeenSet() const { return m_awsConfigConnectorArnHasBeenSet; }
  template <typename AwsConfigConnectorArnT = Aws::String>
  void SetAwsConfigConnectorArn(AwsConfigConnectorArnT&& value) {
    m_awsConfigConnectorArnHasBeenSet = true;
    m_awsConfigConnectorArn = std::forward<AwsConfigConnectorArnT>(value);
  }
  template <typename AwsConfigConnectorArnT = Aws::String>
  AzureTelemetrySourceConfigurationInput& WithAwsConfigConnectorArn(AwsConfigConnectorArnT&& value) {
    SetAwsConfigConnectorArn(std::forward<AwsConfigConnectorArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsConfigConnectorArn;
  bool m_awsConfigConnectorArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
