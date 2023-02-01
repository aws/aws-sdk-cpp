/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HumanLoopActivationConfig.h>
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

HumanLoopActivationConfig::HumanLoopActivationConfig() : 
    m_humanLoopActivationConditionsConfigHasBeenSet(false)
{
}

HumanLoopActivationConfig::HumanLoopActivationConfig(JsonView jsonValue) : 
    m_humanLoopActivationConditionsConfigHasBeenSet(false)
{
  *this = jsonValue;
}

HumanLoopActivationConfig& HumanLoopActivationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HumanLoopActivationConditionsConfig"))
  {
    m_humanLoopActivationConditionsConfig = jsonValue.GetObject("HumanLoopActivationConditionsConfig");

    m_humanLoopActivationConditionsConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue HumanLoopActivationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_humanLoopActivationConditionsConfigHasBeenSet)
  {
   payload.WithObject("HumanLoopActivationConditionsConfig", m_humanLoopActivationConditionsConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
