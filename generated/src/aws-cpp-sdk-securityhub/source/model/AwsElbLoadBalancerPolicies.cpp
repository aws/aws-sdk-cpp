/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsElbLoadBalancerPolicies.h>
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

AwsElbLoadBalancerPolicies::AwsElbLoadBalancerPolicies() : 
    m_appCookieStickinessPoliciesHasBeenSet(false),
    m_lbCookieStickinessPoliciesHasBeenSet(false),
    m_otherPoliciesHasBeenSet(false)
{
}

AwsElbLoadBalancerPolicies::AwsElbLoadBalancerPolicies(JsonView jsonValue) : 
    m_appCookieStickinessPoliciesHasBeenSet(false),
    m_lbCookieStickinessPoliciesHasBeenSet(false),
    m_otherPoliciesHasBeenSet(false)
{
  *this = jsonValue;
}

AwsElbLoadBalancerPolicies& AwsElbLoadBalancerPolicies::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AppCookieStickinessPolicies"))
  {
    Aws::Utils::Array<JsonView> appCookieStickinessPoliciesJsonList = jsonValue.GetArray("AppCookieStickinessPolicies");
    for(unsigned appCookieStickinessPoliciesIndex = 0; appCookieStickinessPoliciesIndex < appCookieStickinessPoliciesJsonList.GetLength(); ++appCookieStickinessPoliciesIndex)
    {
      m_appCookieStickinessPolicies.push_back(appCookieStickinessPoliciesJsonList[appCookieStickinessPoliciesIndex].AsObject());
    }
    m_appCookieStickinessPoliciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LbCookieStickinessPolicies"))
  {
    Aws::Utils::Array<JsonView> lbCookieStickinessPoliciesJsonList = jsonValue.GetArray("LbCookieStickinessPolicies");
    for(unsigned lbCookieStickinessPoliciesIndex = 0; lbCookieStickinessPoliciesIndex < lbCookieStickinessPoliciesJsonList.GetLength(); ++lbCookieStickinessPoliciesIndex)
    {
      m_lbCookieStickinessPolicies.push_back(lbCookieStickinessPoliciesJsonList[lbCookieStickinessPoliciesIndex].AsObject());
    }
    m_lbCookieStickinessPoliciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OtherPolicies"))
  {
    Aws::Utils::Array<JsonView> otherPoliciesJsonList = jsonValue.GetArray("OtherPolicies");
    for(unsigned otherPoliciesIndex = 0; otherPoliciesIndex < otherPoliciesJsonList.GetLength(); ++otherPoliciesIndex)
    {
      m_otherPolicies.push_back(otherPoliciesJsonList[otherPoliciesIndex].AsString());
    }
    m_otherPoliciesHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsElbLoadBalancerPolicies::Jsonize() const
{
  JsonValue payload;

  if(m_appCookieStickinessPoliciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> appCookieStickinessPoliciesJsonList(m_appCookieStickinessPolicies.size());
   for(unsigned appCookieStickinessPoliciesIndex = 0; appCookieStickinessPoliciesIndex < appCookieStickinessPoliciesJsonList.GetLength(); ++appCookieStickinessPoliciesIndex)
   {
     appCookieStickinessPoliciesJsonList[appCookieStickinessPoliciesIndex].AsObject(m_appCookieStickinessPolicies[appCookieStickinessPoliciesIndex].Jsonize());
   }
   payload.WithArray("AppCookieStickinessPolicies", std::move(appCookieStickinessPoliciesJsonList));

  }

  if(m_lbCookieStickinessPoliciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lbCookieStickinessPoliciesJsonList(m_lbCookieStickinessPolicies.size());
   for(unsigned lbCookieStickinessPoliciesIndex = 0; lbCookieStickinessPoliciesIndex < lbCookieStickinessPoliciesJsonList.GetLength(); ++lbCookieStickinessPoliciesIndex)
   {
     lbCookieStickinessPoliciesJsonList[lbCookieStickinessPoliciesIndex].AsObject(m_lbCookieStickinessPolicies[lbCookieStickinessPoliciesIndex].Jsonize());
   }
   payload.WithArray("LbCookieStickinessPolicies", std::move(lbCookieStickinessPoliciesJsonList));

  }

  if(m_otherPoliciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> otherPoliciesJsonList(m_otherPolicies.size());
   for(unsigned otherPoliciesIndex = 0; otherPoliciesIndex < otherPoliciesJsonList.GetLength(); ++otherPoliciesIndex)
   {
     otherPoliciesJsonList[otherPoliciesIndex].AsString(m_otherPolicies[otherPoliciesIndex]);
   }
   payload.WithArray("OtherPolicies", std::move(otherPoliciesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
