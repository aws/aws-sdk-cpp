/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ListResolverEndpointIpAddressesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListResolverEndpointIpAddressesResult::ListResolverEndpointIpAddressesResult() : 
    m_maxResults(0)
{
}

ListResolverEndpointIpAddressesResult::ListResolverEndpointIpAddressesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_maxResults(0)
{
  *this = result;
}

ListResolverEndpointIpAddressesResult& ListResolverEndpointIpAddressesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("IpAddresses"))
  {
    Aws::Utils::Array<JsonView> ipAddressesJsonList = jsonValue.GetArray("IpAddresses");
    for(unsigned ipAddressesIndex = 0; ipAddressesIndex < ipAddressesJsonList.GetLength(); ++ipAddressesIndex)
    {
      m_ipAddresses.push_back(ipAddressesJsonList[ipAddressesIndex].AsObject());
    }
  }



  return *this;
}
