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
   * <p>An object that contains a list of tags to be assigned to a list of dashboard
   * IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobDashboardOverrideTags">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobDashboardOverrideTags
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobDashboardOverrideTags();
    AWS_QUICKSIGHT_API AssetBundleImportJobDashboardOverrideTags(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobDashboardOverrideTags& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of dashboard IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all dashboards in this asset bundle.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDashboardIds() const{ return m_dashboardIds; }
    inline bool DashboardIdsHasBeenSet() const { return m_dashboardIdsHasBeenSet; }
    inline void SetDashboardIds(const Aws::Vector<Aws::String>& value) { m_dashboardIdsHasBeenSet = true; m_dashboardIds = value; }
    inline void SetDashboardIds(Aws::Vector<Aws::String>&& value) { m_dashboardIdsHasBeenSet = true; m_dashboardIds = std::move(value); }
    inline AssetBundleImportJobDashboardOverrideTags& WithDashboardIds(const Aws::Vector<Aws::String>& value) { SetDashboardIds(value); return *this;}
    inline AssetBundleImportJobDashboardOverrideTags& WithDashboardIds(Aws::Vector<Aws::String>&& value) { SetDashboardIds(std::move(value)); return *this;}
    inline AssetBundleImportJobDashboardOverrideTags& AddDashboardIds(const Aws::String& value) { m_dashboardIdsHasBeenSet = true; m_dashboardIds.push_back(value); return *this; }
    inline AssetBundleImportJobDashboardOverrideTags& AddDashboardIds(Aws::String&& value) { m_dashboardIdsHasBeenSet = true; m_dashboardIds.push_back(std::move(value)); return *this; }
    inline AssetBundleImportJobDashboardOverrideTags& AddDashboardIds(const char* value) { m_dashboardIdsHasBeenSet = true; m_dashboardIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tags for the dashboards that you want to apply overrides to.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline AssetBundleImportJobDashboardOverrideTags& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline AssetBundleImportJobDashboardOverrideTags& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline AssetBundleImportJobDashboardOverrideTags& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline AssetBundleImportJobDashboardOverrideTags& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_dashboardIds;
    bool m_dashboardIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
