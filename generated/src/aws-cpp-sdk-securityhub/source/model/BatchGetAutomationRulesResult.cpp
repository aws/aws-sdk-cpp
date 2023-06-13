/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BatchGetAutomationRulesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetAutomationRulesResult::BatchGetAutomationRulesResult()
{
}

BatchGetAutomationRulesResult::BatchGetAutomationRulesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetAutomationRulesResult& BatchGetAutomationRulesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Rules"))
  {
    Aws::Utils::Array<JsonView> rulesJsonList = jsonValue.GetArray("Rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnprocessedAutomationRules"))
  {
    Aws::Utils::Array<JsonView> unprocessedAutomationRulesJsonList = jsonValue.GetArray("UnprocessedAutomationRules");
    for(unsigned unprocessedAutomationRulesIndex = 0; unprocessedAutomationRulesIndex < unprocessedAutomationRulesJsonList.GetLength(); ++unprocessedAutomationRulesIndex)
    {
      m_unprocessedAutomationRules.push_back(unprocessedAutomationRulesJsonList[unprocessedAutomationRulesIndex].AsObject());
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
