/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ParentStepDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ParentStepDetails::ParentStepDetails() : 
    m_stepExecutionIdHasBeenSet(false),
    m_stepNameHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_iteration(0),
    m_iterationHasBeenSet(false),
    m_iteratorValueHasBeenSet(false)
{
}

ParentStepDetails::ParentStepDetails(JsonView jsonValue) : 
    m_stepExecutionIdHasBeenSet(false),
    m_stepNameHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_iteration(0),
    m_iterationHasBeenSet(false),
    m_iteratorValueHasBeenSet(false)
{
  *this = jsonValue;
}

ParentStepDetails& ParentStepDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StepExecutionId"))
  {
    m_stepExecutionId = jsonValue.GetString("StepExecutionId");

    m_stepExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StepName"))
  {
    m_stepName = jsonValue.GetString("StepName");

    m_stepNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Action"))
  {
    m_action = jsonValue.GetString("Action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Iteration"))
  {
    m_iteration = jsonValue.GetInteger("Iteration");

    m_iterationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IteratorValue"))
  {
    m_iteratorValue = jsonValue.GetString("IteratorValue");

    m_iteratorValueHasBeenSet = true;
  }

  return *this;
}

JsonValue ParentStepDetails::Jsonize() const
{
  JsonValue payload;

  if(m_stepExecutionIdHasBeenSet)
  {
   payload.WithString("StepExecutionId", m_stepExecutionId);

  }

  if(m_stepNameHasBeenSet)
  {
   payload.WithString("StepName", m_stepName);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", m_action);

  }

  if(m_iterationHasBeenSet)
  {
   payload.WithInteger("Iteration", m_iteration);

  }

  if(m_iteratorValueHasBeenSet)
  {
   payload.WithString("IteratorValue", m_iteratorValue);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
