/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/PutPortfolioPreferencesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHubStrategyRecommendations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutPortfolioPreferencesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationModeHasBeenSet)
  {
   payload.WithString("applicationMode", ApplicationModeMapper::GetNameForApplicationMode(m_applicationMode));
  }

  if(m_applicationPreferencesHasBeenSet)
  {
   payload.WithObject("applicationPreferences", m_applicationPreferences.Jsonize());

  }

  if(m_databasePreferencesHasBeenSet)
  {
   payload.WithObject("databasePreferences", m_databasePreferences.Jsonize());

  }

  if(m_prioritizeBusinessGoalsHasBeenSet)
  {
   payload.WithObject("prioritizeBusinessGoals", m_prioritizeBusinessGoals.Jsonize());

  }

  return payload.View().WriteReadable();
}




