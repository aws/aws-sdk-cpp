/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/SelfManageResources.h>
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

SelfManageResources::SelfManageResources() : 
    m_targetDestinationHasBeenSet(false)
{
}

SelfManageResources::SelfManageResources(JsonView jsonValue) : 
    m_targetDestinationHasBeenSet(false)
{
  *this = jsonValue;
}

SelfManageResources& SelfManageResources::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("targetDestination"))
  {
    Aws::Utils::Array<JsonView> targetDestinationJsonList = jsonValue.GetArray("targetDestination");
    for(unsigned targetDestinationIndex = 0; targetDestinationIndex < targetDestinationJsonList.GetLength(); ++targetDestinationIndex)
    {
      m_targetDestination.push_back(SelfManageTargetDestinationMapper::GetSelfManageTargetDestinationForName(targetDestinationJsonList[targetDestinationIndex].AsString()));
    }
    m_targetDestinationHasBeenSet = true;
  }

  return *this;
}

JsonValue SelfManageResources::Jsonize() const
{
  JsonValue payload;

  if(m_targetDestinationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetDestinationJsonList(m_targetDestination.size());
   for(unsigned targetDestinationIndex = 0; targetDestinationIndex < targetDestinationJsonList.GetLength(); ++targetDestinationIndex)
   {
     targetDestinationJsonList[targetDestinationIndex].AsString(SelfManageTargetDestinationMapper::GetNameForSelfManageTargetDestination(m_targetDestination[targetDestinationIndex]));
   }
   payload.WithArray("targetDestination", std::move(targetDestinationJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
