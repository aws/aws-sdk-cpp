/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DescribeDomainsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDomainsResult::DescribeDomainsResult()
{
}

DescribeDomainsResult::DescribeDomainsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDomainsResult& DescribeDomainsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainStatusList"))
  {
    Aws::Utils::Array<JsonView> domainStatusListJsonList = jsonValue.GetArray("DomainStatusList");
    for(unsigned domainStatusListIndex = 0; domainStatusListIndex < domainStatusListJsonList.GetLength(); ++domainStatusListIndex)
    {
      m_domainStatusList.push_back(domainStatusListJsonList[domainStatusListIndex].AsObject());
    }
  }



  return *this;
}
