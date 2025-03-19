/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/ListProtectConfigurationRuleSetNumberOverridesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListProtectConfigurationRuleSetNumberOverridesResult::ListProtectConfigurationRuleSetNumberOverridesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListProtectConfigurationRuleSetNumberOverridesResult& ListProtectConfigurationRuleSetNumberOverridesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProtectConfigurationArn"))
  {
    m_protectConfigurationArn = jsonValue.GetString("ProtectConfigurationArn");
    m_protectConfigurationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProtectConfigurationId"))
  {
    m_protectConfigurationId = jsonValue.GetString("ProtectConfigurationId");
    m_protectConfigurationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuleSetNumberOverrides"))
  {
    Aws::Utils::Array<JsonView> ruleSetNumberOverridesJsonList = jsonValue.GetArray("RuleSetNumberOverrides");
    for(unsigned ruleSetNumberOverridesIndex = 0; ruleSetNumberOverridesIndex < ruleSetNumberOverridesJsonList.GetLength(); ++ruleSetNumberOverridesIndex)
    {
      m_ruleSetNumberOverrides.push_back(ruleSetNumberOverridesJsonList[ruleSetNumberOverridesIndex].AsObject());
    }
    m_ruleSetNumberOverridesHasBeenSet = true;
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
