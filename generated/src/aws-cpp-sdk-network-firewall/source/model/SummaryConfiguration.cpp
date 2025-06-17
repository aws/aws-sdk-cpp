/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/SummaryConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

SummaryConfiguration::SummaryConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

SummaryConfiguration& SummaryConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleOptions"))
  {
    Aws::Utils::Array<JsonView> ruleOptionsJsonList = jsonValue.GetArray("RuleOptions");
    for(unsigned ruleOptionsIndex = 0; ruleOptionsIndex < ruleOptionsJsonList.GetLength(); ++ruleOptionsIndex)
    {
      m_ruleOptions.push_back(SummaryRuleOptionMapper::GetSummaryRuleOptionForName(ruleOptionsJsonList[ruleOptionsIndex].AsString()));
    }
    m_ruleOptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue SummaryConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_ruleOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ruleOptionsJsonList(m_ruleOptions.size());
   for(unsigned ruleOptionsIndex = 0; ruleOptionsIndex < ruleOptionsJsonList.GetLength(); ++ruleOptionsIndex)
   {
     ruleOptionsJsonList[ruleOptionsIndex].AsString(SummaryRuleOptionMapper::GetNameForSummaryRuleOption(m_ruleOptions[ruleOptionsIndex]));
   }
   payload.WithArray("RuleOptions", std::move(ruleOptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
