/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/HealthCheckConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

HealthCheckConfig::HealthCheckConfig() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_healthCheckIntervalSeconds(0),
    m_healthCheckIntervalSecondsHasBeenSet(false),
    m_healthCheckTimeoutSeconds(0),
    m_healthCheckTimeoutSecondsHasBeenSet(false),
    m_healthyThresholdCount(0),
    m_healthyThresholdCountHasBeenSet(false),
    m_matcherHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_protocol(TargetGroupProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_protocolVersion(HealthCheckProtocolVersion::NOT_SET),
    m_protocolVersionHasBeenSet(false),
    m_unhealthyThresholdCount(0),
    m_unhealthyThresholdCountHasBeenSet(false)
{
}

HealthCheckConfig::HealthCheckConfig(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_healthCheckIntervalSeconds(0),
    m_healthCheckIntervalSecondsHasBeenSet(false),
    m_healthCheckTimeoutSeconds(0),
    m_healthCheckTimeoutSecondsHasBeenSet(false),
    m_healthyThresholdCount(0),
    m_healthyThresholdCountHasBeenSet(false),
    m_matcherHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_protocol(TargetGroupProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_protocolVersion(HealthCheckProtocolVersion::NOT_SET),
    m_protocolVersionHasBeenSet(false),
    m_unhealthyThresholdCount(0),
    m_unhealthyThresholdCountHasBeenSet(false)
{
  *this = jsonValue;
}

HealthCheckConfig& HealthCheckConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("healthCheckIntervalSeconds"))
  {
    m_healthCheckIntervalSeconds = jsonValue.GetInteger("healthCheckIntervalSeconds");

    m_healthCheckIntervalSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("healthCheckTimeoutSeconds"))
  {
    m_healthCheckTimeoutSeconds = jsonValue.GetInteger("healthCheckTimeoutSeconds");

    m_healthCheckTimeoutSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("healthyThresholdCount"))
  {
    m_healthyThresholdCount = jsonValue.GetInteger("healthyThresholdCount");

    m_healthyThresholdCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("matcher"))
  {
    m_matcher = jsonValue.GetObject("matcher");

    m_matcherHasBeenSet = true;
  }

  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = TargetGroupProtocolMapper::GetTargetGroupProtocolForName(jsonValue.GetString("protocol"));

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocolVersion"))
  {
    m_protocolVersion = HealthCheckProtocolVersionMapper::GetHealthCheckProtocolVersionForName(jsonValue.GetString("protocolVersion"));

    m_protocolVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unhealthyThresholdCount"))
  {
    m_unhealthyThresholdCount = jsonValue.GetInteger("unhealthyThresholdCount");

    m_unhealthyThresholdCountHasBeenSet = true;
  }

  return *this;
}

JsonValue HealthCheckConfig::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_healthCheckIntervalSecondsHasBeenSet)
  {
   payload.WithInteger("healthCheckIntervalSeconds", m_healthCheckIntervalSeconds);

  }

  if(m_healthCheckTimeoutSecondsHasBeenSet)
  {
   payload.WithInteger("healthCheckTimeoutSeconds", m_healthCheckTimeoutSeconds);

  }

  if(m_healthyThresholdCountHasBeenSet)
  {
   payload.WithInteger("healthyThresholdCount", m_healthyThresholdCount);

  }

  if(m_matcherHasBeenSet)
  {
   payload.WithObject("matcher", m_matcher.Jsonize());

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", TargetGroupProtocolMapper::GetNameForTargetGroupProtocol(m_protocol));
  }

  if(m_protocolVersionHasBeenSet)
  {
   payload.WithString("protocolVersion", HealthCheckProtocolVersionMapper::GetNameForHealthCheckProtocolVersion(m_protocolVersion));
  }

  if(m_unhealthyThresholdCountHasBeenSet)
  {
   payload.WithInteger("unhealthyThresholdCount", m_unhealthyThresholdCount);

  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
