/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/ListHarvestJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaPackage::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListHarvestJobsResult::ListHarvestJobsResult()
{
}

ListHarvestJobsResult::ListHarvestJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListHarvestJobsResult& ListHarvestJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("harvestJobs"))
  {
    Aws::Utils::Array<JsonView> harvestJobsJsonList = jsonValue.GetArray("harvestJobs");
    for(unsigned harvestJobsIndex = 0; harvestJobsIndex < harvestJobsJsonList.GetLength(); ++harvestJobsIndex)
    {
      m_harvestJobs.push_back(harvestJobsJsonList[harvestJobsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
