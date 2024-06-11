﻿/**
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
#include <aws/quicksight/model/VisualInteractionOptions.h>
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


    ///@{
    /**
     * <p>The field wells of the visual.</p>
     */
    inline const PivotTableFieldWells& GetFieldWells() const{ return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    inline void SetFieldWells(const PivotTableFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }
    inline void SetFieldWells(PivotTableFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }
    inline PivotTableConfiguration& WithFieldWells(const PivotTableFieldWells& value) { SetFieldWells(value); return *this;}
    inline PivotTableConfiguration& WithFieldWells(PivotTableFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration for a <code>PivotTableVisual</code>.</p>
     */
    inline const PivotTableSortConfiguration& GetSortConfiguration() const{ return m_sortConfiguration; }
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }
    inline void SetSortConfiguration(const PivotTableSortConfiguration& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = value; }
    inline void SetSortConfiguration(PivotTableSortConfiguration&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::move(value); }
    inline PivotTableConfiguration& WithSortConfiguration(const PivotTableSortConfiguration& value) { SetSortConfiguration(value); return *this;}
    inline PivotTableConfiguration& WithSortConfiguration(PivotTableSortConfiguration&& value) { SetSortConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table options for a pivot table visual.</p>
     */
    inline const PivotTableOptions& GetTableOptions() const{ return m_tableOptions; }
    inline bool TableOptionsHasBeenSet() const { return m_tableOptionsHasBeenSet; }
    inline void SetTableOptions(const PivotTableOptions& value) { m_tableOptionsHasBeenSet = true; m_tableOptions = value; }
    inline void SetTableOptions(PivotTableOptions&& value) { m_tableOptionsHasBeenSet = true; m_tableOptions = std::move(value); }
    inline PivotTableConfiguration& WithTableOptions(const PivotTableOptions& value) { SetTableOptions(value); return *this;}
    inline PivotTableConfiguration& WithTableOptions(PivotTableOptions&& value) { SetTableOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total options for a pivot table visual.</p>
     */
    inline const PivotTableTotalOptions& GetTotalOptions() const{ return m_totalOptions; }
    inline bool TotalOptionsHasBeenSet() const { return m_totalOptionsHasBeenSet; }
    inline void SetTotalOptions(const PivotTableTotalOptions& value) { m_totalOptionsHasBeenSet = true; m_totalOptions = value; }
    inline void SetTotalOptions(PivotTableTotalOptions&& value) { m_totalOptionsHasBeenSet = true; m_totalOptions = std::move(value); }
    inline PivotTableConfiguration& WithTotalOptions(const PivotTableTotalOptions& value) { SetTotalOptions(value); return *this;}
    inline PivotTableConfiguration& WithTotalOptions(PivotTableTotalOptions&& value) { SetTotalOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field options for a pivot table visual.</p>
     */
    inline const PivotTableFieldOptions& GetFieldOptions() const{ return m_fieldOptions; }
    inline bool FieldOptionsHasBeenSet() const { return m_fieldOptionsHasBeenSet; }
    inline void SetFieldOptions(const PivotTableFieldOptions& value) { m_fieldOptionsHasBeenSet = true; m_fieldOptions = value; }
    inline void SetFieldOptions(PivotTableFieldOptions&& value) { m_fieldOptionsHasBeenSet = true; m_fieldOptions = std::move(value); }
    inline PivotTableConfiguration& WithFieldOptions(const PivotTableFieldOptions& value) { SetFieldOptions(value); return *this;}
    inline PivotTableConfiguration& WithFieldOptions(PivotTableFieldOptions&& value) { SetFieldOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The paginated report options for a pivot table visual.</p>
     */
    inline const PivotTablePaginatedReportOptions& GetPaginatedReportOptions() const{ return m_paginatedReportOptions; }
    inline bool PaginatedReportOptionsHasBeenSet() const { return m_paginatedReportOptionsHasBeenSet; }
    inline void SetPaginatedReportOptions(const PivotTablePaginatedReportOptions& value) { m_paginatedReportOptionsHasBeenSet = true; m_paginatedReportOptions = value; }
    inline void SetPaginatedReportOptions(PivotTablePaginatedReportOptions&& value) { m_paginatedReportOptionsHasBeenSet = true; m_paginatedReportOptions = std::move(value); }
    inline PivotTableConfiguration& WithPaginatedReportOptions(const PivotTablePaginatedReportOptions& value) { SetPaginatedReportOptions(value); return *this;}
    inline PivotTableConfiguration& WithPaginatedReportOptions(PivotTablePaginatedReportOptions&& value) { SetPaginatedReportOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The general visual interactions setup for a visual.</p>
     */
    inline const VisualInteractionOptions& GetInteractions() const{ return m_interactions; }
    inline bool InteractionsHasBeenSet() const { return m_interactionsHasBeenSet; }
    inline void SetInteractions(const VisualInteractionOptions& value) { m_interactionsHasBeenSet = true; m_interactions = value; }
    inline void SetInteractions(VisualInteractionOptions&& value) { m_interactionsHasBeenSet = true; m_interactions = std::move(value); }
    inline PivotTableConfiguration& WithInteractions(const VisualInteractionOptions& value) { SetInteractions(value); return *this;}
    inline PivotTableConfiguration& WithInteractions(VisualInteractionOptions&& value) { SetInteractions(std::move(value)); return *this;}
    ///@}
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

    VisualInteractionOptions m_interactions;
    bool m_interactionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
