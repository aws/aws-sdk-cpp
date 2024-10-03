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
    AWS_QUICKSIGHT_API AssetBundleImportJobFolderOverrideParameters();
    AWS_QUICKSIGHT_API AssetBundleImportJobFolderOverrideParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobFolderOverrideParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the folder that you want to apply overrides to.</p>
     */
    inline const Aws::String& GetFolderId() const{ return m_folderId; }
    inline bool FolderIdHasBeenSet() const { return m_folderIdHasBeenSet; }
    inline void SetFolderId(const Aws::String& value) { m_folderIdHasBeenSet = true; m_folderId = value; }
    inline void SetFolderId(Aws::String&& value) { m_folderIdHasBeenSet = true; m_folderId = std::move(value); }
    inline void SetFolderId(const char* value) { m_folderIdHasBeenSet = true; m_folderId.assign(value); }
    inline AssetBundleImportJobFolderOverrideParameters& WithFolderId(const Aws::String& value) { SetFolderId(value); return *this;}
    inline AssetBundleImportJobFolderOverrideParameters& WithFolderId(Aws::String&& value) { SetFolderId(std::move(value)); return *this;}
    inline AssetBundleImportJobFolderOverrideParameters& WithFolderId(const char* value) { SetFolderId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new name for the folder.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AssetBundleImportJobFolderOverrideParameters& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AssetBundleImportJobFolderOverrideParameters& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AssetBundleImportJobFolderOverrideParameters& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new parent folder arn. This change can only be applied if the import
     * creates a brand new folder. Existing folders cannot be moved.</p>
     */
    inline const Aws::String& GetParentFolderArn() const{ return m_parentFolderArn; }
    inline bool ParentFolderArnHasBeenSet() const { return m_parentFolderArnHasBeenSet; }
    inline void SetParentFolderArn(const Aws::String& value) { m_parentFolderArnHasBeenSet = true; m_parentFolderArn = value; }
    inline void SetParentFolderArn(Aws::String&& value) { m_parentFolderArnHasBeenSet = true; m_parentFolderArn = std::move(value); }
    inline void SetParentFolderArn(const char* value) { m_parentFolderArnHasBeenSet = true; m_parentFolderArn.assign(value); }
    inline AssetBundleImportJobFolderOverrideParameters& WithParentFolderArn(const Aws::String& value) { SetParentFolderArn(value); return *this;}
    inline AssetBundleImportJobFolderOverrideParameters& WithParentFolderArn(Aws::String&& value) { SetParentFolderArn(std::move(value)); return *this;}
    inline AssetBundleImportJobFolderOverrideParameters& WithParentFolderArn(const char* value) { SetParentFolderArn(value); return *this;}
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
