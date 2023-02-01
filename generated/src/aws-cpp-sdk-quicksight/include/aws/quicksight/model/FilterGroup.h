/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/FilterScopeConfiguration.h>
#include <aws/quicksight/model/WidgetStatus.h>
#include <aws/quicksight/model/CrossDatasetTypes.h>
#include <aws/quicksight/model/Filter.h>
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
   * <p>A grouping of individual filters. Filter groups are applied to the same group
   * of visuals.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/quicksight/latest/user/add-a-compound-filter.html">Adding
   * filter conditions (group filters) with AND and OR operators</a> in the <i>Amazon
   * QuickSight User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilterGroup">AWS
   * API Reference</a></p>
   */
  class FilterGroup
  {
  public:
    AWS_QUICKSIGHT_API FilterGroup();
    AWS_QUICKSIGHT_API FilterGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilterGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value that uniquely identifies a <code>FilterGroup</code> within a
     * dashboard, template, or analysis.</p>
     */
    inline const Aws::String& GetFilterGroupId() const{ return m_filterGroupId; }

    /**
     * <p>The value that uniquely identifies a <code>FilterGroup</code> within a
     * dashboard, template, or analysis.</p>
     */
    inline bool FilterGroupIdHasBeenSet() const { return m_filterGroupIdHasBeenSet; }

    /**
     * <p>The value that uniquely identifies a <code>FilterGroup</code> within a
     * dashboard, template, or analysis.</p>
     */
    inline void SetFilterGroupId(const Aws::String& value) { m_filterGroupIdHasBeenSet = true; m_filterGroupId = value; }

    /**
     * <p>The value that uniquely identifies a <code>FilterGroup</code> within a
     * dashboard, template, or analysis.</p>
     */
    inline void SetFilterGroupId(Aws::String&& value) { m_filterGroupIdHasBeenSet = true; m_filterGroupId = std::move(value); }

    /**
     * <p>The value that uniquely identifies a <code>FilterGroup</code> within a
     * dashboard, template, or analysis.</p>
     */
    inline void SetFilterGroupId(const char* value) { m_filterGroupIdHasBeenSet = true; m_filterGroupId.assign(value); }

    /**
     * <p>The value that uniquely identifies a <code>FilterGroup</code> within a
     * dashboard, template, or analysis.</p>
     */
    inline FilterGroup& WithFilterGroupId(const Aws::String& value) { SetFilterGroupId(value); return *this;}

    /**
     * <p>The value that uniquely identifies a <code>FilterGroup</code> within a
     * dashboard, template, or analysis.</p>
     */
    inline FilterGroup& WithFilterGroupId(Aws::String&& value) { SetFilterGroupId(std::move(value)); return *this;}

    /**
     * <p>The value that uniquely identifies a <code>FilterGroup</code> within a
     * dashboard, template, or analysis.</p>
     */
    inline FilterGroup& WithFilterGroupId(const char* value) { SetFilterGroupId(value); return *this;}


    /**
     * <p>The list of filters that are present in a <code>FilterGroup</code>.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The list of filters that are present in a <code>FilterGroup</code>.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The list of filters that are present in a <code>FilterGroup</code>.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The list of filters that are present in a <code>FilterGroup</code>.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The list of filters that are present in a <code>FilterGroup</code>.</p>
     */
    inline FilterGroup& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The list of filters that are present in a <code>FilterGroup</code>.</p>
     */
    inline FilterGroup& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The list of filters that are present in a <code>FilterGroup</code>.</p>
     */
    inline FilterGroup& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The list of filters that are present in a <code>FilterGroup</code>.</p>
     */
    inline FilterGroup& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The configuration that specifies what scope to apply to a
     * <code>FilterGroup</code>.</p> <p>This is a union type structure. For this
     * structure to be valid, only one of the attributes can be defined.</p>
     */
    inline const FilterScopeConfiguration& GetScopeConfiguration() const{ return m_scopeConfiguration; }

    /**
     * <p>The configuration that specifies what scope to apply to a
     * <code>FilterGroup</code>.</p> <p>This is a union type structure. For this
     * structure to be valid, only one of the attributes can be defined.</p>
     */
    inline bool ScopeConfigurationHasBeenSet() const { return m_scopeConfigurationHasBeenSet; }

    /**
     * <p>The configuration that specifies what scope to apply to a
     * <code>FilterGroup</code>.</p> <p>This is a union type structure. For this
     * structure to be valid, only one of the attributes can be defined.</p>
     */
    inline void SetScopeConfiguration(const FilterScopeConfiguration& value) { m_scopeConfigurationHasBeenSet = true; m_scopeConfiguration = value; }

    /**
     * <p>The configuration that specifies what scope to apply to a
     * <code>FilterGroup</code>.</p> <p>This is a union type structure. For this
     * structure to be valid, only one of the attributes can be defined.</p>
     */
    inline void SetScopeConfiguration(FilterScopeConfiguration&& value) { m_scopeConfigurationHasBeenSet = true; m_scopeConfiguration = std::move(value); }

    /**
     * <p>The configuration that specifies what scope to apply to a
     * <code>FilterGroup</code>.</p> <p>This is a union type structure. For this
     * structure to be valid, only one of the attributes can be defined.</p>
     */
    inline FilterGroup& WithScopeConfiguration(const FilterScopeConfiguration& value) { SetScopeConfiguration(value); return *this;}

    /**
     * <p>The configuration that specifies what scope to apply to a
     * <code>FilterGroup</code>.</p> <p>This is a union type structure. For this
     * structure to be valid, only one of the attributes can be defined.</p>
     */
    inline FilterGroup& WithScopeConfiguration(FilterScopeConfiguration&& value) { SetScopeConfiguration(std::move(value)); return *this;}


    /**
     * <p>The status of the <code>FilterGroup</code>.</p>
     */
    inline const WidgetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the <code>FilterGroup</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the <code>FilterGroup</code>.</p>
     */
    inline void SetStatus(const WidgetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the <code>FilterGroup</code>.</p>
     */
    inline void SetStatus(WidgetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the <code>FilterGroup</code>.</p>
     */
    inline FilterGroup& WithStatus(const WidgetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the <code>FilterGroup</code>.</p>
     */
    inline FilterGroup& WithStatus(WidgetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The filter new feature which can apply filter group to all data sets. Choose
     * one of the following options:</p> <ul> <li> <p> <code>ALL_DATASETS</code> </p>
     * </li> <li> <p> <code>SINGLE_DATASET</code> </p> </li> </ul>
     */
    inline const CrossDatasetTypes& GetCrossDataset() const{ return m_crossDataset; }

    /**
     * <p>The filter new feature which can apply filter group to all data sets. Choose
     * one of the following options:</p> <ul> <li> <p> <code>ALL_DATASETS</code> </p>
     * </li> <li> <p> <code>SINGLE_DATASET</code> </p> </li> </ul>
     */
    inline bool CrossDatasetHasBeenSet() const { return m_crossDatasetHasBeenSet; }

    /**
     * <p>The filter new feature which can apply filter group to all data sets. Choose
     * one of the following options:</p> <ul> <li> <p> <code>ALL_DATASETS</code> </p>
     * </li> <li> <p> <code>SINGLE_DATASET</code> </p> </li> </ul>
     */
    inline void SetCrossDataset(const CrossDatasetTypes& value) { m_crossDatasetHasBeenSet = true; m_crossDataset = value; }

    /**
     * <p>The filter new feature which can apply filter group to all data sets. Choose
     * one of the following options:</p> <ul> <li> <p> <code>ALL_DATASETS</code> </p>
     * </li> <li> <p> <code>SINGLE_DATASET</code> </p> </li> </ul>
     */
    inline void SetCrossDataset(CrossDatasetTypes&& value) { m_crossDatasetHasBeenSet = true; m_crossDataset = std::move(value); }

    /**
     * <p>The filter new feature which can apply filter group to all data sets. Choose
     * one of the following options:</p> <ul> <li> <p> <code>ALL_DATASETS</code> </p>
     * </li> <li> <p> <code>SINGLE_DATASET</code> </p> </li> </ul>
     */
    inline FilterGroup& WithCrossDataset(const CrossDatasetTypes& value) { SetCrossDataset(value); return *this;}

    /**
     * <p>The filter new feature which can apply filter group to all data sets. Choose
     * one of the following options:</p> <ul> <li> <p> <code>ALL_DATASETS</code> </p>
     * </li> <li> <p> <code>SINGLE_DATASET</code> </p> </li> </ul>
     */
    inline FilterGroup& WithCrossDataset(CrossDatasetTypes&& value) { SetCrossDataset(std::move(value)); return *this;}

  private:

    Aws::String m_filterGroupId;
    bool m_filterGroupIdHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    FilterScopeConfiguration m_scopeConfiguration;
    bool m_scopeConfigurationHasBeenSet = false;

    WidgetStatus m_status;
    bool m_statusHasBeenSet = false;

    CrossDatasetTypes m_crossDataset;
    bool m_crossDatasetHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
