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
  class GetAccessControlEffectRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API GetAccessControlEffectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAccessControlEffect"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier for the organization.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The identifier for the organization.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The identifier for the organization.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The identifier for the organization.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The identifier for the organization.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The identifier for the organization.</p>
     */
    inline GetAccessControlEffectRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The identifier for the organization.</p>
     */
    inline GetAccessControlEffectRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the organization.</p>
     */
    inline GetAccessControlEffectRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The IPv4 address.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>The IPv4 address.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>The IPv4 address.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>The IPv4 address.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>The IPv4 address.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>The IPv4 address.</p>
     */
    inline GetAccessControlEffectRequest& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>The IPv4 address.</p>
     */
    inline GetAccessControlEffectRequest& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>The IPv4 address.</p>
     */
    inline GetAccessControlEffectRequest& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * <p>The access protocol action. Valid values include <code>ActiveSync</code>,
     * <code>AutoDiscover</code>, <code>EWS</code>, <code>IMAP</code>,
     * <code>SMTP</code>, <code>WindowsOutlook</code>, and <code>WebMail</code>.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }

    /**
     * <p>The access protocol action. Valid values include <code>ActiveSync</code>,
     * <code>AutoDiscover</code>, <code>EWS</code>, <code>IMAP</code>,
     * <code>SMTP</code>, <code>WindowsOutlook</code>, and <code>WebMail</code>.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The access protocol action. Valid values include <code>ActiveSync</code>,
     * <code>AutoDiscover</code>, <code>EWS</code>, <code>IMAP</code>,
     * <code>SMTP</code>, <code>WindowsOutlook</code>, and <code>WebMail</code>.</p>
     */
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The access protocol action. Valid values include <code>ActiveSync</code>,
     * <code>AutoDiscover</code>, <code>EWS</code>, <code>IMAP</code>,
     * <code>SMTP</code>, <code>WindowsOutlook</code>, and <code>WebMail</code>.</p>
     */
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The access protocol action. Valid values include <code>ActiveSync</code>,
     * <code>AutoDiscover</code>, <code>EWS</code>, <code>IMAP</code>,
     * <code>SMTP</code>, <code>WindowsOutlook</code>, and <code>WebMail</code>.</p>
     */
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }

    /**
     * <p>The access protocol action. Valid values include <code>ActiveSync</code>,
     * <code>AutoDiscover</code>, <code>EWS</code>, <code>IMAP</code>,
     * <code>SMTP</code>, <code>WindowsOutlook</code>, and <code>WebMail</code>.</p>
     */
    inline GetAccessControlEffectRequest& WithAction(const Aws::String& value) { SetAction(value); return *this;}

    /**
     * <p>The access protocol action. Valid values include <code>ActiveSync</code>,
     * <code>AutoDiscover</code>, <code>EWS</code>, <code>IMAP</code>,
     * <code>SMTP</code>, <code>WindowsOutlook</code>, and <code>WebMail</code>.</p>
     */
    inline GetAccessControlEffectRequest& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>The access protocol action. Valid values include <code>ActiveSync</code>,
     * <code>AutoDiscover</code>, <code>EWS</code>, <code>IMAP</code>,
     * <code>SMTP</code>, <code>WindowsOutlook</code>, and <code>WebMail</code>.</p>
     */
    inline GetAccessControlEffectRequest& WithAction(const char* value) { SetAction(value); return *this;}


    /**
     * <p>The user ID.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The user ID.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The user ID.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The user ID.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The user ID.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The user ID.</p>
     */
    inline GetAccessControlEffectRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The user ID.</p>
     */
    inline GetAccessControlEffectRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The user ID.</p>
     */
    inline GetAccessControlEffectRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The impersonation role ID.</p>
     */
    inline const Aws::String& GetImpersonationRoleId() const{ return m_impersonationRoleId; }

    /**
     * <p>The impersonation role ID.</p>
     */
    inline bool ImpersonationRoleIdHasBeenSet() const { return m_impersonationRoleIdHasBeenSet; }

    /**
     * <p>The impersonation role ID.</p>
     */
    inline void SetImpersonationRoleId(const Aws::String& value) { m_impersonationRoleIdHasBeenSet = true; m_impersonationRoleId = value; }

    /**
     * <p>The impersonation role ID.</p>
     */
    inline void SetImpersonationRoleId(Aws::String&& value) { m_impersonationRoleIdHasBeenSet = true; m_impersonationRoleId = std::move(value); }

    /**
     * <p>The impersonation role ID.</p>
     */
    inline void SetImpersonationRoleId(const char* value) { m_impersonationRoleIdHasBeenSet = true; m_impersonationRoleId.assign(value); }

    /**
     * <p>The impersonation role ID.</p>
     */
    inline GetAccessControlEffectRequest& WithImpersonationRoleId(const Aws::String& value) { SetImpersonationRoleId(value); return *this;}

    /**
     * <p>The impersonation role ID.</p>
     */
    inline GetAccessControlEffectRequest& WithImpersonationRoleId(Aws::String&& value) { SetImpersonationRoleId(std::move(value)); return *this;}

    /**
     * <p>The impersonation role ID.</p>
     */
    inline GetAccessControlEffectRequest& WithImpersonationRoleId(const char* value) { SetImpersonationRoleId(value); return *this;}

  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_impersonationRoleId;
    bool m_impersonationRoleIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
