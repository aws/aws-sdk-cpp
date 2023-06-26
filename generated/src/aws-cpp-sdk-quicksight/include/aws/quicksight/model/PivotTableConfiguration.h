/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PivotTableFieldWells.h>
#include <aws/quicksight/model/PivotTableSortConfiguration.h>
#include <aws/quicksight/model/PivotTableOptions.h>
#include <aws/quicksight/model/PivotTableTotalOptions.h>
#include <aws/quicksight/model/PivotTableFieldOptions.h>
#include <aws/quicksight/model/PivotTablePaginatedReportOptions.h>
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
   * <p>The configuration for a <code>PivotTableVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotTableConfiguration">AWS
   * API Reference</a></p>
   */
  class PivotTableConfiguration
  {
  public:
    AWS_QUICKSIGHT_API PivotTableConfiguration();
    AWS_QUICKSIGHT_API PivotTableConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field wells of the visual.</p>
     */
    inline const PivotTableFieldWells& GetFieldWells() const{ return m_fieldWells; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline void SetFieldWells(const PivotTableFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline void SetFieldWells(PivotTableFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline PivotTableConfiguration& WithFieldWells(const PivotTableFieldWells& value) { SetFieldWells(value); return *this;}

    /**
     * <p>The field wells of the visual.</p>
     */
    inline PivotTableConfiguration& WithFieldWells(PivotTableFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}


    /**
     * <p>The sort configuration for a <code>PivotTableVisual</code>.</p>
     */
    inline const PivotTableSortConfiguration& GetSortConfiguration() const{ return m_sortConfiguration; }

    /**
     * <p>The sort configuration for a <code>PivotTableVisual</code>.</p>
     */
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }

    /**
     * <p>The sort configuration for a <code>PivotTableVisual</code>.</p>
     */
    inline void SetSortConfiguration(const PivotTableSortConfiguration& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = value; }

    /**
     * <p>The sort configuration for a <code>PivotTableVisual</code>.</p>
     */
    inline void SetSortConfiguration(PivotTableSortConfiguration&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::move(value); }

    /**
     * <p>The sort configuration for a <code>PivotTableVisual</code>.</p>
     */
    inline PivotTableConfiguration& WithSortConfiguration(const PivotTableSortConfiguration& value) { SetSortConfiguration(value); return *this;}

    /**
     * <p>The sort configuration for a <code>PivotTableVisual</code>.</p>
     */
    inline PivotTableConfiguration& WithSortConfiguration(PivotTableSortConfiguration&& value) { SetSortConfiguration(std::move(value)); return *this;}


    /**
     * <p>The table options for a pivot table visual.</p>
     */
    inline const PivotTableOptions& GetTableOptions() const{ return m_tableOptions; }

    /**
     * <p>The table options for a pivot table visual.</p>
     */
    inline bool TableOptionsHasBeenSet() const { return m_tableOptionsHasBeenSet; }

    /**
     * <p>The table options for a pivot table visual.</p>
     */
    inline void SetTableOptions(const PivotTableOptions& value) { m_tableOptionsHasBeenSet = true; m_tableOptions = value; }

    /**
     * <p>The table options for a pivot table visual.</p>
     */
    inline void SetTableOptions(PivotTableOptions&& value) { m_tableOptionsHasBeenSet = true; m_tableOptions = std::move(value); }

    /**
     * <p>The table options for a pivot table visual.</p>
     */
    inline PivotTableConfiguration& WithTableOptions(const PivotTableOptions& value) { SetTableOptions(value); return *this;}

    /**
     * <p>The table options for a pivot table visual.</p>
     */
    inline PivotTableConfiguration& WithTableOptions(PivotTableOptions&& value) { SetTableOptions(std::move(value)); return *this;}


    /**
     * <p>The total options for a pivot table visual.</p>
     */
    inline const PivotTableTotalOptions& GetTotalOptions() const{ return m_totalOptions; }

    /**
     * <p>The total options for a pivot table visual.</p>
     */
    inline bool TotalOptionsHasBeenSet() const { return m_totalOptionsHasBeenSet; }

    /**
     * <p>The total options for a pivot table visual.</p>
     */
    inline void SetTotalOptions(const PivotTableTotalOptions& value) { m_totalOptionsHasBeenSet = true; m_totalOptions = value; }

    /**
     * <p>The total options for a pivot table visual.</p>
     */
    inline void SetTotalOptions(PivotTableTotalOptions&& value) { m_totalOptionsHasBeenSet = true; m_totalOptions = std::move(value); }

    /**
     * <p>The total options for a pivot table visual.</p>
     */
    inline PivotTableConfiguration& WithTotalOptions(const PivotTableTotalOptions& value) { SetTotalOptions(value); return *this;}

    /**
     * <p>The total options for a pivot table visual.</p>
     */
    inline PivotTableConfiguration& WithTotalOptions(PivotTableTotalOptions&& value) { SetTotalOptions(std::move(value)); return *this;}


    /**
     * <p>The field options for a pivot table visual.</p>
     */
    inline const PivotTableFieldOptions& GetFieldOptions() const{ return m_fieldOptions; }

    /**
     * <p>The field options for a pivot table visual.</p>
     */
    inline bool FieldOptionsHasBeenSet() const { return m_fieldOptionsHasBeenSet; }

    /**
     * <p>The field options for a pivot table visual.</p>
     */
    inline void SetFieldOptions(const PivotTableFieldOptions& value) { m_fieldOptionsHasBeenSet = true; m_fieldOptions = value; }

    /**
     * <p>The field options for a pivot table visual.</p>
     */
    inline void SetFieldOptions(PivotTableFieldOptions&& value) { m_fieldOptionsHasBeenSet = true; m_fieldOptions = std::move(value); }

    /**
     * <p>The field options for a pivot table visual.</p>
     */
    inline PivotTableConfiguration& WithFieldOptions(const PivotTableFieldOptions& value) { SetFieldOptions(value); return *this;}

    /**
     * <p>The field options for a pivot table visual.</p>
     */
    inline PivotTableConfiguration& WithFieldOptions(PivotTableFieldOptions&& value) { SetFieldOptions(std::move(value)); return *this;}


    /**
     * <p>The paginated report options for a pivot table visual.</p>
     */
    inline const PivotTablePaginatedReportOptions& GetPaginatedReportOptions() const{ return m_paginatedReportOptions; }

    /**
     * <p>The paginated report options for a pivot table visual.</p>
     */
    inline bool PaginatedReportOptionsHasBeenSet() const { return m_paginatedReportOptionsHasBeenSet; }

    /**
     * <p>The paginated report options for a pivot table visual.</p>
     */
    inline void SetPaginatedReportOptions(const PivotTablePaginatedReportOptions& value) { m_paginatedReportOptionsHasBeenSet = true; m_paginatedReportOptions = value; }

    /**
     * <p>The paginated report options for a pivot table visual.</p>
     */
    inline void SetPaginatedReportOptions(PivotTablePaginatedReportOptions&& value) { m_paginatedReportOptionsHasBeenSet = true; m_paginatedReportOptions = std::move(value); }

    /**
     * <p>The paginated report options for a pivot table visual.</p>
     */
    inline PivotTableConfiguration& WithPaginatedReportOptions(const PivotTablePaginatedReportOptions& value) { SetPaginatedReportOptions(value); return *this;}

    /**
     * <p>The paginated report options for a pivot table visual.</p>
     */
    inline PivotTableConfiguration& WithPaginatedReportOptions(PivotTablePaginatedReportOptions&& value) { SetPaginatedReportOptions(std::move(value)); return *this;}

  private:

    PivotTableFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    PivotTableSortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    PivotTableOptions m_tableOptions;
    bool m_tableOptionsHasBeenSet = false;

    PivotTableTotalOptions m_totalOptions;
    bool m_totalOptionsHasBeenSet = false;

    PivotTableFieldOptions m_fieldOptions;
    bool m_fieldOptionsHasBeenSet = false;

    PivotTablePaginatedReportOptions m_paginatedReportOptions;
    bool m_paginatedReportOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
