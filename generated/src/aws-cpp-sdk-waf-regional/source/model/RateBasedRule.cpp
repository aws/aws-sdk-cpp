/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/RateBasedRule.h>
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

RateBasedRule::RateBasedRule() : 
    m_ruleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_matchPredicatesHasBeenSet(false),
    m_rateKey(RateKey::NOT_SET),
    m_rateKeyHasBeenSet(false),
    m_rateLimit(0),
    m_rateLimitHasBeenSet(false)
{
}

RateBasedRule::RateBasedRule(JsonView jsonValue) : 
    m_ruleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_matchPredicatesHasBeenSet(false),
    m_rateKey(RateKey::NOT_SET),
    m_rateKeyHasBeenSet(false),
    m_rateLimit(0),
    m_rateLimitHasBeenSet(false)
{
  *this = jsonValue;
}

RateBasedRule& RateBasedRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleId"))
  {
    m_ruleId = jsonValue.GetString("RuleId");

    m_ruleIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("MatchPredicates"))
  {
    Aws::Utils::Array<JsonView> matchPredicatesJsonList = jsonValue.GetArray("MatchPredicates");
    for(unsigned matchPredicatesIndex = 0; matchPredicatesIndex < matchPredicatesJsonList.GetLength(); ++matchPredicatesIndex)
    {
      m_matchPredicates.push_back(matchPredicatesJsonList[matchPredicatesIndex].AsObject());
    }
    m_matchPredicatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RateKey"))
  {
    m_rateKey = RateKeyMapper::GetRateKeyForName(jsonValue.GetString("RateKey"));

    m_rateKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RateLimit"))
  {
    m_rateLimit = jsonValue.GetInt64("RateLimit");

    m_rateLimitHasBeenSet = true;
  }

  return *this;
}

JsonValue RateBasedRule::Jsonize() const
{
  JsonValue payload;

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("RuleId", m_ruleId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

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

  if(m_rateKeyHasBeenSet)
  {
   payload.WithString("RateKey", RateKeyMapper::GetNameForRateKey(m_rateKey));
  }

  if(m_rateLimitHasBeenSet)
  {
   payload.WithInt64("RateLimit", m_rateLimit);

  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
