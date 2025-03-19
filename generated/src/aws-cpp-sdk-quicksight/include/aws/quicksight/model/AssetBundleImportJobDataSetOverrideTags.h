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
   * <p>An object that contains a list of tags to be assigned to a list of dataset
   * IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobDataSetOverrideTags">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobDataSetOverrideTags
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSetOverrideTags() = default;
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSetOverrideTags(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSetOverrideTags& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of dataset IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all datasets in this asset bundle.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataSetIds() const { return m_dataSetIds; }
    inline bool DataSetIdsHasBeenSet() const { return m_dataSetIdsHasBeenSet; }
    template<typename DataSetIdsT = Aws::Vector<Aws::String>>
    void SetDataSetIds(DataSetIdsT&& value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds = std::forward<DataSetIdsT>(value); }
    template<typename DataSetIdsT = Aws::Vector<Aws::String>>
    AssetBundleImportJobDataSetOverrideTags& WithDataSetIds(DataSetIdsT&& value) { SetDataSetIds(std::forward<DataSetIdsT>(value)); return *this;}
    template<typename DataSetIdsT = Aws::String>
    AssetBundleImportJobDataSetOverrideTags& AddDataSetIds(DataSetIdsT&& value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds.emplace_back(std::forward<DataSetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tags for the datasets that you want to apply overrides to.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    AssetBundleImportJobDataSetOverrideTags& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    AssetBundleImportJobDataSetOverrideTags& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_dataSetIds;
    bool m_dataSetIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
