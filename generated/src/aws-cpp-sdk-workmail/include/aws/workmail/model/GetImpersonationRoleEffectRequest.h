/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class GetImpersonationRoleEffectRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API GetImpersonationRoleEffectRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetImpersonationRoleEffect"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The WorkMail organization where the impersonation role is defined.</p>
     */
    inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    template<typename OrganizationIdT = Aws::String>
    void SetOrganizationId(OrganizationIdT&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::forward<OrganizationIdT>(value); }
    template<typename OrganizationIdT = Aws::String>
    GetImpersonationRoleEffectRequest& WithOrganizationId(OrganizationIdT&& value) { SetOrganizationId(std::forward<OrganizationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The impersonation role ID to test.</p>
     */
    inline const Aws::String& GetImpersonationRoleId() const { return m_impersonationRoleId; }
    inline bool ImpersonationRoleIdHasBeenSet() const { return m_impersonationRoleIdHasBeenSet; }
    template<typename ImpersonationRoleIdT = Aws::String>
    void SetImpersonationRoleId(ImpersonationRoleIdT&& value) { m_impersonationRoleIdHasBeenSet = true; m_impersonationRoleId = std::forward<ImpersonationRoleIdT>(value); }
    template<typename ImpersonationRoleIdT = Aws::String>
    GetImpersonationRoleEffectRequest& WithImpersonationRoleId(ImpersonationRoleIdT&& value) { SetImpersonationRoleId(std::forward<ImpersonationRoleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The WorkMail organization user chosen to test the impersonation role. The
     * following identity formats are available:</p> <ul> <li> <p>User ID:
     * <code>12345678-1234-1234-1234-123456789012</code> or
     * <code>S-1-1-12-1234567890-123456789-123456789-1234</code> </p> </li> <li>
     * <p>Email address: <code>user@domain.tld</code> </p> </li> <li> <p>User name:
     * <code>user</code> </p> </li> </ul>
     */
    inline const Aws::String& GetTargetUser() const { return m_targetUser; }
    inline bool TargetUserHasBeenSet() const { return m_targetUserHasBeenSet; }
    template<typename TargetUserT = Aws::String>
    void SetTargetUser(TargetUserT&& value) { m_targetUserHasBeenSet = true; m_targetUser = std::forward<TargetUserT>(value); }
    template<typename TargetUserT = Aws::String>
    GetImpersonationRoleEffectRequest& WithTargetUser(TargetUserT&& value) { SetTargetUser(std::forward<TargetUserT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_impersonationRoleId;
    bool m_impersonationRoleIdHasBeenSet = false;

    Aws::String m_targetUser;
    bool m_targetUserHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
