/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ListAutomationRulesResult.h>
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

ListAutomationRulesResult::ListAutomationRulesResult()
{
}

ListAutomationRulesResult::ListAutomationRulesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAutomationRulesResult& ListAutomationRulesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AutomationRulesMetadata"))
  {
    Aws::Utils::Array<JsonView> automationRulesMetadataJsonList = jsonValue.GetArray("AutomationRulesMetadata");
    for(unsigned automationRulesMetadataIndex = 0; automationRulesMetadataIndex < automationRulesMetadataJsonList.GetLength(); ++automationRulesMetadataIndex)
    {
      m_automationRulesMetadata.push_back(automationRulesMetadataJsonList[automationRulesMetadataIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
