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
    AWS_SECURITYHUB_API ActorSession();
    AWS_SECURITYHUB_API ActorSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ActorSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Unique identifier of the session. </p>
     */
    inline const Aws::String& GetUid() const{ return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    inline void SetUid(const Aws::String& value) { m_uidHasBeenSet = true; m_uid = value; }
    inline void SetUid(Aws::String&& value) { m_uidHasBeenSet = true; m_uid = std::move(value); }
    inline void SetUid(const char* value) { m_uidHasBeenSet = true; m_uid.assign(value); }
    inline ActorSession& WithUid(const Aws::String& value) { SetUid(value); return *this;}
    inline ActorSession& WithUid(Aws::String&& value) { SetUid(std::move(value)); return *this;}
    inline ActorSession& WithUid(const char* value) { SetUid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether multi-factor authentication (MFA) was used for
     * authentication during the session.</p> <p>In CloudTrail, you can find this value
     * as <code>userIdentity.sessionContext.attributes.mfaAuthenticated</code>.</p>
     */
    inline const ActorSessionMfaStatus& GetMfaStatus() const{ return m_mfaStatus; }
    inline bool MfaStatusHasBeenSet() const { return m_mfaStatusHasBeenSet; }
    inline void SetMfaStatus(const ActorSessionMfaStatus& value) { m_mfaStatusHasBeenSet = true; m_mfaStatus = value; }
    inline void SetMfaStatus(ActorSessionMfaStatus&& value) { m_mfaStatusHasBeenSet = true; m_mfaStatus = std::move(value); }
    inline ActorSession& WithMfaStatus(const ActorSessionMfaStatus& value) { SetMfaStatus(value); return *this;}
    inline ActorSession& WithMfaStatus(ActorSessionMfaStatus&& value) { SetMfaStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the session was created. </p> <p>In CloudTrail, you
     * can find this value as
     * <code>userIdentity.sessionContext.attributes.creationDate</code>.</p>
     */
    inline long long GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(long long value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline ActorSession& WithCreatedTime(long long value) { SetCreatedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The issuer of the session. </p> <p>In CloudTrail, you can find this value as
     * <code>userIdentity.sessionContext.sessionIssuer.arn</code>.</p>
     */
    inline const Aws::String& GetIssuer() const{ return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    inline void SetIssuer(const Aws::String& value) { m_issuerHasBeenSet = true; m_issuer = value; }
    inline void SetIssuer(Aws::String&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }
    inline void SetIssuer(const char* value) { m_issuerHasBeenSet = true; m_issuer.assign(value); }
    inline ActorSession& WithIssuer(const Aws::String& value) { SetIssuer(value); return *this;}
    inline ActorSession& WithIssuer(Aws::String&& value) { SetIssuer(std::move(value)); return *this;}
    inline ActorSession& WithIssuer(const char* value) { SetIssuer(value); return *this;}
    ///@}
  private:

    Aws::String m_uid;
    bool m_uidHasBeenSet = false;

    ActorSessionMfaStatus m_mfaStatus;
    bool m_mfaStatusHasBeenSet = false;

    long long m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
