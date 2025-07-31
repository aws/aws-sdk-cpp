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
    AWS_SESV2_API SendBulkEmailRequest() = default;

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
    inline const Aws::String& GetFromEmailAddress() const { return m_fromEmailAddress; }
    inline bool FromEmailAddressHasBeenSet() const { return m_fromEmailAddressHasBeenSet; }
    template<typename FromEmailAddressT = Aws::String>
    void SetFromEmailAddress(FromEmailAddressT&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = std::forward<FromEmailAddressT>(value); }
    template<typename FromEmailAddressT = Aws::String>
    SendBulkEmailRequest& WithFromEmailAddress(FromEmailAddressT&& value) { SetFromEmailAddress(std::forward<FromEmailAddressT>(value)); return *this;}
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
    inline const Aws::String& GetFromEmailAddressIdentityArn() const { return m_fromEmailAddressIdentityArn; }
    inline bool FromEmailAddressIdentityArnHasBeenSet() const { return m_fromEmailAddressIdentityArnHasBeenSet; }
    template<typename FromEmailAddressIdentityArnT = Aws::String>
    void SetFromEmailAddressIdentityArn(FromEmailAddressIdentityArnT&& value) { m_fromEmailAddressIdentityArnHasBeenSet = true; m_fromEmailAddressIdentityArn = std::forward<FromEmailAddressIdentityArnT>(value); }
    template<typename FromEmailAddressIdentityArnT = Aws::String>
    SendBulkEmailRequest& WithFromEmailAddressIdentityArn(FromEmailAddressIdentityArnT&& value) { SetFromEmailAddressIdentityArn(std::forward<FromEmailAddressIdentityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The "Reply-to" email addresses for the message. When the recipient replies to
     * the message, each Reply-to address receives the reply.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplyToAddresses() const { return m_replyToAddresses; }
    inline bool ReplyToAddressesHasBeenSet() const { return m_replyToAddressesHasBeenSet; }
    template<typename ReplyToAddressesT = Aws::Vector<Aws::String>>
    void SetReplyToAddresses(ReplyToAddressesT&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses = std::forward<ReplyToAddressesT>(value); }
    template<typename ReplyToAddressesT = Aws::Vector<Aws::String>>
    SendBulkEmailRequest& WithReplyToAddresses(ReplyToAddressesT&& value) { SetReplyToAddresses(std::forward<ReplyToAddressesT>(value)); return *this;}
    template<typename ReplyToAddressesT = Aws::String>
    SendBulkEmailRequest& AddReplyToAddresses(ReplyToAddressesT&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.emplace_back(std::forward<ReplyToAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The address that you want bounce and complaint notifications to be sent
     * to.</p>
     */
    inline const Aws::String& GetFeedbackForwardingEmailAddress() const { return m_feedbackForwardingEmailAddress; }
    inline bool FeedbackForwardingEmailAddressHasBeenSet() const { return m_feedbackForwardingEmailAddressHasBeenSet; }
    template<typename FeedbackForwardingEmailAddressT = Aws::String>
    void SetFeedbackForwardingEmailAddress(FeedbackForwardingEmailAddressT&& value) { m_feedbackForwardingEmailAddressHasBeenSet = true; m_feedbackForwardingEmailAddress = std::forward<FeedbackForwardingEmailAddressT>(value); }
    template<typename FeedbackForwardingEmailAddressT = Aws::String>
    SendBulkEmailRequest& WithFeedbackForwardingEmailAddress(FeedbackForwardingEmailAddressT&& value) { SetFeedbackForwardingEmailAddress(std::forward<FeedbackForwardingEmailAddressT>(value)); return *this;}
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
    inline const Aws::String& GetFeedbackForwardingEmailAddressIdentityArn() const { return m_feedbackForwardingEmailAddressIdentityArn; }
    inline bool FeedbackForwardingEmailAddressIdentityArnHasBeenSet() const { return m_feedbackForwardingEmailAddressIdentityArnHasBeenSet; }
    template<typename FeedbackForwardingEmailAddressIdentityArnT = Aws::String>
    void SetFeedbackForwardingEmailAddressIdentityArn(FeedbackForwardingEmailAddressIdentityArnT&& value) { m_feedbackForwardingEmailAddressIdentityArnHasBeenSet = true; m_feedbackForwardingEmailAddressIdentityArn = std::forward<FeedbackForwardingEmailAddressIdentityArnT>(value); }
    template<typename FeedbackForwardingEmailAddressIdentityArnT = Aws::String>
    SendBulkEmailRequest& WithFeedbackForwardingEmailAddressIdentityArn(FeedbackForwardingEmailAddressIdentityArnT&& value) { SetFeedbackForwardingEmailAddressIdentityArn(std::forward<FeedbackForwardingEmailAddressIdentityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendEmail</code> operation. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events.</p>
     */
    inline const Aws::Vector<MessageTag>& GetDefaultEmailTags() const { return m_defaultEmailTags; }
    inline bool DefaultEmailTagsHasBeenSet() const { return m_defaultEmailTagsHasBeenSet; }
    template<typename DefaultEmailTagsT = Aws::Vector<MessageTag>>
    void SetDefaultEmailTags(DefaultEmailTagsT&& value) { m_defaultEmailTagsHasBeenSet = true; m_defaultEmailTags = std::forward<DefaultEmailTagsT>(value); }
    template<typename DefaultEmailTagsT = Aws::Vector<MessageTag>>
    SendBulkEmailRequest& WithDefaultEmailTags(DefaultEmailTagsT&& value) { SetDefaultEmailTags(std::forward<DefaultEmailTagsT>(value)); return *this;}
    template<typename DefaultEmailTagsT = MessageTag>
    SendBulkEmailRequest& AddDefaultEmailTags(DefaultEmailTagsT&& value) { m_defaultEmailTagsHasBeenSet = true; m_defaultEmailTags.emplace_back(std::forward<DefaultEmailTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that contains the body of the message. You can specify a template
     * message.</p>
     */
    inline const BulkEmailContent& GetDefaultContent() const { return m_defaultContent; }
    inline bool DefaultContentHasBeenSet() const { return m_defaultContentHasBeenSet; }
    template<typename DefaultContentT = BulkEmailContent>
    void SetDefaultContent(DefaultContentT&& value) { m_defaultContentHasBeenSet = true; m_defaultContent = std::forward<DefaultContentT>(value); }
    template<typename DefaultContentT = BulkEmailContent>
    SendBulkEmailRequest& WithDefaultContent(DefaultContentT&& value) { SetDefaultContent(std::forward<DefaultContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of bulk email entry objects.</p>
     */
    inline const Aws::Vector<BulkEmailEntry>& GetBulkEmailEntries() const { return m_bulkEmailEntries; }
    inline bool BulkEmailEntriesHasBeenSet() const { return m_bulkEmailEntriesHasBeenSet; }
    template<typename BulkEmailEntriesT = Aws::Vector<BulkEmailEntry>>
    void SetBulkEmailEntries(BulkEmailEntriesT&& value) { m_bulkEmailEntriesHasBeenSet = true; m_bulkEmailEntries = std::forward<BulkEmailEntriesT>(value); }
    template<typename BulkEmailEntriesT = Aws::Vector<BulkEmailEntry>>
    SendBulkEmailRequest& WithBulkEmailEntries(BulkEmailEntriesT&& value) { SetBulkEmailEntries(std::forward<BulkEmailEntriesT>(value)); return *this;}
    template<typename BulkEmailEntriesT = BulkEmailEntry>
    SendBulkEmailRequest& AddBulkEmailEntries(BulkEmailEntriesT&& value) { m_bulkEmailEntriesHasBeenSet = true; m_bulkEmailEntries.emplace_back(std::forward<BulkEmailEntriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the configuration set to use when sending the email.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    template<typename ConfigurationSetNameT = Aws::String>
    void SetConfigurationSetName(ConfigurationSetNameT&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::forward<ConfigurationSetNameT>(value); }
    template<typename ConfigurationSetNameT = Aws::String>
    SendBulkEmailRequest& WithConfigurationSetName(ConfigurationSetNameT&& value) { SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the multi-region endpoint (global-endpoint).</p>
     */
    inline const Aws::String& GetEndpointId() const { return m_endpointId; }
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }
    template<typename EndpointIdT = Aws::String>
    void SetEndpointId(EndpointIdT&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::forward<EndpointIdT>(value); }
    template<typename EndpointIdT = Aws::String>
    SendBulkEmailRequest& WithEndpointId(EndpointIdT&& value) { SetEndpointId(std::forward<EndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the tenant through which this bulk email will be sent.</p> 
     * <p> The email sending operation will only succeed if all referenced resources
     * (identities, configuration sets, and templates) are associated with this tenant.
     * </p> 
     */
    inline const Aws::String& GetTenantName() const { return m_tenantName; }
    inline bool TenantNameHasBeenSet() const { return m_tenantNameHasBeenSet; }
    template<typename TenantNameT = Aws::String>
    void SetTenantName(TenantNameT&& value) { m_tenantNameHasBeenSet = true; m_tenantName = std::forward<TenantNameT>(value); }
    template<typename TenantNameT = Aws::String>
    SendBulkEmailRequest& WithTenantName(TenantNameT&& value) { SetTenantName(std::forward<TenantNameT>(value)); return *this;}
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

    Aws::String m_tenantName;
    bool m_tenantNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
