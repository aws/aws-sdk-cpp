/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/Stairs.h>
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

Stairs::Stairs(JsonView jsonValue)
{
  *this = jsonValue;
}

Stairs& Stairs::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DurationInSeconds"))
  {
    m_durationInSeconds = jsonValue.GetInteger("DurationInSeconds");
    m_durationInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberOfSteps"))
  {
    m_numberOfSteps = jsonValue.GetInteger("NumberOfSteps");
    m_numberOfStepsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UsersPerStep"))
  {
    m_usersPerStep = jsonValue.GetInteger("UsersPerStep");
    m_usersPerStepHasBeenSet = true;
  }
  return *this;
}

JsonValue Stairs::Jsonize() const
{
  JsonValue payload;

  if(m_durationInSecondsHasBeenSet)
  {
   payload.WithInteger("DurationInSeconds", m_durationInSeconds);

  }

  if(m_numberOfStepsHasBeenSet)
  {
   payload.WithInteger("NumberOfSteps", m_numberOfSteps);

  }

  if(m_usersPerStepHasBeenSet)
  {
   payload.WithInteger("UsersPerStep", m_usersPerStep);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
