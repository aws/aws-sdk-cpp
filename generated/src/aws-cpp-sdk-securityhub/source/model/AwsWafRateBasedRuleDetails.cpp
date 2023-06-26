/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsWafRateBasedRuleDetails.h>
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

AwsWafRateBasedRuleDetails::AwsWafRateBasedRuleDetails() : 
    m_metricNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_rateKeyHasBeenSet(false),
    m_rateLimit(0),
    m_rateLimitHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_matchPredicatesHasBeenSet(false)
{
}

AwsWafRateBasedRuleDetails::AwsWafRateBasedRuleDetails(JsonView jsonValue) : 
    m_metricNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_rateKeyHasBeenSet(false),
    m_rateLimit(0),
    m_rateLimitHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_matchPredicatesHasBeenSet(false)
{
  *this = jsonValue;
}

AwsWafRateBasedRuleDetails& AwsWafRateBasedRuleDetails::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("RateKey"))
  {
    m_rateKey = jsonValue.GetString("RateKey");

    m_rateKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RateLimit"))
  {
    m_rateLimit = jsonValue.GetInt64("RateLimit");

    m_rateLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleId"))
  {
    m_ruleId = jsonValue.GetString("RuleId");

    m_ruleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MatchPredicates"))
  {
    Aws::Utils::Array<JsonView> matchPredicatesJsonList = jsonValue.GetArray("MatchPredicates");
    for(unsigned matchPredicatesIndex = 0; matchPredicatesIndex < matchPredicatesJsonList.GetLength(); ++matchPredicatesIndex)
    {
      m_matchPredicates.push_back(matchPredicatesJsonList[matchPredicatesIndex].AsObject());
    }
    m_matchPredicatesHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsWafRateBasedRuleDetails::Jsonize() const
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

  if(m_rateKeyHasBeenSet)
  {
   payload.WithString("RateKey", m_rateKey);

  }

  if(m_rateLimitHasBeenSet)
  {
   payload.WithInt64("RateLimit", m_rateLimit);

  }

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("RuleId", m_ruleId);

  }

  if(m_matchPredicatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> matchPredicatesJsonList(m_matchPredicates.size());
   for(unsigned matchPredicatesIndex = 0; matchPredicatesIndex < matchPredicatesJsonList.GetLength(); ++matchPredicatesIndex)
   {
     matchPredicatesJsonList[matchPredicatesIndex].AsObject(m_matchPredicates[matchPredicatesIndex].Jsonize());
   }
   payload.WithArray("MatchPredicates", std::move(matchPredicatesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
