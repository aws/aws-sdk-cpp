/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ListResolverQueryLogConfigAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListResolverQueryLogConfigAssociationsResult::ListResolverQueryLogConfigAssociationsResult() : 
    m_totalCount(0),
    m_totalFilteredCount(0)
{
}

ListResolverQueryLogConfigAssociationsResult::ListResolverQueryLogConfigAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_totalCount(0),
    m_totalFilteredCount(0)
{
  *this = result;
}

ListResolverQueryLogConfigAssociationsResult& ListResolverQueryLogConfigAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("TotalCount"))
  {
    m_totalCount = jsonValue.GetInteger("TotalCount");

  }

  if(jsonValue.ValueExists("TotalFilteredCount"))
  {
    m_totalFilteredCount = jsonValue.GetInteger("TotalFilteredCount");

  }

  if(jsonValue.ValueExists("ResolverQueryLogConfigAssociations"))
  {
    Aws::Utils::Array<JsonView> resolverQueryLogConfigAssociationsJsonList = jsonValue.GetArray("ResolverQueryLogConfigAssociations");
    for(unsigned resolverQueryLogConfigAssociationsIndex = 0; resolverQueryLogConfigAssociationsIndex < resolverQueryLogConfigAssociationsJsonList.GetLength(); ++resolverQueryLogConfigAssociationsIndex)
    {
      m_resolverQueryLogConfigAssociations.push_back(resolverQueryLogConfigAssociationsJsonList[resolverQueryLogConfigAssociationsIndex].AsObject());
    }
  }



  return *this;
}
