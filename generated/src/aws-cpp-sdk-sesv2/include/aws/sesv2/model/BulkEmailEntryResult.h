/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/BulkEmailStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>The result of the <code>SendBulkEmail</code> operation of each specified
   * <code>BulkEmailEntry</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/BulkEmailEntryResult">AWS
   * API Reference</a></p>
   */
  class BulkEmailEntryResult
  {
  public:
    AWS_SESV2_API BulkEmailEntryResult();
    AWS_SESV2_API BulkEmailEntryResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API BulkEmailEntryResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of a message sent using the <code>SendBulkTemplatedEmail</code>
     * operation.</p> <p>Possible values for this parameter include:</p> <ul> <li>
     * <p>SUCCESS: Amazon SES accepted the message, and will attempt to deliver it to
     * the recipients.</p> </li> <li> <p>MESSAGE_REJECTED: The message was rejected
     * because it contained a virus.</p> </li> <li> <p>MAIL_FROM_DOMAIN_NOT_VERIFIED:
     * The sender's email address or domain was not verified.</p> </li> <li>
     * <p>CONFIGURATION_SET_DOES_NOT_EXIST: The configuration set you specified does
     * not exist.</p> </li> <li> <p>TEMPLATE_DOES_NOT_EXIST: The template you specified
     * does not exist.</p> </li> <li> <p>ACCOUNT_SUSPENDED: Your account has been shut
     * down because of issues related to your email sending practices.</p> </li> <li>
     * <p>ACCOUNT_THROTTLED: The number of emails you can send has been reduced because
     * your account has exceeded its allocated sending limit.</p> </li> <li>
     * <p>ACCOUNT_DAILY_QUOTA_EXCEEDED: You have reached or exceeded the maximum number
     * of emails you can send from your account in a 24-hour period.</p> </li> <li>
     * <p>INVALID_SENDING_POOL_NAME: The configuration set you specified refers to an
     * IP pool that does not exist.</p> </li> <li> <p>ACCOUNT_SENDING_PAUSED: Email
     * sending for the Amazon SES account was disabled using the <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_UpdateAccountSendingEnabled.html">UpdateAccountSendingEnabled</a>
     * operation.</p> </li> <li> <p>CONFIGURATION_SET_SENDING_PAUSED: Email sending for
     * this configuration set was disabled using the <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_UpdateConfigurationSetSendingEnabled.html">UpdateConfigurationSetSendingEnabled</a>
     * operation.</p> </li> <li> <p>INVALID_PARAMETER_VALUE: One or more of the
     * parameters you specified when calling this operation was invalid. See the error
     * message for additional information.</p> </li> <li> <p>TRANSIENT_FAILURE: Amazon
     * SES was unable to process your request because of a temporary issue.</p> </li>
     * <li> <p>FAILED: Amazon SES was unable to process your request. See the error
     * message for additional information.</p> </li> </ul>
     */
    inline const BulkEmailStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a message sent using the <code>SendBulkTemplatedEmail</code>
     * operation.</p> <p>Possible values for this parameter include:</p> <ul> <li>
     * <p>SUCCESS: Amazon SES accepted the message, and will attempt to deliver it to
     * the recipients.</p> </li> <li> <p>MESSAGE_REJECTED: The message was rejected
     * because it contained a virus.</p> </li> <li> <p>MAIL_FROM_DOMAIN_NOT_VERIFIED:
     * The sender's email address or domain was not verified.</p> </li> <li>
     * <p>CONFIGURATION_SET_DOES_NOT_EXIST: The configuration set you specified does
     * not exist.</p> </li> <li> <p>TEMPLATE_DOES_NOT_EXIST: The template you specified
     * does not exist.</p> </li> <li> <p>ACCOUNT_SUSPENDED: Your account has been shut
     * down because of issues related to your email sending practices.</p> </li> <li>
     * <p>ACCOUNT_THROTTLED: The number of emails you can send has been reduced because
     * your account has exceeded its allocated sending limit.</p> </li> <li>
     * <p>ACCOUNT_DAILY_QUOTA_EXCEEDED: You have reached or exceeded the maximum number
     * of emails you can send from your account in a 24-hour period.</p> </li> <li>
     * <p>INVALID_SENDING_POOL_NAME: The configuration set you specified refers to an
     * IP pool that does not exist.</p> </li> <li> <p>ACCOUNT_SENDING_PAUSED: Email
     * sending for the Amazon SES account was disabled using the <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_UpdateAccountSendingEnabled.html">UpdateAccountSendingEnabled</a>
     * operation.</p> </li> <li> <p>CONFIGURATION_SET_SENDING_PAUSED: Email sending for
     * this configuration set was disabled using the <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_UpdateConfigurationSetSendingEnabled.html">UpdateConfigurationSetSendingEnabled</a>
     * operation.</p> </li> <li> <p>INVALID_PARAMETER_VALUE: One or more of the
     * parameters you specified when calling this operation was invalid. See the error
     * message for additional information.</p> </li> <li> <p>TRANSIENT_FAILURE: Amazon
     * SES was unable to process your request because of a temporary issue.</p> </li>
     * <li> <p>FAILED: Amazon SES was unable to process your request. See the error
     * message for additional information.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of a message sent using the <code>SendBulkTemplatedEmail</code>
     * operation.</p> <p>Possible values for this parameter include:</p> <ul> <li>
     * <p>SUCCESS: Amazon SES accepted the message, and will attempt to deliver it to
     * the recipients.</p> </li> <li> <p>MESSAGE_REJECTED: The message was rejected
     * because it contained a virus.</p> </li> <li> <p>MAIL_FROM_DOMAIN_NOT_VERIFIED:
     * The sender's email address or domain was not verified.</p> </li> <li>
     * <p>CONFIGURATION_SET_DOES_NOT_EXIST: The configuration set you specified does
     * not exist.</p> </li> <li> <p>TEMPLATE_DOES_NOT_EXIST: The template you specified
     * does not exist.</p> </li> <li> <p>ACCOUNT_SUSPENDED: Your account has been shut
     * down because of issues related to your email sending practices.</p> </li> <li>
     * <p>ACCOUNT_THROTTLED: The number of emails you can send has been reduced because
     * your account has exceeded its allocated sending limit.</p> </li> <li>
     * <p>ACCOUNT_DAILY_QUOTA_EXCEEDED: You have reached or exceeded the maximum number
     * of emails you can send from your account in a 24-hour period.</p> </li> <li>
     * <p>INVALID_SENDING_POOL_NAME: The configuration set you specified refers to an
     * IP pool that does not exist.</p> </li> <li> <p>ACCOUNT_SENDING_PAUSED: Email
     * sending for the Amazon SES account was disabled using the <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_UpdateAccountSendingEnabled.html">UpdateAccountSendingEnabled</a>
     * operation.</p> </li> <li> <p>CONFIGURATION_SET_SENDING_PAUSED: Email sending for
     * this configuration set was disabled using the <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_UpdateConfigurationSetSendingEnabled.html">UpdateConfigurationSetSendingEnabled</a>
     * operation.</p> </li> <li> <p>INVALID_PARAMETER_VALUE: One or more of the
     * parameters you specified when calling this operation was invalid. See the error
     * message for additional information.</p> </li> <li> <p>TRANSIENT_FAILURE: Amazon
     * SES was unable to process your request because of a temporary issue.</p> </li>
     * <li> <p>FAILED: Amazon SES was unable to process your request. See the error
     * message for additional information.</p> </li> </ul>
     */
    inline void SetStatus(const BulkEmailStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a message sent using the <code>SendBulkTemplatedEmail</code>
     * operation.</p> <p>Possible values for this parameter include:</p> <ul> <li>
     * <p>SUCCESS: Amazon SES accepted the message, and will attempt to deliver it to
     * the recipients.</p> </li> <li> <p>MESSAGE_REJECTED: The message was rejected
     * because it contained a virus.</p> </li> <li> <p>MAIL_FROM_DOMAIN_NOT_VERIFIED:
     * The sender's email address or domain was not verified.</p> </li> <li>
     * <p>CONFIGURATION_SET_DOES_NOT_EXIST: The configuration set you specified does
     * not exist.</p> </li> <li> <p>TEMPLATE_DOES_NOT_EXIST: The template you specified
     * does not exist.</p> </li> <li> <p>ACCOUNT_SUSPENDED: Your account has been shut
     * down because of issues related to your email sending practices.</p> </li> <li>
     * <p>ACCOUNT_THROTTLED: The number of emails you can send has been reduced because
     * your account has exceeded its allocated sending limit.</p> </li> <li>
     * <p>ACCOUNT_DAILY_QUOTA_EXCEEDED: You have reached or exceeded the maximum number
     * of emails you can send from your account in a 24-hour period.</p> </li> <li>
     * <p>INVALID_SENDING_POOL_NAME: The configuration set you specified refers to an
     * IP pool that does not exist.</p> </li> <li> <p>ACCOUNT_SENDING_PAUSED: Email
     * sending for the Amazon SES account was disabled using the <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_UpdateAccountSendingEnabled.html">UpdateAccountSendingEnabled</a>
     * operation.</p> </li> <li> <p>CONFIGURATION_SET_SENDING_PAUSED: Email sending for
     * this configuration set was disabled using the <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_UpdateConfigurationSetSendingEnabled.html">UpdateConfigurationSetSendingEnabled</a>
     * operation.</p> </li> <li> <p>INVALID_PARAMETER_VALUE: One or more of the
     * parameters you specified when calling this operation was invalid. See the error
     * message for additional information.</p> </li> <li> <p>TRANSIENT_FAILURE: Amazon
     * SES was unable to process your request because of a temporary issue.</p> </li>
     * <li> <p>FAILED: Amazon SES was unable to process your request. See the error
     * message for additional information.</p> </li> </ul>
     */
    inline void SetStatus(BulkEmailStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of a message sent using the <code>SendBulkTemplatedEmail</code>
     * operation.</p> <p>Possible values for this parameter include:</p> <ul> <li>
     * <p>SUCCESS: Amazon SES accepted the message, and will attempt to deliver it to
     * the recipients.</p> </li> <li> <p>MESSAGE_REJECTED: The message was rejected
     * because it contained a virus.</p> </li> <li> <p>MAIL_FROM_DOMAIN_NOT_VERIFIED:
     * The sender's email address or domain was not verified.</p> </li> <li>
     * <p>CONFIGURATION_SET_DOES_NOT_EXIST: The configuration set you specified does
     * not exist.</p> </li> <li> <p>TEMPLATE_DOES_NOT_EXIST: The template you specified
     * does not exist.</p> </li> <li> <p>ACCOUNT_SUSPENDED: Your account has been shut
     * down because of issues related to your email sending practices.</p> </li> <li>
     * <p>ACCOUNT_THROTTLED: The number of emails you can send has been reduced because
     * your account has exceeded its allocated sending limit.</p> </li> <li>
     * <p>ACCOUNT_DAILY_QUOTA_EXCEEDED: You have reached or exceeded the maximum number
     * of emails you can send from your account in a 24-hour period.</p> </li> <li>
     * <p>INVALID_SENDING_POOL_NAME: The configuration set you specified refers to an
     * IP pool that does not exist.</p> </li> <li> <p>ACCOUNT_SENDING_PAUSED: Email
     * sending for the Amazon SES account was disabled using the <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_UpdateAccountSendingEnabled.html">UpdateAccountSendingEnabled</a>
     * operation.</p> </li> <li> <p>CONFIGURATION_SET_SENDING_PAUSED: Email sending for
     * this configuration set was disabled using the <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_UpdateConfigurationSetSendingEnabled.html">UpdateConfigurationSetSendingEnabled</a>
     * operation.</p> </li> <li> <p>INVALID_PARAMETER_VALUE: One or more of the
     * parameters you specified when calling this operation was invalid. See the error
     * message for additional information.</p> </li> <li> <p>TRANSIENT_FAILURE: Amazon
     * SES was unable to process your request because of a temporary issue.</p> </li>
     * <li> <p>FAILED: Amazon SES was unable to process your request. See the error
     * message for additional information.</p> </li> </ul>
     */
    inline BulkEmailEntryResult& WithStatus(const BulkEmailStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a message sent using the <code>SendBulkTemplatedEmail</code>
     * operation.</p> <p>Possible values for this parameter include:</p> <ul> <li>
     * <p>SUCCESS: Amazon SES accepted the message, and will attempt to deliver it to
     * the recipients.</p> </li> <li> <p>MESSAGE_REJECTED: The message was rejected
     * because it contained a virus.</p> </li> <li> <p>MAIL_FROM_DOMAIN_NOT_VERIFIED:
     * The sender's email address or domain was not verified.</p> </li> <li>
     * <p>CONFIGURATION_SET_DOES_NOT_EXIST: The configuration set you specified does
     * not exist.</p> </li> <li> <p>TEMPLATE_DOES_NOT_EXIST: The template you specified
     * does not exist.</p> </li> <li> <p>ACCOUNT_SUSPENDED: Your account has been shut
     * down because of issues related to your email sending practices.</p> </li> <li>
     * <p>ACCOUNT_THROTTLED: The number of emails you can send has been reduced because
     * your account has exceeded its allocated sending limit.</p> </li> <li>
     * <p>ACCOUNT_DAILY_QUOTA_EXCEEDED: You have reached or exceeded the maximum number
     * of emails you can send from your account in a 24-hour period.</p> </li> <li>
     * <p>INVALID_SENDING_POOL_NAME: The configuration set you specified refers to an
     * IP pool that does not exist.</p> </li> <li> <p>ACCOUNT_SENDING_PAUSED: Email
     * sending for the Amazon SES account was disabled using the <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_UpdateAccountSendingEnabled.html">UpdateAccountSendingEnabled</a>
     * operation.</p> </li> <li> <p>CONFIGURATION_SET_SENDING_PAUSED: Email sending for
     * this configuration set was disabled using the <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_UpdateConfigurationSetSendingEnabled.html">UpdateConfigurationSetSendingEnabled</a>
     * operation.</p> </li> <li> <p>INVALID_PARAMETER_VALUE: One or more of the
     * parameters you specified when calling this operation was invalid. See the error
     * message for additional information.</p> </li> <li> <p>TRANSIENT_FAILURE: Amazon
     * SES was unable to process your request because of a temporary issue.</p> </li>
     * <li> <p>FAILED: Amazon SES was unable to process your request. See the error
     * message for additional information.</p> </li> </ul>
     */
    inline BulkEmailEntryResult& WithStatus(BulkEmailStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A description of an error that prevented a message being sent using the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }

    /**
     * <p>A description of an error that prevented a message being sent using the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>A description of an error that prevented a message being sent using the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>A description of an error that prevented a message being sent using the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>A description of an error that prevented a message being sent using the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }

    /**
     * <p>A description of an error that prevented a message being sent using the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline BulkEmailEntryResult& WithError(const Aws::String& value) { SetError(value); return *this;}

    /**
     * <p>A description of an error that prevented a message being sent using the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline BulkEmailEntryResult& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}

    /**
     * <p>A description of an error that prevented a message being sent using the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline BulkEmailEntryResult& WithError(const char* value) { SetError(value); return *this;}


    /**
     * <p>The unique message identifier returned from the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>The unique message identifier returned from the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * <p>The unique message identifier returned from the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>The unique message identifier returned from the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    /**
     * <p>The unique message identifier returned from the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p>The unique message identifier returned from the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline BulkEmailEntryResult& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>The unique message identifier returned from the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline BulkEmailEntryResult& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>The unique message identifier returned from the
     * <code>SendBulkTemplatedEmail</code> operation.</p>
     */
    inline BulkEmailEntryResult& WithMessageId(const char* value) { SetMessageId(value); return *this;}

  private:

    BulkEmailStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
