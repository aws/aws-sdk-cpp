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
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSetOverrideTags();
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSetOverrideTags(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSetOverrideTags& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of dataset IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all datasets in this asset bundle.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataSetIds() const{ return m_dataSetIds; }
    inline bool DataSetIdsHasBeenSet() const { return m_dataSetIdsHasBeenSet; }
    inline void SetDataSetIds(const Aws::Vector<Aws::String>& value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds = value; }
    inline void SetDataSetIds(Aws::Vector<Aws::String>&& value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds = std::move(value); }
    inline AssetBundleImportJobDataSetOverrideTags& WithDataSetIds(const Aws::Vector<Aws::String>& value) { SetDataSetIds(value); return *this;}
    inline AssetBundleImportJobDataSetOverrideTags& WithDataSetIds(Aws::Vector<Aws::String>&& value) { SetDataSetIds(std::move(value)); return *this;}
    inline AssetBundleImportJobDataSetOverrideTags& AddDataSetIds(const Aws::String& value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds.push_back(value); return *this; }
    inline AssetBundleImportJobDataSetOverrideTags& AddDataSetIds(Aws::String&& value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds.push_back(std::move(value)); return *this; }
    inline AssetBundleImportJobDataSetOverrideTags& AddDataSetIds(const char* value) { m_dataSetIdsHasBeenSet = true; m_dataSetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tags for the datasets that you want to apply overrides to.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline AssetBundleImportJobDataSetOverrideTags& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline AssetBundleImportJobDataSetOverrideTags& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline AssetBundleImportJobDataSetOverrideTags& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline AssetBundleImportJobDataSetOverrideTags& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
