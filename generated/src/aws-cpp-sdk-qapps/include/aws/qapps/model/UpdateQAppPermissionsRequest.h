/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/qapps/QAppsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qapps/model/PermissionInput.h>
#include <utility>

namespace Aws
{
namespace QApps
{
namespace Model
{

  /**
   */
  class UpdateQAppPermissionsRequest : public QAppsRequest
  {
  public:
    AWS_QAPPS_API UpdateQAppPermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQAppPermissions"; }

    AWS_QAPPS_API Aws::String SerializePayload() const override;

    AWS_QAPPS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the Amazon Q Business application environment
     * instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline UpdateQAppPermissionsRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline UpdateQAppPermissionsRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline UpdateQAppPermissionsRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon Q App for which permissions are being
     * updated.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }
    inline UpdateQAppPermissionsRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline UpdateQAppPermissionsRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline UpdateQAppPermissionsRequest& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of permissions to grant for the Amazon Q App.</p>
     */
    inline const Aws::Vector<PermissionInput>& GetGrantPermissions() const{ return m_grantPermissions; }
    inline bool GrantPermissionsHasBeenSet() const { return m_grantPermissionsHasBeenSet; }
    inline void SetGrantPermissions(const Aws::Vector<PermissionInput>& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions = value; }
    inline void SetGrantPermissions(Aws::Vector<PermissionInput>&& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions = std::move(value); }
    inline UpdateQAppPermissionsRequest& WithGrantPermissions(const Aws::Vector<PermissionInput>& value) { SetGrantPermissions(value); return *this;}
    inline UpdateQAppPermissionsRequest& WithGrantPermissions(Aws::Vector<PermissionInput>&& value) { SetGrantPermissions(std::move(value)); return *this;}
    inline UpdateQAppPermissionsRequest& AddGrantPermissions(const PermissionInput& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions.push_back(value); return *this; }
    inline UpdateQAppPermissionsRequest& AddGrantPermissions(PermissionInput&& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of permissions to revoke for the Amazon Q App.</p>
     */
    inline const Aws::Vector<PermissionInput>& GetRevokePermissions() const{ return m_revokePermissions; }
    inline bool RevokePermissionsHasBeenSet() const { return m_revokePermissionsHasBeenSet; }
    inline void SetRevokePermissions(const Aws::Vector<PermissionInput>& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions = value; }
    inline void SetRevokePermissions(Aws::Vector<PermissionInput>&& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions = std::move(value); }
    inline UpdateQAppPermissionsRequest& WithRevokePermissions(const Aws::Vector<PermissionInput>& value) { SetRevokePermissions(value); return *this;}
    inline UpdateQAppPermissionsRequest& WithRevokePermissions(Aws::Vector<PermissionInput>&& value) { SetRevokePermissions(std::move(value)); return *this;}
    inline UpdateQAppPermissionsRequest& AddRevokePermissions(const PermissionInput& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions.push_back(value); return *this; }
    inline UpdateQAppPermissionsRequest& AddRevokePermissions(PermissionInput&& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::Vector<PermissionInput> m_grantPermissions;
    bool m_grantPermissionsHasBeenSet = false;

    Aws::Vector<PermissionInput> m_revokePermissions;
    bool m_revokePermissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
