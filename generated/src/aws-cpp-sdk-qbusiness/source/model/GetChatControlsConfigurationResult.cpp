/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/GetChatControlsConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetChatControlsConfigurationResult::GetChatControlsConfigurationResult() : 
    m_responseScope(ResponseScope::NOT_SET)
{
}

GetChatControlsConfigurationResult::GetChatControlsConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_responseScope(ResponseScope::NOT_SET)
{
  *this = result;
}

GetChatControlsConfigurationResult& GetChatControlsConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("blockedPhrases"))
  {
    m_blockedPhrases = jsonValue.GetObject("blockedPhrases");

  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("responseScope"))
  {
    m_responseScope = ResponseScopeMapper::GetResponseScopeForName(jsonValue.GetString("responseScope"));

  }

  if(jsonValue.ValueExists("topicConfigurations"))
  {
    Aws::Utils::Array<JsonView> topicConfigurationsJsonList = jsonValue.GetArray("topicConfigurations");
    for(unsigned topicConfigurationsIndex = 0; topicConfigurationsIndex < topicConfigurationsJsonList.GetLength(); ++topicConfigurationsIndex)
    {
      m_topicConfigurations.push_back(topicConfigurationsJsonList[topicConfigurationsIndex].AsObject());
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
