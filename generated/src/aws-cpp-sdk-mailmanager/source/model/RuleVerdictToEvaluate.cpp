/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RuleVerdictToEvaluate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

RuleVerdictToEvaluate::RuleVerdictToEvaluate(JsonView jsonValue)
{
  *this = jsonValue;
}

RuleVerdictToEvaluate& RuleVerdictToEvaluate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attribute"))
  {
    m_attribute = RuleVerdictAttributeMapper::GetRuleVerdictAttributeForName(jsonValue.GetString("Attribute"));
    m_attributeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Analysis"))
  {
    m_analysis = jsonValue.GetObject("Analysis");
    m_analysisHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleVerdictToEvaluate::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithString("Attribute", RuleVerdictAttributeMapper::GetNameForRuleVerdictAttribute(m_attribute));
  }

  if(m_analysisHasBeenSet)
  {
   payload.WithObject("Analysis", m_analysis.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
