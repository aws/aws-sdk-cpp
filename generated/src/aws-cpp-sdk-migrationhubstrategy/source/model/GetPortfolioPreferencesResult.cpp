/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/GetPortfolioPreferencesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubStrategyRecommendations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPortfolioPreferencesResult::GetPortfolioPreferencesResult() : 
    m_applicationMode(ApplicationMode::NOT_SET)
{
}

GetPortfolioPreferencesResult::GetPortfolioPreferencesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_applicationMode(ApplicationMode::NOT_SET)
{
  *this = result;
}

GetPortfolioPreferencesResult& GetPortfolioPreferencesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationMode"))
  {
    m_applicationMode = ApplicationModeMapper::GetApplicationModeForName(jsonValue.GetString("applicationMode"));

  }

  if(jsonValue.ValueExists("applicationPreferences"))
  {
    m_applicationPreferences = jsonValue.GetObject("applicationPreferences");

  }

  if(jsonValue.ValueExists("databasePreferences"))
  {
    m_databasePreferences = jsonValue.GetObject("databasePreferences");

  }

  if(jsonValue.ValueExists("prioritizeBusinessGoals"))
  {
    m_prioritizeBusinessGoals = jsonValue.GetObject("prioritizeBusinessGoals");

  }



  return *this;
}
