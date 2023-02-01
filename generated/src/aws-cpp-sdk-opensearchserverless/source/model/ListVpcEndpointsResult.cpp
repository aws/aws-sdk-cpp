/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/ListVpcEndpointsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVpcEndpointsResult::ListVpcEndpointsResult()
{
}

ListVpcEndpointsResult::ListVpcEndpointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListVpcEndpointsResult& ListVpcEndpointsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("vpcEndpointSummaries"))
  {
    Aws::Utils::Array<JsonView> vpcEndpointSummariesJsonList = jsonValue.GetArray("vpcEndpointSummaries");
    for(unsigned vpcEndpointSummariesIndex = 0; vpcEndpointSummariesIndex < vpcEndpointSummariesJsonList.GetLength(); ++vpcEndpointSummariesIndex)
    {
      m_vpcEndpointSummaries.push_back(vpcEndpointSummariesJsonList[vpcEndpointSummariesIndex].AsObject());
    }
  }



  return *this;
}
