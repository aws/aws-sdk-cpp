/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails::AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails() : 
    m_assignPublicIpHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_subnetsHasBeenSet(false)
{
}

AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails::AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails(JsonView jsonValue) : 
    m_assignPublicIpHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_subnetsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails& AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssignPublicIp"))
  {
    m_assignPublicIp = jsonValue.GetString("AssignPublicIp");

    m_assignPublicIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroups"))
  {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("SecurityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
    m_securityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subnets"))
  {
    Aws::Utils::Array<JsonView> subnetsJsonList = jsonValue.GetArray("Subnets");
    for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
    {
      m_subnets.push_back(subnetsJsonList[subnetsIndex].AsString());
    }
    m_subnetsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsServiceNetworkConfigurationAwsVpcConfigurationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_assignPublicIpHasBeenSet)
  {
   payload.WithString("AssignPublicIp", m_assignPublicIp);

  }

  if(m_securityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsString(m_securityGroups[securityGroupsIndex]);
   }
   payload.WithArray("SecurityGroups", std::move(securityGroupsJsonList));

  }

  if(m_subnetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetsJsonList(m_subnets.size());
   for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
   {
     subnetsJsonList[subnetsIndex].AsString(m_subnets[subnetsIndex]);
   }
   payload.WithArray("Subnets", std::move(subnetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
