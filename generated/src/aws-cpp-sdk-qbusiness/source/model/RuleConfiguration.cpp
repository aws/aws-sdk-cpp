/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/RuleConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

RuleConfiguration::RuleConfiguration() : 
    m_contentBlockerRuleHasBeenSet(false),
    m_contentRetrievalRuleHasBeenSet(false)
{
}

RuleConfiguration::RuleConfiguration(JsonView jsonValue) : 
    m_contentBlockerRuleHasBeenSet(false),
    m_contentRetrievalRuleHasBeenSet(false)
{
  *this = jsonValue;
}

RuleConfiguration& RuleConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("contentBlockerRule"))
  {
    m_contentBlockerRule = jsonValue.GetObject("contentBlockerRule");

    m_contentBlockerRuleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contentRetrievalRule"))
  {
    m_contentRetrievalRule = jsonValue.GetObject("contentRetrievalRule");

    m_contentRetrievalRuleHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_contentBlockerRuleHasBeenSet)
  {
   payload.WithObject("contentBlockerRule", m_contentBlockerRule.Jsonize());

  }

  if(m_contentRetrievalRuleHasBeenSet)
  {
   payload.WithObject("contentRetrievalRule", m_contentRetrievalRule.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
