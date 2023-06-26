/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/MultiConditionalBranch.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

MultiConditionalBranch::MultiConditionalBranch() : 
    m_conditionHasBeenSet(false),
    m_nextActivityHasBeenSet(false)
{
}

MultiConditionalBranch::MultiConditionalBranch(JsonView jsonValue) : 
    m_conditionHasBeenSet(false),
    m_nextActivityHasBeenSet(false)
{
  *this = jsonValue;
}

MultiConditionalBranch& MultiConditionalBranch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Condition"))
  {
    m_condition = jsonValue.GetObject("Condition");

    m_conditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextActivity"))
  {
    m_nextActivity = jsonValue.GetString("NextActivity");

    m_nextActivityHasBeenSet = true;
  }

  return *this;
}

JsonValue MultiConditionalBranch::Jsonize() const
{
  JsonValue payload;

  if(m_conditionHasBeenSet)
  {
   payload.WithObject("Condition", m_condition.Jsonize());

  }

  if(m_nextActivityHasBeenSet)
  {
   payload.WithString("NextActivity", m_nextActivity);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
