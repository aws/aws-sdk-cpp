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
  class AssumeImpersonationRoleRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API AssumeImpersonationRoleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssumeImpersonationRole"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The WorkMail organization under which the impersonation role will be
     * assumed.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The WorkMail organization under which the impersonation role will be
     * assumed.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The WorkMail organization under which the impersonation role will be
     * assumed.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The WorkMail organization under which the impersonation role will be
     * assumed.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The WorkMail organization under which the impersonation role will be
     * assumed.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The WorkMail organization under which the impersonation role will be
     * assumed.</p>
     */
    inline AssumeImpersonationRoleRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The WorkMail organization under which the impersonation role will be
     * assumed.</p>
     */
    inline AssumeImpersonationRoleRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The WorkMail organization under which the impersonation role will be
     * assumed.</p>
     */
    inline AssumeImpersonationRoleRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The impersonation role ID to assume.</p>
     */
    inline const Aws::String& GetImpersonationRoleId() const{ return m_impersonationRoleId; }

    /**
     * <p>The impersonation role ID to assume.</p>
     */
    inline bool ImpersonationRoleIdHasBeenSet() const { return m_impersonationRoleIdHasBeenSet; }

    /**
     * <p>The impersonation role ID to assume.</p>
     */
    inline void SetImpersonationRoleId(const Aws::String& value) { m_impersonationRoleIdHasBeenSet = true; m_impersonationRoleId = value; }

    /**
     * <p>The impersonation role ID to assume.</p>
     */
    inline void SetImpersonationRoleId(Aws::String&& value) { m_impersonationRoleIdHasBeenSet = true; m_impersonationRoleId = std::move(value); }

    /**
     * <p>The impersonation role ID to assume.</p>
     */
    inline void SetImpersonationRoleId(const char* value) { m_impersonationRoleIdHasBeenSet = true; m_impersonationRoleId.assign(value); }

    /**
     * <p>The impersonation role ID to assume.</p>
     */
    inline AssumeImpersonationRoleRequest& WithImpersonationRoleId(const Aws::String& value) { SetImpersonationRoleId(value); return *this;}

    /**
     * <p>The impersonation role ID to assume.</p>
     */
    inline AssumeImpersonationRoleRequest& WithImpersonationRoleId(Aws::String&& value) { SetImpersonationRoleId(std::move(value)); return *this;}

    /**
     * <p>The impersonation role ID to assume.</p>
     */
    inline AssumeImpersonationRoleRequest& WithImpersonationRoleId(const char* value) { SetImpersonationRoleId(value); return *this;}

  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_impersonationRoleId;
    bool m_impersonationRoleIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
