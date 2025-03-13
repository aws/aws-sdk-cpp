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
   * <p>The details about a member account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Member">AWS
   * API Reference</a></p>
   */
  class Member
  {
  public:
    AWS_SECURITYHUB_API Member() = default;
    AWS_SECURITYHUB_API Member(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Member& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the member account.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    Member& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the member account.</p>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    Member& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the Security Hub administrator account
     * associated with this member account.</p>
     */
    inline const Aws::String& GetAdministratorId() const { return m_administratorId; }
    inline bool AdministratorIdHasBeenSet() const { return m_administratorIdHasBeenSet; }
    template<typename AdministratorIdT = Aws::String>
    void SetAdministratorId(AdministratorIdT&& value) { m_administratorIdHasBeenSet = true; m_administratorId = std::forward<AdministratorIdT>(value); }
    template<typename AdministratorIdT = Aws::String>
    Member& WithAdministratorId(AdministratorIdT&& value) { SetAdministratorId(std::forward<AdministratorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the relationship between the member account and its
     * administrator account. </p> <p>The status can have one of the following
     * values:</p> <ul> <li> <p> <code>Created</code> - Indicates that the
     * administrator account added the member account, but has not yet invited the
     * member account.</p> </li> <li> <p> <code>Invited</code> - Indicates that the
     * administrator account invited the member account. The member account has not yet
     * responded to the invitation.</p> </li> <li> <p> <code>Enabled</code> - Indicates
     * that the member account is currently active. For manually invited member
     * accounts, indicates that the member account accepted the invitation.</p> </li>
     * <li> <p> <code>Removed</code> - Indicates that the administrator account
     * disassociated the member account.</p> </li> <li> <p> <code>Resigned</code> -
     * Indicates that the member account disassociated themselves from the
     * administrator account.</p> </li> <li> <p> <code>Deleted</code> - Indicates that
     * the administrator account deleted the member account.</p> </li> <li> <p>
     * <code>AccountSuspended</code> - Indicates that an organization account was
     * suspended from Amazon Web Services at the same time that the administrator
     * account tried to enable the organization account as a member account.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetMemberStatus() const { return m_memberStatus; }
    inline bool MemberStatusHasBeenSet() const { return m_memberStatusHasBeenSet; }
    template<typename MemberStatusT = Aws::String>
    void SetMemberStatus(MemberStatusT&& value) { m_memberStatusHasBeenSet = true; m_memberStatus = std::forward<MemberStatusT>(value); }
    template<typename MemberStatusT = Aws::String>
    Member& WithMemberStatus(MemberStatusT&& value) { SetMemberStatus(std::forward<MemberStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp for the date and time when the invitation was sent to the member
     * account.</p>
     */
    inline const Aws::Utils::DateTime& GetInvitedAt() const { return m_invitedAt; }
    inline bool InvitedAtHasBeenSet() const { return m_invitedAtHasBeenSet; }
    template<typename InvitedAtT = Aws::Utils::DateTime>
    void SetInvitedAt(InvitedAtT&& value) { m_invitedAtHasBeenSet = true; m_invitedAt = std::forward<InvitedAtT>(value); }
    template<typename InvitedAtT = Aws::Utils::DateTime>
    Member& WithInvitedAt(InvitedAtT&& value) { SetInvitedAt(std::forward<InvitedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for the date and time when the member account was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    Member& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_administratorId;
    bool m_administratorIdHasBeenSet = false;

    Aws::String m_memberStatus;
    bool m_memberStatusHasBeenSet = false;

    Aws::Utils::DateTime m_invitedAt{};
    bool m_invitedAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
