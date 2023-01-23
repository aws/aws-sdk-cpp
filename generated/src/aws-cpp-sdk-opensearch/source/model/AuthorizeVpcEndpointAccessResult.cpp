/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/AuthorizeVpcEndpointAccessResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AuthorizeVpcEndpointAccessResult::AuthorizeVpcEndpointAccessResult()
{
}

AuthorizeVpcEndpointAccessResult::AuthorizeVpcEndpointAccessResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AuthorizeVpcEndpointAccessResult& AuthorizeVpcEndpointAccessResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AuthorizedPrincipal"))
  {
    m_authorizedPrincipal = jsonValue.GetObject("AuthorizedPrincipal");

  }



  return *this;
}
