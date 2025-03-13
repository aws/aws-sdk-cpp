/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/AssetBundleResourcePermissions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>An object that contains a list of permissions to be applied to a list of
   * folder IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobFolderOverridePermissions">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobFolderOverridePermissions
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobFolderOverridePermissions() = default;
    AWS_QUICKSIGHT_API AssetBundleImportJobFolderOverridePermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobFolderOverridePermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of folder IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all folders in this asset bundle.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFolderIds() const { return m_folderIds; }
    inline bool FolderIdsHasBeenSet() const { return m_folderIdsHasBeenSet; }
    template<typename FolderIdsT = Aws::Vector<Aws::String>>
    void SetFolderIds(FolderIdsT&& value) { m_folderIdsHasBeenSet = true; m_folderIds = std::forward<FolderIdsT>(value); }
    template<typename FolderIdsT = Aws::Vector<Aws::String>>
    AssetBundleImportJobFolderOverridePermissions& WithFolderIds(FolderIdsT&& value) { SetFolderIds(std::forward<FolderIdsT>(value)); return *this;}
    template<typename FolderIdsT = Aws::String>
    AssetBundleImportJobFolderOverridePermissions& AddFolderIds(FolderIdsT&& value) { m_folderIdsHasBeenSet = true; m_folderIds.emplace_back(std::forward<FolderIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const AssetBundleResourcePermissions& GetPermissions() const { return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    template<typename PermissionsT = AssetBundleResourcePermissions>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = AssetBundleResourcePermissions>
    AssetBundleImportJobFolderOverridePermissions& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_folderIds;
    bool m_folderIdsHasBeenSet = false;

    AssetBundleResourcePermissions m_permissions;
    bool m_permissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
