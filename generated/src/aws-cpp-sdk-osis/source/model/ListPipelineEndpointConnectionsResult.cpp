/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/ListPipelineEndpointConnectionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::OSIS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPipelineEndpointConnectionsResult::ListPipelineEndpointConnectionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPipelineEndpointConnectionsResult& ListPipelineEndpointConnectionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PipelineEndpointConnections"))
  {
    Aws::Utils::Array<JsonView> pipelineEndpointConnectionsJsonList = jsonValue.GetArray("PipelineEndpointConnections");
    for(unsigned pipelineEndpointConnectionsIndex = 0; pipelineEndpointConnectionsIndex < pipelineEndpointConnectionsJsonList.GetLength(); ++pipelineEndpointConnectionsIndex)
    {
      m_pipelineEndpointConnections.push_back(pipelineEndpointConnectionsJsonList[pipelineEndpointConnectionsIndex].AsObject());
    }
    m_pipelineEndpointConnectionsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
