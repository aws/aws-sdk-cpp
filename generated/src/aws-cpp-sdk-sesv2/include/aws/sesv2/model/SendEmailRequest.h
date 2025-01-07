/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/Destination.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/EmailContent.h>
#include <aws/sesv2/model/ListManagementOptions.h>
#include <aws/sesv2/model/MessageTag.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>Represents a request to send a single formatted email using Amazon SES. For
   * more information, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-formatted.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SendEmailRequest">AWS
   * API Reference</a></p>
   */
  class SendEmailRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API SendEmailRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendEmail"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_SESV2_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The email address to use as the "From" address for the email. The address
     * that you specify has to be verified. </p>
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
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the email address specified in the <code>FromEmailAddress</code>
     * parameter.</p> <p>For example, if the owner of example.com (which has ARN
     * arn:aws:ses:us-east-1:123456789012:identity/example.com) attaches a policy to it
     * that authorizes you to use sender@example.com, then you would specify the
     * <code>FromEmailAddressIdentityArn</code> to be
     * arn:aws:ses:us-east-1:123456789012:identity/example.com, and the
     * <code>FromEmailAddress</code> to be sender@example.com.</p> <p>For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p> <p>For Raw emails, the
     * <code>FromEmailAddressIdentityArn</code> value overrides the X-SES-SOURCE-ARN
     * and X-SES-FROM-ARN headers specified in raw email message content.</p>
     */
    inline const Aws::String& GetFromEmailAddressIdentityArn() const{ return m_fromEmailAddressIdentityArn; }
    inline bool FromEmailAddressIdentityArnHasBeenSet() const { return m_fromEmailAddressIdentityArnHasBeenSet; }
    inline void SetFromEmailAddressIdentityArn(const Aws::String& value) { m_fromEmailAddressIdentityArnHasBeenSet = true; m_fromEmailAddressIdentityArn = value; }
    inline void SetFromEmailAddressIdentityArn(Aws::String&& value) { m_fromEmailAddressIdentityArnHasBeenSet = true; m_fromEmailAddressIdentityArn = std::move(value); }
    inline void SetFromEmailAddressIdentityArn(const char* value) { m_fromEmailAddressIdentityArnHasBeenSet = true; m_fromEmailAddressIdentityArn.assign(value); }
    inline SendEmailRequest& WithFromEmailAddressIdentityArn(const Aws::String& value) { SetFromEmailAddressIdentityArn(value); return *this;}
    inline SendEmailRequest& WithFromEmailAddressIdentityArn(Aws::String&& value) { SetFromEmailAddressIdentityArn(std::move(value)); return *this;}
    inline SendEmailRequest& WithFromEmailAddressIdentityArn(const char* value) { SetFromEmailAddressIdentityArn(value); return *this;}
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
     * <p>The address that you want bounce and complaint notifications to be sent
     * to.</p>
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
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the email address specified in the
     * <code>FeedbackForwardingEmailAddress</code> parameter.</p> <p>For example, if
     * the owner of example.com (which has ARN
     * arn:aws:ses:us-east-1:123456789012:identity/example.com) attaches a policy to it
     * that authorizes you to use feedback@example.com, then you would specify the
     * <code>FeedbackForwardingEmailAddressIdentityArn</code> to be
     * arn:aws:ses:us-east-1:123456789012:identity/example.com, and the
     * <code>FeedbackForwardingEmailAddress</code> to be feedback@example.com.</p>
     * <p>For more information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline const Aws::String& GetFeedbackForwardingEmailAddressIdentityArn() const{ return m_feedbackForwardingEmailAddressIdentityArn; }
    inline bool FeedbackForwardingEmailAddressIdentityArnHasBeenSet() const { return m_feedbackForwardingEmailAddressIdentityArnHasBeenSet; }
    inline void SetFeedbackForwardingEmailAddressIdentityArn(const Aws::String& value) { m_feedbackForwardingEmailAddressIdentityArnHasBeenSet = true; m_feedbackForwardingEmailAddressIdentityArn = value; }
    inline void SetFeedbackForwardingEmailAddressIdentityArn(Aws::String&& value) { m_feedbackForwardingEmailAddressIdentityArnHasBeenSet = true; m_feedbackForwardingEmailAddressIdentityArn = std::move(value); }
    inline void SetFeedbackForwardingEmailAddressIdentityArn(const char* value) { m_feedbackForwardingEmailAddressIdentityArnHasBeenSet = true; m_feedbackForwardingEmailAddressIdentityArn.assign(value); }
    inline SendEmailRequest& WithFeedbackForwardingEmailAddressIdentityArn(const Aws::String& value) { SetFeedbackForwardingEmailAddressIdentityArn(value); return *this;}
    inline SendEmailRequest& WithFeedbackForwardingEmailAddressIdentityArn(Aws::String&& value) { SetFeedbackForwardingEmailAddressIdentityArn(std::move(value)); return *this;}
    inline SendEmailRequest& WithFeedbackForwardingEmailAddressIdentityArn(const char* value) { SetFeedbackForwardingEmailAddressIdentityArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the body of the message. You can send either a Simple
     * message, Raw message, or a Templated message.</p>
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
     * <p>The name of the configuration set to use when sending the email.</p>
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

    ///@{
    /**
     * <p>The ID of the multi-region endpoint (global-endpoint).</p>
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }
    inline void SetEndpointId(const Aws::String& value) { m_endpointIdHasBeenSet = true; m_endpointId = value; }
    inline void SetEndpointId(Aws::String&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::move(value); }
    inline void SetEndpointId(const char* value) { m_endpointIdHasBeenSet = true; m_endpointId.assign(value); }
    inline SendEmailRequest& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}
    inline SendEmailRequest& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}
    inline SendEmailRequest& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object used to specify a list or topic to which an email belongs, which
     * will be used when a contact chooses to unsubscribe.</p>
     */
    inline const ListManagementOptions& GetListManagementOptions() const{ return m_listManagementOptions; }
    inline bool ListManagementOptionsHasBeenSet() const { return m_listManagementOptionsHasBeenSet; }
    inline void SetListManagementOptions(const ListManagementOptions& value) { m_listManagementOptionsHasBeenSet = true; m_listManagementOptions = value; }
    inline void SetListManagementOptions(ListManagementOptions&& value) { m_listManagementOptionsHasBeenSet = true; m_listManagementOptions = std::move(value); }
    inline SendEmailRequest& WithListManagementOptions(const ListManagementOptions& value) { SetListManagementOptions(value); return *this;}
    inline SendEmailRequest& WithListManagementOptions(ListManagementOptions&& value) { SetListManagementOptions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_fromEmailAddress;
    bool m_fromEmailAddressHasBeenSet = false;

    Aws::String m_fromEmailAddressIdentityArn;
    bool m_fromEmailAddressIdentityArnHasBeenSet = false;

    Destination m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::Vector<Aws::String> m_replyToAddresses;
    bool m_replyToAddressesHasBeenSet = false;

    Aws::String m_feedbackForwardingEmailAddress;
    bool m_feedbackForwardingEmailAddressHasBeenSet = false;

    Aws::String m_feedbackForwardingEmailAddressIdentityArn;
    bool m_feedbackForwardingEmailAddressIdentityArnHasBeenSet = false;

    EmailContent m_content;
    bool m_contentHasBeenSet = false;

    Aws::Vector<MessageTag> m_emailTags;
    bool m_emailTagsHasBeenSet = false;

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    ListManagementOptions m_listManagementOptions;
    bool m_listManagementOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
