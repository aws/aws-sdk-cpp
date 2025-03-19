/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/Tag.h>
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
   * <p>An object that contains a list of tags to be assigned to a list of folder
   * IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobFolderOverrideTags">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobFolderOverrideTags
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobFolderOverrideTags() = default;
    AWS_QUICKSIGHT_API AssetBundleImportJobFolderOverrideTags(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobFolderOverrideTags& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    AssetBundleImportJobFolderOverrideTags& WithFolderIds(FolderIdsT&& value) { SetFolderIds(std::forward<FolderIdsT>(value)); return *this;}
    template<typename FolderIdsT = Aws::String>
    AssetBundleImportJobFolderOverrideTags& AddFolderIds(FolderIdsT&& value) { m_folderIdsHasBeenSet = true; m_folderIds.emplace_back(std::forward<FolderIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tags for the folders that you want to apply overrides to.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    AssetBundleImportJobFolderOverrideTags& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    AssetBundleImportJobFolderOverrideTags& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_folderIds;
    bool m_folderIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
