/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ListResolverQueryLogConfigAssociationsResult.h>
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

ListResolverQueryLogConfigAssociationsResult::ListResolverQueryLogConfigAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListResolverQueryLogConfigAssociationsResult& ListResolverQueryLogConfigAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalCount"))
  {
    m_totalCount = jsonValue.GetInteger("TotalCount");
    m_totalCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalFilteredCount"))
  {
    m_totalFilteredCount = jsonValue.GetInteger("TotalFilteredCount");
    m_totalFilteredCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResolverQueryLogConfigAssociations"))
  {
    Aws::Utils::Array<JsonView> resolverQueryLogConfigAssociationsJsonList = jsonValue.GetArray("ResolverQueryLogConfigAssociations");
    for(unsigned resolverQueryLogConfigAssociationsIndex = 0; resolverQueryLogConfigAssociationsIndex < resolverQueryLogConfigAssociationsJsonList.GetLength(); ++resolverQueryLogConfigAssociationsIndex)
    {
      m_resolverQueryLogConfigAssociations.push_back(resolverQueryLogConfigAssociationsJsonList[resolverQueryLogConfigAssociationsIndex].AsObject());
    }
    m_resolverQueryLogConfigAssociationsHasBeenSet = true;
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
