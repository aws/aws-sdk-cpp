/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/VPCConfigResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

VPCConfigResponse::VPCConfigResponse() : 
    m_subnetsHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_assignPublicIp(false),
    m_assignPublicIpHasBeenSet(false)
{
}

VPCConfigResponse::VPCConfigResponse(JsonView jsonValue) : 
    m_subnetsHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_assignPublicIp(false),
    m_assignPublicIpHasBeenSet(false)
{
  *this = jsonValue;
}

VPCConfigResponse& VPCConfigResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("subnets"))
  {
    Aws::Utils::Array<JsonView> subnetsJsonList = jsonValue.GetArray("subnets");
    for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
    {
      m_subnets.push_back(subnetsJsonList[subnetsIndex].AsString());
    }
    m_subnetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("securityGroups"))
  {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("securityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
    m_securityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcId"))
  {
    m_vpcId = jsonValue.GetString("vpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assignPublicIp"))
  {
    m_assignPublicIp = jsonValue.GetBool("assignPublicIp");

    m_assignPublicIpHasBeenSet = true;
  }

  return *this;
}

JsonValue VPCConfigResponse::Jsonize() const
{
  JsonValue payload;

  if(m_subnetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetsJsonList(m_subnets.size());
   for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
   {
     subnetsJsonList[subnetsIndex].AsString(m_subnets[subnetsIndex]);
   }
   payload.WithArray("subnets", std::move(subnetsJsonList));

  }

  if(m_securityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsString(m_securityGroups[securityGroupsIndex]);
   }
   payload.WithArray("securityGroups", std::move(securityGroupsJsonList));

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("vpcId", m_vpcId);

  }

  if(m_assignPublicIpHasBeenSet)
  {
   payload.WithBool("assignPublicIp", m_assignPublicIp);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
