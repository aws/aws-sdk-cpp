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
    AWS_QCONNECT_API MessageTemplateContentProvider();
    AWS_QCONNECT_API MessageTemplateContentProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API MessageTemplateContentProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content of the message template that applies to the email channel
     * subtype.</p>
     */
    inline const EmailMessageTemplateContent& GetEmail() const{ return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    inline void SetEmail(const EmailMessageTemplateContent& value) { m_emailHasBeenSet = true; m_email = value; }
    inline void SetEmail(EmailMessageTemplateContent&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }
    inline MessageTemplateContentProvider& WithEmail(const EmailMessageTemplateContent& value) { SetEmail(value); return *this;}
    inline MessageTemplateContentProvider& WithEmail(EmailMessageTemplateContent&& value) { SetEmail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the message template that applies to the SMS channel
     * subtype.</p>
     */
    inline const SMSMessageTemplateContent& GetSms() const{ return m_sms; }
    inline bool SmsHasBeenSet() const { return m_smsHasBeenSet; }
    inline void SetSms(const SMSMessageTemplateContent& value) { m_smsHasBeenSet = true; m_sms = value; }
    inline void SetSms(SMSMessageTemplateContent&& value) { m_smsHasBeenSet = true; m_sms = std::move(value); }
    inline MessageTemplateContentProvider& WithSms(const SMSMessageTemplateContent& value) { SetSms(value); return *this;}
    inline MessageTemplateContentProvider& WithSms(SMSMessageTemplateContent&& value) { SetSms(std::move(value)); return *this;}
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
