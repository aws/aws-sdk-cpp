/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/TargetGroupConfig.h>
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

TargetGroupConfig::TargetGroupConfig() : 
    m_healthCheckHasBeenSet(false),
    m_ipAddressType(IpAddressType::NOT_SET),
    m_ipAddressTypeHasBeenSet(false),
    m_lambdaEventStructureVersion(LambdaEventStructureVersion::NOT_SET),
    m_lambdaEventStructureVersionHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_protocol(TargetGroupProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_protocolVersion(TargetGroupProtocolVersion::NOT_SET),
    m_protocolVersionHasBeenSet(false),
    m_vpcIdentifierHasBeenSet(false)
{
}

TargetGroupConfig::TargetGroupConfig(JsonView jsonValue) : 
    m_healthCheckHasBeenSet(false),
    m_ipAddressType(IpAddressType::NOT_SET),
    m_ipAddressTypeHasBeenSet(false),
    m_lambdaEventStructureVersion(LambdaEventStructureVersion::NOT_SET),
    m_lambdaEventStructureVersionHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_protocol(TargetGroupProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_protocolVersion(TargetGroupProtocolVersion::NOT_SET),
    m_protocolVersionHasBeenSet(false),
    m_vpcIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

TargetGroupConfig& TargetGroupConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("healthCheck"))
  {
    m_healthCheck = jsonValue.GetObject("healthCheck");

    m_healthCheckHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipAddressType"))
  {
    m_ipAddressType = IpAddressTypeMapper::GetIpAddressTypeForName(jsonValue.GetString("ipAddressType"));

    m_ipAddressTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaEventStructureVersion"))
  {
    m_lambdaEventStructureVersion = LambdaEventStructureVersionMapper::GetLambdaEventStructureVersionForName(jsonValue.GetString("lambdaEventStructureVersion"));

    m_lambdaEventStructureVersionHasBeenSet = true;
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
    m_protocolVersion = TargetGroupProtocolVersionMapper::GetTargetGroupProtocolVersionForName(jsonValue.GetString("protocolVersion"));

    m_protocolVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcIdentifier"))
  {
    m_vpcIdentifier = jsonValue.GetString("vpcIdentifier");

    m_vpcIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetGroupConfig::Jsonize() const
{
  JsonValue payload;

  if(m_healthCheckHasBeenSet)
  {
   payload.WithObject("healthCheck", m_healthCheck.Jsonize());

  }

  if(m_ipAddressTypeHasBeenSet)
  {
   payload.WithString("ipAddressType", IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType));
  }

  if(m_lambdaEventStructureVersionHasBeenSet)
  {
   payload.WithString("lambdaEventStructureVersion", LambdaEventStructureVersionMapper::GetNameForLambdaEventStructureVersion(m_lambdaEventStructureVersion));
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
   payload.WithString("protocolVersion", TargetGroupProtocolVersionMapper::GetNameForTargetGroupProtocolVersion(m_protocolVersion));
  }

  if(m_vpcIdentifierHasBeenSet)
  {
   payload.WithString("vpcIdentifier", m_vpcIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
