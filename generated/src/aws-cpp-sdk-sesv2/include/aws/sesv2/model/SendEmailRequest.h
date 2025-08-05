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
    AWS_SESV2_API SendEmailRequest() = default;

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
    inline const Aws::String& GetFromEmailAddress() const { return m_fromEmailAddress; }
    inline bool FromEmailAddressHasBeenSet() const { return m_fromEmailAddressHasBeenSet; }
    template<typename FromEmailAddressT = Aws::String>
    void SetFromEmailAddress(FromEmailAddressT&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = std::forward<FromEmailAddressT>(value); }
    template<typename FromEmailAddressT = Aws::String>
    SendEmailRequest& WithFromEmailAddress(FromEmailAddressT&& value) { SetFromEmailAddress(std::forward<FromEmailAddressT>(value)); return *this;}
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
    inline const Aws::String& GetFromEmailAddressIdentityArn() const { return m_fromEmailAddressIdentityArn; }
    inline bool FromEmailAddressIdentityArnHasBeenSet() const { return m_fromEmailAddressIdentityArnHasBeenSet; }
    template<typename FromEmailAddressIdentityArnT = Aws::String>
    void SetFromEmailAddressIdentityArn(FromEmailAddressIdentityArnT&& value) { m_fromEmailAddressIdentityArnHasBeenSet = true; m_fromEmailAddressIdentityArn = std::forward<FromEmailAddressIdentityArnT>(value); }
    template<typename FromEmailAddressIdentityArnT = Aws::String>
    SendEmailRequest& WithFromEmailAddressIdentityArn(FromEmailAddressIdentityArnT&& value) { SetFromEmailAddressIdentityArn(std::forward<FromEmailAddressIdentityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the recipients of the email message.</p>
     */
    inline const Destination& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Destination>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Destination>
    SendEmailRequest& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
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
    SendEmailRequest& WithReplyToAddresses(ReplyToAddressesT&& value) { SetReplyToAddresses(std::forward<ReplyToAddressesT>(value)); return *this;}
    template<typename ReplyToAddressesT = Aws::String>
    SendEmailRequest& AddReplyToAddresses(ReplyToAddressesT&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.emplace_back(std::forward<ReplyToAddressesT>(value)); return *this; }
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
    SendEmailRequest& WithFeedbackForwardingEmailAddress(FeedbackForwardingEmailAddressT&& value) { SetFeedbackForwardingEmailAddress(std::forward<FeedbackForwardingEmailAddressT>(value)); return *this;}
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
    SendEmailRequest& WithFeedbackForwardingEmailAddressIdentityArn(FeedbackForwardingEmailAddressIdentityArnT&& value) { SetFeedbackForwardingEmailAddressIdentityArn(std::forward<FeedbackForwardingEmailAddressIdentityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the body of the message. You can send either a Simple
     * message, Raw message, or a Templated message.</p>
     */
    inline const EmailContent& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = EmailContent>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = EmailContent>
    SendEmailRequest& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendEmail</code> operation. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events. </p>
     */
    inline const Aws::Vector<MessageTag>& GetEmailTags() const { return m_emailTags; }
    inline bool EmailTagsHasBeenSet() const { return m_emailTagsHasBeenSet; }
    template<typename EmailTagsT = Aws::Vector<MessageTag>>
    void SetEmailTags(EmailTagsT&& value) { m_emailTagsHasBeenSet = true; m_emailTags = std::forward<EmailTagsT>(value); }
    template<typename EmailTagsT = Aws::Vector<MessageTag>>
    SendEmailRequest& WithEmailTags(EmailTagsT&& value) { SetEmailTags(std::forward<EmailTagsT>(value)); return *this;}
    template<typename EmailTagsT = MessageTag>
    SendEmailRequest& AddEmailTags(EmailTagsT&& value) { m_emailTagsHasBeenSet = true; m_emailTags.emplace_back(std::forward<EmailTagsT>(value)); return *this; }
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
    SendEmailRequest& WithConfigurationSetName(ConfigurationSetNameT&& value) { SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value)); return *this;}
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
    SendEmailRequest& WithEndpointId(EndpointIdT&& value) { SetEndpointId(std::forward<EndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the tenant through which this email will be sent.</p> 
     * <p>The email sending operation will only succeed if all referenced resources
     * (identities, configuration sets, and templates) are associated with this tenant.
     * </p> 
     */
    inline const Aws::String& GetTenantName() const { return m_tenantName; }
    inline bool TenantNameHasBeenSet() const { return m_tenantNameHasBeenSet; }
    template<typename TenantNameT = Aws::String>
    void SetTenantName(TenantNameT&& value) { m_tenantNameHasBeenSet = true; m_tenantName = std::forward<TenantNameT>(value); }
    template<typename TenantNameT = Aws::String>
    SendEmailRequest& WithTenantName(TenantNameT&& value) { SetTenantName(std::forward<TenantNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object used to specify a list or topic to which an email belongs, which
     * will be used when a contact chooses to unsubscribe.</p>
     */
    inline const ListManagementOptions& GetListManagementOptions() const { return m_listManagementOptions; }
    inline bool ListManagementOptionsHasBeenSet() const { return m_listManagementOptionsHasBeenSet; }
    template<typename ListManagementOptionsT = ListManagementOptions>
    void SetListManagementOptions(ListManagementOptionsT&& value) { m_listManagementOptionsHasBeenSet = true; m_listManagementOptions = std::forward<ListManagementOptionsT>(value); }
    template<typename ListManagementOptionsT = ListManagementOptions>
    SendEmailRequest& WithListManagementOptions(ListManagementOptionsT&& value) { SetListManagementOptions(std::forward<ListManagementOptionsT>(value)); return *this;}
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

    Aws::String m_tenantName;
    bool m_tenantNameHasBeenSet = false;

    ListManagementOptions m_listManagementOptions;
    bool m_listManagementOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
