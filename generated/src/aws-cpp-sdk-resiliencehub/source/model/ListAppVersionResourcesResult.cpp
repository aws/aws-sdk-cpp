/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ListAppVersionResourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAppVersionResourcesResult::ListAppVersionResourcesResult()
{
}

ListAppVersionResourcesResult::ListAppVersionResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAppVersionResourcesResult& ListAppVersionResourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("physicalResources"))
  {
    Aws::Utils::Array<JsonView> physicalResourcesJsonList = jsonValue.GetArray("physicalResources");
    for(unsigned physicalResourcesIndex = 0; physicalResourcesIndex < physicalResourcesJsonList.GetLength(); ++physicalResourcesIndex)
    {
      m_physicalResources.push_back(physicalResourcesJsonList[physicalResourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("resolutionId"))
  {
    m_resolutionId = jsonValue.GetString("resolutionId");

  }



  return *this;
}
