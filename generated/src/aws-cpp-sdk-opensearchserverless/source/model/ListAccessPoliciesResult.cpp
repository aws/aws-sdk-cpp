/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/ListAccessPoliciesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAccessPoliciesResult::ListAccessPoliciesResult()
{
}

ListAccessPoliciesResult::ListAccessPoliciesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAccessPoliciesResult& ListAccessPoliciesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("accessPolicySummaries"))
  {
    Aws::Utils::Array<JsonView> accessPolicySummariesJsonList = jsonValue.GetArray("accessPolicySummaries");
    for(unsigned accessPolicySummariesIndex = 0; accessPolicySummariesIndex < accessPolicySummariesJsonList.GetLength(); ++accessPolicySummariesIndex)
    {
      m_accessPolicySummaries.push_back(accessPolicySummariesJsonList[accessPolicySummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
