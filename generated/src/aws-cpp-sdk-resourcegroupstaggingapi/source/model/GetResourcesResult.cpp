/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resourcegroupstaggingapi/model/GetResourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ResourceGroupsTaggingAPI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetResourcesResult::GetResourcesResult()
{
}

GetResourcesResult::GetResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetResourcesResult& GetResourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PaginationToken"))
  {
    m_paginationToken = jsonValue.GetString("PaginationToken");

  }

  if(jsonValue.ValueExists("ResourceTagMappingList"))
  {
    Aws::Utils::Array<JsonView> resourceTagMappingListJsonList = jsonValue.GetArray("ResourceTagMappingList");
    for(unsigned resourceTagMappingListIndex = 0; resourceTagMappingListIndex < resourceTagMappingListJsonList.GetLength(); ++resourceTagMappingListIndex)
    {
      m_resourceTagMappingList.push_back(resourceTagMappingListJsonList[resourceTagMappingListIndex].AsObject());
    }
  }



  return *this;
}
