/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/UpdateGatewayInstanceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateGatewayInstanceResult::UpdateGatewayInstanceResult() : 
    m_bridgePlacement(BridgePlacement::NOT_SET)
{
}

UpdateGatewayInstanceResult::UpdateGatewayInstanceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_bridgePlacement(BridgePlacement::NOT_SET)
{
  *this = result;
}

UpdateGatewayInstanceResult& UpdateGatewayInstanceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("bridgePlacement"))
  {
    m_bridgePlacement = BridgePlacementMapper::GetBridgePlacementForName(jsonValue.GetString("bridgePlacement"));

  }

  if(jsonValue.ValueExists("gatewayInstanceArn"))
  {
    m_gatewayInstanceArn = jsonValue.GetString("gatewayInstanceArn");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
