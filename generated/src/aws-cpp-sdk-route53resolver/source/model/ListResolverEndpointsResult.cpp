/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ListResolverEndpointsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListResolverEndpointsResult::ListResolverEndpointsResult() : 
    m_maxResults(0)
{
}

ListResolverEndpointsResult::ListResolverEndpointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_maxResults(0)
{
  *this = result;
}

ListResolverEndpointsResult& ListResolverEndpointsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("MaxResults"))
  {
    m_maxResults = jsonValue.GetInteger("MaxResults");

  }

  if(jsonValue.ValueExists("ResolverEndpoints"))
  {
    Aws::Utils::Array<JsonView> resolverEndpointsJsonList = jsonValue.GetArray("ResolverEndpoints");
    for(unsigned resolverEndpointsIndex = 0; resolverEndpointsIndex < resolverEndpointsJsonList.GetLength(); ++resolverEndpointsIndex)
    {
      m_resolverEndpoints.push_back(resolverEndpointsJsonList[resolverEndpointsIndex].AsObject());
    }
  }



  return *this;
}
