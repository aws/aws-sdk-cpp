/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ListResolverRuleAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListResolverRuleAssociationsResult::ListResolverRuleAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListResolverRuleAssociationsResult& ListResolverRuleAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxResults"))
  {
    m_maxResults = jsonValue.GetInteger("MaxResults");
    m_maxResultsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResolverRuleAssociations"))
  {
    Aws::Utils::Array<JsonView> resolverRuleAssociationsJsonList = jsonValue.GetArray("ResolverRuleAssociations");
    for(unsigned resolverRuleAssociationsIndex = 0; resolverRuleAssociationsIndex < resolverRuleAssociationsJsonList.GetLength(); ++resolverRuleAssociationsIndex)
    {
      m_resolverRuleAssociations.push_back(resolverRuleAssociationsJsonList[resolverRuleAssociationsIndex].AsObject());
    }
    m_resolverRuleAssociationsHasBeenSet = true;
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
