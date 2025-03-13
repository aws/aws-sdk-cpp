/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ResourcePermission.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateFolderPermissionsRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateFolderPermissionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFolderPermissions"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID for the Amazon Web Services account that contains the folder to
     * update.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    UpdateFolderPermissionsRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the folder.</p>
     */
    inline const Aws::String& GetFolderId() const { return m_folderId; }
    inline bool FolderIdHasBeenSet() const { return m_folderIdHasBeenSet; }
    template<typename FolderIdT = Aws::String>
    void SetFolderId(FolderIdT&& value) { m_folderIdHasBeenSet = true; m_folderId = std::forward<FolderIdT>(value); }
    template<typename FolderIdT = Aws::String>
    UpdateFolderPermissionsRequest& WithFolderId(FolderIdT&& value) { SetFolderId(std::forward<FolderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions that you want to grant on a resource. Namespace ARNs are not
     * supported <code>Principal</code> values for folder permissions.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetGrantPermissions() const { return m_grantPermissions; }
    inline bool GrantPermissionsHasBeenSet() const { return m_grantPermissionsHasBeenSet; }
    template<typename GrantPermissionsT = Aws::Vector<ResourcePermission>>
    void SetGrantPermissions(GrantPermissionsT&& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions = std::forward<GrantPermissionsT>(value); }
    template<typename GrantPermissionsT = Aws::Vector<ResourcePermission>>
    UpdateFolderPermissionsRequest& WithGrantPermissions(GrantPermissionsT&& value) { SetGrantPermissions(std::forward<GrantPermissionsT>(value)); return *this;}
    template<typename GrantPermissionsT = ResourcePermission>
    UpdateFolderPermissionsRequest& AddGrantPermissions(GrantPermissionsT&& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions.emplace_back(std::forward<GrantPermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The permissions that you want to revoke from a resource. Namespace ARNs are
     * not supported <code>Principal</code> values for folder permissions.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetRevokePermissions() const { return m_revokePermissions; }
    inline bool RevokePermissionsHasBeenSet() const { return m_revokePermissionsHasBeenSet; }
    template<typename RevokePermissionsT = Aws::Vector<ResourcePermission>>
    void SetRevokePermissions(RevokePermissionsT&& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions = std::forward<RevokePermissionsT>(value); }
    template<typename RevokePermissionsT = Aws::Vector<ResourcePermission>>
    UpdateFolderPermissionsRequest& WithRevokePermissions(RevokePermissionsT&& value) { SetRevokePermissions(std::forward<RevokePermissionsT>(value)); return *this;}
    template<typename RevokePermissionsT = ResourcePermission>
    UpdateFolderPermissionsRequest& AddRevokePermissions(RevokePermissionsT&& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions.emplace_back(std::forward<RevokePermissionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_folderId;
    bool m_folderIdHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_grantPermissions;
    bool m_grantPermissionsHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_revokePermissions;
    bool m_revokePermissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
