/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/GetEngineStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEngineStatusResult::GetEngineStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetEngineStatusResult& GetEngineStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dbEngineVersion"))
  {
    m_dbEngineVersion = jsonValue.GetString("dbEngineVersion");
    m_dbEngineVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("role"))
  {
    m_role = jsonValue.GetString("role");
    m_roleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dfeQueryEngine"))
  {
    m_dfeQueryEngine = jsonValue.GetString("dfeQueryEngine");
    m_dfeQueryEngineHasBeenSet = true;
  }
  if(jsonValue.ValueExists("gremlin"))
  {
    m_gremlin = jsonValue.GetObject("gremlin");
    m_gremlinHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sparql"))
  {
    m_sparql = jsonValue.GetObject("sparql");
    m_sparqlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("opencypher"))
  {
    m_opencypher = jsonValue.GetObject("opencypher");
    m_opencypherHasBeenSet = true;
  }
  if(jsonValue.ValueExists("labMode"))
  {
    Aws::Map<Aws::String, JsonView> labModeJsonMap = jsonValue.GetObject("labMode").GetAllObjects();
    for(auto& labModeItem : labModeJsonMap)
    {
      m_labMode[labModeItem.first] = labModeItem.second.AsString();
    }
    m_labModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rollingBackTrxCount"))
  {
    m_rollingBackTrxCount = jsonValue.GetInteger("rollingBackTrxCount");
    m_rollingBackTrxCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rollingBackTrxEarliestStartTime"))
  {
    m_rollingBackTrxEarliestStartTime = jsonValue.GetString("rollingBackTrxEarliestStartTime");
    m_rollingBackTrxEarliestStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("features"))
  {
    Aws::Map<Aws::String, JsonView> featuresJsonMap = jsonValue.GetObject("features").GetAllObjects();
    for(auto& featuresItem : featuresJsonMap)
    {
      m_features[featuresItem.first] = featuresItem.second.AsObject();
    }
    m_featuresHasBeenSet = true;
  }
  if(jsonValue.ValueExists("settings"))
  {
    Aws::Map<Aws::String, JsonView> settingsJsonMap = jsonValue.GetObject("settings").GetAllObjects();
    for(auto& settingsItem : settingsJsonMap)
    {
      m_settings[settingsItem.first] = settingsItem.second.AsString();
    }
    m_settingsHasBeenSet = true;
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
