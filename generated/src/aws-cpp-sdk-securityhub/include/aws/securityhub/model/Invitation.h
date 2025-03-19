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
    AWS_SECURITYHUB_API Invitation() = default;
    AWS_SECURITYHUB_API Invitation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Invitation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account ID of the Security Hub administrator account that the invitation
     * was sent from.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    Invitation& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the invitation sent to the member account.</p>
     */
    inline const Aws::String& GetInvitationId() const { return m_invitationId; }
    inline bool InvitationIdHasBeenSet() const { return m_invitationIdHasBeenSet; }
    template<typename InvitationIdT = Aws::String>
    void SetInvitationId(InvitationIdT&& value) { m_invitationIdHasBeenSet = true; m_invitationId = std::forward<InvitationIdT>(value); }
    template<typename InvitationIdT = Aws::String>
    Invitation& WithInvitationId(InvitationIdT&& value) { SetInvitationId(std::forward<InvitationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the invitation was sent.</p>
     */
    inline const Aws::Utils::DateTime& GetInvitedAt() const { return m_invitedAt; }
    inline bool InvitedAtHasBeenSet() const { return m_invitedAtHasBeenSet; }
    template<typename InvitedAtT = Aws::Utils::DateTime>
    void SetInvitedAt(InvitedAtT&& value) { m_invitedAtHasBeenSet = true; m_invitedAt = std::forward<InvitedAtT>(value); }
    template<typename InvitedAtT = Aws::Utils::DateTime>
    Invitation& WithInvitedAt(InvitedAtT&& value) { SetInvitedAt(std::forward<InvitedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the association between the member and administrator
     * accounts.</p>
     */
    inline const Aws::String& GetMemberStatus() const { return m_memberStatus; }
    inline bool MemberStatusHasBeenSet() const { return m_memberStatusHasBeenSet; }
    template<typename MemberStatusT = Aws::String>
    void SetMemberStatus(MemberStatusT&& value) { m_memberStatusHasBeenSet = true; m_memberStatus = std::forward<MemberStatusT>(value); }
    template<typename MemberStatusT = Aws::String>
    Invitation& WithMemberStatus(MemberStatusT&& value) { SetMemberStatus(std::forward<MemberStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_invitationId;
    bool m_invitationIdHasBeenSet = false;

    Aws::Utils::DateTime m_invitedAt{};
    bool m_invitedAtHasBeenSet = false;

    Aws::String m_memberStatus;
    bool m_memberStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
