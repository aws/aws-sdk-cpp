/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/ListBatchSegmentJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBatchSegmentJobsResult::ListBatchSegmentJobsResult()
{
}

ListBatchSegmentJobsResult::ListBatchSegmentJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBatchSegmentJobsResult& ListBatchSegmentJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("batchSegmentJobs"))
  {
    Aws::Utils::Array<JsonView> batchSegmentJobsJsonList = jsonValue.GetArray("batchSegmentJobs");
    for(unsigned batchSegmentJobsIndex = 0; batchSegmentJobsIndex < batchSegmentJobsJsonList.GetLength(); ++batchSegmentJobsIndex)
    {
      m_batchSegmentJobs.push_back(batchSegmentJobsJsonList[batchSegmentJobsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
