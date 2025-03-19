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
    AWS_QAPPS_API UpdateQAppPermissionsRequest() = default;

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
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    UpdateQAppPermissionsRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon Q App for which permissions are being
     * updated.</p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    UpdateQAppPermissionsRequest& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of permissions to grant for the Amazon Q App.</p>
     */
    inline const Aws::Vector<PermissionInput>& GetGrantPermissions() const { return m_grantPermissions; }
    inline bool GrantPermissionsHasBeenSet() const { return m_grantPermissionsHasBeenSet; }
    template<typename GrantPermissionsT = Aws::Vector<PermissionInput>>
    void SetGrantPermissions(GrantPermissionsT&& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions = std::forward<GrantPermissionsT>(value); }
    template<typename GrantPermissionsT = Aws::Vector<PermissionInput>>
    UpdateQAppPermissionsRequest& WithGrantPermissions(GrantPermissionsT&& value) { SetGrantPermissions(std::forward<GrantPermissionsT>(value)); return *this;}
    template<typename GrantPermissionsT = PermissionInput>
    UpdateQAppPermissionsRequest& AddGrantPermissions(GrantPermissionsT&& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions.emplace_back(std::forward<GrantPermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of permissions to revoke for the Amazon Q App.</p>
     */
    inline const Aws::Vector<PermissionInput>& GetRevokePermissions() const { return m_revokePermissions; }
    inline bool RevokePermissionsHasBeenSet() const { return m_revokePermissionsHasBeenSet; }
    template<typename RevokePermissionsT = Aws::Vector<PermissionInput>>
    void SetRevokePermissions(RevokePermissionsT&& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions = std::forward<RevokePermissionsT>(value); }
    template<typename RevokePermissionsT = Aws::Vector<PermissionInput>>
    UpdateQAppPermissionsRequest& WithRevokePermissions(RevokePermissionsT&& value) { SetRevokePermissions(std::forward<RevokePermissionsT>(value)); return *this;}
    template<typename RevokePermissionsT = PermissionInput>
    UpdateQAppPermissionsRequest& AddRevokePermissions(RevokePermissionsT&& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions.emplace_back(std::forward<RevokePermissionsT>(value)); return *this; }
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
