/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workmail/model/PermissionType.h>
#include <utility>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class PutMailboxPermissionsRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API PutMailboxPermissionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutMailboxPermissions"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the organization under which the user, group, or resource
     * exists.</p>
     */
    inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    template<typename OrganizationIdT = Aws::String>
    void SetOrganizationId(OrganizationIdT&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::forward<OrganizationIdT>(value); }
    template<typename OrganizationIdT = Aws::String>
    PutMailboxPermissionsRequest& WithOrganizationId(OrganizationIdT&& value) { SetOrganizationId(std::forward<OrganizationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user or resource for which to update mailbox
     * permissions.</p> <p>The identifier can be <i>UserId, ResourceID, or Group
     * Id</i>, <i>Username, Resourcename, or Groupname</i>, or <i>email</i>.</p> <ul>
     * <li> <p>Entity ID: 12345678-1234-1234-1234-123456789012,
     * r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline const Aws::String& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = Aws::String>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = Aws::String>
    PutMailboxPermissionsRequest& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user, group, or resource to which to grant the
     * permissions.</p> <p>The identifier can be <i>UserId, ResourceID, or Group
     * Id</i>, <i>Username, Resourcename, or Groupname</i>, or <i>email</i>.</p> <ul>
     * <li> <p>Grantee ID: 12345678-1234-1234-1234-123456789012,
     * r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * grantee@domain.tld</p> </li> <li> <p>Grantee name: grantee</p> </li> </ul>
     */
    inline const Aws::String& GetGranteeId() const { return m_granteeId; }
    inline bool GranteeIdHasBeenSet() const { return m_granteeIdHasBeenSet; }
    template<typename GranteeIdT = Aws::String>
    void SetGranteeId(GranteeIdT&& value) { m_granteeIdHasBeenSet = true; m_granteeId = std::forward<GranteeIdT>(value); }
    template<typename GranteeIdT = Aws::String>
    PutMailboxPermissionsRequest& WithGranteeId(GranteeIdT&& value) { SetGranteeId(std::forward<GranteeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions granted to the grantee. SEND_AS allows the grantee to send
     * email as the owner of the mailbox (the grantee is not mentioned on these
     * emails). SEND_ON_BEHALF allows the grantee to send email on behalf of the owner
     * of the mailbox (the grantee is not mentioned as the physical sender of these
     * emails). FULL_ACCESS allows the grantee full access to the mailbox, irrespective
     * of other folder-level permissions set on the mailbox.</p>
     */
    inline const Aws::Vector<PermissionType>& GetPermissionValues() const { return m_permissionValues; }
    inline bool PermissionValuesHasBeenSet() const { return m_permissionValuesHasBeenSet; }
    template<typename PermissionValuesT = Aws::Vector<PermissionType>>
    void SetPermissionValues(PermissionValuesT&& value) { m_permissionValuesHasBeenSet = true; m_permissionValues = std::forward<PermissionValuesT>(value); }
    template<typename PermissionValuesT = Aws::Vector<PermissionType>>
    PutMailboxPermissionsRequest& WithPermissionValues(PermissionValuesT&& value) { SetPermissionValues(std::forward<PermissionValuesT>(value)); return *this;}
    inline PutMailboxPermissionsRequest& AddPermissionValues(PermissionType value) { m_permissionValuesHasBeenSet = true; m_permissionValues.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_granteeId;
    bool m_granteeIdHasBeenSet = false;

    Aws::Vector<PermissionType> m_permissionValues;
    bool m_permissionValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
