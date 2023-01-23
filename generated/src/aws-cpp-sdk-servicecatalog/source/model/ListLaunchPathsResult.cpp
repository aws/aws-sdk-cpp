/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ListLaunchPathsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLaunchPathsResult::ListLaunchPathsResult()
{
}

ListLaunchPathsResult::ListLaunchPathsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLaunchPathsResult& ListLaunchPathsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LaunchPathSummaries"))
  {
    Aws::Utils::Array<JsonView> launchPathSummariesJsonList = jsonValue.GetArray("LaunchPathSummaries");
    for(unsigned launchPathSummariesIndex = 0; launchPathSummariesIndex < launchPathSummariesJsonList.GetLength(); ++launchPathSummariesIndex)
    {
      m_launchPathSummaries.push_back(launchPathSummariesJsonList[launchPathSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }



  return *this;
}
