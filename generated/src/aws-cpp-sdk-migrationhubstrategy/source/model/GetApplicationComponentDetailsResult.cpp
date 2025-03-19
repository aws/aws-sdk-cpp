/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/GetApplicationComponentDetailsResult.h>
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

GetApplicationComponentDetailsResult::GetApplicationComponentDetailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetApplicationComponentDetailsResult& GetApplicationComponentDetailsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationComponentDetail"))
  {
    m_applicationComponentDetail = jsonValue.GetObject("applicationComponentDetail");
    m_applicationComponentDetailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("associatedApplications"))
  {
    Aws::Utils::Array<JsonView> associatedApplicationsJsonList = jsonValue.GetArray("associatedApplications");
    for(unsigned associatedApplicationsIndex = 0; associatedApplicationsIndex < associatedApplicationsJsonList.GetLength(); ++associatedApplicationsIndex)
    {
      m_associatedApplications.push_back(associatedApplicationsJsonList[associatedApplicationsIndex].AsObject());
    }
    m_associatedApplicationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("associatedServerIds"))
  {
    Aws::Utils::Array<JsonView> associatedServerIdsJsonList = jsonValue.GetArray("associatedServerIds");
    for(unsigned associatedServerIdsIndex = 0; associatedServerIdsIndex < associatedServerIdsJsonList.GetLength(); ++associatedServerIdsIndex)
    {
      m_associatedServerIds.push_back(associatedServerIdsJsonList[associatedServerIdsIndex].AsString());
    }
    m_associatedServerIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("moreApplicationResource"))
  {
    m_moreApplicationResource = jsonValue.GetBool("moreApplicationResource");
    m_moreApplicationResourceHasBeenSet = true;
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
