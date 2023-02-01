/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SheetElementRenderingRule.h>
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

SheetElementRenderingRule::SheetElementRenderingRule() : 
    m_expressionHasBeenSet(false),
    m_configurationOverridesHasBeenSet(false)
{
}

SheetElementRenderingRule::SheetElementRenderingRule(JsonView jsonValue) : 
    m_expressionHasBeenSet(false),
    m_configurationOverridesHasBeenSet(false)
{
  *this = jsonValue;
}

SheetElementRenderingRule& SheetElementRenderingRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Expression"))
  {
    m_expression = jsonValue.GetString("Expression");

    m_expressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfigurationOverrides"))
  {
    m_configurationOverrides = jsonValue.GetObject("ConfigurationOverrides");

    m_configurationOverridesHasBeenSet = true;
  }

  return *this;
}

JsonValue SheetElementRenderingRule::Jsonize() const
{
  JsonValue payload;

  if(m_expressionHasBeenSet)
  {
   payload.WithString("Expression", m_expression);

  }

  if(m_configurationOverridesHasBeenSet)
  {
   payload.WithObject("ConfigurationOverrides", m_configurationOverrides.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
