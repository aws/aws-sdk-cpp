/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/StrategySummary.h>
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

StrategySummary::StrategySummary() : 
    m_count(0),
    m_countHasBeenSet(false),
    m_strategy(Strategy::NOT_SET),
    m_strategyHasBeenSet(false)
{
}

StrategySummary::StrategySummary(JsonView jsonValue) : 
    m_count(0),
    m_countHasBeenSet(false),
    m_strategy(Strategy::NOT_SET),
    m_strategyHasBeenSet(false)
{
  *this = jsonValue;
}

StrategySummary& StrategySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInteger("count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("strategy"))
  {
    m_strategy = StrategyMapper::GetStrategyForName(jsonValue.GetString("strategy"));

    m_strategyHasBeenSet = true;
  }

  return *this;
}

JsonValue StrategySummary::Jsonize() const
{
  JsonValue payload;

  if(m_countHasBeenSet)
  {
   payload.WithInteger("count", m_count);

  }

  if(m_strategyHasBeenSet)
  {
   payload.WithString("strategy", StrategyMapper::GetNameForStrategy(m_strategy));
  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
