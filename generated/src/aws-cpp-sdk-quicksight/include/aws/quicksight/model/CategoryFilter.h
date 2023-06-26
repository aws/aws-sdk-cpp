/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/quicksight/model/CategoryFilterConfiguration.h>
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
   * <p>A <code>CategoryFilter</code> filters text values.</p> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/quicksight/latest/user/add-a-text-filter-data-prep.html">Adding
   * text filters</a> in the <i>Amazon QuickSight User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CategoryFilter">AWS
   * API Reference</a></p>
   */
  class CategoryFilter
  {
  public:
    AWS_QUICKSIGHT_API CategoryFilter();
    AWS_QUICKSIGHT_API CategoryFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CategoryFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline const Aws::String& GetFilterId() const{ return m_filterId; }

    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline bool FilterIdHasBeenSet() const { return m_filterIdHasBeenSet; }

    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline void SetFilterId(const Aws::String& value) { m_filterIdHasBeenSet = true; m_filterId = value; }

    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline void SetFilterId(Aws::String&& value) { m_filterIdHasBeenSet = true; m_filterId = std::move(value); }

    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline void SetFilterId(const char* value) { m_filterIdHasBeenSet = true; m_filterId.assign(value); }

    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline CategoryFilter& WithFilterId(const Aws::String& value) { SetFilterId(value); return *this;}

    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline CategoryFilter& WithFilterId(Aws::String&& value) { SetFilterId(std::move(value)); return *this;}

    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline CategoryFilter& WithFilterId(const char* value) { SetFilterId(value); return *this;}


    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline const ColumnIdentifier& GetColumn() const{ return m_column; }

    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }

    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline void SetColumn(const ColumnIdentifier& value) { m_columnHasBeenSet = true; m_column = value; }

    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline void SetColumn(ColumnIdentifier&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }

    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline CategoryFilter& WithColumn(const ColumnIdentifier& value) { SetColumn(value); return *this;}

    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline CategoryFilter& WithColumn(ColumnIdentifier&& value) { SetColumn(std::move(value)); return *this;}


    /**
     * <p>The configuration for a <code>CategoryFilter</code>.</p>
     */
    inline const CategoryFilterConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration for a <code>CategoryFilter</code>.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The configuration for a <code>CategoryFilter</code>.</p>
     */
    inline void SetConfiguration(const CategoryFilterConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The configuration for a <code>CategoryFilter</code>.</p>
     */
    inline void SetConfiguration(CategoryFilterConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The configuration for a <code>CategoryFilter</code>.</p>
     */
    inline CategoryFilter& WithConfiguration(const CategoryFilterConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration for a <code>CategoryFilter</code>.</p>
     */
    inline CategoryFilter& WithConfiguration(CategoryFilterConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_filterId;
    bool m_filterIdHasBeenSet = false;

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    CategoryFilterConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
