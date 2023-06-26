/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsWafRegionalRuleDetails.h>
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

AwsWafRegionalRuleDetails::AwsWafRegionalRuleDetails() : 
    m_metricNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_predicateListHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
}

AwsWafRegionalRuleDetails::AwsWafRegionalRuleDetails(JsonView jsonValue) : 
    m_metricNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_predicateListHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsWafRegionalRuleDetails& AwsWafRegionalRuleDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PredicateList"))
  {
    Aws::Utils::Array<JsonView> predicateListJsonList = jsonValue.GetArray("PredicateList");
    for(unsigned predicateListIndex = 0; predicateListIndex < predicateListJsonList.GetLength(); ++predicateListIndex)
    {
      m_predicateList.push_back(predicateListJsonList[predicateListIndex].AsObject());
    }
    m_predicateListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleId"))
  {
    m_ruleId = jsonValue.GetString("RuleId");

    m_ruleIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsWafRegionalRuleDetails::Jsonize() const
{
  JsonValue payload;

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_predicateListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> predicateListJsonList(m_predicateList.size());
   for(unsigned predicateListIndex = 0; predicateListIndex < predicateListJsonList.GetLength(); ++predicateListIndex)
   {
     predicateListJsonList[predicateListIndex].AsObject(m_predicateList[predicateListIndex].Jsonize());
   }
   payload.WithArray("PredicateList", std::move(predicateListJsonList));

  }

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("RuleId", m_ruleId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
