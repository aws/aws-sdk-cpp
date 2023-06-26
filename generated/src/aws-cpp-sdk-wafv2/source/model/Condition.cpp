/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/Condition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

Condition::Condition() : 
    m_actionConditionHasBeenSet(false),
    m_labelNameConditionHasBeenSet(false)
{
}

Condition::Condition(JsonView jsonValue) : 
    m_actionConditionHasBeenSet(false),
    m_labelNameConditionHasBeenSet(false)
{
  *this = jsonValue;
}

Condition& Condition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActionCondition"))
  {
    m_actionCondition = jsonValue.GetObject("ActionCondition");

    m_actionConditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelNameCondition"))
  {
    m_labelNameCondition = jsonValue.GetObject("LabelNameCondition");

    m_labelNameConditionHasBeenSet = true;
  }

  return *this;
}

JsonValue Condition::Jsonize() const
{
  JsonValue payload;

  if(m_actionConditionHasBeenSet)
  {
   payload.WithObject("ActionCondition", m_actionCondition.Jsonize());

  }

  if(m_labelNameConditionHasBeenSet)
  {
   payload.WithObject("LabelNameCondition", m_labelNameCondition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
