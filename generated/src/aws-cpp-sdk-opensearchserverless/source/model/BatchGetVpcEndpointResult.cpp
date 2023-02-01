/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/BatchGetVpcEndpointResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetVpcEndpointResult::BatchGetVpcEndpointResult()
{
}

BatchGetVpcEndpointResult::BatchGetVpcEndpointResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetVpcEndpointResult& BatchGetVpcEndpointResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("vpcEndpointDetails"))
  {
    Aws::Utils::Array<JsonView> vpcEndpointDetailsJsonList = jsonValue.GetArray("vpcEndpointDetails");
    for(unsigned vpcEndpointDetailsIndex = 0; vpcEndpointDetailsIndex < vpcEndpointDetailsJsonList.GetLength(); ++vpcEndpointDetailsIndex)
    {
      m_vpcEndpointDetails.push_back(vpcEndpointDetailsJsonList[vpcEndpointDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("vpcEndpointErrorDetails"))
  {
    Aws::Utils::Array<JsonView> vpcEndpointErrorDetailsJsonList = jsonValue.GetArray("vpcEndpointErrorDetails");
    for(unsigned vpcEndpointErrorDetailsIndex = 0; vpcEndpointErrorDetailsIndex < vpcEndpointErrorDetailsJsonList.GetLength(); ++vpcEndpointErrorDetailsIndex)
    {
      m_vpcEndpointErrorDetails.push_back(vpcEndpointErrorDetailsJsonList[vpcEndpointErrorDetailsIndex].AsObject());
    }
  }



  return *this;
}
