/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class AcceptAdministratorInvitationRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API AcceptAdministratorInvitationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcceptAdministratorInvitation"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The account ID of the Security Hub administrator account that sent the
     * invitation.</p>
     */
    inline const Aws::String& GetAdministratorId() const{ return m_administratorId; }
    inline bool AdministratorIdHasBeenSet() const { return m_administratorIdHasBeenSet; }
    inline void SetAdministratorId(const Aws::String& value) { m_administratorIdHasBeenSet = true; m_administratorId = value; }
    inline void SetAdministratorId(Aws::String&& value) { m_administratorIdHasBeenSet = true; m_administratorId = std::move(value); }
    inline void SetAdministratorId(const char* value) { m_administratorIdHasBeenSet = true; m_administratorId.assign(value); }
    inline AcceptAdministratorInvitationRequest& WithAdministratorId(const Aws::String& value) { SetAdministratorId(value); return *this;}
    inline AcceptAdministratorInvitationRequest& WithAdministratorId(Aws::String&& value) { SetAdministratorId(std::move(value)); return *this;}
    inline AcceptAdministratorInvitationRequest& WithAdministratorId(const char* value) { SetAdministratorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the invitation sent from the Security Hub administrator
     * account.</p>
     */
    inline const Aws::String& GetInvitationId() const{ return m_invitationId; }
    inline bool InvitationIdHasBeenSet() const { return m_invitationIdHasBeenSet; }
    inline void SetInvitationId(const Aws::String& value) { m_invitationIdHasBeenSet = true; m_invitationId = value; }
    inline void SetInvitationId(Aws::String&& value) { m_invitationIdHasBeenSet = true; m_invitationId = std::move(value); }
    inline void SetInvitationId(const char* value) { m_invitationIdHasBeenSet = true; m_invitationId.assign(value); }
    inline AcceptAdministratorInvitationRequest& WithInvitationId(const Aws::String& value) { SetInvitationId(value); return *this;}
    inline AcceptAdministratorInvitationRequest& WithInvitationId(Aws::String&& value) { SetInvitationId(std::move(value)); return *this;}
    inline AcceptAdministratorInvitationRequest& WithInvitationId(const char* value) { SetInvitationId(value); return *this;}
    ///@}
  private:

    Aws::String m_administratorId;
    bool m_administratorIdHasBeenSet = false;

    Aws::String m_invitationId;
    bool m_invitationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
