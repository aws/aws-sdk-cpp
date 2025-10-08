/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/StartOutpostDecommissionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartOutpostDecommissionResult::StartOutpostDecommissionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartOutpostDecommissionResult& StartOutpostDecommissionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Status"))
  {
    m_status = DecommissionRequestStatusMapper::GetDecommissionRequestStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BlockingResourceTypes"))
  {
    Aws::Utils::Array<JsonView> blockingResourceTypesJsonList = jsonValue.GetArray("BlockingResourceTypes");
    for(unsigned blockingResourceTypesIndex = 0; blockingResourceTypesIndex < blockingResourceTypesJsonList.GetLength(); ++blockingResourceTypesIndex)
    {
      m_blockingResourceTypes.push_back(BlockingResourceTypeMapper::GetBlockingResourceTypeForName(blockingResourceTypesJsonList[blockingResourceTypesIndex].AsString()));
    }
    m_blockingResourceTypesHasBeenSet = true;
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
