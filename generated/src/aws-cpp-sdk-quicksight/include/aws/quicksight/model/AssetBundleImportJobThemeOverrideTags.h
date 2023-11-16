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
    AWS_QUICKSIGHT_API AssetBundleImportJobThemeOverrideTags();
    AWS_QUICKSIGHT_API AssetBundleImportJobThemeOverrideTags(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobThemeOverrideTags& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of theme IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all themes in this asset bundle.</p>
     */
    inline const Aws::Vector<Aws::String>& GetThemeIds() const{ return m_themeIds; }

    /**
     * <p>A list of theme IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all themes in this asset bundle.</p>
     */
    inline bool ThemeIdsHasBeenSet() const { return m_themeIdsHasBeenSet; }

    /**
     * <p>A list of theme IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all themes in this asset bundle.</p>
     */
    inline void SetThemeIds(const Aws::Vector<Aws::String>& value) { m_themeIdsHasBeenSet = true; m_themeIds = value; }

    /**
     * <p>A list of theme IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all themes in this asset bundle.</p>
     */
    inline void SetThemeIds(Aws::Vector<Aws::String>&& value) { m_themeIdsHasBeenSet = true; m_themeIds = std::move(value); }

    /**
     * <p>A list of theme IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all themes in this asset bundle.</p>
     */
    inline AssetBundleImportJobThemeOverrideTags& WithThemeIds(const Aws::Vector<Aws::String>& value) { SetThemeIds(value); return *this;}

    /**
     * <p>A list of theme IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all themes in this asset bundle.</p>
     */
    inline AssetBundleImportJobThemeOverrideTags& WithThemeIds(Aws::Vector<Aws::String>&& value) { SetThemeIds(std::move(value)); return *this;}

    /**
     * <p>A list of theme IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all themes in this asset bundle.</p>
     */
    inline AssetBundleImportJobThemeOverrideTags& AddThemeIds(const Aws::String& value) { m_themeIdsHasBeenSet = true; m_themeIds.push_back(value); return *this; }

    /**
     * <p>A list of theme IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all themes in this asset bundle.</p>
     */
    inline AssetBundleImportJobThemeOverrideTags& AddThemeIds(Aws::String&& value) { m_themeIdsHasBeenSet = true; m_themeIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of theme IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all themes in this asset bundle.</p>
     */
    inline AssetBundleImportJobThemeOverrideTags& AddThemeIds(const char* value) { m_themeIdsHasBeenSet = true; m_themeIds.push_back(value); return *this; }


    /**
     * <p>A list of tags for the themes that you want to apply overrides to.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags for the themes that you want to apply overrides to.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags for the themes that you want to apply overrides to.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags for the themes that you want to apply overrides to.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags for the themes that you want to apply overrides to.</p>
     */
    inline AssetBundleImportJobThemeOverrideTags& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags for the themes that you want to apply overrides to.</p>
     */
    inline AssetBundleImportJobThemeOverrideTags& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags for the themes that you want to apply overrides to.</p>
     */
    inline AssetBundleImportJobThemeOverrideTags& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags for the themes that you want to apply overrides to.</p>
     */
    inline AssetBundleImportJobThemeOverrideTags& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_themeIds;
    bool m_themeIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
