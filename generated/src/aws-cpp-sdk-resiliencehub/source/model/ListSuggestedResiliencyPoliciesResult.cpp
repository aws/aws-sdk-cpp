/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ListSuggestedResiliencyPoliciesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSuggestedResiliencyPoliciesResult::ListSuggestedResiliencyPoliciesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSuggestedResiliencyPoliciesResult& ListSuggestedResiliencyPoliciesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resiliencyPolicies"))
  {
    Aws::Utils::Array<JsonView> resiliencyPoliciesJsonList = jsonValue.GetArray("resiliencyPolicies");
    for(unsigned resiliencyPoliciesIndex = 0; resiliencyPoliciesIndex < resiliencyPoliciesJsonList.GetLength(); ++resiliencyPoliciesIndex)
    {
      m_resiliencyPolicies.push_back(resiliencyPoliciesJsonList[resiliencyPoliciesIndex].AsObject());
    }
    m_resiliencyPoliciesHasBeenSet = true;
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
