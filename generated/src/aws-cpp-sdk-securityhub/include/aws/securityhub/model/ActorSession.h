/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ActorSessionMfaStatus.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Contains information about the authenticated session used by the threat
   * actor identified in an Amazon GuardDuty Extended Threat Detection attack
   * sequence. GuardDuty generates an attack sequence finding when multiple events
   * align to a potentially suspicious activity. To receive GuardDuty attack sequence
   * findings in Security Hub, you must have GuardDuty enabled. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty-extended-threat-detection.html">GuardDuty
   * Extended Threat Detection </a> in the <i>Amazon GuardDuty User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ActorSession">AWS
   * API Reference</a></p>
   */
  class ActorSession
  {
  public:
    AWS_SECURITYHUB_API ActorSession() = default;
    AWS_SECURITYHUB_API ActorSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ActorSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Unique identifier of the session. </p>
     */
    inline const Aws::String& GetUid() const { return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    template<typename UidT = Aws::String>
    void SetUid(UidT&& value) { m_uidHasBeenSet = true; m_uid = std::forward<UidT>(value); }
    template<typename UidT = Aws::String>
    ActorSession& WithUid(UidT&& value) { SetUid(std::forward<UidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether multi-factor authentication (MFA) was used for
     * authentication during the session.</p> <p>In CloudTrail, you can find this value
     * as <code>userIdentity.sessionContext.attributes.mfaAuthenticated</code>.</p>
     */
    inline ActorSessionMfaStatus GetMfaStatus() const { return m_mfaStatus; }
    inline bool MfaStatusHasBeenSet() const { return m_mfaStatusHasBeenSet; }
    inline void SetMfaStatus(ActorSessionMfaStatus value) { m_mfaStatusHasBeenSet = true; m_mfaStatus = value; }
    inline ActorSession& WithMfaStatus(ActorSessionMfaStatus value) { SetMfaStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the session was created. </p> <p>In CloudTrail, you
     * can find this value as
     * <code>userIdentity.sessionContext.attributes.creationDate</code>.</p>
     */
    inline long long GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(long long value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline ActorSession& WithCreatedTime(long long value) { SetCreatedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The issuer of the session. </p> <p>In CloudTrail, you can find this value as
     * <code>userIdentity.sessionContext.sessionIssuer.arn</code>.</p>
     */
    inline const Aws::String& GetIssuer() const { return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    template<typename IssuerT = Aws::String>
    void SetIssuer(IssuerT&& value) { m_issuerHasBeenSet = true; m_issuer = std::forward<IssuerT>(value); }
    template<typename IssuerT = Aws::String>
    ActorSession& WithIssuer(IssuerT&& value) { SetIssuer(std::forward<IssuerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_uid;
    bool m_uidHasBeenSet = false;

    ActorSessionMfaStatus m_mfaStatus{ActorSessionMfaStatus::NOT_SET};
    bool m_mfaStatusHasBeenSet = false;

    long long m_createdTime{0};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
