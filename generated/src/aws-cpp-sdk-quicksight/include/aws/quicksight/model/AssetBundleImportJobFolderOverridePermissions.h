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
    AWS_QUICKSIGHT_API AssetBundleImportJobFolderOverridePermissions();
    AWS_QUICKSIGHT_API AssetBundleImportJobFolderOverridePermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobFolderOverridePermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of folder IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all folders in this asset bundle.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFolderIds() const{ return m_folderIds; }
    inline bool FolderIdsHasBeenSet() const { return m_folderIdsHasBeenSet; }
    inline void SetFolderIds(const Aws::Vector<Aws::String>& value) { m_folderIdsHasBeenSet = true; m_folderIds = value; }
    inline void SetFolderIds(Aws::Vector<Aws::String>&& value) { m_folderIdsHasBeenSet = true; m_folderIds = std::move(value); }
    inline AssetBundleImportJobFolderOverridePermissions& WithFolderIds(const Aws::Vector<Aws::String>& value) { SetFolderIds(value); return *this;}
    inline AssetBundleImportJobFolderOverridePermissions& WithFolderIds(Aws::Vector<Aws::String>&& value) { SetFolderIds(std::move(value)); return *this;}
    inline AssetBundleImportJobFolderOverridePermissions& AddFolderIds(const Aws::String& value) { m_folderIdsHasBeenSet = true; m_folderIds.push_back(value); return *this; }
    inline AssetBundleImportJobFolderOverridePermissions& AddFolderIds(Aws::String&& value) { m_folderIdsHasBeenSet = true; m_folderIds.push_back(std::move(value)); return *this; }
    inline AssetBundleImportJobFolderOverridePermissions& AddFolderIds(const char* value) { m_folderIdsHasBeenSet = true; m_folderIds.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const AssetBundleResourcePermissions& GetPermissions() const{ return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    inline void SetPermissions(const AssetBundleResourcePermissions& value) { m_permissionsHasBeenSet = true; m_permissions = value; }
    inline void SetPermissions(AssetBundleResourcePermissions&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }
    inline AssetBundleImportJobFolderOverridePermissions& WithPermissions(const AssetBundleResourcePermissions& value) { SetPermissions(value); return *this;}
    inline AssetBundleImportJobFolderOverridePermissions& WithPermissions(AssetBundleResourcePermissions&& value) { SetPermissions(std::move(value)); return *this;}
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
