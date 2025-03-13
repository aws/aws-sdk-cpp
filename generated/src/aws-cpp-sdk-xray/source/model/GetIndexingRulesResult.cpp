/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/GetIndexingRulesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetIndexingRulesResult::GetIndexingRulesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetIndexingRulesResult& GetIndexingRulesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IndexingRules"))
  {
    Aws::Utils::Array<JsonView> indexingRulesJsonList = jsonValue.GetArray("IndexingRules");
    for(unsigned indexingRulesIndex = 0; indexingRulesIndex < indexingRulesJsonList.GetLength(); ++indexingRulesIndex)
    {
      m_indexingRules.push_back(indexingRulesJsonList[indexingRulesIndex].AsObject());
    }
    m_indexingRulesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
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
