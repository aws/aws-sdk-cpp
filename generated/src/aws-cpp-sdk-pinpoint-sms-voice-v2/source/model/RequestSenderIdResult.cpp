/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/RequestSenderIdResult.h>
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

RequestSenderIdResult::RequestSenderIdResult() : 
    m_deletionProtectionEnabled(false),
    m_registered(false)
{
}

RequestSenderIdResult::RequestSenderIdResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_deletionProtectionEnabled(false),
    m_registered(false)
{
  *this = result;
}

RequestSenderIdResult& RequestSenderIdResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SenderIdArn"))
  {
    m_senderIdArn = jsonValue.GetString("SenderIdArn");

  }

  if(jsonValue.ValueExists("SenderId"))
  {
    m_senderId = jsonValue.GetString("SenderId");

  }

  if(jsonValue.ValueExists("IsoCountryCode"))
  {
    m_isoCountryCode = jsonValue.GetString("IsoCountryCode");

  }

  if(jsonValue.ValueExists("MessageTypes"))
  {
    Aws::Utils::Array<JsonView> messageTypesJsonList = jsonValue.GetArray("MessageTypes");
    for(unsigned messageTypesIndex = 0; messageTypesIndex < messageTypesJsonList.GetLength(); ++messageTypesIndex)
    {
      m_messageTypes.push_back(MessageTypeMapper::GetMessageTypeForName(messageTypesJsonList[messageTypesIndex].AsString()));
    }
  }

  if(jsonValue.ValueExists("MonthlyLeasingPrice"))
  {
    m_monthlyLeasingPrice = jsonValue.GetString("MonthlyLeasingPrice");

  }

  if(jsonValue.ValueExists("DeletionProtectionEnabled"))
  {
    m_deletionProtectionEnabled = jsonValue.GetBool("DeletionProtectionEnabled");

  }

  if(jsonValue.ValueExists("Registered"))
  {
    m_registered = jsonValue.GetBool("Registered");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
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
