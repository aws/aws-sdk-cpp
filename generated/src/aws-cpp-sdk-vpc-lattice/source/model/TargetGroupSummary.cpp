/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/TargetGroupSummary.h>
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

TargetGroupSummary::TargetGroupSummary() : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_idHasBeenSet(false),
    m_ipAddressType(IpAddressType::NOT_SET),
    m_ipAddressTypeHasBeenSet(false),
    m_lambdaEventStructureVersion(LambdaEventStructureVersion::NOT_SET),
    m_lambdaEventStructureVersionHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_protocol(TargetGroupProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_serviceArnsHasBeenSet(false),
    m_status(TargetGroupStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(TargetGroupType::NOT_SET),
    m_typeHasBeenSet(false),
    m_vpcIdentifierHasBeenSet(false)
{
}

TargetGroupSummary::TargetGroupSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_idHasBeenSet(false),
    m_ipAddressType(IpAddressType::NOT_SET),
    m_ipAddressTypeHasBeenSet(false),
    m_lambdaEventStructureVersion(LambdaEventStructureVersion::NOT_SET),
    m_lambdaEventStructureVersionHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_protocol(TargetGroupProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_serviceArnsHasBeenSet(false),
    m_status(TargetGroupStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(TargetGroupType::NOT_SET),
    m_typeHasBeenSet(false),
    m_vpcIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

TargetGroupSummary& TargetGroupSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
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

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
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

  if(jsonValue.ValueExists("serviceArns"))
  {
    Aws::Utils::Array<JsonView> serviceArnsJsonList = jsonValue.GetArray("serviceArns");
    for(unsigned serviceArnsIndex = 0; serviceArnsIndex < serviceArnsJsonList.GetLength(); ++serviceArnsIndex)
    {
      m_serviceArns.push_back(serviceArnsJsonList[serviceArnsIndex].AsString());
    }
    m_serviceArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TargetGroupStatusMapper::GetTargetGroupStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = TargetGroupTypeMapper::GetTargetGroupTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcIdentifier"))
  {
    m_vpcIdentifier = jsonValue.GetString("vpcIdentifier");

    m_vpcIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetGroupSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_ipAddressTypeHasBeenSet)
  {
   payload.WithString("ipAddressType", IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType));
  }

  if(m_lambdaEventStructureVersionHasBeenSet)
  {
   payload.WithString("lambdaEventStructureVersion", LambdaEventStructureVersionMapper::GetNameForLambdaEventStructureVersion(m_lambdaEventStructureVersion));
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithString("lastUpdatedAt", m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", TargetGroupProtocolMapper::GetNameForTargetGroupProtocol(m_protocol));
  }

  if(m_serviceArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serviceArnsJsonList(m_serviceArns.size());
   for(unsigned serviceArnsIndex = 0; serviceArnsIndex < serviceArnsJsonList.GetLength(); ++serviceArnsIndex)
   {
     serviceArnsJsonList[serviceArnsIndex].AsString(m_serviceArns[serviceArnsIndex]);
   }
   payload.WithArray("serviceArns", std::move(serviceArnsJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TargetGroupStatusMapper::GetNameForTargetGroupStatus(m_status));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TargetGroupTypeMapper::GetNameForTargetGroupType(m_type));
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
