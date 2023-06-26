/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/RuleGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

RuleGroup::RuleGroup() : 
    m_ruleGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_metricNameHasBeenSet(false)
{
}

RuleGroup::RuleGroup(JsonView jsonValue) : 
    m_ruleGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_metricNameHasBeenSet(false)
{
  *this = jsonValue;
}

RuleGroup& RuleGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleGroupId"))
  {
    m_ruleGroupId = jsonValue.GetString("RuleGroupId");

    m_ruleGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");

    m_metricNameHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleGroup::Jsonize() const
{
  JsonValue payload;

  if(m_ruleGroupIdHasBeenSet)
  {
   payload.WithString("RuleGroupId", m_ruleGroupId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
