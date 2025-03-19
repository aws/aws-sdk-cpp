/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/SelfManagedKafkaAccessConfigurationVpc.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

SelfManagedKafkaAccessConfigurationVpc::SelfManagedKafkaAccessConfigurationVpc(JsonView jsonValue)
{
  *this = jsonValue;
}

SelfManagedKafkaAccessConfigurationVpc& SelfManagedKafkaAccessConfigurationVpc::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Subnets"))
  {
    Aws::Utils::Array<JsonView> subnetsJsonList = jsonValue.GetArray("Subnets");
    for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
    {
      m_subnets.push_back(subnetsJsonList[subnetsIndex].AsString());
    }
    m_subnetsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecurityGroup"))
  {
    Aws::Utils::Array<JsonView> securityGroupJsonList = jsonValue.GetArray("SecurityGroup");
    for(unsigned securityGroupIndex = 0; securityGroupIndex < securityGroupJsonList.GetLength(); ++securityGroupIndex)
    {
      m_securityGroup.push_back(securityGroupJsonList[securityGroupIndex].AsString());
    }
    m_securityGroupHasBeenSet = true;
  }
  return *this;
}

JsonValue SelfManagedKafkaAccessConfigurationVpc::Jsonize() const
{
  JsonValue payload;

  if(m_subnetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetsJsonList(m_subnets.size());
   for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
   {
     subnetsJsonList[subnetsIndex].AsString(m_subnets[subnetsIndex]);
   }
   payload.WithArray("Subnets", std::move(subnetsJsonList));

  }

  if(m_securityGroupHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupJsonList(m_securityGroup.size());
   for(unsigned securityGroupIndex = 0; securityGroupIndex < securityGroupJsonList.GetLength(); ++securityGroupIndex)
   {
     securityGroupJsonList[securityGroupIndex].AsString(m_securityGroup[securityGroupIndex]);
   }
   payload.WithArray("SecurityGroup", std::move(securityGroupJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
