/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/HealthCheckConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

HealthCheckConfig::HealthCheckConfig(JsonView jsonValue) { *this = jsonValue; }

HealthCheckConfig& HealthCheckConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("port")) {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if (jsonValue.ValueExists("path")) {
    m_path = jsonValue.GetString("path");
    m_pathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("protocol")) {
    m_protocol = ProtocolMapper::GetProtocolForName(jsonValue.GetString("protocol"));
    m_protocolHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeoutMs")) {
    m_timeoutMs = jsonValue.GetInteger("timeoutMs");
    m_timeoutMsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("intervalSeconds")) {
    m_intervalSeconds = jsonValue.GetInteger("intervalSeconds");
    m_intervalSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusCodeMatcher")) {
    m_statusCodeMatcher = jsonValue.GetString("statusCodeMatcher");
    m_statusCodeMatcherHasBeenSet = true;
  }
  if (jsonValue.ValueExists("healthyThresholdCount")) {
    m_healthyThresholdCount = jsonValue.GetInteger("healthyThresholdCount");
    m_healthyThresholdCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("unhealthyThresholdCount")) {
    m_unhealthyThresholdCount = jsonValue.GetInteger("unhealthyThresholdCount");
    m_unhealthyThresholdCountHasBeenSet = true;
  }
  return *this;
}

JsonValue HealthCheckConfig::Jsonize() const {
  JsonValue payload;

  if (m_portHasBeenSet) {
    payload.WithInteger("port", m_port);
  }

  if (m_pathHasBeenSet) {
    payload.WithString("path", m_path);
  }

  if (m_protocolHasBeenSet) {
    payload.WithString("protocol", ProtocolMapper::GetNameForProtocol(m_protocol));
  }

  if (m_timeoutMsHasBeenSet) {
    payload.WithInteger("timeoutMs", m_timeoutMs);
  }

  if (m_intervalSecondsHasBeenSet) {
    payload.WithInteger("intervalSeconds", m_intervalSeconds);
  }

  if (m_statusCodeMatcherHasBeenSet) {
    payload.WithString("statusCodeMatcher", m_statusCodeMatcher);
  }

  if (m_healthyThresholdCountHasBeenSet) {
    payload.WithInteger("healthyThresholdCount", m_healthyThresholdCount);
  }

  if (m_unhealthyThresholdCountHasBeenSet) {
    payload.WithInteger("unhealthyThresholdCount", m_unhealthyThresholdCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
