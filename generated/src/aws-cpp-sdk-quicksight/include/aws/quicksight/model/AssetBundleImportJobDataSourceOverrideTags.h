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
   * <p>An object that contains a list of tags to be assigned to a list of data
   * source IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobDataSourceOverrideTags">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobDataSourceOverrideTags
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSourceOverrideTags() = default;
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSourceOverrideTags(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSourceOverrideTags& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of data source IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all data sources in this asset bundle.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataSourceIds() const { return m_dataSourceIds; }
    inline bool DataSourceIdsHasBeenSet() const { return m_dataSourceIdsHasBeenSet; }
    template<typename DataSourceIdsT = Aws::Vector<Aws::String>>
    void SetDataSourceIds(DataSourceIdsT&& value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds = std::forward<DataSourceIdsT>(value); }
    template<typename DataSourceIdsT = Aws::Vector<Aws::String>>
    AssetBundleImportJobDataSourceOverrideTags& WithDataSourceIds(DataSourceIdsT&& value) { SetDataSourceIds(std::forward<DataSourceIdsT>(value)); return *this;}
    template<typename DataSourceIdsT = Aws::String>
    AssetBundleImportJobDataSourceOverrideTags& AddDataSourceIds(DataSourceIdsT&& value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds.emplace_back(std::forward<DataSourceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tags for the data source that you want to apply overrides to.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    AssetBundleImportJobDataSourceOverrideTags& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    AssetBundleImportJobDataSourceOverrideTags& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_dataSourceIds;
    bool m_dataSourceIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
