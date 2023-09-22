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
  class DeregisterFromWorkMailRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API DeregisterFromWorkMailRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterFromWorkMail"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier for the organization under which the WorkMail entity
     * exists.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The identifier for the organization under which the WorkMail entity
     * exists.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The identifier for the organization under which the WorkMail entity
     * exists.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The identifier for the organization under which the WorkMail entity
     * exists.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The identifier for the organization under which the WorkMail entity
     * exists.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The identifier for the organization under which the WorkMail entity
     * exists.</p>
     */
    inline DeregisterFromWorkMailRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The identifier for the organization under which the WorkMail entity
     * exists.</p>
     */
    inline DeregisterFromWorkMailRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the organization under which the WorkMail entity
     * exists.</p>
     */
    inline DeregisterFromWorkMailRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The identifier for the member to be updated.</p> <p>The identifier can be
     * <i>UserId, ResourceId, or Group Id</i>, <i>Username, Resourcename, or
     * Groupname</i>, or <i>email</i>.</p> <ul> <li> <p>Entity ID:
     * 12345678-1234-1234-1234-123456789012, r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The identifier for the member to be updated.</p> <p>The identifier can be
     * <i>UserId, ResourceId, or Group Id</i>, <i>Username, Resourcename, or
     * Groupname</i>, or <i>email</i>.</p> <ul> <li> <p>Entity ID:
     * 12345678-1234-1234-1234-123456789012, r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The identifier for the member to be updated.</p> <p>The identifier can be
     * <i>UserId, ResourceId, or Group Id</i>, <i>Username, Resourcename, or
     * Groupname</i>, or <i>email</i>.</p> <ul> <li> <p>Entity ID:
     * 12345678-1234-1234-1234-123456789012, r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The identifier for the member to be updated.</p> <p>The identifier can be
     * <i>UserId, ResourceId, or Group Id</i>, <i>Username, Resourcename, or
     * Groupname</i>, or <i>email</i>.</p> <ul> <li> <p>Entity ID:
     * 12345678-1234-1234-1234-123456789012, r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The identifier for the member to be updated.</p> <p>The identifier can be
     * <i>UserId, ResourceId, or Group Id</i>, <i>Username, Resourcename, or
     * Groupname</i>, or <i>email</i>.</p> <ul> <li> <p>Entity ID:
     * 12345678-1234-1234-1234-123456789012, r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The identifier for the member to be updated.</p> <p>The identifier can be
     * <i>UserId, ResourceId, or Group Id</i>, <i>Username, Resourcename, or
     * Groupname</i>, or <i>email</i>.</p> <ul> <li> <p>Entity ID:
     * 12345678-1234-1234-1234-123456789012, r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline DeregisterFromWorkMailRequest& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The identifier for the member to be updated.</p> <p>The identifier can be
     * <i>UserId, ResourceId, or Group Id</i>, <i>Username, Resourcename, or
     * Groupname</i>, or <i>email</i>.</p> <ul> <li> <p>Entity ID:
     * 12345678-1234-1234-1234-123456789012, r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline DeregisterFromWorkMailRequest& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the member to be updated.</p> <p>The identifier can be
     * <i>UserId, ResourceId, or Group Id</i>, <i>Username, Resourcename, or
     * Groupname</i>, or <i>email</i>.</p> <ul> <li> <p>Entity ID:
     * 12345678-1234-1234-1234-123456789012, r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline DeregisterFromWorkMailRequest& WithEntityId(const char* value) { SetEntityId(value); return *this;}

  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
