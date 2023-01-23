/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsElbAppCookieStickinessPolicy.h>
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

AwsElbAppCookieStickinessPolicy::AwsElbAppCookieStickinessPolicy() : 
    m_cookieNameHasBeenSet(false),
    m_policyNameHasBeenSet(false)
{
}

AwsElbAppCookieStickinessPolicy::AwsElbAppCookieStickinessPolicy(JsonView jsonValue) : 
    m_cookieNameHasBeenSet(false),
    m_policyNameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsElbAppCookieStickinessPolicy& AwsElbAppCookieStickinessPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CookieName"))
  {
    m_cookieName = jsonValue.GetString("CookieName");

    m_cookieNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyName"))
  {
    m_policyName = jsonValue.GetString("PolicyName");

    m_policyNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsElbAppCookieStickinessPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_cookieNameHasBeenSet)
  {
   payload.WithString("CookieName", m_cookieName);

  }

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("PolicyName", m_policyName);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
