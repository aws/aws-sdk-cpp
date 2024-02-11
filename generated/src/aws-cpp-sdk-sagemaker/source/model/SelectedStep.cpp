/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SelectedStep.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

SelectedStep::SelectedStep() : 
    m_stepNameHasBeenSet(false)
{
}

SelectedStep::SelectedStep(JsonView jsonValue) : 
    m_stepNameHasBeenSet(false)
{
  *this = jsonValue;
}

SelectedStep& SelectedStep::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StepName"))
  {
    m_stepName = jsonValue.GetString("StepName");

    m_stepNameHasBeenSet = true;
  }

  return *this;
}

JsonValue SelectedStep::Jsonize() const
{
  JsonValue payload;

  if(m_stepNameHasBeenSet)
  {
   payload.WithString("StepName", m_stepName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
