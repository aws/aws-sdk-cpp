/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DescribeDomainNodesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDomainNodesResult::DescribeDomainNodesResult()
{
}

DescribeDomainNodesResult::DescribeDomainNodesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDomainNodesResult& DescribeDomainNodesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainNodesStatusList"))
  {
    Aws::Utils::Array<JsonView> domainNodesStatusListJsonList = jsonValue.GetArray("DomainNodesStatusList");
    for(unsigned domainNodesStatusListIndex = 0; domainNodesStatusListIndex < domainNodesStatusListJsonList.GetLength(); ++domainNodesStatusListIndex)
    {
      m_domainNodesStatusList.push_back(domainNodesStatusListJsonList[domainNodesStatusListIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
