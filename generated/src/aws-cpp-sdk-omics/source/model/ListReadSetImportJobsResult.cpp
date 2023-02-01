/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ListReadSetImportJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListReadSetImportJobsResult::ListReadSetImportJobsResult()
{
}

ListReadSetImportJobsResult::ListReadSetImportJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListReadSetImportJobsResult& ListReadSetImportJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("importJobs"))
  {
    Aws::Utils::Array<JsonView> importJobsJsonList = jsonValue.GetArray("importJobs");
    for(unsigned importJobsIndex = 0; importJobsIndex < importJobsJsonList.GetLength(); ++importJobsIndex)
    {
      m_importJobs.push_back(importJobsJsonList[importJobsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
