/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/TelemetryDestinationConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

TelemetryDestinationConfiguration::TelemetryDestinationConfiguration(JsonView jsonValue) { *this = jsonValue; }

TelemetryDestinationConfiguration& TelemetryDestinationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DestinationType")) {
    m_destinationType = DestinationTypeMapper::GetDestinationTypeForName(jsonValue.GetString("DestinationType"));
    m_destinationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DestinationPattern")) {
    m_destinationPattern = jsonValue.GetString("DestinationPattern");
    m_destinationPatternHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RetentionInDays")) {
    m_retentionInDays = jsonValue.GetInteger("RetentionInDays");
    m_retentionInDaysHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VPCFlowLogParameters")) {
    m_vPCFlowLogParameters = jsonValue.GetObject("VPCFlowLogParameters");
    m_vPCFlowLogParametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CloudtrailParameters")) {
    m_cloudtrailParameters = jsonValue.GetObject("CloudtrailParameters");
    m_cloudtrailParametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ELBLoadBalancerLoggingParameters")) {
    m_eLBLoadBalancerLoggingParameters = jsonValue.GetObject("ELBLoadBalancerLoggingParameters");
    m_eLBLoadBalancerLoggingParametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WAFLoggingParameters")) {
    m_wAFLoggingParameters = jsonValue.GetObject("WAFLoggingParameters");
    m_wAFLoggingParametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LogDeliveryParameters")) {
    m_logDeliveryParameters = jsonValue.GetObject("LogDeliveryParameters");
    m_logDeliveryParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue TelemetryDestinationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_destinationTypeHasBeenSet) {
    payload.WithString("DestinationType", DestinationTypeMapper::GetNameForDestinationType(m_destinationType));
  }

  if (m_destinationPatternHasBeenSet) {
    payload.WithString("DestinationPattern", m_destinationPattern);
  }

  if (m_retentionInDaysHasBeenSet) {
    payload.WithInteger("RetentionInDays", m_retentionInDays);
  }

  if (m_vPCFlowLogParametersHasBeenSet) {
    payload.WithObject("VPCFlowLogParameters", m_vPCFlowLogParameters.Jsonize());
  }

  if (m_cloudtrailParametersHasBeenSet) {
    payload.WithObject("CloudtrailParameters", m_cloudtrailParameters.Jsonize());
  }

  if (m_eLBLoadBalancerLoggingParametersHasBeenSet) {
    payload.WithObject("ELBLoadBalancerLoggingParameters", m_eLBLoadBalancerLoggingParameters.Jsonize());
  }

  if (m_wAFLoggingParametersHasBeenSet) {
    payload.WithObject("WAFLoggingParameters", m_wAFLoggingParameters.Jsonize());
  }

  if (m_logDeliveryParametersHasBeenSet) {
    payload.WithObject("LogDeliveryParameters", m_logDeliveryParameters.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
