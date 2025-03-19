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
    AWS_QUICKSIGHT_API FilterGroup() = default;
    AWS_QUICKSIGHT_API FilterGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilterGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value that uniquely identifies a <code>FilterGroup</code> within a
     * dashboard, template, or analysis.</p>
     */
    inline const Aws::String& GetFilterGroupId() const { return m_filterGroupId; }
    inline bool FilterGroupIdHasBeenSet() const { return m_filterGroupIdHasBeenSet; }
    template<typename FilterGroupIdT = Aws::String>
    void SetFilterGroupId(FilterGroupIdT&& value) { m_filterGroupIdHasBeenSet = true; m_filterGroupId = std::forward<FilterGroupIdT>(value); }
    template<typename FilterGroupIdT = Aws::String>
    FilterGroup& WithFilterGroupId(FilterGroupIdT&& value) { SetFilterGroupId(std::forward<FilterGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of filters that are present in a <code>FilterGroup</code>.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    FilterGroup& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    FilterGroup& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration that specifies what scope to apply to a
     * <code>FilterGroup</code>.</p> <p>This is a union type structure. For this
     * structure to be valid, only one of the attributes can be defined.</p>
     */
    inline const FilterScopeConfiguration& GetScopeConfiguration() const { return m_scopeConfiguration; }
    inline bool ScopeConfigurationHasBeenSet() const { return m_scopeConfigurationHasBeenSet; }
    template<typename ScopeConfigurationT = FilterScopeConfiguration>
    void SetScopeConfiguration(ScopeConfigurationT&& value) { m_scopeConfigurationHasBeenSet = true; m_scopeConfiguration = std::forward<ScopeConfigurationT>(value); }
    template<typename ScopeConfigurationT = FilterScopeConfiguration>
    FilterGroup& WithScopeConfiguration(ScopeConfigurationT&& value) { SetScopeConfiguration(std::forward<ScopeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the <code>FilterGroup</code>.</p>
     */
    inline WidgetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(WidgetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline FilterGroup& WithStatus(WidgetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter new feature which can apply filter group to all data sets. Choose
     * one of the following options:</p> <ul> <li> <p> <code>ALL_DATASETS</code> </p>
     * </li> <li> <p> <code>SINGLE_DATASET</code> </p> </li> </ul>
     */
    inline CrossDatasetTypes GetCrossDataset() const { return m_crossDataset; }
    inline bool CrossDatasetHasBeenSet() const { return m_crossDatasetHasBeenSet; }
    inline void SetCrossDataset(CrossDatasetTypes value) { m_crossDatasetHasBeenSet = true; m_crossDataset = value; }
    inline FilterGroup& WithCrossDataset(CrossDatasetTypes value) { SetCrossDataset(value); return *this;}
    ///@}
  private:

    Aws::String m_filterGroupId;
    bool m_filterGroupIdHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    FilterScopeConfiguration m_scopeConfiguration;
    bool m_scopeConfigurationHasBeenSet = false;

    WidgetStatus m_status{WidgetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    CrossDatasetTypes m_crossDataset{CrossDatasetTypes::NOT_SET};
    bool m_crossDatasetHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
