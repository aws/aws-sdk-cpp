/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/model/IdentityType.h>
#include <aws/pinpoint-email/model/DkimAttributes.h>
#include <aws/pinpoint-email/model/MailFromAttributes.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>Details about an email identity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetEmailIdentityResponse">AWS
   * API Reference</a></p>
   */
  class GetEmailIdentityResult
  {
  public:
    AWS_PINPOINTEMAIL_API GetEmailIdentityResult() = default;
    AWS_PINPOINTEMAIL_API GetEmailIdentityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTEMAIL_API GetEmailIdentityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The email identity type.</p>
     */
    inline IdentityType GetIdentityType() const { return m_identityType; }
    inline void SetIdentityType(IdentityType value) { m_identityTypeHasBeenSet = true; m_identityType = value; }
    inline GetEmailIdentityResult& WithIdentityType(IdentityType value) { SetIdentityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The feedback forwarding configuration for the identity.</p> <p>If the value
     * is <code>true</code>, Amazon Pinpoint sends you email notifications when bounce
     * or complaint events occur. Amazon Pinpoint sends this notification to the
     * address that you specified in the Return-Path header of the original email.</p>
     * <p>When you set this value to <code>false</code>, Amazon Pinpoint sends
     * notifications through other mechanisms, such as by notifying an Amazon SNS topic
     * or another event destination. You're required to have a method of tracking
     * bounces and complaints. If you haven't set up another mechanism for receiving
     * bounce or complaint notifications, Amazon Pinpoint sends an email notification
     * when these events occur (even if this setting is disabled).</p>
     */
    inline bool GetFeedbackForwardingStatus() const { return m_feedbackForwardingStatus; }
    inline void SetFeedbackForwardingStatus(bool value) { m_feedbackForwardingStatusHasBeenSet = true; m_feedbackForwardingStatus = value; }
    inline GetEmailIdentityResult& WithFeedbackForwardingStatus(bool value) { SetFeedbackForwardingStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether or not the identity is verified. In Amazon Pinpoint, you
     * can only send email from verified email addresses or domains. For more
     * information about verifying identities, see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-email-manage-verify.html">Amazon
     * Pinpoint User Guide</a>.</p>
     */
    inline bool GetVerifiedForSendingStatus() const { return m_verifiedForSendingStatus; }
    inline void SetVerifiedForSendingStatus(bool value) { m_verifiedForSendingStatusHasBeenSet = true; m_verifiedForSendingStatus = value; }
    inline GetEmailIdentityResult& WithVerifiedForSendingStatus(bool value) { SetVerifiedForSendingStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about the DKIM attributes for the
     * identity. This object includes the tokens that you use to create the CNAME
     * records that are required to complete the DKIM verification process.</p>
     */
    inline const DkimAttributes& GetDkimAttributes() const { return m_dkimAttributes; }
    template<typename DkimAttributesT = DkimAttributes>
    void SetDkimAttributes(DkimAttributesT&& value) { m_dkimAttributesHasBeenSet = true; m_dkimAttributes = std::forward<DkimAttributesT>(value); }
    template<typename DkimAttributesT = DkimAttributes>
    GetEmailIdentityResult& WithDkimAttributes(DkimAttributesT&& value) { SetDkimAttributes(std::forward<DkimAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about the Mail-From attributes for the
     * email identity.</p>
     */
    inline const MailFromAttributes& GetMailFromAttributes() const { return m_mailFromAttributes; }
    template<typename MailFromAttributesT = MailFromAttributes>
    void SetMailFromAttributes(MailFromAttributesT&& value) { m_mailFromAttributesHasBeenSet = true; m_mailFromAttributes = std::forward<MailFromAttributesT>(value); }
    template<typename MailFromAttributesT = MailFromAttributes>
    GetEmailIdentityResult& WithMailFromAttributes(MailFromAttributesT&& value) { SetMailFromAttributes(std::forward<MailFromAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that define the tags (keys and values) that are
     * associated with the email identity.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    GetEmailIdentityResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    GetEmailIdentityResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEmailIdentityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    IdentityType m_identityType{IdentityType::NOT_SET};
    bool m_identityTypeHasBeenSet = false;

    bool m_feedbackForwardingStatus{false};
    bool m_feedbackForwardingStatusHasBeenSet = false;

    bool m_verifiedForSendingStatus{false};
    bool m_verifiedForSendingStatusHasBeenSet = false;

    DkimAttributes m_dkimAttributes;
    bool m_dkimAttributesHasBeenSet = false;

    MailFromAttributes m_mailFromAttributes;
    bool m_mailFromAttributesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
