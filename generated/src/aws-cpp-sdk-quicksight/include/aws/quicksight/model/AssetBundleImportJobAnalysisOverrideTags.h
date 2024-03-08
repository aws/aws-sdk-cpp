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
   * <p>An object that contains a list of tags to be assigned to a list of analysis
   * IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobAnalysisOverrideTags">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobAnalysisOverrideTags
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobAnalysisOverrideTags();
    AWS_QUICKSIGHT_API AssetBundleImportJobAnalysisOverrideTags(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobAnalysisOverrideTags& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of analysis IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all analyses in this asset bundle.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAnalysisIds() const{ return m_analysisIds; }

    /**
     * <p>A list of analysis IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all analyses in this asset bundle.</p>
     */
    inline bool AnalysisIdsHasBeenSet() const { return m_analysisIdsHasBeenSet; }

    /**
     * <p>A list of analysis IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all analyses in this asset bundle.</p>
     */
    inline void SetAnalysisIds(const Aws::Vector<Aws::String>& value) { m_analysisIdsHasBeenSet = true; m_analysisIds = value; }

    /**
     * <p>A list of analysis IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all analyses in this asset bundle.</p>
     */
    inline void SetAnalysisIds(Aws::Vector<Aws::String>&& value) { m_analysisIdsHasBeenSet = true; m_analysisIds = std::move(value); }

    /**
     * <p>A list of analysis IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all analyses in this asset bundle.</p>
     */
    inline AssetBundleImportJobAnalysisOverrideTags& WithAnalysisIds(const Aws::Vector<Aws::String>& value) { SetAnalysisIds(value); return *this;}

    /**
     * <p>A list of analysis IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all analyses in this asset bundle.</p>
     */
    inline AssetBundleImportJobAnalysisOverrideTags& WithAnalysisIds(Aws::Vector<Aws::String>&& value) { SetAnalysisIds(std::move(value)); return *this;}

    /**
     * <p>A list of analysis IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all analyses in this asset bundle.</p>
     */
    inline AssetBundleImportJobAnalysisOverrideTags& AddAnalysisIds(const Aws::String& value) { m_analysisIdsHasBeenSet = true; m_analysisIds.push_back(value); return *this; }

    /**
     * <p>A list of analysis IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all analyses in this asset bundle.</p>
     */
    inline AssetBundleImportJobAnalysisOverrideTags& AddAnalysisIds(Aws::String&& value) { m_analysisIdsHasBeenSet = true; m_analysisIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of analysis IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all analyses in this asset bundle.</p>
     */
    inline AssetBundleImportJobAnalysisOverrideTags& AddAnalysisIds(const char* value) { m_analysisIdsHasBeenSet = true; m_analysisIds.push_back(value); return *this; }


    /**
     * <p>A list of tags for the analyses that you want to apply overrides to.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags for the analyses that you want to apply overrides to.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags for the analyses that you want to apply overrides to.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags for the analyses that you want to apply overrides to.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags for the analyses that you want to apply overrides to.</p>
     */
    inline AssetBundleImportJobAnalysisOverrideTags& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags for the analyses that you want to apply overrides to.</p>
     */
    inline AssetBundleImportJobAnalysisOverrideTags& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags for the analyses that you want to apply overrides to.</p>
     */
    inline AssetBundleImportJobAnalysisOverrideTags& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags for the analyses that you want to apply overrides to.</p>
     */
    inline AssetBundleImportJobAnalysisOverrideTags& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_analysisIds;
    bool m_analysisIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
