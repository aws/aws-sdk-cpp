/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/CreateClusterResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Snowball::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateClusterResult::CreateClusterResult()
{
}

CreateClusterResult::CreateClusterResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateClusterResult& CreateClusterResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ClusterId"))
  {
    m_clusterId = jsonValue.GetString("ClusterId");

  }

  if(jsonValue.ValueExists("JobListEntries"))
  {
    Aws::Utils::Array<JsonView> jobListEntriesJsonList = jsonValue.GetArray("JobListEntries");
    for(unsigned jobListEntriesIndex = 0; jobListEntriesIndex < jobListEntriesJsonList.GetLength(); ++jobListEntriesIndex)
    {
      m_jobListEntries.push_back(jobListEntriesJsonList[jobListEntriesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
