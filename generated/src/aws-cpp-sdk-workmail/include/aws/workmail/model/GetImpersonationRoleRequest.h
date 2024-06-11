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
  class GetImpersonationRoleRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API GetImpersonationRoleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetImpersonationRole"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The WorkMail organization from which to retrieve the impersonation role.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }
    inline GetImpersonationRoleRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}
    inline GetImpersonationRoleRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}
    inline GetImpersonationRoleRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The impersonation role ID to retrieve.</p>
     */
    inline const Aws::String& GetImpersonationRoleId() const{ return m_impersonationRoleId; }
    inline bool ImpersonationRoleIdHasBeenSet() const { return m_impersonationRoleIdHasBeenSet; }
    inline void SetImpersonationRoleId(const Aws::String& value) { m_impersonationRoleIdHasBeenSet = true; m_impersonationRoleId = value; }
    inline void SetImpersonationRoleId(Aws::String&& value) { m_impersonationRoleIdHasBeenSet = true; m_impersonationRoleId = std::move(value); }
    inline void SetImpersonationRoleId(const char* value) { m_impersonationRoleIdHasBeenSet = true; m_impersonationRoleId.assign(value); }
    inline GetImpersonationRoleRequest& WithImpersonationRoleId(const Aws::String& value) { SetImpersonationRoleId(value); return *this;}
    inline GetImpersonationRoleRequest& WithImpersonationRoleId(Aws::String&& value) { SetImpersonationRoleId(std::move(value)); return *this;}
    inline GetImpersonationRoleRequest& WithImpersonationRoleId(const char* value) { SetImpersonationRoleId(value); return *this;}
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_impersonationRoleId;
    bool m_impersonationRoleIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
