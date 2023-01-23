/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/ConditionalSplitActivity.h>
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

ConditionalSplitActivity::ConditionalSplitActivity() : 
    m_conditionHasBeenSet(false),
    m_evaluationWaitTimeHasBeenSet(false),
    m_falseActivityHasBeenSet(false),
    m_trueActivityHasBeenSet(false)
{
}

ConditionalSplitActivity::ConditionalSplitActivity(JsonView jsonValue) : 
    m_conditionHasBeenSet(false),
    m_evaluationWaitTimeHasBeenSet(false),
    m_falseActivityHasBeenSet(false),
    m_trueActivityHasBeenSet(false)
{
  *this = jsonValue;
}

ConditionalSplitActivity& ConditionalSplitActivity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Condition"))
  {
    m_condition = jsonValue.GetObject("Condition");

    m_conditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationWaitTime"))
  {
    m_evaluationWaitTime = jsonValue.GetObject("EvaluationWaitTime");

    m_evaluationWaitTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FalseActivity"))
  {
    m_falseActivity = jsonValue.GetString("FalseActivity");

    m_falseActivityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrueActivity"))
  {
    m_trueActivity = jsonValue.GetString("TrueActivity");

    m_trueActivityHasBeenSet = true;
  }

  return *this;
}

JsonValue ConditionalSplitActivity::Jsonize() const
{
  JsonValue payload;

  if(m_conditionHasBeenSet)
  {
   payload.WithObject("Condition", m_condition.Jsonize());

  }

  if(m_evaluationWaitTimeHasBeenSet)
  {
   payload.WithObject("EvaluationWaitTime", m_evaluationWaitTime.Jsonize());

  }

  if(m_falseActivityHasBeenSet)
  {
   payload.WithString("FalseActivity", m_falseActivity);

  }

  if(m_trueActivityHasBeenSet)
  {
   payload.WithString("TrueActivity", m_trueActivity);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
