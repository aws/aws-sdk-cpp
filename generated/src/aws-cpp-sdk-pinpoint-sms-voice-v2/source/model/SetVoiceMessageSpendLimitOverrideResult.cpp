/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/SetVoiceMessageSpendLimitOverrideResult.h>
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

SetVoiceMessageSpendLimitOverrideResult::SetVoiceMessageSpendLimitOverrideResult() : 
    m_monthlyLimit(0)
{
}

SetVoiceMessageSpendLimitOverrideResult::SetVoiceMessageSpendLimitOverrideResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_monthlyLimit(0)
{
  *this = result;
}

SetVoiceMessageSpendLimitOverrideResult& SetVoiceMessageSpendLimitOverrideResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MonthlyLimit"))
  {
    m_monthlyLimit = jsonValue.GetInt64("MonthlyLimit");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
