/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/EmailMessageTemplateContent.h>
#include <aws/qconnect/model/PushMessageTemplateContent.h>
#include <aws/qconnect/model/SMSMessageTemplateContent.h>
#include <aws/qconnect/model/WhatsAppMessageTemplateContent.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>The container of message template content.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/MessageTemplateContentProvider">AWS
 * API Reference</a></p>
 */
class MessageTemplateContentProvider {
 public:
  AWS_QCONNECT_API MessageTemplateContentProvider() = default;
  AWS_QCONNECT_API MessageTemplateContentProvider(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API MessageTemplateContentProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The content of the message template that applies to the email channel
   * subtype.</p>
   */
  inline const EmailMessageTemplateContent& GetEmail() const { return m_email; }
  inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
  template <typename EmailT = EmailMessageTemplateContent>
  void SetEmail(EmailT&& value) {
    m_emailHasBeenSet = true;
    m_email = std::forward<EmailT>(value);
  }
  template <typename EmailT = EmailMessageTemplateContent>
  MessageTemplateContentProvider& WithEmail(EmailT&& value) {
    SetEmail(std::forward<EmailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content of the message template that applies to the SMS channel
   * subtype.</p>
   */
  inline const SMSMessageTemplateContent& GetSms() const { return m_sms; }
  inline bool SmsHasBeenSet() const { return m_smsHasBeenSet; }
  template <typename SmsT = SMSMessageTemplateContent>
  void SetSms(SmsT&& value) {
    m_smsHasBeenSet = true;
    m_sms = std::forward<SmsT>(value);
  }
  template <typename SmsT = SMSMessageTemplateContent>
  MessageTemplateContentProvider& WithSms(SmsT&& value) {
    SetSms(std::forward<SmsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content of the message template that applies to the WHATSAPP channel
   * subtype.</p>
   */
  inline const WhatsAppMessageTemplateContent& GetWhatsApp() const { return m_whatsApp; }
  inline bool WhatsAppHasBeenSet() const { return m_whatsAppHasBeenSet; }
  template <typename WhatsAppT = WhatsAppMessageTemplateContent>
  void SetWhatsApp(WhatsAppT&& value) {
    m_whatsAppHasBeenSet = true;
    m_whatsApp = std::forward<WhatsAppT>(value);
  }
  template <typename WhatsAppT = WhatsAppMessageTemplateContent>
  MessageTemplateContentProvider& WithWhatsApp(WhatsAppT&& value) {
    SetWhatsApp(std::forward<WhatsAppT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const PushMessageTemplateContent& GetPush() const { return m_push; }
  inline bool PushHasBeenSet() const { return m_pushHasBeenSet; }
  template <typename PushT = PushMessageTemplateContent>
  void SetPush(PushT&& value) {
    m_pushHasBeenSet = true;
    m_push = std::forward<PushT>(value);
  }
  template <typename PushT = PushMessageTemplateContent>
  MessageTemplateContentProvider& WithPush(PushT&& value) {
    SetPush(std::forward<PushT>(value));
    return *this;
  }
  ///@}
 private:
  EmailMessageTemplateContent m_email;

  SMSMessageTemplateContent m_sms;

  WhatsAppMessageTemplateContent m_whatsApp;

  PushMessageTemplateContent m_push;
  bool m_emailHasBeenSet = false;
  bool m_smsHasBeenSet = false;
  bool m_whatsAppHasBeenSet = false;
  bool m_pushHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
