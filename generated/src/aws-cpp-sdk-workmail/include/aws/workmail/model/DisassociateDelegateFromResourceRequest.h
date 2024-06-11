﻿/**
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
  class DisassociateDelegateFromResourceRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API DisassociateDelegateFromResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateDelegateFromResource"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier for the organization under which the resource exists.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }
    inline DisassociateDelegateFromResourceRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}
    inline DisassociateDelegateFromResourceRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}
    inline DisassociateDelegateFromResourceRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the resource from which delegates' set members are removed.
     * </p> <p>The identifier can accept <i>ResourceId</i>, <i>Resourcename</i>, or
     * <i>email</i>. The following identity formats are available:</p> <ul> <li>
     * <p>Resource ID: r-0123456789a0123456789b0123456789</p> </li> <li> <p>Email
     * address: resource@domain.tld</p> </li> <li> <p>Resource name: resource</p> </li>
     * </ul>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline DisassociateDelegateFromResourceRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline DisassociateDelegateFromResourceRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline DisassociateDelegateFromResourceRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the member (user, group) to be removed from the resource's
     * delegates.</p> <p>The entity ID can accept <i>UserId or GroupID</i>, <i>Username
     * or Groupname</i>, or <i>email</i>.</p> <ul> <li> <p>Entity:
     * 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity: entity</p> </li> </ul>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }
    inline DisassociateDelegateFromResourceRequest& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}
    inline DisassociateDelegateFromResourceRequest& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}
    inline DisassociateDelegateFromResourceRequest& WithEntityId(const char* value) { SetEntityId(value); return *this;}
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
