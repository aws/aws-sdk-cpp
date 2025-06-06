﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/GetReplicationRunsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetReplicationRunsResult::GetReplicationRunsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetReplicationRunsResult& GetReplicationRunsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("replicationJob"))
  {
    m_replicationJob = jsonValue.GetObject("replicationJob");
    m_replicationJobHasBeenSet = true;
  }
  if(jsonValue.ValueExists("replicationRunList"))
  {
    Aws::Utils::Array<JsonView> replicationRunListJsonList = jsonValue.GetArray("replicationRunList");
    for(unsigned replicationRunListIndex = 0; replicationRunListIndex < replicationRunListJsonList.GetLength(); ++replicationRunListIndex)
    {
      m_replicationRunList.push_back(replicationRunListJsonList[replicationRunListIndex].AsObject());
    }
    m_replicationRunListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
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
