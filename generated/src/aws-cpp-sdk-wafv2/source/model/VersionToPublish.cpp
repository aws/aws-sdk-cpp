/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/VersionToPublish.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

VersionToPublish::VersionToPublish() : 
    m_associatedRuleGroupArnHasBeenSet(false),
    m_forecastedLifetime(0),
    m_forecastedLifetimeHasBeenSet(false)
{
}

VersionToPublish::VersionToPublish(JsonView jsonValue) : 
    m_associatedRuleGroupArnHasBeenSet(false),
    m_forecastedLifetime(0),
    m_forecastedLifetimeHasBeenSet(false)
{
  *this = jsonValue;
}

VersionToPublish& VersionToPublish::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssociatedRuleGroupArn"))
  {
    m_associatedRuleGroupArn = jsonValue.GetString("AssociatedRuleGroupArn");

    m_associatedRuleGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ForecastedLifetime"))
  {
    m_forecastedLifetime = jsonValue.GetInteger("ForecastedLifetime");

    m_forecastedLifetimeHasBeenSet = true;
  }

  return *this;
}

JsonValue VersionToPublish::Jsonize() const
{
  JsonValue payload;

  if(m_associatedRuleGroupArnHasBeenSet)
  {
   payload.WithString("AssociatedRuleGroupArn", m_associatedRuleGroupArn);

  }

  if(m_forecastedLifetimeHasBeenSet)
  {
   payload.WithInteger("ForecastedLifetime", m_forecastedLifetime);

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
