/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/StrategyOption.h>
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

StrategyOption::StrategyOption() : 
    m_isPreferred(false),
    m_isPreferredHasBeenSet(false),
    m_strategy(Strategy::NOT_SET),
    m_strategyHasBeenSet(false),
    m_targetDestination(TargetDestination::NOT_SET),
    m_targetDestinationHasBeenSet(false),
    m_toolName(TransformationToolName::NOT_SET),
    m_toolNameHasBeenSet(false)
{
}

StrategyOption::StrategyOption(JsonView jsonValue) : 
    m_isPreferred(false),
    m_isPreferredHasBeenSet(false),
    m_strategy(Strategy::NOT_SET),
    m_strategyHasBeenSet(false),
    m_targetDestination(TargetDestination::NOT_SET),
    m_targetDestinationHasBeenSet(false),
    m_toolName(TransformationToolName::NOT_SET),
    m_toolNameHasBeenSet(false)
{
  *this = jsonValue;
}

StrategyOption& StrategyOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("isPreferred"))
  {
    m_isPreferred = jsonValue.GetBool("isPreferred");

    m_isPreferredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("strategy"))
  {
    m_strategy = StrategyMapper::GetStrategyForName(jsonValue.GetString("strategy"));

    m_strategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetDestination"))
  {
    m_targetDestination = TargetDestinationMapper::GetTargetDestinationForName(jsonValue.GetString("targetDestination"));

    m_targetDestinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("toolName"))
  {
    m_toolName = TransformationToolNameMapper::GetTransformationToolNameForName(jsonValue.GetString("toolName"));

    m_toolNameHasBeenSet = true;
  }

  return *this;
}

JsonValue StrategyOption::Jsonize() const
{
  JsonValue payload;

  if(m_isPreferredHasBeenSet)
  {
   payload.WithBool("isPreferred", m_isPreferred);

  }

  if(m_strategyHasBeenSet)
  {
   payload.WithString("strategy", StrategyMapper::GetNameForStrategy(m_strategy));
  }

  if(m_targetDestinationHasBeenSet)
  {
   payload.WithString("targetDestination", TargetDestinationMapper::GetNameForTargetDestination(m_targetDestination));
  }

  if(m_toolNameHasBeenSet)
  {
   payload.WithString("toolName", TransformationToolNameMapper::GetNameForTransformationToolName(m_toolName));
  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
