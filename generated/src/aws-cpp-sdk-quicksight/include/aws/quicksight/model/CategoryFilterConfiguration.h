/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FilterListConfiguration.h>
#include <aws/quicksight/model/CustomFilterListConfiguration.h>
#include <aws/quicksight/model/CustomFilterConfiguration.h>
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
   * <p>The configuration for a <code>CategoryFilter</code>.</p> <p>This is a union
   * type structure. For this structure to be valid, only one of the attributes can
   * be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CategoryFilterConfiguration">AWS
   * API Reference</a></p>
   */
  class CategoryFilterConfiguration
  {
  public:
    AWS_QUICKSIGHT_API CategoryFilterConfiguration() = default;
    AWS_QUICKSIGHT_API CategoryFilterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CategoryFilterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of filter configurations. In the QuickSight console, this filter type
     * is called a filter list.</p>
     */
    inline const FilterListConfiguration& GetFilterListConfiguration() const { return m_filterListConfiguration; }
    inline bool FilterListConfigurationHasBeenSet() const { return m_filterListConfigurationHasBeenSet; }
    template<typename FilterListConfigurationT = FilterListConfiguration>
    void SetFilterListConfiguration(FilterListConfigurationT&& value) { m_filterListConfigurationHasBeenSet = true; m_filterListConfiguration = std::forward<FilterListConfigurationT>(value); }
    template<typename FilterListConfigurationT = FilterListConfiguration>
    CategoryFilterConfiguration& WithFilterListConfiguration(FilterListConfigurationT&& value) { SetFilterListConfiguration(std::forward<FilterListConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of custom filter values. In the QuickSight console, this filter type
     * is called a custom filter list.</p>
     */
    inline const CustomFilterListConfiguration& GetCustomFilterListConfiguration() const { return m_customFilterListConfiguration; }
    inline bool CustomFilterListConfigurationHasBeenSet() const { return m_customFilterListConfigurationHasBeenSet; }
    template<typename CustomFilterListConfigurationT = CustomFilterListConfiguration>
    void SetCustomFilterListConfiguration(CustomFilterListConfigurationT&& value) { m_customFilterListConfigurationHasBeenSet = true; m_customFilterListConfiguration = std::forward<CustomFilterListConfigurationT>(value); }
    template<typename CustomFilterListConfigurationT = CustomFilterListConfiguration>
    CategoryFilterConfiguration& WithCustomFilterListConfiguration(CustomFilterListConfigurationT&& value) { SetCustomFilterListConfiguration(std::forward<CustomFilterListConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom filter that filters based on a single value. This filter can be
     * partially matched.</p>
     */
    inline const CustomFilterConfiguration& GetCustomFilterConfiguration() const { return m_customFilterConfiguration; }
    inline bool CustomFilterConfigurationHasBeenSet() const { return m_customFilterConfigurationHasBeenSet; }
    template<typename CustomFilterConfigurationT = CustomFilterConfiguration>
    void SetCustomFilterConfiguration(CustomFilterConfigurationT&& value) { m_customFilterConfigurationHasBeenSet = true; m_customFilterConfiguration = std::forward<CustomFilterConfigurationT>(value); }
    template<typename CustomFilterConfigurationT = CustomFilterConfiguration>
    CategoryFilterConfiguration& WithCustomFilterConfiguration(CustomFilterConfigurationT&& value) { SetCustomFilterConfiguration(std::forward<CustomFilterConfigurationT>(value)); return *this;}
    ///@}
  private:

    FilterListConfiguration m_filterListConfiguration;
    bool m_filterListConfigurationHasBeenSet = false;

    CustomFilterListConfiguration m_customFilterListConfiguration;
    bool m_customFilterListConfigurationHasBeenSet = false;

    CustomFilterConfiguration m_customFilterConfiguration;
    bool m_customFilterConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
