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
     * <p>The email address to use as the "From" address for the email. The address
     * that you specify has to be verified. </p>
     */
    inline const Aws::String& GetFromEmailAddress() const{ return m_fromEmailAddress; }

    /**
     * <p>The email address to use as the "From" address for the email. The address
     * that you specify has to be verified. </p>
     */
    inline bool FromEmailAddressHasBeenSet() const { return m_fromEmailAddressHasBeenSet; }

    /**
     * <p>The email address to use as the "From" address for the email. The address
     * that you specify has to be verified. </p>
     */
    inline void SetFromEmailAddress(const Aws::String& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = value; }

    /**
     * <p>The email address to use as the "From" address for the email. The address
     * that you specify has to be verified. </p>
     */
    inline void SetFromEmailAddress(Aws::String&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = std::move(value); }

    /**
     * <p>The email address to use as the "From" address for the email. The address
     * that you specify has to be verified. </p>
     */
    inline void SetFromEmailAddress(const char* value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress.assign(value); }

    /**
     * <p>The email address to use as the "From" address for the email. The address
     * that you specify has to be verified. </p>
     */
    inline SendEmailRequest& WithFromEmailAddress(const Aws::String& value) { SetFromEmailAddress(value); return *this;}

    /**
     * <p>The email address to use as the "From" address for the email. The address
     * that you specify has to be verified. </p>
     */
    inline SendEmailRequest& WithFromEmailAddress(Aws::String&& value) { SetFromEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The email address to use as the "From" address for the email. The address
     * that you specify has to be verified. </p>
     */
    inline SendEmailRequest& WithFromEmailAddress(const char* value) { SetFromEmailAddress(value); return *this;}


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
    inline bool FromEmailAddressIdentityArnHasBeenSet() const { return m_fromEmailAddressIdentityArnHasBeenSet; }

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
    inline void SetFromEmailAddressIdentityArn(const Aws::String& value) { m_fromEmailAddressIdentityArnHasBeenSet = true; m_fromEmailAddressIdentityArn = value; }

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
    inline void SetFromEmailAddressIdentityArn(Aws::String&& value) { m_fromEmailAddressIdentityArnHasBeenSet = true; m_fromEmailAddressIdentityArn = std::move(value); }

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
    inline void SetFromEmailAddressIdentityArn(const char* value) { m_fromEmailAddressIdentityArnHasBeenSet = true; m_fromEmailAddressIdentityArn.assign(value); }

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
    inline SendEmailRequest& WithFromEmailAddressIdentityArn(const Aws::String& value) { SetFromEmailAddressIdentityArn(value); return *this;}

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
    inline SendEmailRequest& WithFromEmailAddressIdentityArn(Aws::String&& value) { SetFromEmailAddressIdentityArn(std::move(value)); return *this;}

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
    inline SendEmailRequest& WithFromEmailAddressIdentityArn(const char* value) { SetFromEmailAddressIdentityArn(value); return *this;}


    /**
     * <p>An object that contains the recipients of the email message.</p>
     */
    inline const Destination& GetDestination() const{ return m_destination; }

    /**
     * <p>An object that contains the recipients of the email message.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>An object that contains the recipients of the email message.</p>
     */
    inline void SetDestination(const Destination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>An object that contains the recipients of the email message.</p>
     */
    inline void SetDestination(Destination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>An object that contains the recipients of the email message.</p>
     */
    inline SendEmailRequest& WithDestination(const Destination& value) { SetDestination(value); return *this;}

    /**
     * <p>An object that contains the recipients of the email message.</p>
     */
    inline SendEmailRequest& WithDestination(Destination&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>The "Reply-to" email addresses for the message. When the recipient replies to
     * the message, each Reply-to address receives the reply.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplyToAddresses() const{ return m_replyToAddresses; }

    /**
     * <p>The "Reply-to" email addresses for the message. When the recipient replies to
     * the message, each Reply-to address receives the reply.</p>
     */
    inline bool ReplyToAddressesHasBeenSet() const { return m_replyToAddressesHasBeenSet; }

    /**
     * <p>The "Reply-to" email addresses for the message. When the recipient replies to
     * the message, each Reply-to address receives the reply.</p>
     */
    inline void SetReplyToAddresses(const Aws::Vector<Aws::String>& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses = value; }

    /**
     * <p>The "Reply-to" email addresses for the message. When the recipient replies to
     * the message, each Reply-to address receives the reply.</p>
     */
    inline void SetReplyToAddresses(Aws::Vector<Aws::String>&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses = std::move(value); }

    /**
     * <p>The "Reply-to" email addresses for the message. When the recipient replies to
     * the message, each Reply-to address receives the reply.</p>
     */
    inline SendEmailRequest& WithReplyToAddresses(const Aws::Vector<Aws::String>& value) { SetReplyToAddresses(value); return *this;}

    /**
     * <p>The "Reply-to" email addresses for the message. When the recipient replies to
     * the message, each Reply-to address receives the reply.</p>
     */
    inline SendEmailRequest& WithReplyToAddresses(Aws::Vector<Aws::String>&& value) { SetReplyToAddresses(std::move(value)); return *this;}

    /**
     * <p>The "Reply-to" email addresses for the message. When the recipient replies to
     * the message, each Reply-to address receives the reply.</p>
     */
    inline SendEmailRequest& AddReplyToAddresses(const Aws::String& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(value); return *this; }

    /**
     * <p>The "Reply-to" email addresses for the message. When the recipient replies to
     * the message, each Reply-to address receives the reply.</p>
     */
    inline SendEmailRequest& AddReplyToAddresses(Aws::String&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The "Reply-to" email addresses for the message. When the recipient replies to
     * the message, each Reply-to address receives the reply.</p>
     */
    inline SendEmailRequest& AddReplyToAddresses(const char* value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(value); return *this; }


    /**
     * <p>The address that you want bounce and complaint notifications to be sent
     * to.</p>
     */
    inline const Aws::String& GetFeedbackForwardingEmailAddress() const{ return m_feedbackForwardingEmailAddress; }

    /**
     * <p>The address that you want bounce and complaint notifications to be sent
     * to.</p>
     */
    inline bool FeedbackForwardingEmailAddressHasBeenSet() const { return m_feedbackForwardingEmailAddressHasBeenSet; }

    /**
     * <p>The address that you want bounce and complaint notifications to be sent
     * to.</p>
     */
    inline void SetFeedbackForwardingEmailAddress(const Aws::String& value) { m_feedbackForwardingEmailAddressHasBeenSet = true; m_feedbackForwardingEmailAddress = value; }

    /**
     * <p>The address that you want bounce and complaint notifications to be sent
     * to.</p>
     */
    inline void SetFeedbackForwardingEmailAddress(Aws::String&& value) { m_feedbackForwardingEmailAddressHasBeenSet = true; m_feedbackForwardingEmailAddress = std::move(value); }

    /**
     * <p>The address that you want bounce and complaint notifications to be sent
     * to.</p>
     */
    inline void SetFeedbackForwardingEmailAddress(const char* value) { m_feedbackForwardingEmailAddressHasBeenSet = true; m_feedbackForwardingEmailAddress.assign(value); }

    /**
     * <p>The address that you want bounce and complaint notifications to be sent
     * to.</p>
     */
    inline SendEmailRequest& WithFeedbackForwardingEmailAddress(const Aws::String& value) { SetFeedbackForwardingEmailAddress(value); return *this;}

    /**
     * <p>The address that you want bounce and complaint notifications to be sent
     * to.</p>
     */
    inline SendEmailRequest& WithFeedbackForwardingEmailAddress(Aws::String&& value) { SetFeedbackForwardingEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The address that you want bounce and complaint notifications to be sent
     * to.</p>
     */
    inline SendEmailRequest& WithFeedbackForwardingEmailAddress(const char* value) { SetFeedbackForwardingEmailAddress(value); return *this;}


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
    inline bool FeedbackForwardingEmailAddressIdentityArnHasBeenSet() const { return m_feedbackForwardingEmailAddressIdentityArnHasBeenSet; }

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
    inline void SetFeedbackForwardingEmailAddressIdentityArn(const Aws::String& value) { m_feedbackForwardingEmailAddressIdentityArnHasBeenSet = true; m_feedbackForwardingEmailAddressIdentityArn = value; }

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
    inline void SetFeedbackForwardingEmailAddressIdentityArn(Aws::String&& value) { m_feedbackForwardingEmailAddressIdentityArnHasBeenSet = true; m_feedbackForwardingEmailAddressIdentityArn = std::move(value); }

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
    inline void SetFeedbackForwardingEmailAddressIdentityArn(const char* value) { m_feedbackForwardingEmailAddressIdentityArnHasBeenSet = true; m_feedbackForwardingEmailAddressIdentityArn.assign(value); }

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
    inline SendEmailRequest& WithFeedbackForwardingEmailAddressIdentityArn(const Aws::String& value) { SetFeedbackForwardingEmailAddressIdentityArn(value); return *this;}

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
    inline SendEmailRequest& WithFeedbackForwardingEmailAddressIdentityArn(Aws::String&& value) { SetFeedbackForwardingEmailAddressIdentityArn(std::move(value)); return *this;}

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
    inline SendEmailRequest& WithFeedbackForwardingEmailAddressIdentityArn(const char* value) { SetFeedbackForwardingEmailAddressIdentityArn(value); return *this;}


    /**
     * <p>An object that contains the body of the message. You can send either a Simple
     * message Raw message or a template Message.</p>
     */
    inline const EmailContent& GetContent() const{ return m_content; }

    /**
     * <p>An object that contains the body of the message. You can send either a Simple
     * message Raw message or a template Message.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>An object that contains the body of the message. You can send either a Simple
     * message Raw message or a template Message.</p>
     */
    inline void SetContent(const EmailContent& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>An object that contains the body of the message. You can send either a Simple
     * message Raw message or a template Message.</p>
     */
    inline void SetContent(EmailContent&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>An object that contains the body of the message. You can send either a Simple
     * message Raw message or a template Message.</p>
     */
    inline SendEmailRequest& WithContent(const EmailContent& value) { SetContent(value); return *this;}

    /**
     * <p>An object that contains the body of the message. You can send either a Simple
     * message Raw message or a template Message.</p>
     */
    inline SendEmailRequest& WithContent(EmailContent&& value) { SetContent(std::move(value)); return *this;}


    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendEmail</code> operation. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events. </p>
     */
    inline const Aws::Vector<MessageTag>& GetEmailTags() const{ return m_emailTags; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendEmail</code> operation. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events. </p>
     */
    inline bool EmailTagsHasBeenSet() const { return m_emailTagsHasBeenSet; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendEmail</code> operation. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events. </p>
     */
    inline void SetEmailTags(const Aws::Vector<MessageTag>& value) { m_emailTagsHasBeenSet = true; m_emailTags = value; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendEmail</code> operation. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events. </p>
     */
    inline void SetEmailTags(Aws::Vector<MessageTag>&& value) { m_emailTagsHasBeenSet = true; m_emailTags = std::move(value); }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendEmail</code> operation. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events. </p>
     */
    inline SendEmailRequest& WithEmailTags(const Aws::Vector<MessageTag>& value) { SetEmailTags(value); return *this;}

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendEmail</code> operation. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events. </p>
     */
    inline SendEmailRequest& WithEmailTags(Aws::Vector<MessageTag>&& value) { SetEmailTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendEmail</code> operation. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events. </p>
     */
    inline SendEmailRequest& AddEmailTags(const MessageTag& value) { m_emailTagsHasBeenSet = true; m_emailTags.push_back(value); return *this; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send using the <code>SendEmail</code> operation. Tags correspond to
     * characteristics of the email that you define, so that you can publish email
     * sending events. </p>
     */
    inline SendEmailRequest& AddEmailTags(MessageTag&& value) { m_emailTagsHasBeenSet = true; m_emailTags.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the configuration set to use when sending the email.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the configuration set to use when sending the email.</p>
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * <p>The name of the configuration set to use when sending the email.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>The name of the configuration set to use when sending the email.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * <p>The name of the configuration set to use when sending the email.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * <p>The name of the configuration set to use when sending the email.</p>
     */
    inline SendEmailRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set to use when sending the email.</p>
     */
    inline SendEmailRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set to use when sending the email.</p>
     */
    inline SendEmailRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>An object used to specify a list or topic to which an email belongs, which
     * will be used when a contact chooses to unsubscribe.</p>
     */
    inline const ListManagementOptions& GetListManagementOptions() const{ return m_listManagementOptions; }

    /**
     * <p>An object used to specify a list or topic to which an email belongs, which
     * will be used when a contact chooses to unsubscribe.</p>
     */
    inline bool ListManagementOptionsHasBeenSet() const { return m_listManagementOptionsHasBeenSet; }

    /**
     * <p>An object used to specify a list or topic to which an email belongs, which
     * will be used when a contact chooses to unsubscribe.</p>
     */
    inline void SetListManagementOptions(const ListManagementOptions& value) { m_listManagementOptionsHasBeenSet = true; m_listManagementOptions = value; }

    /**
     * <p>An object used to specify a list or topic to which an email belongs, which
     * will be used when a contact chooses to unsubscribe.</p>
     */
    inline void SetListManagementOptions(ListManagementOptions&& value) { m_listManagementOptionsHasBeenSet = true; m_listManagementOptions = std::move(value); }

    /**
     * <p>An object used to specify a list or topic to which an email belongs, which
     * will be used when a contact chooses to unsubscribe.</p>
     */
    inline SendEmailRequest& WithListManagementOptions(const ListManagementOptions& value) { SetListManagementOptions(value); return *this;}

    /**
     * <p>An object used to specify a list or topic to which an email belongs, which
     * will be used when a contact chooses to unsubscribe.</p>
     */
    inline SendEmailRequest& WithListManagementOptions(ListManagementOptions&& value) { SetListManagementOptions(std::move(value)); return *this;}

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

    ListManagementOptions m_listManagementOptions;
    bool m_listManagementOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
