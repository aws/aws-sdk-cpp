/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/EmailMessageTemplateContent.h>
#include <aws/qconnect/model/SMSMessageTemplateContent.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QConnect
{
namespace Model
{

  /**
   * <p>The container of message template content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/MessageTemplateContentProvider">AWS
   * API Reference</a></p>
   */
  class MessageTemplateContentProvider
  {
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
    template<typename EmailT = EmailMessageTemplateContent>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = EmailMessageTemplateContent>
    MessageTemplateContentProvider& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the message template that applies to the SMS channel
     * subtype.</p>
     */
    inline const SMSMessageTemplateContent& GetSms() const { return m_sms; }
    inline bool SmsHasBeenSet() const { return m_smsHasBeenSet; }
    template<typename SmsT = SMSMessageTemplateContent>
    void SetSms(SmsT&& value) { m_smsHasBeenSet = true; m_sms = std::forward<SmsT>(value); }
    template<typename SmsT = SMSMessageTemplateContent>
    MessageTemplateContentProvider& WithSms(SmsT&& value) { SetSms(std::forward<SmsT>(value)); return *this;}
    ///@}
  private:

    EmailMessageTemplateContent m_email;
    bool m_emailHasBeenSet = false;

    SMSMessageTemplateContent m_sms;
    bool m_smsHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
