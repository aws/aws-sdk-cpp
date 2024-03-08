/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/DeletePrivateGraphEndpointResult.h>
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

DeletePrivateGraphEndpointResult::DeletePrivateGraphEndpointResult() : 
    m_status(PrivateGraphEndpointStatus::NOT_SET)
{
}

DeletePrivateGraphEndpointResult::DeletePrivateGraphEndpointResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(PrivateGraphEndpointStatus::NOT_SET)
{
  *this = result;
}

DeletePrivateGraphEndpointResult& DeletePrivateGraphEndpointResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("vpcId"))
  {
    m_vpcId = jsonValue.GetString("vpcId");

  }

  if(jsonValue.ValueExists("subnetIds"))
  {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("subnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = PrivateGraphEndpointStatusMapper::GetPrivateGraphEndpointStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("vpcEndpointId"))
  {
    m_vpcEndpointId = jsonValue.GetString("vpcEndpointId");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
