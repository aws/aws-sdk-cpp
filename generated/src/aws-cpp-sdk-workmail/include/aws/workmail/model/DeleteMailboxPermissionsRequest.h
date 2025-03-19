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
  class DeleteMailboxPermissionsRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API DeleteMailboxPermissionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMailboxPermissions"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the organization under which the member (user or group)
     * exists.</p>
     */
    inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    template<typename OrganizationIdT = Aws::String>
    void SetOrganizationId(OrganizationIdT&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::forward<OrganizationIdT>(value); }
    template<typename OrganizationIdT = Aws::String>
    DeleteMailboxPermissionsRequest& WithOrganizationId(OrganizationIdT&& value) { SetOrganizationId(std::forward<OrganizationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the entity that owns the mailbox.</p> <p>The identifier can
     * be <i>UserId or Group Id</i>, <i>Username or Groupname</i>, or <i>email</i>.</p>
     * <ul> <li> <p>Entity ID: 12345678-1234-1234-1234-123456789012,
     * r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline const Aws::String& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = Aws::String>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = Aws::String>
    DeleteMailboxPermissionsRequest& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the entity for which to delete granted permissions.</p>
     * <p>The identifier can be <i>UserId, ResourceID, or Group Id</i>, <i>Username or
     * Groupname</i>, or <i>email</i>.</p> <ul> <li> <p>Grantee ID:
     * 12345678-1234-1234-1234-123456789012,r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * grantee@domain.tld</p> </li> <li> <p>Grantee name: grantee</p> </li> </ul>
     */
    inline const Aws::String& GetGranteeId() const { return m_granteeId; }
    inline bool GranteeIdHasBeenSet() const { return m_granteeIdHasBeenSet; }
    template<typename GranteeIdT = Aws::String>
    void SetGranteeId(GranteeIdT&& value) { m_granteeIdHasBeenSet = true; m_granteeId = std::forward<GranteeIdT>(value); }
    template<typename GranteeIdT = Aws::String>
    DeleteMailboxPermissionsRequest& WithGranteeId(GranteeIdT&& value) { SetGranteeId(std::forward<GranteeIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_granteeId;
    bool m_granteeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
