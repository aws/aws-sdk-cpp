/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Details about an invitation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Invitation">AWS
   * API Reference</a></p>
   */
  class Invitation
  {
  public:
    AWS_SECURITYHUB_API Invitation();
    AWS_SECURITYHUB_API Invitation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Invitation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The account ID of the Security Hub administrator account that the invitation
     * was sent from.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account ID of the Security Hub administrator account that the invitation
     * was sent from.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account ID of the Security Hub administrator account that the invitation
     * was sent from.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account ID of the Security Hub administrator account that the invitation
     * was sent from.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account ID of the Security Hub administrator account that the invitation
     * was sent from.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account ID of the Security Hub administrator account that the invitation
     * was sent from.</p>
     */
    inline Invitation& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account ID of the Security Hub administrator account that the invitation
     * was sent from.</p>
     */
    inline Invitation& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID of the Security Hub administrator account that the invitation
     * was sent from.</p>
     */
    inline Invitation& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The ID of the invitation sent to the member account.</p>
     */
    inline const Aws::String& GetInvitationId() const{ return m_invitationId; }

    /**
     * <p>The ID of the invitation sent to the member account.</p>
     */
    inline bool InvitationIdHasBeenSet() const { return m_invitationIdHasBeenSet; }

    /**
     * <p>The ID of the invitation sent to the member account.</p>
     */
    inline void SetInvitationId(const Aws::String& value) { m_invitationIdHasBeenSet = true; m_invitationId = value; }

    /**
     * <p>The ID of the invitation sent to the member account.</p>
     */
    inline void SetInvitationId(Aws::String&& value) { m_invitationIdHasBeenSet = true; m_invitationId = std::move(value); }

    /**
     * <p>The ID of the invitation sent to the member account.</p>
     */
    inline void SetInvitationId(const char* value) { m_invitationIdHasBeenSet = true; m_invitationId.assign(value); }

    /**
     * <p>The ID of the invitation sent to the member account.</p>
     */
    inline Invitation& WithInvitationId(const Aws::String& value) { SetInvitationId(value); return *this;}

    /**
     * <p>The ID of the invitation sent to the member account.</p>
     */
    inline Invitation& WithInvitationId(Aws::String&& value) { SetInvitationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the invitation sent to the member account.</p>
     */
    inline Invitation& WithInvitationId(const char* value) { SetInvitationId(value); return *this;}


    /**
     * <p>The timestamp of when the invitation was sent.</p>
     */
    inline const Aws::Utils::DateTime& GetInvitedAt() const{ return m_invitedAt; }

    /**
     * <p>The timestamp of when the invitation was sent.</p>
     */
    inline bool InvitedAtHasBeenSet() const { return m_invitedAtHasBeenSet; }

    /**
     * <p>The timestamp of when the invitation was sent.</p>
     */
    inline void SetInvitedAt(const Aws::Utils::DateTime& value) { m_invitedAtHasBeenSet = true; m_invitedAt = value; }

    /**
     * <p>The timestamp of when the invitation was sent.</p>
     */
    inline void SetInvitedAt(Aws::Utils::DateTime&& value) { m_invitedAtHasBeenSet = true; m_invitedAt = std::move(value); }

    /**
     * <p>The timestamp of when the invitation was sent.</p>
     */
    inline Invitation& WithInvitedAt(const Aws::Utils::DateTime& value) { SetInvitedAt(value); return *this;}

    /**
     * <p>The timestamp of when the invitation was sent.</p>
     */
    inline Invitation& WithInvitedAt(Aws::Utils::DateTime&& value) { SetInvitedAt(std::move(value)); return *this;}


    /**
     * <p>The current status of the association between the member and administrator
     * accounts.</p>
     */
    inline const Aws::String& GetMemberStatus() const{ return m_memberStatus; }

    /**
     * <p>The current status of the association between the member and administrator
     * accounts.</p>
     */
    inline bool MemberStatusHasBeenSet() const { return m_memberStatusHasBeenSet; }

    /**
     * <p>The current status of the association between the member and administrator
     * accounts.</p>
     */
    inline void SetMemberStatus(const Aws::String& value) { m_memberStatusHasBeenSet = true; m_memberStatus = value; }

    /**
     * <p>The current status of the association between the member and administrator
     * accounts.</p>
     */
    inline void SetMemberStatus(Aws::String&& value) { m_memberStatusHasBeenSet = true; m_memberStatus = std::move(value); }

    /**
     * <p>The current status of the association between the member and administrator
     * accounts.</p>
     */
    inline void SetMemberStatus(const char* value) { m_memberStatusHasBeenSet = true; m_memberStatus.assign(value); }

    /**
     * <p>The current status of the association between the member and administrator
     * accounts.</p>
     */
    inline Invitation& WithMemberStatus(const Aws::String& value) { SetMemberStatus(value); return *this;}

    /**
     * <p>The current status of the association between the member and administrator
     * accounts.</p>
     */
    inline Invitation& WithMemberStatus(Aws::String&& value) { SetMemberStatus(std::move(value)); return *this;}

    /**
     * <p>The current status of the association between the member and administrator
     * accounts.</p>
     */
    inline Invitation& WithMemberStatus(const char* value) { SetMemberStatus(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_invitationId;
    bool m_invitationIdHasBeenSet = false;

    Aws::Utils::DateTime m_invitedAt;
    bool m_invitedAtHasBeenSet = false;

    Aws::String m_memberStatus;
    bool m_memberStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
