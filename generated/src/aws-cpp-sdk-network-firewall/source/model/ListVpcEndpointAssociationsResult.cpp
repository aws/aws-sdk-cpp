/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/ListVpcEndpointAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVpcEndpointAssociationsResult::ListVpcEndpointAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListVpcEndpointAssociationsResult& ListVpcEndpointAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcEndpointAssociations"))
  {
    Aws::Utils::Array<JsonView> vpcEndpointAssociationsJsonList = jsonValue.GetArray("VpcEndpointAssociations");
    for(unsigned vpcEndpointAssociationsIndex = 0; vpcEndpointAssociationsIndex < vpcEndpointAssociationsJsonList.GetLength(); ++vpcEndpointAssociationsIndex)
    {
      m_vpcEndpointAssociations.push_back(vpcEndpointAssociationsJsonList[vpcEndpointAssociationsIndex].AsObject());
    }
    m_vpcEndpointAssociationsHasBeenSet = true;
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
