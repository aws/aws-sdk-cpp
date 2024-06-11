/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/Destination.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-email/model/EmailContent.h>
#include <aws/pinpoint-email/model/MessageTag.h>
#include <utility>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to send an email message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/SendEmailRequest">AWS
   * API Reference</a></p>
   */
  class SendEmailRequest : public PinpointEmailRequest
  {
  public:
    AWS_PINPOINTEMAIL_API SendEmailRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendEmail"; }

    AWS_PINPOINTEMAIL_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The email address that you want to use as the "From" address for the email.
     * The address that you specify has to be verified. </p>
     */
    inline const Aws::String& GetFromEmailAddress() const{ return m_fromEmailAddress; }
    inline bool FromEmailAddressHasBeenSet() const { return m_fromEmailAddressHasBeenSet; }
    inline void SetFromEmailAddress(const Aws::String& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = value; }
    inline void SetFromEmailAddress(Aws::String&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = std::move(value); }
    inline void SetFromEmailAddress(const char* value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress.assign(value); }
    inline SendEmailRequest& WithFromEmailAddress(const Aws::String& value) { SetFromEmailAddress(value); return *this;}
    inline SendEmailRequest& WithFromEmailAddress(Aws::String&& value) { SetFromEmailAddress(std::move(value)); return *this;}
    inline SendEmailRequest& WithFromEmailAddress(const char* value) { SetFromEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the recipients of the email message.</p>
     */
    inline const Destination& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const Destination& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(Destination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline SendEmailRequest& WithDestination(const Destination& value) { SetDestination(value); return *this;}
    inline SendEmailRequest& WithDestination(Destination&& value) { SetDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The "Reply-to" email addresses for the message. When the recipient replies to
     * the message, each Reply-to address receives the reply.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplyToAddresses() const{ return m_replyToAddresses; }
    inline bool ReplyToAddressesHasBeenSet() const { return m_replyToAddressesHasBeenSet; }
    inline void SetReplyToAddresses(const Aws::Vector<Aws::String>& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses = value; }
    inline void SetReplyToAddresses(Aws::Vector<Aws::String>&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses = std::move(value); }
    inline SendEmailRequest& WithReplyToAddresses(const Aws::Vector<Aws::String>& value) { SetReplyToAddresses(value); return *this;}
    inline SendEmailRequest& WithReplyToAddresses(Aws::Vector<Aws::String>&& value) { SetReplyToAddresses(std::move(value)); return *this;}
    inline SendEmailRequest& AddReplyToAddresses(const Aws::String& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(value); return *this; }
    inline SendEmailRequest& AddReplyToAddresses(Aws::String&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(std::move(value)); return *this; }
    inline SendEmailRequest& AddReplyToAddresses(const char* value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The address that Amazon Pinpoint should send bounce and complaint
     * notifications to.</p>
     */
    inline const Aws::String& GetFeedbackForwardingEmailAddress() const{ return m_feedbackForwardingEmailAddress; }
    inline bool FeedbackForwardingEmailAddressHasBeenSet() const { return m_feedbackForwardingEmailAddressHasBeenSet; }
    inline void SetFeedbackForwardingEmailAddress(const Aws::String& value) { m_feedbackForwardingEmailAddressHasBeenSet = true; m_feedbackForwardingEmailAddress = value; }
    inline void SetFeedbackForwardingEmailAddress(Aws::String&& value) { m_feedbackForwardingEmailAddressHasBeenSet = true; m_feedbackForwardingEmailAddress = std::move(value); }
    inline void SetFeedbackForwardingEmailAddress(const char* value) { m_feedbackForwardingEmailAddressHasBeenSet = true; m_feedbackForwardingEmailAddress.assign(value); }
    inline SendEmailRequest& WithFeedbackForwardingEmailAddress(const Aws::String& value) { SetFeedbackForwardingEmailAddress(value); return *this;}
    inline SendEmailRequest& WithFeedbackForwardingEmailAddress(Aws::String&& value) { SetFeedbackForwardingEmailAddress(std::move(value)); return *this;}
    inline SendEmailRequest& WithFeedbackForwardingEmailAddress(const char* value) { SetFeedbackForwardingEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the body of the message. You can send either a Simple
     * message or a Raw message.</p>
     */
    inline const EmailContent& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const EmailContent& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(EmailContent&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline SendEmailRequest& WithContent(const EmailContent& value) { SetContent(value); return *this;}
    inline SendEmailRequest& WithContent(EmailContent&& value) { SetContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendEmail</code> operation. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events. </p>
     */
    inline const Aws::Vector<MessageTag>& GetEmailTags() const{ return m_emailTags; }
    inline bool EmailTagsHasBeenSet() const { return m_emailTagsHasBeenSet; }
    inline void SetEmailTags(const Aws::Vector<MessageTag>& value) { m_emailTagsHasBeenSet = true; m_emailTags = value; }
    inline void SetEmailTags(Aws::Vector<MessageTag>&& value) { m_emailTagsHasBeenSet = true; m_emailTags = std::move(value); }
    inline SendEmailRequest& WithEmailTags(const Aws::Vector<MessageTag>& value) { SetEmailTags(value); return *this;}
    inline SendEmailRequest& WithEmailTags(Aws::Vector<MessageTag>&& value) { SetEmailTags(std::move(value)); return *this;}
    inline SendEmailRequest& AddEmailTags(const MessageTag& value) { m_emailTagsHasBeenSet = true; m_emailTags.push_back(value); return *this; }
    inline SendEmailRequest& AddEmailTags(MessageTag&& value) { m_emailTagsHasBeenSet = true; m_emailTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the configuration set that you want to use when sending the
     * email.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }
    inline SendEmailRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}
    inline SendEmailRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}
    inline SendEmailRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}
    ///@}
  private:

    Aws::String m_fromEmailAddress;
    bool m_fromEmailAddressHasBeenSet = false;

    Destination m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::Vector<Aws::String> m_replyToAddresses;
    bool m_replyToAddressesHasBeenSet = false;

    Aws::String m_feedbackForwardingEmailAddress;
    bool m_feedbackForwardingEmailAddressHasBeenSet = false;

    EmailContent m_content;
    bool m_contentHasBeenSet = false;

    Aws::Vector<MessageTag> m_emailTags;
    bool m_emailTagsHasBeenSet = false;

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
