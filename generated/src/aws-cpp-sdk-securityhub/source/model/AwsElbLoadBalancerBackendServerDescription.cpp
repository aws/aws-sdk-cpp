/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsElbLoadBalancerBackendServerDescription.h>
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

AwsElbLoadBalancerBackendServerDescription::AwsElbLoadBalancerBackendServerDescription() : 
    m_instancePort(0),
    m_instancePortHasBeenSet(false),
    m_policyNamesHasBeenSet(false)
{
}

AwsElbLoadBalancerBackendServerDescription::AwsElbLoadBalancerBackendServerDescription(JsonView jsonValue) : 
    m_instancePort(0),
    m_instancePortHasBeenSet(false),
    m_policyNamesHasBeenSet(false)
{
  *this = jsonValue;
}

AwsElbLoadBalancerBackendServerDescription& AwsElbLoadBalancerBackendServerDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstancePort"))
  {
    m_instancePort = jsonValue.GetInteger("InstancePort");

    m_instancePortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyNames"))
  {
    Aws::Utils::Array<JsonView> policyNamesJsonList = jsonValue.GetArray("PolicyNames");
    for(unsigned policyNamesIndex = 0; policyNamesIndex < policyNamesJsonList.GetLength(); ++policyNamesIndex)
    {
      m_policyNames.push_back(policyNamesJsonList[policyNamesIndex].AsString());
    }
    m_policyNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsElbLoadBalancerBackendServerDescription::Jsonize() const
{
  JsonValue payload;

  if(m_instancePortHasBeenSet)
  {
   payload.WithInteger("InstancePort", m_instancePort);

  }

  if(m_policyNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> policyNamesJsonList(m_policyNames.size());
   for(unsigned policyNamesIndex = 0; policyNamesIndex < policyNamesJsonList.GetLength(); ++policyNamesIndex)
   {
     policyNamesJsonList[policyNamesIndex].AsString(m_policyNames[policyNamesIndex]);
   }
   payload.WithArray("PolicyNames", std::move(policyNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
