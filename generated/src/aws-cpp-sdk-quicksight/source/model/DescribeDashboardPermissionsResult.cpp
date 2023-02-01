/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DescribeDashboardPermissionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDashboardPermissionsResult::DescribeDashboardPermissionsResult() : 
    m_status(0)
{
}

DescribeDashboardPermissionsResult::DescribeDashboardPermissionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(0)
{
  *this = result;
}

DescribeDashboardPermissionsResult& DescribeDashboardPermissionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DashboardId"))
  {
    m_dashboardId = jsonValue.GetString("DashboardId");

  }

  if(jsonValue.ValueExists("DashboardArn"))
  {
    m_dashboardArn = jsonValue.GetString("DashboardArn");

  }

  if(jsonValue.ValueExists("Permissions"))
  {
    Aws::Utils::Array<JsonView> permissionsJsonList = jsonValue.GetArray("Permissions");
    for(unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex)
    {
      m_permissions.push_back(permissionsJsonList[permissionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("RequestId"))
  {
    m_requestId = jsonValue.GetString("RequestId");

  }

  if(jsonValue.ValueExists("LinkSharingConfiguration"))
  {
    m_linkSharingConfiguration = jsonValue.GetObject("LinkSharingConfiguration");

  }



  m_status = static_cast<int>(result.GetResponseCode());

  return *this;
}
