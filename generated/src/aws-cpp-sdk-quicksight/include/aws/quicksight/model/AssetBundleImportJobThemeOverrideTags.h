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
   * <p>An object that contains a list of tags to be assigned to a list of theme
   * IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobThemeOverrideTags">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobThemeOverrideTags
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobThemeOverrideTags() = default;
    AWS_QUICKSIGHT_API AssetBundleImportJobThemeOverrideTags(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobThemeOverrideTags& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of theme IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all themes in this asset bundle.</p>
     */
    inline const Aws::Vector<Aws::String>& GetThemeIds() const { return m_themeIds; }
    inline bool ThemeIdsHasBeenSet() const { return m_themeIdsHasBeenSet; }
    template<typename ThemeIdsT = Aws::Vector<Aws::String>>
    void SetThemeIds(ThemeIdsT&& value) { m_themeIdsHasBeenSet = true; m_themeIds = std::forward<ThemeIdsT>(value); }
    template<typename ThemeIdsT = Aws::Vector<Aws::String>>
    AssetBundleImportJobThemeOverrideTags& WithThemeIds(ThemeIdsT&& value) { SetThemeIds(std::forward<ThemeIdsT>(value)); return *this;}
    template<typename ThemeIdsT = Aws::String>
    AssetBundleImportJobThemeOverrideTags& AddThemeIds(ThemeIdsT&& value) { m_themeIdsHasBeenSet = true; m_themeIds.emplace_back(std::forward<ThemeIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tags for the themes that you want to apply overrides to.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    AssetBundleImportJobThemeOverrideTags& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    AssetBundleImportJobThemeOverrideTags& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_themeIds;
    bool m_themeIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
