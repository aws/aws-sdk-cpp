/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/ListAllowedNodeTypeUpdatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAllowedNodeTypeUpdatesResult::ListAllowedNodeTypeUpdatesResult()
{
}

ListAllowedNodeTypeUpdatesResult::ListAllowedNodeTypeUpdatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAllowedNodeTypeUpdatesResult& ListAllowedNodeTypeUpdatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ScaleUpNodeTypes"))
  {
    Aws::Utils::Array<JsonView> scaleUpNodeTypesJsonList = jsonValue.GetArray("ScaleUpNodeTypes");
    for(unsigned scaleUpNodeTypesIndex = 0; scaleUpNodeTypesIndex < scaleUpNodeTypesJsonList.GetLength(); ++scaleUpNodeTypesIndex)
    {
      m_scaleUpNodeTypes.push_back(scaleUpNodeTypesJsonList[scaleUpNodeTypesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("ScaleDownNodeTypes"))
  {
    Aws::Utils::Array<JsonView> scaleDownNodeTypesJsonList = jsonValue.GetArray("ScaleDownNodeTypes");
    for(unsigned scaleDownNodeTypesIndex = 0; scaleDownNodeTypesIndex < scaleDownNodeTypesJsonList.GetLength(); ++scaleDownNodeTypesIndex)
    {
      m_scaleDownNodeTypes.push_back(scaleDownNodeTypesJsonList[scaleDownNodeTypesIndex].AsString());
    }
  }



  return *this;
}
