/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PinpointSMSVoiceV2 {
namespace Model {
class SendNotifyVoiceMessageResult {
 public:
  AWS_PINPOINTSMSVOICEV2_API SendNotifyVoiceMessageResult() = default;
  AWS_PINPOINTSMSVOICEV2_API SendNotifyVoiceMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PINPOINTSMSVOICEV2_API SendNotifyVoiceMessageResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier for the message.</p>
   */
  inline const Aws::String& GetMessageId() const { return m_messageId; }
  template <typename MessageIdT = Aws::String>
  void SetMessageId(MessageIdT&& value) {
    m_messageIdHasBeenSet = true;
    m_messageId = std::forward<MessageIdT>(value);
  }
  template <typename MessageIdT = Aws::String>
  SendNotifyVoiceMessageResult& WithMessageId(MessageIdT&& value) {
    SetMessageId(std::forward<MessageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the template used for the message.</p>
   */
  inline const Aws::String& GetTemplateId() const { return m_templateId; }
  template <typename TemplateIdT = Aws::String>
  void SetTemplateId(TemplateIdT&& value) {
    m_templateIdHasBeenSet = true;
    m_templateId = std::forward<TemplateIdT>(value);
  }
  template <typename TemplateIdT = Aws::String>
  SendNotifyVoiceMessageResult& WithTemplateId(TemplateIdT&& value) {
    SetTemplateId(std::forward<TemplateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The message body after template variable substitution has been applied.</p>
   */
  inline const Aws::String& GetResolvedMessageBody() const { return m_resolvedMessageBody; }
  template <typename ResolvedMessageBodyT = Aws::String>
  void SetResolvedMessageBody(ResolvedMessageBodyT&& value) {
    m_resolvedMessageBodyHasBeenSet = true;
    m_resolvedMessageBody = std::forward<ResolvedMessageBodyT>(value);
  }
  template <typename ResolvedMessageBodyT = Aws::String>
  SendNotifyVoiceMessageResult& WithResolvedMessageBody(ResolvedMessageBodyT&& value) {
    SetResolvedMessageBody(std::forward<ResolvedMessageBodyT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  SendNotifyVoiceMessageResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_messageId;

  Aws::String m_templateId;

  Aws::String m_resolvedMessageBody;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_messageIdHasBeenSet = false;
  bool m_templateIdHasBeenSet = false;
  bool m_resolvedMessageBodyHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
