/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/NoManagementPreference.h>
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

NoManagementPreference::NoManagementPreference() : 
    m_targetDestinationHasBeenSet(false)
{
}

NoManagementPreference::NoManagementPreference(JsonView jsonValue) : 
    m_targetDestinationHasBeenSet(false)
{
  *this = jsonValue;
}

NoManagementPreference& NoManagementPreference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("targetDestination"))
  {
    Aws::Utils::Array<JsonView> targetDestinationJsonList = jsonValue.GetArray("targetDestination");
    for(unsigned targetDestinationIndex = 0; targetDestinationIndex < targetDestinationJsonList.GetLength(); ++targetDestinationIndex)
    {
      m_targetDestination.push_back(NoPreferenceTargetDestinationMapper::GetNoPreferenceTargetDestinationForName(targetDestinationJsonList[targetDestinationIndex].AsString()));
    }
    m_targetDestinationHasBeenSet = true;
  }

  return *this;
}

JsonValue NoManagementPreference::Jsonize() const
{
  JsonValue payload;

  if(m_targetDestinationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetDestinationJsonList(m_targetDestination.size());
   for(unsigned targetDestinationIndex = 0; targetDestinationIndex < targetDestinationJsonList.GetLength(); ++targetDestinationIndex)
   {
     targetDestinationJsonList[targetDestinationIndex].AsString(NoPreferenceTargetDestinationMapper::GetNameForNoPreferenceTargetDestination(m_targetDestination[targetDestinationIndex]));
   }
   payload.WithArray("targetDestination", std::move(targetDestinationJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
