/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HumanLoopActivationConditionsConfig.h>
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

HumanLoopActivationConditionsConfig::HumanLoopActivationConditionsConfig() : 
    m_humanLoopActivationConditionsHasBeenSet(false)
{
}

HumanLoopActivationConditionsConfig::HumanLoopActivationConditionsConfig(JsonView jsonValue) : 
    m_humanLoopActivationConditionsHasBeenSet(false)
{
  *this = jsonValue;
}

HumanLoopActivationConditionsConfig& HumanLoopActivationConditionsConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HumanLoopActivationConditions"))
  {
    m_humanLoopActivationConditions = jsonValue.GetString("HumanLoopActivationConditions");

    m_humanLoopActivationConditionsHasBeenSet = true;
  }

  return *this;
}

JsonValue HumanLoopActivationConditionsConfig::Jsonize() const
{
  JsonValue payload;

  if(m_humanLoopActivationConditionsHasBeenSet)
  {
   payload.WithString("HumanLoopActivationConditions", m_humanLoopActivationConditions);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
