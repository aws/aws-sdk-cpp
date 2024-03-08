/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/ListPrivateGraphEndpointsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NeptuneGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPrivateGraphEndpointsResult::ListPrivateGraphEndpointsResult()
{
}

ListPrivateGraphEndpointsResult::ListPrivateGraphEndpointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPrivateGraphEndpointsResult& ListPrivateGraphEndpointsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("privateGraphEndpoints"))
  {
    Aws::Utils::Array<JsonView> privateGraphEndpointsJsonList = jsonValue.GetArray("privateGraphEndpoints");
    for(unsigned privateGraphEndpointsIndex = 0; privateGraphEndpointsIndex < privateGraphEndpointsJsonList.GetLength(); ++privateGraphEndpointsIndex)
    {
      m_privateGraphEndpoints.push_back(privateGraphEndpointsJsonList[privateGraphEndpointsIndex].AsObject());
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
