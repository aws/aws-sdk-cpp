/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsWafRegionalWebAclDetails.h>
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

AwsWafRegionalWebAclDetails::AwsWafRegionalWebAclDetails() : 
    m_defaultActionHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_rulesListHasBeenSet(false),
    m_webAclIdHasBeenSet(false)
{
}

AwsWafRegionalWebAclDetails::AwsWafRegionalWebAclDetails(JsonView jsonValue) : 
    m_defaultActionHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_rulesListHasBeenSet(false),
    m_webAclIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsWafRegionalWebAclDetails& AwsWafRegionalWebAclDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultAction"))
  {
    m_defaultAction = jsonValue.GetString("DefaultAction");

    m_defaultActionHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("RulesList"))
  {
    Aws::Utils::Array<JsonView> rulesListJsonList = jsonValue.GetArray("RulesList");
    for(unsigned rulesListIndex = 0; rulesListIndex < rulesListJsonList.GetLength(); ++rulesListIndex)
    {
      m_rulesList.push_back(rulesListJsonList[rulesListIndex].AsObject());
    }
    m_rulesListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WebAclId"))
  {
    m_webAclId = jsonValue.GetString("WebAclId");

    m_webAclIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsWafRegionalWebAclDetails::Jsonize() const
{
  JsonValue payload;

  if(m_defaultActionHasBeenSet)
  {
   payload.WithString("DefaultAction", m_defaultAction);

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_rulesListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rulesListJsonList(m_rulesList.size());
   for(unsigned rulesListIndex = 0; rulesListIndex < rulesListJsonList.GetLength(); ++rulesListIndex)
   {
     rulesListJsonList[rulesListIndex].AsObject(m_rulesList[rulesListIndex].Jsonize());
   }
   payload.WithArray("RulesList", std::move(rulesListJsonList));

  }

  if(m_webAclIdHasBeenSet)
  {
   payload.WithString("WebAclId", m_webAclId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
