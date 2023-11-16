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
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSourceOverrideTags();
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSourceOverrideTags(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSourceOverrideTags& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of data source IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all data sources in this asset bundle.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataSourceIds() const{ return m_dataSourceIds; }

    /**
     * <p>A list of data source IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all data sources in this asset bundle.</p>
     */
    inline bool DataSourceIdsHasBeenSet() const { return m_dataSourceIdsHasBeenSet; }

    /**
     * <p>A list of data source IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all data sources in this asset bundle.</p>
     */
    inline void SetDataSourceIds(const Aws::Vector<Aws::String>& value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds = value; }

    /**
     * <p>A list of data source IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all data sources in this asset bundle.</p>
     */
    inline void SetDataSourceIds(Aws::Vector<Aws::String>&& value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds = std::move(value); }

    /**
     * <p>A list of data source IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all data sources in this asset bundle.</p>
     */
    inline AssetBundleImportJobDataSourceOverrideTags& WithDataSourceIds(const Aws::Vector<Aws::String>& value) { SetDataSourceIds(value); return *this;}

    /**
     * <p>A list of data source IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all data sources in this asset bundle.</p>
     */
    inline AssetBundleImportJobDataSourceOverrideTags& WithDataSourceIds(Aws::Vector<Aws::String>&& value) { SetDataSourceIds(std::move(value)); return *this;}

    /**
     * <p>A list of data source IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all data sources in this asset bundle.</p>
     */
    inline AssetBundleImportJobDataSourceOverrideTags& AddDataSourceIds(const Aws::String& value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds.push_back(value); return *this; }

    /**
     * <p>A list of data source IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all data sources in this asset bundle.</p>
     */
    inline AssetBundleImportJobDataSourceOverrideTags& AddDataSourceIds(Aws::String&& value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of data source IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all data sources in this asset bundle.</p>
     */
    inline AssetBundleImportJobDataSourceOverrideTags& AddDataSourceIds(const char* value) { m_dataSourceIdsHasBeenSet = true; m_dataSourceIds.push_back(value); return *this; }


    /**
     * <p>A list of tags for the data source that you want to apply overrides to.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags for the data source that you want to apply overrides to.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags for the data source that you want to apply overrides to.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags for the data source that you want to apply overrides to.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags for the data source that you want to apply overrides to.</p>
     */
    inline AssetBundleImportJobDataSourceOverrideTags& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags for the data source that you want to apply overrides to.</p>
     */
    inline AssetBundleImportJobDataSourceOverrideTags& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags for the data source that you want to apply overrides to.</p>
     */
    inline AssetBundleImportJobDataSourceOverrideTags& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags for the data source that you want to apply overrides to.</p>
     */
    inline AssetBundleImportJobDataSourceOverrideTags& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_dataSourceIds;
    bool m_dataSourceIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
