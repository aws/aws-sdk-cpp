/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribeMaintenanceWindowsForTargetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeMaintenanceWindowsForTargetResult::DescribeMaintenanceWindowsForTargetResult()
{
}

DescribeMaintenanceWindowsForTargetResult::DescribeMaintenanceWindowsForTargetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeMaintenanceWindowsForTargetResult& DescribeMaintenanceWindowsForTargetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WindowIdentities"))
  {
    Aws::Utils::Array<JsonView> windowIdentitiesJsonList = jsonValue.GetArray("WindowIdentities");
    for(unsigned windowIdentitiesIndex = 0; windowIdentitiesIndex < windowIdentitiesJsonList.GetLength(); ++windowIdentitiesIndex)
    {
      m_windowIdentities.push_back(windowIdentitiesJsonList[windowIdentitiesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
