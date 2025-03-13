/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/GetPortfolioPreferencesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MigrationHubStrategyRecommendations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPortfolioPreferencesResult::GetPortfolioPreferencesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPortfolioPreferencesResult& GetPortfolioPreferencesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationMode"))
  {
    m_applicationMode = ApplicationModeMapper::GetApplicationModeForName(jsonValue.GetString("applicationMode"));
    m_applicationModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("applicationPreferences"))
  {
    m_applicationPreferences = jsonValue.GetObject("applicationPreferences");
    m_applicationPreferencesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("databasePreferences"))
  {
    m_databasePreferences = jsonValue.GetObject("databasePreferences");
    m_databasePreferencesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("prioritizeBusinessGoals"))
  {
    m_prioritizeBusinessGoals = jsonValue.GetObject("prioritizeBusinessGoals");
    m_prioritizeBusinessGoalsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
