/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/Homogeneous.h>
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

Homogeneous::Homogeneous() : 
    m_targetDatabaseEngineHasBeenSet(false)
{
}

Homogeneous::Homogeneous(JsonView jsonValue) : 
    m_targetDatabaseEngineHasBeenSet(false)
{
  *this = jsonValue;
}

Homogeneous& Homogeneous::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("targetDatabaseEngine"))
  {
    Aws::Utils::Array<JsonView> targetDatabaseEngineJsonList = jsonValue.GetArray("targetDatabaseEngine");
    for(unsigned targetDatabaseEngineIndex = 0; targetDatabaseEngineIndex < targetDatabaseEngineJsonList.GetLength(); ++targetDatabaseEngineIndex)
    {
      m_targetDatabaseEngine.push_back(HomogeneousTargetDatabaseEngineMapper::GetHomogeneousTargetDatabaseEngineForName(targetDatabaseEngineJsonList[targetDatabaseEngineIndex].AsString()));
    }
    m_targetDatabaseEngineHasBeenSet = true;
  }

  return *this;
}

JsonValue Homogeneous::Jsonize() const
{
  JsonValue payload;

  if(m_targetDatabaseEngineHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetDatabaseEngineJsonList(m_targetDatabaseEngine.size());
   for(unsigned targetDatabaseEngineIndex = 0; targetDatabaseEngineIndex < targetDatabaseEngineJsonList.GetLength(); ++targetDatabaseEngineIndex)
   {
     targetDatabaseEngineJsonList[targetDatabaseEngineIndex].AsString(HomogeneousTargetDatabaseEngineMapper::GetNameForHomogeneousTargetDatabaseEngine(m_targetDatabaseEngine[targetDatabaseEngineIndex]));
   }
   payload.WithArray("targetDatabaseEngine", std::move(targetDatabaseEngineJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
