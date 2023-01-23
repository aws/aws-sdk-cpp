/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ListDashboardVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDashboardVersionsResult::ListDashboardVersionsResult() : 
    m_status(0)
{
}

ListDashboardVersionsResult::ListDashboardVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(0)
{
  *this = result;
}

ListDashboardVersionsResult& ListDashboardVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DashboardVersionSummaryList"))
  {
    Aws::Utils::Array<JsonView> dashboardVersionSummaryListJsonList = jsonValue.GetArray("DashboardVersionSummaryList");
    for(unsigned dashboardVersionSummaryListIndex = 0; dashboardVersionSummaryListIndex < dashboardVersionSummaryListJsonList.GetLength(); ++dashboardVersionSummaryListIndex)
    {
      m_dashboardVersionSummaryList.push_back(dashboardVersionSummaryListJsonList[dashboardVersionSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("RequestId"))
  {
    m_requestId = jsonValue.GetString("RequestId");

  }



  m_status = static_cast<int>(result.GetResponseCode());

  return *this;
}
