/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribeMaintenanceWindowExecutionTasksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeMaintenanceWindowExecutionTasksResult::DescribeMaintenanceWindowExecutionTasksResult()
{
}

DescribeMaintenanceWindowExecutionTasksResult::DescribeMaintenanceWindowExecutionTasksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeMaintenanceWindowExecutionTasksResult& DescribeMaintenanceWindowExecutionTasksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WindowExecutionTaskIdentities"))
  {
    Aws::Utils::Array<JsonView> windowExecutionTaskIdentitiesJsonList = jsonValue.GetArray("WindowExecutionTaskIdentities");
    for(unsigned windowExecutionTaskIdentitiesIndex = 0; windowExecutionTaskIdentitiesIndex < windowExecutionTaskIdentitiesJsonList.GetLength(); ++windowExecutionTaskIdentitiesIndex)
    {
      m_windowExecutionTaskIdentities.push_back(windowExecutionTaskIdentitiesJsonList[windowExecutionTaskIdentitiesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
