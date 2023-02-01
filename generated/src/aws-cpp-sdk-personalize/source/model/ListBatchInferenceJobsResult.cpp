/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/ListBatchInferenceJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBatchInferenceJobsResult::ListBatchInferenceJobsResult()
{
}

ListBatchInferenceJobsResult::ListBatchInferenceJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBatchInferenceJobsResult& ListBatchInferenceJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("batchInferenceJobs"))
  {
    Aws::Utils::Array<JsonView> batchInferenceJobsJsonList = jsonValue.GetArray("batchInferenceJobs");
    for(unsigned batchInferenceJobsIndex = 0; batchInferenceJobsIndex < batchInferenceJobsJsonList.GetLength(); ++batchInferenceJobsIndex)
    {
      m_batchInferenceJobs.push_back(batchInferenceJobsJsonList[batchInferenceJobsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
