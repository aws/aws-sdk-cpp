/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/ListDataDeletionJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDataDeletionJobsResult::ListDataDeletionJobsResult()
{
}

ListDataDeletionJobsResult::ListDataDeletionJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDataDeletionJobsResult& ListDataDeletionJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("dataDeletionJobs"))
  {
    Aws::Utils::Array<JsonView> dataDeletionJobsJsonList = jsonValue.GetArray("dataDeletionJobs");
    for(unsigned dataDeletionJobsIndex = 0; dataDeletionJobsIndex < dataDeletionJobsJsonList.GetLength(); ++dataDeletionJobsIndex)
    {
      m_dataDeletionJobs.push_back(dataDeletionJobsJsonList[dataDeletionJobsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
