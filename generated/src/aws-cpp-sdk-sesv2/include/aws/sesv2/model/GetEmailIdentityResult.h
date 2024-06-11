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
    AWS_SESV2_API GetEmailIdentityResult();
    AWS_SESV2_API GetEmailIdentityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetEmailIdentityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The email identity type. Note: the <code>MANAGED_DOMAIN</code> identity type
     * is not supported.</p>
     */
    inline const IdentityType& GetIdentityType() const{ return m_identityType; }
    inline void SetIdentityType(const IdentityType& value) { m_identityType = value; }
    inline void SetIdentityType(IdentityType&& value) { m_identityType = std::move(value); }
    inline GetEmailIdentityResult& WithIdentityType(const IdentityType& value) { SetIdentityType(value); return *this;}
    inline GetEmailIdentityResult& WithIdentityType(IdentityType&& value) { SetIdentityType(std::move(value)); return *this;}
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
    inline bool GetFeedbackForwardingStatus() const{ return m_feedbackForwardingStatus; }
    inline void SetFeedbackForwardingStatus(bool value) { m_feedbackForwardingStatus = value; }
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
    inline bool GetVerifiedForSendingStatus() const{ return m_verifiedForSendingStatus; }
    inline void SetVerifiedForSendingStatus(bool value) { m_verifiedForSendingStatus = value; }
    inline GetEmailIdentityResult& WithVerifiedForSendingStatus(bool value) { SetVerifiedForSendingStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about the DKIM attributes for the
     * identity.</p>
     */
    inline const DkimAttributes& GetDkimAttributes() const{ return m_dkimAttributes; }
    inline void SetDkimAttributes(const DkimAttributes& value) { m_dkimAttributes = value; }
    inline void SetDkimAttributes(DkimAttributes&& value) { m_dkimAttributes = std::move(value); }
    inline GetEmailIdentityResult& WithDkimAttributes(const DkimAttributes& value) { SetDkimAttributes(value); return *this;}
    inline GetEmailIdentityResult& WithDkimAttributes(DkimAttributes&& value) { SetDkimAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about the Mail-From attributes for the
     * email identity.</p>
     */
    inline const MailFromAttributes& GetMailFromAttributes() const{ return m_mailFromAttributes; }
    inline void SetMailFromAttributes(const MailFromAttributes& value) { m_mailFromAttributes = value; }
    inline void SetMailFromAttributes(MailFromAttributes&& value) { m_mailFromAttributes = std::move(value); }
    inline GetEmailIdentityResult& WithMailFromAttributes(const MailFromAttributes& value) { SetMailFromAttributes(value); return *this;}
    inline GetEmailIdentityResult& WithMailFromAttributes(MailFromAttributes&& value) { SetMailFromAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of policy names to policies.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPolicies() const{ return m_policies; }
    inline void SetPolicies(const Aws::Map<Aws::String, Aws::String>& value) { m_policies = value; }
    inline void SetPolicies(Aws::Map<Aws::String, Aws::String>&& value) { m_policies = std::move(value); }
    inline GetEmailIdentityResult& WithPolicies(const Aws::Map<Aws::String, Aws::String>& value) { SetPolicies(value); return *this;}
    inline GetEmailIdentityResult& WithPolicies(Aws::Map<Aws::String, Aws::String>&& value) { SetPolicies(std::move(value)); return *this;}
    inline GetEmailIdentityResult& AddPolicies(const Aws::String& key, const Aws::String& value) { m_policies.emplace(key, value); return *this; }
    inline GetEmailIdentityResult& AddPolicies(Aws::String&& key, const Aws::String& value) { m_policies.emplace(std::move(key), value); return *this; }
    inline GetEmailIdentityResult& AddPolicies(const Aws::String& key, Aws::String&& value) { m_policies.emplace(key, std::move(value)); return *this; }
    inline GetEmailIdentityResult& AddPolicies(Aws::String&& key, Aws::String&& value) { m_policies.emplace(std::move(key), std::move(value)); return *this; }
    inline GetEmailIdentityResult& AddPolicies(const char* key, Aws::String&& value) { m_policies.emplace(key, std::move(value)); return *this; }
    inline GetEmailIdentityResult& AddPolicies(Aws::String&& key, const char* value) { m_policies.emplace(std::move(key), value); return *this; }
    inline GetEmailIdentityResult& AddPolicies(const char* key, const char* value) { m_policies.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects that define the tags (keys and values) that are
     * associated with the email identity.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline GetEmailIdentityResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline GetEmailIdentityResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline GetEmailIdentityResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline GetEmailIdentityResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration set used by default when sending from this identity.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetName = value; }
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetName = std::move(value); }
    inline void SetConfigurationSetName(const char* value) { m_configurationSetName.assign(value); }
    inline GetEmailIdentityResult& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}
    inline GetEmailIdentityResult& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}
    inline GetEmailIdentityResult& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}
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
    inline const VerificationStatus& GetVerificationStatus() const{ return m_verificationStatus; }
    inline void SetVerificationStatus(const VerificationStatus& value) { m_verificationStatus = value; }
    inline void SetVerificationStatus(VerificationStatus&& value) { m_verificationStatus = std::move(value); }
    inline GetEmailIdentityResult& WithVerificationStatus(const VerificationStatus& value) { SetVerificationStatus(value); return *this;}
    inline GetEmailIdentityResult& WithVerificationStatus(VerificationStatus&& value) { SetVerificationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains additional information about the verification status
     * for the identity.</p>
     */
    inline const VerificationInfo& GetVerificationInfo() const{ return m_verificationInfo; }
    inline void SetVerificationInfo(const VerificationInfo& value) { m_verificationInfo = value; }
    inline void SetVerificationInfo(VerificationInfo&& value) { m_verificationInfo = std::move(value); }
    inline GetEmailIdentityResult& WithVerificationInfo(const VerificationInfo& value) { SetVerificationInfo(value); return *this;}
    inline GetEmailIdentityResult& WithVerificationInfo(VerificationInfo&& value) { SetVerificationInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEmailIdentityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEmailIdentityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEmailIdentityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    IdentityType m_identityType;

    bool m_feedbackForwardingStatus;

    bool m_verifiedForSendingStatus;

    DkimAttributes m_dkimAttributes;

    MailFromAttributes m_mailFromAttributes;

    Aws::Map<Aws::String, Aws::String> m_policies;

    Aws::Vector<Tag> m_tags;

    Aws::String m_configurationSetName;

    VerificationStatus m_verificationStatus;

    VerificationInfo m_verificationInfo;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
