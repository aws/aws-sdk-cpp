/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/IdentityType.h>
#include <aws/sesv2/model/DkimAttributes.h>
#include <aws/sesv2/model/MailFromAttributes.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/VerificationStatus.h>
#include <aws/sesv2/model/VerificationInfo.h>
#include <aws/sesv2/model/Tag.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>Details about an email identity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetEmailIdentityResponse">AWS
   * API Reference</a></p>
   */
  class GetEmailIdentityResult
  {
  public:
    AWS_SESV2_API GetEmailIdentityResult() = default;
    AWS_SESV2_API GetEmailIdentityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetEmailIdentityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The email identity type. Note: the <code>MANAGED_DOMAIN</code> identity type
     * is not supported.</p>
     */
    inline IdentityType GetIdentityType() const { return m_identityType; }
    inline void SetIdentityType(IdentityType value) { m_identityTypeHasBeenSet = true; m_identityType = value; }
    inline GetEmailIdentityResult& WithIdentityType(IdentityType value) { SetIdentityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The feedback forwarding configuration for the identity.</p> <p>If the value
     * is <code>true</code>, you receive email notifications when bounce or complaint
     * events occur. These notifications are sent to the address that you specified in
     * the <code>Return-Path</code> header of the original email.</p> <p>You're
     * required to have a method of tracking bounces and complaints. If you haven't set
     * up another mechanism for receiving bounce or complaint notifications (for
     * example, by setting up an event destination), you receive an email notification
     * when these events occur (even if this setting is disabled).</p>
     */
    inline bool GetFeedbackForwardingStatus() const { return m_feedbackForwardingStatus; }
    inline void SetFeedbackForwardingStatus(bool value) { m_feedbackForwardingStatusHasBeenSet = true; m_feedbackForwardingStatus = value; }
    inline GetEmailIdentityResult& WithFeedbackForwardingStatus(bool value) { SetFeedbackForwardingStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether or not the identity is verified. You can only send email
     * from verified email addresses or domains. For more information about verifying
     * identities, see the <a
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
     * identity.</p>
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
     * <p>A map of policy names to policies.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPolicies() const { return m_policies; }
    template<typename PoliciesT = Aws::Map<Aws::String, Aws::String>>
    void SetPolicies(PoliciesT&& value) { m_policiesHasBeenSet = true; m_policies = std::forward<PoliciesT>(value); }
    template<typename PoliciesT = Aws::Map<Aws::String, Aws::String>>
    GetEmailIdentityResult& WithPolicies(PoliciesT&& value) { SetPolicies(std::forward<PoliciesT>(value)); return *this;}
    template<typename PoliciesKeyT = Aws::String, typename PoliciesValueT = Aws::String>
    GetEmailIdentityResult& AddPolicies(PoliciesKeyT&& key, PoliciesValueT&& value) {
      m_policiesHasBeenSet = true; m_policies.emplace(std::forward<PoliciesKeyT>(key), std::forward<PoliciesValueT>(value)); return *this;
    }
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
    /**
     * <p>The configuration set used by default when sending from this identity.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
    template<typename ConfigurationSetNameT = Aws::String>
    void SetConfigurationSetName(ConfigurationSetNameT&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::forward<ConfigurationSetNameT>(value); }
    template<typename ConfigurationSetNameT = Aws::String>
    GetEmailIdentityResult& WithConfigurationSetName(ConfigurationSetNameT&& value) { SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The verification status of the identity. The status can be one of the
     * following:</p> <ul> <li> <p> <code>PENDING</code> – The verification process was
     * initiated, but Amazon SES hasn't yet been able to verify the identity.</p> </li>
     * <li> <p> <code>SUCCESS</code> – The verification process completed
     * successfully.</p> </li> <li> <p> <code>FAILED</code> – The verification process
     * failed.</p> </li> <li> <p> <code>TEMPORARY_FAILURE</code> – A temporary issue is
     * preventing Amazon SES from determining the verification status of the
     * identity.</p> </li> <li> <p> <code>NOT_STARTED</code> – The verification process
     * hasn't been initiated for the identity.</p> </li> </ul>
     */
    inline VerificationStatus GetVerificationStatus() const { return m_verificationStatus; }
    inline void SetVerificationStatus(VerificationStatus value) { m_verificationStatusHasBeenSet = true; m_verificationStatus = value; }
    inline GetEmailIdentityResult& WithVerificationStatus(VerificationStatus value) { SetVerificationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains additional information about the verification status
     * for the identity.</p>
     */
    inline const VerificationInfo& GetVerificationInfo() const { return m_verificationInfo; }
    template<typename VerificationInfoT = VerificationInfo>
    void SetVerificationInfo(VerificationInfoT&& value) { m_verificationInfoHasBeenSet = true; m_verificationInfo = std::forward<VerificationInfoT>(value); }
    template<typename VerificationInfoT = VerificationInfo>
    GetEmailIdentityResult& WithVerificationInfo(VerificationInfoT&& value) { SetVerificationInfo(std::forward<VerificationInfoT>(value)); return *this;}
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

    Aws::Map<Aws::String, Aws::String> m_policies;
    bool m_policiesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    VerificationStatus m_verificationStatus{VerificationStatus::NOT_SET};
    bool m_verificationStatusHasBeenSet = false;

    VerificationInfo m_verificationInfo;
    bool m_verificationInfoHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
