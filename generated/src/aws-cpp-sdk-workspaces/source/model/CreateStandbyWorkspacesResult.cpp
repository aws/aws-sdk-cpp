/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/CreateStandbyWorkspacesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateStandbyWorkspacesResult::CreateStandbyWorkspacesResult()
{
}

CreateStandbyWorkspacesResult::CreateStandbyWorkspacesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateStandbyWorkspacesResult& CreateStandbyWorkspacesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FailedStandbyRequests"))
  {
    Aws::Utils::Array<JsonView> failedStandbyRequestsJsonList = jsonValue.GetArray("FailedStandbyRequests");
    for(unsigned failedStandbyRequestsIndex = 0; failedStandbyRequestsIndex < failedStandbyRequestsJsonList.GetLength(); ++failedStandbyRequestsIndex)
    {
      m_failedStandbyRequests.push_back(failedStandbyRequestsJsonList[failedStandbyRequestsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("PendingStandbyRequests"))
  {
    Aws::Utils::Array<JsonView> pendingStandbyRequestsJsonList = jsonValue.GetArray("PendingStandbyRequests");
    for(unsigned pendingStandbyRequestsIndex = 0; pendingStandbyRequestsIndex < pendingStandbyRequestsJsonList.GetLength(); ++pendingStandbyRequestsIndex)
    {
      m_pendingStandbyRequests.push_back(pendingStandbyRequestsJsonList[pendingStandbyRequestsIndex].AsObject());
    }
  }



  return *this;
}
