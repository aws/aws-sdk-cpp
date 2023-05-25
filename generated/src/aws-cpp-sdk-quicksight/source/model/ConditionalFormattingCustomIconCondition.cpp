/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ConditionalFormattingCustomIconCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ConditionalFormattingCustomIconCondition::ConditionalFormattingCustomIconCondition() : 
    m_expressionHasBeenSet(false),
    m_iconOptionsHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_displayConfigurationHasBeenSet(false)
{
}

ConditionalFormattingCustomIconCondition::ConditionalFormattingCustomIconCondition(JsonView jsonValue) : 
    m_expressionHasBeenSet(false),
    m_iconOptionsHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_displayConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ConditionalFormattingCustomIconCondition& ConditionalFormattingCustomIconCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Expression"))
  {
    m_expression = jsonValue.GetString("Expression");

    m_expressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IconOptions"))
  {
    m_iconOptions = jsonValue.GetObject("IconOptions");

    m_iconOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Color"))
  {
    m_color = jsonValue.GetString("Color");

    m_colorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayConfiguration"))
  {
    m_displayConfiguration = jsonValue.GetObject("DisplayConfiguration");

    m_displayConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ConditionalFormattingCustomIconCondition::Jsonize() const
{
  JsonValue payload;

  if(m_expressionHasBeenSet)
  {
   payload.WithString("Expression", m_expression);

  }

  if(m_iconOptionsHasBeenSet)
  {
   payload.WithObject("IconOptions", m_iconOptions.Jsonize());

  }

  if(m_colorHasBeenSet)
  {
   payload.WithString("Color", m_color);

  }

  if(m_displayConfigurationHasBeenSet)
  {
   payload.WithObject("DisplayConfiguration", m_displayConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
