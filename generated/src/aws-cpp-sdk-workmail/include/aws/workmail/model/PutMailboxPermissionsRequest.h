﻿/**
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
    AWS_WORKMAIL_API PutMailboxPermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutMailboxPermissions"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the organization under which the user, group, or resource
     * exists.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The identifier of the organization under which the user, group, or resource
     * exists.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The identifier of the organization under which the user, group, or resource
     * exists.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The identifier of the organization under which the user, group, or resource
     * exists.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The identifier of the organization under which the user, group, or resource
     * exists.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The identifier of the organization under which the user, group, or resource
     * exists.</p>
     */
    inline PutMailboxPermissionsRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The identifier of the organization under which the user, group, or resource
     * exists.</p>
     */
    inline PutMailboxPermissionsRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the organization under which the user, group, or resource
     * exists.</p>
     */
    inline PutMailboxPermissionsRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The identifier of the user or resource for which to update mailbox
     * permissions.</p> <p>The identifier can be <i>UserId, ResourceID, or Group
     * Id</i>, <i>Username, Resourcename, or Groupname</i>, or <i>email</i>.</p> <ul>
     * <li> <p>Entity ID: 12345678-1234-1234-1234-123456789012,
     * r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The identifier of the user or resource for which to update mailbox
     * permissions.</p> <p>The identifier can be <i>UserId, ResourceID, or Group
     * Id</i>, <i>Username, Resourcename, or Groupname</i>, or <i>email</i>.</p> <ul>
     * <li> <p>Entity ID: 12345678-1234-1234-1234-123456789012,
     * r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The identifier of the user or resource for which to update mailbox
     * permissions.</p> <p>The identifier can be <i>UserId, ResourceID, or Group
     * Id</i>, <i>Username, Resourcename, or Groupname</i>, or <i>email</i>.</p> <ul>
     * <li> <p>Entity ID: 12345678-1234-1234-1234-123456789012,
     * r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The identifier of the user or resource for which to update mailbox
     * permissions.</p> <p>The identifier can be <i>UserId, ResourceID, or Group
     * Id</i>, <i>Username, Resourcename, or Groupname</i>, or <i>email</i>.</p> <ul>
     * <li> <p>Entity ID: 12345678-1234-1234-1234-123456789012,
     * r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The identifier of the user or resource for which to update mailbox
     * permissions.</p> <p>The identifier can be <i>UserId, ResourceID, or Group
     * Id</i>, <i>Username, Resourcename, or Groupname</i>, or <i>email</i>.</p> <ul>
     * <li> <p>Entity ID: 12345678-1234-1234-1234-123456789012,
     * r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The identifier of the user or resource for which to update mailbox
     * permissions.</p> <p>The identifier can be <i>UserId, ResourceID, or Group
     * Id</i>, <i>Username, Resourcename, or Groupname</i>, or <i>email</i>.</p> <ul>
     * <li> <p>Entity ID: 12345678-1234-1234-1234-123456789012,
     * r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline PutMailboxPermissionsRequest& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The identifier of the user or resource for which to update mailbox
     * permissions.</p> <p>The identifier can be <i>UserId, ResourceID, or Group
     * Id</i>, <i>Username, Resourcename, or Groupname</i>, or <i>email</i>.</p> <ul>
     * <li> <p>Entity ID: 12345678-1234-1234-1234-123456789012,
     * r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline PutMailboxPermissionsRequest& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user or resource for which to update mailbox
     * permissions.</p> <p>The identifier can be <i>UserId, ResourceID, or Group
     * Id</i>, <i>Username, Resourcename, or Groupname</i>, or <i>email</i>.</p> <ul>
     * <li> <p>Entity ID: 12345678-1234-1234-1234-123456789012,
     * r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline PutMailboxPermissionsRequest& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>The identifier of the user, group, or resource to which to grant the
     * permissions.</p> <p>The identifier can be <i>UserId, ResourceID, or Group
     * Id</i>, <i>Username, Resourcename, or Groupname</i>, or <i>email</i>.</p> <ul>
     * <li> <p>Grantee ID: 12345678-1234-1234-1234-123456789012,
     * r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * grantee@domain.tld</p> </li> <li> <p>Grantee name: grantee</p> </li> </ul>
     */
    inline const Aws::String& GetGranteeId() const{ return m_granteeId; }

    /**
     * <p>The identifier of the user, group, or resource to which to grant the
     * permissions.</p> <p>The identifier can be <i>UserId, ResourceID, or Group
     * Id</i>, <i>Username, Resourcename, or Groupname</i>, or <i>email</i>.</p> <ul>
     * <li> <p>Grantee ID: 12345678-1234-1234-1234-123456789012,
     * r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * grantee@domain.tld</p> </li> <li> <p>Grantee name: grantee</p> </li> </ul>
     */
    inline bool GranteeIdHasBeenSet() const { return m_granteeIdHasBeenSet; }

    /**
     * <p>The identifier of the user, group, or resource to which to grant the
     * permissions.</p> <p>The identifier can be <i>UserId, ResourceID, or Group
     * Id</i>, <i>Username, Resourcename, or Groupname</i>, or <i>email</i>.</p> <ul>
     * <li> <p>Grantee ID: 12345678-1234-1234-1234-123456789012,
     * r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * grantee@domain.tld</p> </li> <li> <p>Grantee name: grantee</p> </li> </ul>
     */
    inline void SetGranteeId(const Aws::String& value) { m_granteeIdHasBeenSet = true; m_granteeId = value; }

    /**
     * <p>The identifier of the user, group, or resource to which to grant the
     * permissions.</p> <p>The identifier can be <i>UserId, ResourceID, or Group
     * Id</i>, <i>Username, Resourcename, or Groupname</i>, or <i>email</i>.</p> <ul>
     * <li> <p>Grantee ID: 12345678-1234-1234-1234-123456789012,
     * r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * grantee@domain.tld</p> </li> <li> <p>Grantee name: grantee</p> </li> </ul>
     */
    inline void SetGranteeId(Aws::String&& value) { m_granteeIdHasBeenSet = true; m_granteeId = std::move(value); }

    /**
     * <p>The identifier of the user, group, or resource to which to grant the
     * permissions.</p> <p>The identifier can be <i>UserId, ResourceID, or Group
     * Id</i>, <i>Username, Resourcename, or Groupname</i>, or <i>email</i>.</p> <ul>
     * <li> <p>Grantee ID: 12345678-1234-1234-1234-123456789012,
     * r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * grantee@domain.tld</p> </li> <li> <p>Grantee name: grantee</p> </li> </ul>
     */
    inline void SetGranteeId(const char* value) { m_granteeIdHasBeenSet = true; m_granteeId.assign(value); }

    /**
     * <p>The identifier of the user, group, or resource to which to grant the
     * permissions.</p> <p>The identifier can be <i>UserId, ResourceID, or Group
     * Id</i>, <i>Username, Resourcename, or Groupname</i>, or <i>email</i>.</p> <ul>
     * <li> <p>Grantee ID: 12345678-1234-1234-1234-123456789012,
     * r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * grantee@domain.tld</p> </li> <li> <p>Grantee name: grantee</p> </li> </ul>
     */
    inline PutMailboxPermissionsRequest& WithGranteeId(const Aws::String& value) { SetGranteeId(value); return *this;}

    /**
     * <p>The identifier of the user, group, or resource to which to grant the
     * permissions.</p> <p>The identifier can be <i>UserId, ResourceID, or Group
     * Id</i>, <i>Username, Resourcename, or Groupname</i>, or <i>email</i>.</p> <ul>
     * <li> <p>Grantee ID: 12345678-1234-1234-1234-123456789012,
     * r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * grantee@domain.tld</p> </li> <li> <p>Grantee name: grantee</p> </li> </ul>
     */
    inline PutMailboxPermissionsRequest& WithGranteeId(Aws::String&& value) { SetGranteeId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user, group, or resource to which to grant the
     * permissions.</p> <p>The identifier can be <i>UserId, ResourceID, or Group
     * Id</i>, <i>Username, Resourcename, or Groupname</i>, or <i>email</i>.</p> <ul>
     * <li> <p>Grantee ID: 12345678-1234-1234-1234-123456789012,
     * r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * grantee@domain.tld</p> </li> <li> <p>Grantee name: grantee</p> </li> </ul>
     */
    inline PutMailboxPermissionsRequest& WithGranteeId(const char* value) { SetGranteeId(value); return *this;}


    /**
     * <p>The permissions granted to the grantee. SEND_AS allows the grantee to send
     * email as the owner of the mailbox (the grantee is not mentioned on these
     * emails). SEND_ON_BEHALF allows the grantee to send email on behalf of the owner
     * of the mailbox (the grantee is not mentioned as the physical sender of these
     * emails). FULL_ACCESS allows the grantee full access to the mailbox, irrespective
     * of other folder-level permissions set on the mailbox.</p>
     */
    inline const Aws::Vector<PermissionType>& GetPermissionValues() const{ return m_permissionValues; }

    /**
     * <p>The permissions granted to the grantee. SEND_AS allows the grantee to send
     * email as the owner of the mailbox (the grantee is not mentioned on these
     * emails). SEND_ON_BEHALF allows the grantee to send email on behalf of the owner
     * of the mailbox (the grantee is not mentioned as the physical sender of these
     * emails). FULL_ACCESS allows the grantee full access to the mailbox, irrespective
     * of other folder-level permissions set on the mailbox.</p>
     */
    inline bool PermissionValuesHasBeenSet() const { return m_permissionValuesHasBeenSet; }

    /**
     * <p>The permissions granted to the grantee. SEND_AS allows the grantee to send
     * email as the owner of the mailbox (the grantee is not mentioned on these
     * emails). SEND_ON_BEHALF allows the grantee to send email on behalf of the owner
     * of the mailbox (the grantee is not mentioned as the physical sender of these
     * emails). FULL_ACCESS allows the grantee full access to the mailbox, irrespective
     * of other folder-level permissions set on the mailbox.</p>
     */
    inline void SetPermissionValues(const Aws::Vector<PermissionType>& value) { m_permissionValuesHasBeenSet = true; m_permissionValues = value; }

    /**
     * <p>The permissions granted to the grantee. SEND_AS allows the grantee to send
     * email as the owner of the mailbox (the grantee is not mentioned on these
     * emails). SEND_ON_BEHALF allows the grantee to send email on behalf of the owner
     * of the mailbox (the grantee is not mentioned as the physical sender of these
     * emails). FULL_ACCESS allows the grantee full access to the mailbox, irrespective
     * of other folder-level permissions set on the mailbox.</p>
     */
    inline void SetPermissionValues(Aws::Vector<PermissionType>&& value) { m_permissionValuesHasBeenSet = true; m_permissionValues = std::move(value); }

    /**
     * <p>The permissions granted to the grantee. SEND_AS allows the grantee to send
     * email as the owner of the mailbox (the grantee is not mentioned on these
     * emails). SEND_ON_BEHALF allows the grantee to send email on behalf of the owner
     * of the mailbox (the grantee is not mentioned as the physical sender of these
     * emails). FULL_ACCESS allows the grantee full access to the mailbox, irrespective
     * of other folder-level permissions set on the mailbox.</p>
     */
    inline PutMailboxPermissionsRequest& WithPermissionValues(const Aws::Vector<PermissionType>& value) { SetPermissionValues(value); return *this;}

    /**
     * <p>The permissions granted to the grantee. SEND_AS allows the grantee to send
     * email as the owner of the mailbox (the grantee is not mentioned on these
     * emails). SEND_ON_BEHALF allows the grantee to send email on behalf of the owner
     * of the mailbox (the grantee is not mentioned as the physical sender of these
     * emails). FULL_ACCESS allows the grantee full access to the mailbox, irrespective
     * of other folder-level permissions set on the mailbox.</p>
     */
    inline PutMailboxPermissionsRequest& WithPermissionValues(Aws::Vector<PermissionType>&& value) { SetPermissionValues(std::move(value)); return *this;}

    /**
     * <p>The permissions granted to the grantee. SEND_AS allows the grantee to send
     * email as the owner of the mailbox (the grantee is not mentioned on these
     * emails). SEND_ON_BEHALF allows the grantee to send email on behalf of the owner
     * of the mailbox (the grantee is not mentioned as the physical sender of these
     * emails). FULL_ACCESS allows the grantee full access to the mailbox, irrespective
     * of other folder-level permissions set on the mailbox.</p>
     */
    inline PutMailboxPermissionsRequest& AddPermissionValues(const PermissionType& value) { m_permissionValuesHasBeenSet = true; m_permissionValues.push_back(value); return *this; }

    /**
     * <p>The permissions granted to the grantee. SEND_AS allows the grantee to send
     * email as the owner of the mailbox (the grantee is not mentioned on these
     * emails). SEND_ON_BEHALF allows the grantee to send email on behalf of the owner
     * of the mailbox (the grantee is not mentioned as the physical sender of these
     * emails). FULL_ACCESS allows the grantee full access to the mailbox, irrespective
     * of other folder-level permissions set on the mailbox.</p>
     */
    inline PutMailboxPermissionsRequest& AddPermissionValues(PermissionType&& value) { m_permissionValuesHasBeenSet = true; m_permissionValues.push_back(std::move(value)); return *this; }

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
