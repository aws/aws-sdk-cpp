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
  class UpdatePrimaryEmailAddressRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API UpdatePrimaryEmailAddressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePrimaryEmailAddress"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The organization that contains the user, group, or resource to update.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }
    inline UpdatePrimaryEmailAddressRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}
    inline UpdatePrimaryEmailAddressRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}
    inline UpdatePrimaryEmailAddressRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user, group, or resource to update.</p> <p>The identifier can accept
     * <i>UseriD, ResourceId, or GroupId</i>, <i>Username, Resourcename, or
     * Groupname</i>, or <i>email</i>. The following identity formats are
     * available:</p> <ul> <li> <p>Entity ID: 12345678-1234-1234-1234-123456789012,
     * r-0123456789a0123456789b0123456789, or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }
    inline UpdatePrimaryEmailAddressRequest& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}
    inline UpdatePrimaryEmailAddressRequest& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}
    inline UpdatePrimaryEmailAddressRequest& WithEntityId(const char* value) { SetEntityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the email to be updated as primary.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }
    inline UpdatePrimaryEmailAddressRequest& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}
    inline UpdatePrimaryEmailAddressRequest& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}
    inline UpdatePrimaryEmailAddressRequest& WithEmail(const char* value) { SetEmail(value); return *this;}
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
