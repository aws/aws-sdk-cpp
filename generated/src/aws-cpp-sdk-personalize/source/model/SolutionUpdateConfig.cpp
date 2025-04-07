/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/SolutionUpdateConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

SolutionUpdateConfig::SolutionUpdateConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

SolutionUpdateConfig& SolutionUpdateConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("autoTrainingConfig"))
  {
    m_autoTrainingConfig = jsonValue.GetObject("autoTrainingConfig");
    m_autoTrainingConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventsConfig"))
  {
    m_eventsConfig = jsonValue.GetObject("eventsConfig");
    m_eventsConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue SolutionUpdateConfig::Jsonize() const
{
  JsonValue payload;

  if(m_autoTrainingConfigHasBeenSet)
  {
   payload.WithObject("autoTrainingConfig", m_autoTrainingConfig.Jsonize());

  }

  if(m_eventsConfigHasBeenSet)
  {
   payload.WithObject("eventsConfig", m_eventsConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
