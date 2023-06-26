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
    AWS_QUICKSIGHT_API CategoryFilterConfiguration();
    AWS_QUICKSIGHT_API CategoryFilterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CategoryFilterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of filter configurations. In the Amazon QuickSight console, this
     * filter type is called a filter list.</p>
     */
    inline const FilterListConfiguration& GetFilterListConfiguration() const{ return m_filterListConfiguration; }

    /**
     * <p>A list of filter configurations. In the Amazon QuickSight console, this
     * filter type is called a filter list.</p>
     */
    inline bool FilterListConfigurationHasBeenSet() const { return m_filterListConfigurationHasBeenSet; }

    /**
     * <p>A list of filter configurations. In the Amazon QuickSight console, this
     * filter type is called a filter list.</p>
     */
    inline void SetFilterListConfiguration(const FilterListConfiguration& value) { m_filterListConfigurationHasBeenSet = true; m_filterListConfiguration = value; }

    /**
     * <p>A list of filter configurations. In the Amazon QuickSight console, this
     * filter type is called a filter list.</p>
     */
    inline void SetFilterListConfiguration(FilterListConfiguration&& value) { m_filterListConfigurationHasBeenSet = true; m_filterListConfiguration = std::move(value); }

    /**
     * <p>A list of filter configurations. In the Amazon QuickSight console, this
     * filter type is called a filter list.</p>
     */
    inline CategoryFilterConfiguration& WithFilterListConfiguration(const FilterListConfiguration& value) { SetFilterListConfiguration(value); return *this;}

    /**
     * <p>A list of filter configurations. In the Amazon QuickSight console, this
     * filter type is called a filter list.</p>
     */
    inline CategoryFilterConfiguration& WithFilterListConfiguration(FilterListConfiguration&& value) { SetFilterListConfiguration(std::move(value)); return *this;}


    /**
     * <p>A list of custom filter values. In the Amazon QuickSight console, this filter
     * type is called a custom filter list.</p>
     */
    inline const CustomFilterListConfiguration& GetCustomFilterListConfiguration() const{ return m_customFilterListConfiguration; }

    /**
     * <p>A list of custom filter values. In the Amazon QuickSight console, this filter
     * type is called a custom filter list.</p>
     */
    inline bool CustomFilterListConfigurationHasBeenSet() const { return m_customFilterListConfigurationHasBeenSet; }

    /**
     * <p>A list of custom filter values. In the Amazon QuickSight console, this filter
     * type is called a custom filter list.</p>
     */
    inline void SetCustomFilterListConfiguration(const CustomFilterListConfiguration& value) { m_customFilterListConfigurationHasBeenSet = true; m_customFilterListConfiguration = value; }

    /**
     * <p>A list of custom filter values. In the Amazon QuickSight console, this filter
     * type is called a custom filter list.</p>
     */
    inline void SetCustomFilterListConfiguration(CustomFilterListConfiguration&& value) { m_customFilterListConfigurationHasBeenSet = true; m_customFilterListConfiguration = std::move(value); }

    /**
     * <p>A list of custom filter values. In the Amazon QuickSight console, this filter
     * type is called a custom filter list.</p>
     */
    inline CategoryFilterConfiguration& WithCustomFilterListConfiguration(const CustomFilterListConfiguration& value) { SetCustomFilterListConfiguration(value); return *this;}

    /**
     * <p>A list of custom filter values. In the Amazon QuickSight console, this filter
     * type is called a custom filter list.</p>
     */
    inline CategoryFilterConfiguration& WithCustomFilterListConfiguration(CustomFilterListConfiguration&& value) { SetCustomFilterListConfiguration(std::move(value)); return *this;}


    /**
     * <p>A custom filter that filters based on a single value. This filter can be
     * partially matched.</p>
     */
    inline const CustomFilterConfiguration& GetCustomFilterConfiguration() const{ return m_customFilterConfiguration; }

    /**
     * <p>A custom filter that filters based on a single value. This filter can be
     * partially matched.</p>
     */
    inline bool CustomFilterConfigurationHasBeenSet() const { return m_customFilterConfigurationHasBeenSet; }

    /**
     * <p>A custom filter that filters based on a single value. This filter can be
     * partially matched.</p>
     */
    inline void SetCustomFilterConfiguration(const CustomFilterConfiguration& value) { m_customFilterConfigurationHasBeenSet = true; m_customFilterConfiguration = value; }

    /**
     * <p>A custom filter that filters based on a single value. This filter can be
     * partially matched.</p>
     */
    inline void SetCustomFilterConfiguration(CustomFilterConfiguration&& value) { m_customFilterConfigurationHasBeenSet = true; m_customFilterConfiguration = std::move(value); }

    /**
     * <p>A custom filter that filters based on a single value. This filter can be
     * partially matched.</p>
     */
    inline CategoryFilterConfiguration& WithCustomFilterConfiguration(const CustomFilterConfiguration& value) { SetCustomFilterConfiguration(value); return *this;}

    /**
     * <p>A custom filter that filters based on a single value. This filter can be
     * partially matched.</p>
     */
    inline CategoryFilterConfiguration& WithCustomFilterConfiguration(CustomFilterConfiguration&& value) { SetCustomFilterConfiguration(std::move(value)); return *this;}

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
