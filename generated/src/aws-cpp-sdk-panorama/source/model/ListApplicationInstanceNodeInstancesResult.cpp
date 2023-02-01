/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/ListApplicationInstanceNodeInstancesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListApplicationInstanceNodeInstancesResult::ListApplicationInstanceNodeInstancesResult()
{
}

ListApplicationInstanceNodeInstancesResult::ListApplicationInstanceNodeInstancesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListApplicationInstanceNodeInstancesResult& ListApplicationInstanceNodeInstancesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("NodeInstances"))
  {
    Aws::Utils::Array<JsonView> nodeInstancesJsonList = jsonValue.GetArray("NodeInstances");
    for(unsigned nodeInstancesIndex = 0; nodeInstancesIndex < nodeInstancesJsonList.GetLength(); ++nodeInstancesIndex)
    {
      m_nodeInstances.push_back(nodeInstancesJsonList[nodeInstancesIndex].AsObject());
    }
  }



  return *this;
}
