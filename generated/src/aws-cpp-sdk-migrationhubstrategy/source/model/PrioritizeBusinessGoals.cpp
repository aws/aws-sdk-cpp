/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/PrioritizeBusinessGoals.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

PrioritizeBusinessGoals::PrioritizeBusinessGoals() : 
    m_businessGoalsHasBeenSet(false)
{
}

PrioritizeBusinessGoals::PrioritizeBusinessGoals(JsonView jsonValue) : 
    m_businessGoalsHasBeenSet(false)
{
  *this = jsonValue;
}

PrioritizeBusinessGoals& PrioritizeBusinessGoals::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("businessGoals"))
  {
    m_businessGoals = jsonValue.GetObject("businessGoals");

    m_businessGoalsHasBeenSet = true;
  }

  return *this;
}

JsonValue PrioritizeBusinessGoals::Jsonize() const
{
  JsonValue payload;

  if(m_businessGoalsHasBeenSet)
  {
   payload.WithObject("businessGoals", m_businessGoals.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
