/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/EndpointAccess.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

EndpointAccess::EndpointAccess() : 
    m_addressHasBeenSet(false),
    m_endpointArnHasBeenSet(false),
    m_endpointCreateTimeHasBeenSet(false),
    m_endpointNameHasBeenSet(false),
    m_endpointStatusHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_vpcEndpointHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false),
    m_workgroupNameHasBeenSet(false)
{
}

EndpointAccess::EndpointAccess(JsonView jsonValue) : 
    m_addressHasBeenSet(false),
    m_endpointArnHasBeenSet(false),
    m_endpointCreateTimeHasBeenSet(false),
    m_endpointNameHasBeenSet(false),
    m_endpointStatusHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_vpcEndpointHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false),
    m_workgroupNameHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointAccess& EndpointAccess::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("address"))
  {
    m_address = jsonValue.GetString("address");

    m_addressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endpointArn"))
  {
    m_endpointArn = jsonValue.GetString("endpointArn");

    m_endpointArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endpointCreateTime"))
  {
    m_endpointCreateTime = jsonValue.GetString("endpointCreateTime");

    m_endpointCreateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endpointName"))
  {
    m_endpointName = jsonValue.GetString("endpointName");

    m_endpointNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endpointStatus"))
  {
    m_endpointStatus = jsonValue.GetString("endpointStatus");

    m_endpointStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subnetIds"))
  {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("subnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcEndpoint"))
  {
    m_vpcEndpoint = jsonValue.GetObject("vpcEndpoint");

    m_vpcEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcSecurityGroups"))
  {
    Aws::Utils::Array<JsonView> vpcSecurityGroupsJsonList = jsonValue.GetArray("vpcSecurityGroups");
    for(unsigned vpcSecurityGroupsIndex = 0; vpcSecurityGroupsIndex < vpcSecurityGroupsJsonList.GetLength(); ++vpcSecurityGroupsIndex)
    {
      m_vpcSecurityGroups.push_back(vpcSecurityGroupsJsonList[vpcSecurityGroupsIndex].AsObject());
    }
    m_vpcSecurityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workgroupName"))
  {
    m_workgroupName = jsonValue.GetString("workgroupName");

    m_workgroupNameHasBeenSet = true;
  }

  return *this;
}

JsonValue EndpointAccess::Jsonize() const
{
  JsonValue payload;

  if(m_addressHasBeenSet)
  {
   payload.WithString("address", m_address);

  }

  if(m_endpointArnHasBeenSet)
  {
   payload.WithString("endpointArn", m_endpointArn);

  }

  if(m_endpointCreateTimeHasBeenSet)
  {
   payload.WithString("endpointCreateTime", m_endpointCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("endpointName", m_endpointName);

  }

  if(m_endpointStatusHasBeenSet)
  {
   payload.WithString("endpointStatus", m_endpointStatus);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_subnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("subnetIds", std::move(subnetIdsJsonList));

  }

  if(m_vpcEndpointHasBeenSet)
  {
   payload.WithObject("vpcEndpoint", m_vpcEndpoint.Jsonize());

  }

  if(m_vpcSecurityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcSecurityGroupsJsonList(m_vpcSecurityGroups.size());
   for(unsigned vpcSecurityGroupsIndex = 0; vpcSecurityGroupsIndex < vpcSecurityGroupsJsonList.GetLength(); ++vpcSecurityGroupsIndex)
   {
     vpcSecurityGroupsJsonList[vpcSecurityGroupsIndex].AsObject(m_vpcSecurityGroups[vpcSecurityGroupsIndex].Jsonize());
   }
   payload.WithArray("vpcSecurityGroups", std::move(vpcSecurityGroupsJsonList));

  }

  if(m_workgroupNameHasBeenSet)
  {
   payload.WithString("workgroupName", m_workgroupName);

  }

  return payload;
}

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
