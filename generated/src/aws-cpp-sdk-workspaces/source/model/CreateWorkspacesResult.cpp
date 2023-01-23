/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/CreateWorkspacesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateWorkspacesResult::CreateWorkspacesResult()
{
}

CreateWorkspacesResult::CreateWorkspacesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateWorkspacesResult& CreateWorkspacesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FailedRequests"))
  {
    Aws::Utils::Array<JsonView> failedRequestsJsonList = jsonValue.GetArray("FailedRequests");
    for(unsigned failedRequestsIndex = 0; failedRequestsIndex < failedRequestsJsonList.GetLength(); ++failedRequestsIndex)
    {
      m_failedRequests.push_back(failedRequestsJsonList[failedRequestsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("PendingRequests"))
  {
    Aws::Utils::Array<JsonView> pendingRequestsJsonList = jsonValue.GetArray("PendingRequests");
    for(unsigned pendingRequestsIndex = 0; pendingRequestsIndex < pendingRequestsJsonList.GetLength(); ++pendingRequestsIndex)
    {
      m_pendingRequests.push_back(pendingRequestsJsonList[pendingRequestsIndex].AsObject());
    }
  }



  return *this;
}
