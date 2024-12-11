/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/BulkEmailContent.h>
#include <aws/sesv2/model/MessageTag.h>
#include <aws/sesv2/model/BulkEmailEntry.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>Represents a request to send email messages to multiple destinations using
   * Amazon SES. For more information, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-personalized-email-api.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SendBulkEmailRequest">AWS
   * API Reference</a></p>
   */
  class SendBulkEmailRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API SendBulkEmailRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendBulkEmail"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_SESV2_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The email address to use as the "From" address for the email. The address
     * that you specify has to be verified.</p>
     */
    inline const Aws::String& GetFromEmailAddress() const{ return m_fromEmailAddress; }
    inline bool FromEmailAddressHasBeenSet() const { return m_fromEmailAddressHasBeenSet; }
    inline void SetFromEmailAddress(const Aws::String& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = value; }
    inline void SetFromEmailAddress(Aws::String&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = std::move(value); }
    inline void SetFromEmailAddress(const char* value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress.assign(value); }
    inline SendBulkEmailRequest& WithFromEmailAddress(const Aws::String& value) { SetFromEmailAddress(value); return *this;}
    inline SendBulkEmailRequest& WithFromEmailAddress(Aws::String&& value) { SetFromEmailAddress(std::move(value)); return *this;}
    inline SendBulkEmailRequest& WithFromEmailAddress(const char* value) { SetFromEmailAddress(value); return *this;}
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
     * SES Developer Guide</a>.</p>
     */
    inline const Aws::String& GetFromEmailAddressIdentityArn() const{ return m_fromEmailAddressIdentityArn; }
    inline bool FromEmailAddressIdentityArnHasBeenSet() const { return m_fromEmailAddressIdentityArnHasBeenSet; }
    inline void SetFromEmailAddressIdentityArn(const Aws::String& value) { m_fromEmailAddressIdentityArnHasBeenSet = true; m_fromEmailAddressIdentityArn = value; }
    inline void SetFromEmailAddressIdentityArn(Aws::String&& value) { m_fromEmailAddressIdentityArnHasBeenSet = true; m_fromEmailAddressIdentityArn = std::move(value); }
    inline void SetFromEmailAddressIdentityArn(const char* value) { m_fromEmailAddressIdentityArnHasBeenSet = true; m_fromEmailAddressIdentityArn.assign(value); }
    inline SendBulkEmailRequest& WithFromEmailAddressIdentityArn(const Aws::String& value) { SetFromEmailAddressIdentityArn(value); return *this;}
    inline SendBulkEmailRequest& WithFromEmailAddressIdentityArn(Aws::String&& value) { SetFromEmailAddressIdentityArn(std::move(value)); return *this;}
    inline SendBulkEmailRequest& WithFromEmailAddressIdentityArn(const char* value) { SetFromEmailAddressIdentityArn(value); return *this;}
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
    inline SendBulkEmailRequest& WithReplyToAddresses(const Aws::Vector<Aws::String>& value) { SetReplyToAddresses(value); return *this;}
    inline SendBulkEmailRequest& WithReplyToAddresses(Aws::Vector<Aws::String>&& value) { SetReplyToAddresses(std::move(value)); return *this;}
    inline SendBulkEmailRequest& AddReplyToAddresses(const Aws::String& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(value); return *this; }
    inline SendBulkEmailRequest& AddReplyToAddresses(Aws::String&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(std::move(value)); return *this; }
    inline SendBulkEmailRequest& AddReplyToAddresses(const char* value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(value); return *this; }
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
    inline SendBulkEmailRequest& WithFeedbackForwardingEmailAddress(const Aws::String& value) { SetFeedbackForwardingEmailAddress(value); return *this;}
    inline SendBulkEmailRequest& WithFeedbackForwardingEmailAddress(Aws::String&& value) { SetFeedbackForwardingEmailAddress(std::move(value)); return *this;}
    inline SendBulkEmailRequest& WithFeedbackForwardingEmailAddress(const char* value) { SetFeedbackForwardingEmailAddress(value); return *this;}
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
    inline SendBulkEmailRequest& WithFeedbackForwardingEmailAddressIdentityArn(const Aws::String& value) { SetFeedbackForwardingEmailAddressIdentityArn(value); return *this;}
    inline SendBulkEmailRequest& WithFeedbackForwardingEmailAddressIdentityArn(Aws::String&& value) { SetFeedbackForwardingEmailAddressIdentityArn(std::move(value)); return *this;}
    inline SendBulkEmailRequest& WithFeedbackForwardingEmailAddressIdentityArn(const char* value) { SetFeedbackForwardingEmailAddressIdentityArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendEmail</code> operation. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events.</p>
     */
    inline const Aws::Vector<MessageTag>& GetDefaultEmailTags() const{ return m_defaultEmailTags; }
    inline bool DefaultEmailTagsHasBeenSet() const { return m_defaultEmailTagsHasBeenSet; }
    inline void SetDefaultEmailTags(const Aws::Vector<MessageTag>& value) { m_defaultEmailTagsHasBeenSet = true; m_defaultEmailTags = value; }
    inline void SetDefaultEmailTags(Aws::Vector<MessageTag>&& value) { m_defaultEmailTagsHasBeenSet = true; m_defaultEmailTags = std::move(value); }
    inline SendBulkEmailRequest& WithDefaultEmailTags(const Aws::Vector<MessageTag>& value) { SetDefaultEmailTags(value); return *this;}
    inline SendBulkEmailRequest& WithDefaultEmailTags(Aws::Vector<MessageTag>&& value) { SetDefaultEmailTags(std::move(value)); return *this;}
    inline SendBulkEmailRequest& AddDefaultEmailTags(const MessageTag& value) { m_defaultEmailTagsHasBeenSet = true; m_defaultEmailTags.push_back(value); return *this; }
    inline SendBulkEmailRequest& AddDefaultEmailTags(MessageTag&& value) { m_defaultEmailTagsHasBeenSet = true; m_defaultEmailTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that contains the body of the message. You can specify a template
     * message.</p>
     */
    inline const BulkEmailContent& GetDefaultContent() const{ return m_defaultContent; }
    inline bool DefaultContentHasBeenSet() const { return m_defaultContentHasBeenSet; }
    inline void SetDefaultContent(const BulkEmailContent& value) { m_defaultContentHasBeenSet = true; m_defaultContent = value; }
    inline void SetDefaultContent(BulkEmailContent&& value) { m_defaultContentHasBeenSet = true; m_defaultContent = std::move(value); }
    inline SendBulkEmailRequest& WithDefaultContent(const BulkEmailContent& value) { SetDefaultContent(value); return *this;}
    inline SendBulkEmailRequest& WithDefaultContent(BulkEmailContent&& value) { SetDefaultContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of bulk email entry objects.</p>
     */
    inline const Aws::Vector<BulkEmailEntry>& GetBulkEmailEntries() const{ return m_bulkEmailEntries; }
    inline bool BulkEmailEntriesHasBeenSet() const { return m_bulkEmailEntriesHasBeenSet; }
    inline void SetBulkEmailEntries(const Aws::Vector<BulkEmailEntry>& value) { m_bulkEmailEntriesHasBeenSet = true; m_bulkEmailEntries = value; }
    inline void SetBulkEmailEntries(Aws::Vector<BulkEmailEntry>&& value) { m_bulkEmailEntriesHasBeenSet = true; m_bulkEmailEntries = std::move(value); }
    inline SendBulkEmailRequest& WithBulkEmailEntries(const Aws::Vector<BulkEmailEntry>& value) { SetBulkEmailEntries(value); return *this;}
    inline SendBulkEmailRequest& WithBulkEmailEntries(Aws::Vector<BulkEmailEntry>&& value) { SetBulkEmailEntries(std::move(value)); return *this;}
    inline SendBulkEmailRequest& AddBulkEmailEntries(const BulkEmailEntry& value) { m_bulkEmailEntriesHasBeenSet = true; m_bulkEmailEntries.push_back(value); return *this; }
    inline SendBulkEmailRequest& AddBulkEmailEntries(BulkEmailEntry&& value) { m_bulkEmailEntriesHasBeenSet = true; m_bulkEmailEntries.push_back(std::move(value)); return *this; }
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
    inline SendBulkEmailRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}
    inline SendBulkEmailRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}
    inline SendBulkEmailRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}
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
    inline SendBulkEmailRequest& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}
    inline SendBulkEmailRequest& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}
    inline SendBulkEmailRequest& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}
    ///@}
  private:

    Aws::String m_fromEmailAddress;
    bool m_fromEmailAddressHasBeenSet = false;

    Aws::String m_fromEmailAddressIdentityArn;
    bool m_fromEmailAddressIdentityArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_replyToAddresses;
    bool m_replyToAddressesHasBeenSet = false;

    Aws::String m_feedbackForwardingEmailAddress;
    bool m_feedbackForwardingEmailAddressHasBeenSet = false;

    Aws::String m_feedbackForwardingEmailAddressIdentityArn;
    bool m_feedbackForwardingEmailAddressIdentityArnHasBeenSet = false;

    Aws::Vector<MessageTag> m_defaultEmailTags;
    bool m_defaultEmailTagsHasBeenSet = false;

    BulkEmailContent m_defaultContent;
    bool m_defaultContentHasBeenSet = false;

    Aws::Vector<BulkEmailEntry> m_bulkEmailEntries;
    bool m_bulkEmailEntriesHasBeenSet = false;

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
