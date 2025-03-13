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
    AWS_QUICKSIGHT_API AssetBundleImportJobAnalysisOverrideTags() = default;
    AWS_QUICKSIGHT_API AssetBundleImportJobAnalysisOverrideTags(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobAnalysisOverrideTags& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of analysis IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all analyses in this asset bundle.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAnalysisIds() const { return m_analysisIds; }
    inline bool AnalysisIdsHasBeenSet() const { return m_analysisIdsHasBeenSet; }
    template<typename AnalysisIdsT = Aws::Vector<Aws::String>>
    void SetAnalysisIds(AnalysisIdsT&& value) { m_analysisIdsHasBeenSet = true; m_analysisIds = std::forward<AnalysisIdsT>(value); }
    template<typename AnalysisIdsT = Aws::Vector<Aws::String>>
    AssetBundleImportJobAnalysisOverrideTags& WithAnalysisIds(AnalysisIdsT&& value) { SetAnalysisIds(std::forward<AnalysisIdsT>(value)); return *this;}
    template<typename AnalysisIdsT = Aws::String>
    AssetBundleImportJobAnalysisOverrideTags& AddAnalysisIds(AnalysisIdsT&& value) { m_analysisIdsHasBeenSet = true; m_analysisIds.emplace_back(std::forward<AnalysisIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tags for the analyses that you want to apply overrides to.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    AssetBundleImportJobAnalysisOverrideTags& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    AssetBundleImportJobAnalysisOverrideTags& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_analysisIds;
    bool m_analysisIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
