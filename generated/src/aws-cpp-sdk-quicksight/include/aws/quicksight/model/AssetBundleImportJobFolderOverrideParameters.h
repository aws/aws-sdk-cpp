/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
   * <p>The override parameters for a single folder that is being
   * imported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobFolderOverrideParameters">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobFolderOverrideParameters
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobFolderOverrideParameters() = default;
    AWS_QUICKSIGHT_API AssetBundleImportJobFolderOverrideParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobFolderOverrideParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the folder that you want to apply overrides to.</p>
     */
    inline const Aws::String& GetFolderId() const { return m_folderId; }
    inline bool FolderIdHasBeenSet() const { return m_folderIdHasBeenSet; }
    template<typename FolderIdT = Aws::String>
    void SetFolderId(FolderIdT&& value) { m_folderIdHasBeenSet = true; m_folderId = std::forward<FolderIdT>(value); }
    template<typename FolderIdT = Aws::String>
    AssetBundleImportJobFolderOverrideParameters& WithFolderId(FolderIdT&& value) { SetFolderId(std::forward<FolderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new name for the folder.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AssetBundleImportJobFolderOverrideParameters& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new parent folder arn. This change can only be applied if the import
     * creates a brand new folder. Existing folders cannot be moved.</p>
     */
    inline const Aws::String& GetParentFolderArn() const { return m_parentFolderArn; }
    inline bool ParentFolderArnHasBeenSet() const { return m_parentFolderArnHasBeenSet; }
    template<typename ParentFolderArnT = Aws::String>
    void SetParentFolderArn(ParentFolderArnT&& value) { m_parentFolderArnHasBeenSet = true; m_parentFolderArn = std::forward<ParentFolderArnT>(value); }
    template<typename ParentFolderArnT = Aws::String>
    AssetBundleImportJobFolderOverrideParameters& WithParentFolderArn(ParentFolderArnT&& value) { SetParentFolderArn(std::forward<ParentFolderArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_folderId;
    bool m_folderIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_parentFolderArn;
    bool m_parentFolderArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
