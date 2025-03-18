﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/UpdateProtectConfigurationCountryRuleSetResult.h>
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

UpdateProtectConfigurationCountryRuleSetResult::UpdateProtectConfigurationCountryRuleSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateProtectConfigurationCountryRuleSetResult& UpdateProtectConfigurationCountryRuleSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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
  if(jsonValue.ValueExists("NumberCapability"))
  {
    m_numberCapability = NumberCapabilityMapper::GetNumberCapabilityForName(jsonValue.GetString("NumberCapability"));
    m_numberCapabilityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CountryRuleSet"))
  {
    Aws::Map<Aws::String, JsonView> countryRuleSetJsonMap = jsonValue.GetObject("CountryRuleSet").GetAllObjects();
    for(auto& countryRuleSetItem : countryRuleSetJsonMap)
    {
      m_countryRuleSet[countryRuleSetItem.first] = countryRuleSetItem.second.AsObject();
    }
    m_countryRuleSetHasBeenSet = true;
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
