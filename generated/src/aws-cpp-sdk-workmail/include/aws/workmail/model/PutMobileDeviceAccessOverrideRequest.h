/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/MobileDeviceAccessRuleEffect.h>
#include <utility>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class PutMobileDeviceAccessOverrideRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API PutMobileDeviceAccessOverrideRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutMobileDeviceAccessOverride"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifies the WorkMail organization for which you create the override.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>Identifies the WorkMail organization for which you create the override.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>Identifies the WorkMail organization for which you create the override.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>Identifies the WorkMail organization for which you create the override.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>Identifies the WorkMail organization for which you create the override.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>Identifies the WorkMail organization for which you create the override.</p>
     */
    inline PutMobileDeviceAccessOverrideRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>Identifies the WorkMail organization for which you create the override.</p>
     */
    inline PutMobileDeviceAccessOverrideRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>Identifies the WorkMail organization for which you create the override.</p>
     */
    inline PutMobileDeviceAccessOverrideRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The WorkMail user for which you create the override. Accepts the following
     * types of user identities:</p> <ul> <li> <p>User ID:
     * <code>12345678-1234-1234-1234-123456789012</code> or
     * <code>S-1-1-12-1234567890-123456789-123456789-1234</code> </p> </li> <li>
     * <p>Email address: <code>user@domain.tld</code> </p> </li> <li> <p>User name:
     * <code>user</code> </p> </li> </ul>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The WorkMail user for which you create the override. Accepts the following
     * types of user identities:</p> <ul> <li> <p>User ID:
     * <code>12345678-1234-1234-1234-123456789012</code> or
     * <code>S-1-1-12-1234567890-123456789-123456789-1234</code> </p> </li> <li>
     * <p>Email address: <code>user@domain.tld</code> </p> </li> <li> <p>User name:
     * <code>user</code> </p> </li> </ul>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The WorkMail user for which you create the override. Accepts the following
     * types of user identities:</p> <ul> <li> <p>User ID:
     * <code>12345678-1234-1234-1234-123456789012</code> or
     * <code>S-1-1-12-1234567890-123456789-123456789-1234</code> </p> </li> <li>
     * <p>Email address: <code>user@domain.tld</code> </p> </li> <li> <p>User name:
     * <code>user</code> </p> </li> </ul>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The WorkMail user for which you create the override. Accepts the following
     * types of user identities:</p> <ul> <li> <p>User ID:
     * <code>12345678-1234-1234-1234-123456789012</code> or
     * <code>S-1-1-12-1234567890-123456789-123456789-1234</code> </p> </li> <li>
     * <p>Email address: <code>user@domain.tld</code> </p> </li> <li> <p>User name:
     * <code>user</code> </p> </li> </ul>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The WorkMail user for which you create the override. Accepts the following
     * types of user identities:</p> <ul> <li> <p>User ID:
     * <code>12345678-1234-1234-1234-123456789012</code> or
     * <code>S-1-1-12-1234567890-123456789-123456789-1234</code> </p> </li> <li>
     * <p>Email address: <code>user@domain.tld</code> </p> </li> <li> <p>User name:
     * <code>user</code> </p> </li> </ul>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The WorkMail user for which you create the override. Accepts the following
     * types of user identities:</p> <ul> <li> <p>User ID:
     * <code>12345678-1234-1234-1234-123456789012</code> or
     * <code>S-1-1-12-1234567890-123456789-123456789-1234</code> </p> </li> <li>
     * <p>Email address: <code>user@domain.tld</code> </p> </li> <li> <p>User name:
     * <code>user</code> </p> </li> </ul>
     */
    inline PutMobileDeviceAccessOverrideRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The WorkMail user for which you create the override. Accepts the following
     * types of user identities:</p> <ul> <li> <p>User ID:
     * <code>12345678-1234-1234-1234-123456789012</code> or
     * <code>S-1-1-12-1234567890-123456789-123456789-1234</code> </p> </li> <li>
     * <p>Email address: <code>user@domain.tld</code> </p> </li> <li> <p>User name:
     * <code>user</code> </p> </li> </ul>
     */
    inline PutMobileDeviceAccessOverrideRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The WorkMail user for which you create the override. Accepts the following
     * types of user identities:</p> <ul> <li> <p>User ID:
     * <code>12345678-1234-1234-1234-123456789012</code> or
     * <code>S-1-1-12-1234567890-123456789-123456789-1234</code> </p> </li> <li>
     * <p>Email address: <code>user@domain.tld</code> </p> </li> <li> <p>User name:
     * <code>user</code> </p> </li> </ul>
     */
    inline PutMobileDeviceAccessOverrideRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The mobile device for which you create the override. <code>DeviceId</code> is
     * case insensitive.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The mobile device for which you create the override. <code>DeviceId</code> is
     * case insensitive.</p>
     */
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }

    /**
     * <p>The mobile device for which you create the override. <code>DeviceId</code> is
     * case insensitive.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }

    /**
     * <p>The mobile device for which you create the override. <code>DeviceId</code> is
     * case insensitive.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }

    /**
     * <p>The mobile device for which you create the override. <code>DeviceId</code> is
     * case insensitive.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }

    /**
     * <p>The mobile device for which you create the override. <code>DeviceId</code> is
     * case insensitive.</p>
     */
    inline PutMobileDeviceAccessOverrideRequest& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The mobile device for which you create the override. <code>DeviceId</code> is
     * case insensitive.</p>
     */
    inline PutMobileDeviceAccessOverrideRequest& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The mobile device for which you create the override. <code>DeviceId</code> is
     * case insensitive.</p>
     */
    inline PutMobileDeviceAccessOverrideRequest& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>The effect of the override, <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline const MobileDeviceAccessRuleEffect& GetEffect() const{ return m_effect; }

    /**
     * <p>The effect of the override, <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline bool EffectHasBeenSet() const { return m_effectHasBeenSet; }

    /**
     * <p>The effect of the override, <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline void SetEffect(const MobileDeviceAccessRuleEffect& value) { m_effectHasBeenSet = true; m_effect = value; }

    /**
     * <p>The effect of the override, <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline void SetEffect(MobileDeviceAccessRuleEffect&& value) { m_effectHasBeenSet = true; m_effect = std::move(value); }

    /**
     * <p>The effect of the override, <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline PutMobileDeviceAccessOverrideRequest& WithEffect(const MobileDeviceAccessRuleEffect& value) { SetEffect(value); return *this;}

    /**
     * <p>The effect of the override, <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline PutMobileDeviceAccessOverrideRequest& WithEffect(MobileDeviceAccessRuleEffect&& value) { SetEffect(std::move(value)); return *this;}


    /**
     * <p>A description of the override.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the override.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the override.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the override.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the override.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the override.</p>
     */
    inline PutMobileDeviceAccessOverrideRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the override.</p>
     */
    inline PutMobileDeviceAccessOverrideRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the override.</p>
     */
    inline PutMobileDeviceAccessOverrideRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    MobileDeviceAccessRuleEffect m_effect;
    bool m_effectHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
