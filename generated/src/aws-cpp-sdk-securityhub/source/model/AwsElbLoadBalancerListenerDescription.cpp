/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsElbLoadBalancerListenerDescription.h>
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

AwsElbLoadBalancerListenerDescription::AwsElbLoadBalancerListenerDescription() : 
    m_listenerHasBeenSet(false),
    m_policyNamesHasBeenSet(false)
{
}

AwsElbLoadBalancerListenerDescription::AwsElbLoadBalancerListenerDescription(JsonView jsonValue) : 
    m_listenerHasBeenSet(false),
    m_policyNamesHasBeenSet(false)
{
  *this = jsonValue;
}

AwsElbLoadBalancerListenerDescription& AwsElbLoadBalancerListenerDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Listener"))
  {
    m_listener = jsonValue.GetObject("Listener");

    m_listenerHasBeenSet = true;
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

JsonValue AwsElbLoadBalancerListenerDescription::Jsonize() const
{
  JsonValue payload;

  if(m_listenerHasBeenSet)
  {
   payload.WithObject("Listener", m_listener.Jsonize());

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
