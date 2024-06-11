/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/WorkDocsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workdocs/model/NotificationOptions.h>
#include <aws/workdocs/model/SharePrincipal.h>
#include <utility>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class AddResourcePermissionsRequest : public WorkDocsRequest
  {
  public:
    AWS_WORKDOCS_API AddResourcePermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddResourcePermissions"; }

    AWS_WORKDOCS_API Aws::String SerializePayload() const override;

    AWS_WORKDOCS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon WorkDocs authentication token. Not required when using Amazon Web
     * Services administrator credentials to access the API.</p>
     */
    inline const Aws::String& GetAuthenticationToken() const{ return m_authenticationToken; }
    inline bool AuthenticationTokenHasBeenSet() const { return m_authenticationTokenHasBeenSet; }
    inline void SetAuthenticationToken(const Aws::String& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = value; }
    inline void SetAuthenticationToken(Aws::String&& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = std::move(value); }
    inline void SetAuthenticationToken(const char* value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken.assign(value); }
    inline AddResourcePermissionsRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}
    inline AddResourcePermissionsRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}
    inline AddResourcePermissionsRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline AddResourcePermissionsRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline AddResourcePermissionsRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline AddResourcePermissionsRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The users, groups, or organization being granted permission.</p>
     */
    inline const Aws::Vector<SharePrincipal>& GetPrincipals() const{ return m_principals; }
    inline bool PrincipalsHasBeenSet() const { return m_principalsHasBeenSet; }
    inline void SetPrincipals(const Aws::Vector<SharePrincipal>& value) { m_principalsHasBeenSet = true; m_principals = value; }
    inline void SetPrincipals(Aws::Vector<SharePrincipal>&& value) { m_principalsHasBeenSet = true; m_principals = std::move(value); }
    inline AddResourcePermissionsRequest& WithPrincipals(const Aws::Vector<SharePrincipal>& value) { SetPrincipals(value); return *this;}
    inline AddResourcePermissionsRequest& WithPrincipals(Aws::Vector<SharePrincipal>&& value) { SetPrincipals(std::move(value)); return *this;}
    inline AddResourcePermissionsRequest& AddPrincipals(const SharePrincipal& value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }
    inline AddResourcePermissionsRequest& AddPrincipals(SharePrincipal&& value) { m_principalsHasBeenSet = true; m_principals.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The notification options.</p>
     */
    inline const NotificationOptions& GetNotificationOptions() const{ return m_notificationOptions; }
    inline bool NotificationOptionsHasBeenSet() const { return m_notificationOptionsHasBeenSet; }
    inline void SetNotificationOptions(const NotificationOptions& value) { m_notificationOptionsHasBeenSet = true; m_notificationOptions = value; }
    inline void SetNotificationOptions(NotificationOptions&& value) { m_notificationOptionsHasBeenSet = true; m_notificationOptions = std::move(value); }
    inline AddResourcePermissionsRequest& WithNotificationOptions(const NotificationOptions& value) { SetNotificationOptions(value); return *this;}
    inline AddResourcePermissionsRequest& WithNotificationOptions(NotificationOptions&& value) { SetNotificationOptions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<SharePrincipal> m_principals;
    bool m_principalsHasBeenSet = false;

    NotificationOptions m_notificationOptions;
    bool m_notificationOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
