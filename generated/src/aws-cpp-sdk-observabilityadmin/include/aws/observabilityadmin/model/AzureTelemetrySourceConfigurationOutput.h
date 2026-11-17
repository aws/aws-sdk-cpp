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
 * <p>The Microsoft Azure source configuration of a third-party telemetry
 * enrichment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AzureTelemetrySourceConfigurationOutput">AWS
 * API Reference</a></p>
 */
class AzureTelemetrySourceConfigurationOutput {
 public:
  AWS_OBSERVABILITYADMIN_API AzureTelemetrySourceConfigurationOutput() = default;
  AWS_OBSERVABILITYADMIN_API AzureTelemetrySourceConfigurationOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API AzureTelemetrySourceConfigurationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Config connector
   * that the enrichment uses.</p>
   */
  inline const Aws::String& GetAwsConfigConnectorArn() const { return m_awsConfigConnectorArn; }
  inline bool AwsConfigConnectorArnHasBeenSet() const { return m_awsConfigConnectorArnHasBeenSet; }
  template <typename AwsConfigConnectorArnT = Aws::String>
  void SetAwsConfigConnectorArn(AwsConfigConnectorArnT&& value) {
    m_awsConfigConnectorArnHasBeenSet = true;
    m_awsConfigConnectorArn = std::forward<AwsConfigConnectorArnT>(value);
  }
  template <typename AwsConfigConnectorArnT = Aws::String>
  AzureTelemetrySourceConfigurationOutput& WithAwsConfigConnectorArn(AwsConfigConnectorArnT&& value) {
    SetAwsConfigConnectorArn(std::forward<AwsConfigConnectorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the service-linked configuration recorder
   * that CloudWatch created in your account for the enrichment.</p>
   */
  inline const Aws::String& GetServiceLinkedRecorderArn() const { return m_serviceLinkedRecorderArn; }
  inline bool ServiceLinkedRecorderArnHasBeenSet() const { return m_serviceLinkedRecorderArnHasBeenSet; }
  template <typename ServiceLinkedRecorderArnT = Aws::String>
  void SetServiceLinkedRecorderArn(ServiceLinkedRecorderArnT&& value) {
    m_serviceLinkedRecorderArnHasBeenSet = true;
    m_serviceLinkedRecorderArn = std::forward<ServiceLinkedRecorderArnT>(value);
  }
  template <typename ServiceLinkedRecorderArnT = Aws::String>
  AzureTelemetrySourceConfigurationOutput& WithServiceLinkedRecorderArn(ServiceLinkedRecorderArnT&& value) {
    SetServiceLinkedRecorderArn(std::forward<ServiceLinkedRecorderArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsConfigConnectorArn;

  Aws::String m_serviceLinkedRecorderArn;
  bool m_awsConfigConnectorArnHasBeenSet = false;
  bool m_serviceLinkedRecorderArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
