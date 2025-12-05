/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/CloudtrailParameters.h>
#include <aws/observabilityadmin/model/DestinationType.h>
#include <aws/observabilityadmin/model/ELBLoadBalancerLoggingParameters.h>
#include <aws/observabilityadmin/model/LogDeliveryParameters.h>
#include <aws/observabilityadmin/model/VPCFlowLogParameters.h>
#include <aws/observabilityadmin/model/WAFLoggingParameters.h>

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
 * <p> Configuration specifying where and how telemetry data should be delivered
 * for Amazon Web Services resources. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/TelemetryDestinationConfiguration">AWS
 * API Reference</a></p>
 */
class TelemetryDestinationConfiguration {
 public:
  AWS_OBSERVABILITYADMIN_API TelemetryDestinationConfiguration() = default;
  AWS_OBSERVABILITYADMIN_API TelemetryDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API TelemetryDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The type of destination for the telemetry data (e.g., "Amazon CloudWatch
   * Logs", "S3"). </p>
   */
  inline DestinationType GetDestinationType() const { return m_destinationType; }
  inline bool DestinationTypeHasBeenSet() const { return m_destinationTypeHasBeenSet; }
  inline void SetDestinationType(DestinationType value) {
    m_destinationTypeHasBeenSet = true;
    m_destinationType = value;
  }
  inline TelemetryDestinationConfiguration& WithDestinationType(DestinationType value) {
    SetDestinationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The pattern used to generate the destination path or name, supporting macros
   * like &lt;resourceId&gt; and &lt;accountId&gt;. </p>
   */
  inline const Aws::String& GetDestinationPattern() const { return m_destinationPattern; }
  inline bool DestinationPatternHasBeenSet() const { return m_destinationPatternHasBeenSet; }
  template <typename DestinationPatternT = Aws::String>
  void SetDestinationPattern(DestinationPatternT&& value) {
    m_destinationPatternHasBeenSet = true;
    m_destinationPattern = std::forward<DestinationPatternT>(value);
  }
  template <typename DestinationPatternT = Aws::String>
  TelemetryDestinationConfiguration& WithDestinationPattern(DestinationPatternT&& value) {
    SetDestinationPattern(std::forward<DestinationPatternT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The number of days to retain the telemetry data in the destination. </p>
   */
  inline int GetRetentionInDays() const { return m_retentionInDays; }
  inline bool RetentionInDaysHasBeenSet() const { return m_retentionInDaysHasBeenSet; }
  inline void SetRetentionInDays(int value) {
    m_retentionInDaysHasBeenSet = true;
    m_retentionInDays = value;
  }
  inline TelemetryDestinationConfiguration& WithRetentionInDays(int value) {
    SetRetentionInDays(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Configuration parameters specific to VPC Flow Logs when VPC is the resource
   * type. </p>
   */
  inline const VPCFlowLogParameters& GetVPCFlowLogParameters() const { return m_vPCFlowLogParameters; }
  inline bool VPCFlowLogParametersHasBeenSet() const { return m_vPCFlowLogParametersHasBeenSet; }
  template <typename VPCFlowLogParametersT = VPCFlowLogParameters>
  void SetVPCFlowLogParameters(VPCFlowLogParametersT&& value) {
    m_vPCFlowLogParametersHasBeenSet = true;
    m_vPCFlowLogParameters = std::forward<VPCFlowLogParametersT>(value);
  }
  template <typename VPCFlowLogParametersT = VPCFlowLogParameters>
  TelemetryDestinationConfiguration& WithVPCFlowLogParameters(VPCFlowLogParametersT&& value) {
    SetVPCFlowLogParameters(std::forward<VPCFlowLogParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Configuration parameters specific to Amazon Web Services CloudTrail when
   * CloudTrail is the source type. </p>
   */
  inline const CloudtrailParameters& GetCloudtrailParameters() const { return m_cloudtrailParameters; }
  inline bool CloudtrailParametersHasBeenSet() const { return m_cloudtrailParametersHasBeenSet; }
  template <typename CloudtrailParametersT = CloudtrailParameters>
  void SetCloudtrailParameters(CloudtrailParametersT&& value) {
    m_cloudtrailParametersHasBeenSet = true;
    m_cloudtrailParameters = std::forward<CloudtrailParametersT>(value);
  }
  template <typename CloudtrailParametersT = CloudtrailParameters>
  TelemetryDestinationConfiguration& WithCloudtrailParameters(CloudtrailParametersT&& value) {
    SetCloudtrailParameters(std::forward<CloudtrailParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Configuration parameters specific to ELB load balancer logging when ELB is
   * the resource type. </p>
   */
  inline const ELBLoadBalancerLoggingParameters& GetELBLoadBalancerLoggingParameters() const { return m_eLBLoadBalancerLoggingParameters; }
  inline bool ELBLoadBalancerLoggingParametersHasBeenSet() const { return m_eLBLoadBalancerLoggingParametersHasBeenSet; }
  template <typename ELBLoadBalancerLoggingParametersT = ELBLoadBalancerLoggingParameters>
  void SetELBLoadBalancerLoggingParameters(ELBLoadBalancerLoggingParametersT&& value) {
    m_eLBLoadBalancerLoggingParametersHasBeenSet = true;
    m_eLBLoadBalancerLoggingParameters = std::forward<ELBLoadBalancerLoggingParametersT>(value);
  }
  template <typename ELBLoadBalancerLoggingParametersT = ELBLoadBalancerLoggingParameters>
  TelemetryDestinationConfiguration& WithELBLoadBalancerLoggingParameters(ELBLoadBalancerLoggingParametersT&& value) {
    SetELBLoadBalancerLoggingParameters(std::forward<ELBLoadBalancerLoggingParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Configuration parameters specific to WAF logging when WAF is the resource
   * type. </p>
   */
  inline const WAFLoggingParameters& GetWAFLoggingParameters() const { return m_wAFLoggingParameters; }
  inline bool WAFLoggingParametersHasBeenSet() const { return m_wAFLoggingParametersHasBeenSet; }
  template <typename WAFLoggingParametersT = WAFLoggingParameters>
  void SetWAFLoggingParameters(WAFLoggingParametersT&& value) {
    m_wAFLoggingParametersHasBeenSet = true;
    m_wAFLoggingParameters = std::forward<WAFLoggingParametersT>(value);
  }
  template <typename WAFLoggingParametersT = WAFLoggingParameters>
  TelemetryDestinationConfiguration& WithWAFLoggingParameters(WAFLoggingParametersT&& value) {
    SetWAFLoggingParameters(std::forward<WAFLoggingParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration parameters specific to Amazon Bedrock AgentCore logging when
   * Amazon Bedrock AgentCore is the resource type.</p>
   */
  inline const LogDeliveryParameters& GetLogDeliveryParameters() const { return m_logDeliveryParameters; }
  inline bool LogDeliveryParametersHasBeenSet() const { return m_logDeliveryParametersHasBeenSet; }
  template <typename LogDeliveryParametersT = LogDeliveryParameters>
  void SetLogDeliveryParameters(LogDeliveryParametersT&& value) {
    m_logDeliveryParametersHasBeenSet = true;
    m_logDeliveryParameters = std::forward<LogDeliveryParametersT>(value);
  }
  template <typename LogDeliveryParametersT = LogDeliveryParameters>
  TelemetryDestinationConfiguration& WithLogDeliveryParameters(LogDeliveryParametersT&& value) {
    SetLogDeliveryParameters(std::forward<LogDeliveryParametersT>(value));
    return *this;
  }
  ///@}
 private:
  DestinationType m_destinationType{DestinationType::NOT_SET};

  Aws::String m_destinationPattern;

  int m_retentionInDays{0};

  VPCFlowLogParameters m_vPCFlowLogParameters;

  CloudtrailParameters m_cloudtrailParameters;

  ELBLoadBalancerLoggingParameters m_eLBLoadBalancerLoggingParameters;

  WAFLoggingParameters m_wAFLoggingParameters;

  LogDeliveryParameters m_logDeliveryParameters;
  bool m_destinationTypeHasBeenSet = false;
  bool m_destinationPatternHasBeenSet = false;
  bool m_retentionInDaysHasBeenSet = false;
  bool m_vPCFlowLogParametersHasBeenSet = false;
  bool m_cloudtrailParametersHasBeenSet = false;
  bool m_eLBLoadBalancerLoggingParametersHasBeenSet = false;
  bool m_wAFLoggingParametersHasBeenSet = false;
  bool m_logDeliveryParametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
