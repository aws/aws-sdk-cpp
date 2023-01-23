/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/GetServerDetailsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubStrategyRecommendations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetServerDetailsResult::GetServerDetailsResult()
{
}

GetServerDetailsResult::GetServerDetailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetServerDetailsResult& GetServerDetailsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("associatedApplications"))
  {
    Aws::Utils::Array<JsonView> associatedApplicationsJsonList = jsonValue.GetArray("associatedApplications");
    for(unsigned associatedApplicationsIndex = 0; associatedApplicationsIndex < associatedApplicationsJsonList.GetLength(); ++associatedApplicationsIndex)
    {
      m_associatedApplications.push_back(associatedApplicationsJsonList[associatedApplicationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("serverDetail"))
  {
    m_serverDetail = jsonValue.GetObject("serverDetail");

  }



  return *this;
}
