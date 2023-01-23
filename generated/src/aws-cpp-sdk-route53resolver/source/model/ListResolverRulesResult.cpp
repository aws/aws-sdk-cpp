/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ListResolverRulesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListResolverRulesResult::ListResolverRulesResult() : 
    m_maxResults(0)
{
}

ListResolverRulesResult::ListResolverRulesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_maxResults(0)
{
  *this = result;
}

ListResolverRulesResult& ListResolverRulesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("ResolverRules"))
  {
    Aws::Utils::Array<JsonView> resolverRulesJsonList = jsonValue.GetArray("ResolverRules");
    for(unsigned resolverRulesIndex = 0; resolverRulesIndex < resolverRulesJsonList.GetLength(); ++resolverRulesIndex)
    {
      m_resolverRules.push_back(resolverRulesJsonList[resolverRulesIndex].AsObject());
    }
  }



  return *this;
}
