/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/PutProtectConfigurationRuleSetNumberOverrideResult.h>
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

PutProtectConfigurationRuleSetNumberOverrideResult::PutProtectConfigurationRuleSetNumberOverrideResult() : 
    m_action(ProtectConfigurationRuleOverrideAction::NOT_SET)
{
}

PutProtectConfigurationRuleSetNumberOverrideResult::PutProtectConfigurationRuleSetNumberOverrideResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : PutProtectConfigurationRuleSetNumberOverrideResult()
{
  *this = result;
}

PutProtectConfigurationRuleSetNumberOverrideResult& PutProtectConfigurationRuleSetNumberOverrideResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProtectConfigurationArn"))
  {
    m_protectConfigurationArn = jsonValue.GetString("ProtectConfigurationArn");

  }

  if(jsonValue.ValueExists("ProtectConfigurationId"))
  {
    m_protectConfigurationId = jsonValue.GetString("ProtectConfigurationId");

  }

  if(jsonValue.ValueExists("DestinationPhoneNumber"))
  {
    m_destinationPhoneNumber = jsonValue.GetString("DestinationPhoneNumber");

  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

  }

  if(jsonValue.ValueExists("Action"))
  {
    m_action = ProtectConfigurationRuleOverrideActionMapper::GetProtectConfigurationRuleOverrideActionForName(jsonValue.GetString("Action"));

  }

  if(jsonValue.ValueExists("IsoCountryCode"))
  {
    m_isoCountryCode = jsonValue.GetString("IsoCountryCode");

  }

  if(jsonValue.ValueExists("ExpirationTimestamp"))
  {
    m_expirationTimestamp = jsonValue.GetDouble("ExpirationTimestamp");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
