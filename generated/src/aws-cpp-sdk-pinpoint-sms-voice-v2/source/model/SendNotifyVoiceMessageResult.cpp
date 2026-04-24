/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/pinpoint-sms-voice-v2/model/SendNotifyVoiceMessageResult.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SendNotifyVoiceMessageResult::SendNotifyVoiceMessageResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

SendNotifyVoiceMessageResult& SendNotifyVoiceMessageResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("MessageId")) {
    m_messageId = jsonValue.GetString("MessageId");
    m_messageIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TemplateId")) {
    m_templateId = jsonValue.GetString("TemplateId");
    m_templateIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResolvedMessageBody")) {
    m_resolvedMessageBody = jsonValue.GetString("ResolvedMessageBody");
    m_resolvedMessageBodyHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
