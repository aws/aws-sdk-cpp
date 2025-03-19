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
    AWS_QUICKSIGHT_API PivotTableConfiguration() = default;
    AWS_QUICKSIGHT_API PivotTableConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field wells of the visual.</p>
     */
    inline const PivotTableFieldWells& GetFieldWells() const { return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    template<typename FieldWellsT = PivotTableFieldWells>
    void SetFieldWells(FieldWellsT&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::forward<FieldWellsT>(value); }
    template<typename FieldWellsT = PivotTableFieldWells>
    PivotTableConfiguration& WithFieldWells(FieldWellsT&& value) { SetFieldWells(std::forward<FieldWellsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration for a <code>PivotTableVisual</code>.</p>
     */
    inline const PivotTableSortConfiguration& GetSortConfiguration() const { return m_sortConfiguration; }
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }
    template<typename SortConfigurationT = PivotTableSortConfiguration>
    void SetSortConfiguration(SortConfigurationT&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::forward<SortConfigurationT>(value); }
    template<typename SortConfigurationT = PivotTableSortConfiguration>
    PivotTableConfiguration& WithSortConfiguration(SortConfigurationT&& value) { SetSortConfiguration(std::forward<SortConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table options for a pivot table visual.</p>
     */
    inline const PivotTableOptions& GetTableOptions() const { return m_tableOptions; }
    inline bool TableOptionsHasBeenSet() const { return m_tableOptionsHasBeenSet; }
    template<typename TableOptionsT = PivotTableOptions>
    void SetTableOptions(TableOptionsT&& value) { m_tableOptionsHasBeenSet = true; m_tableOptions = std::forward<TableOptionsT>(value); }
    template<typename TableOptionsT = PivotTableOptions>
    PivotTableConfiguration& WithTableOptions(TableOptionsT&& value) { SetTableOptions(std::forward<TableOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total options for a pivot table visual.</p>
     */
    inline const PivotTableTotalOptions& GetTotalOptions() const { return m_totalOptions; }
    inline bool TotalOptionsHasBeenSet() const { return m_totalOptionsHasBeenSet; }
    template<typename TotalOptionsT = PivotTableTotalOptions>
    void SetTotalOptions(TotalOptionsT&& value) { m_totalOptionsHasBeenSet = true; m_totalOptions = std::forward<TotalOptionsT>(value); }
    template<typename TotalOptionsT = PivotTableTotalOptions>
    PivotTableConfiguration& WithTotalOptions(TotalOptionsT&& value) { SetTotalOptions(std::forward<TotalOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field options for a pivot table visual.</p>
     */
    inline const PivotTableFieldOptions& GetFieldOptions() const { return m_fieldOptions; }
    inline bool FieldOptionsHasBeenSet() const { return m_fieldOptionsHasBeenSet; }
    template<typename FieldOptionsT = PivotTableFieldOptions>
    void SetFieldOptions(FieldOptionsT&& value) { m_fieldOptionsHasBeenSet = true; m_fieldOptions = std::forward<FieldOptionsT>(value); }
    template<typename FieldOptionsT = PivotTableFieldOptions>
    PivotTableConfiguration& WithFieldOptions(FieldOptionsT&& value) { SetFieldOptions(std::forward<FieldOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The paginated report options for a pivot table visual.</p>
     */
    inline const PivotTablePaginatedReportOptions& GetPaginatedReportOptions() const { return m_paginatedReportOptions; }
    inline bool PaginatedReportOptionsHasBeenSet() const { return m_paginatedReportOptionsHasBeenSet; }
    template<typename PaginatedReportOptionsT = PivotTablePaginatedReportOptions>
    void SetPaginatedReportOptions(PaginatedReportOptionsT&& value) { m_paginatedReportOptionsHasBeenSet = true; m_paginatedReportOptions = std::forward<PaginatedReportOptionsT>(value); }
    template<typename PaginatedReportOptionsT = PivotTablePaginatedReportOptions>
    PivotTableConfiguration& WithPaginatedReportOptions(PaginatedReportOptionsT&& value) { SetPaginatedReportOptions(std::forward<PaginatedReportOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The general visual interactions setup for a visual.</p>
     */
    inline const VisualInteractionOptions& GetInteractions() const { return m_interactions; }
    inline bool InteractionsHasBeenSet() const { return m_interactionsHasBeenSet; }
    template<typename InteractionsT = VisualInteractionOptions>
    void SetInteractions(InteractionsT&& value) { m_interactionsHasBeenSet = true; m_interactions = std::forward<InteractionsT>(value); }
    template<typename InteractionsT = VisualInteractionOptions>
    PivotTableConfiguration& WithInteractions(InteractionsT&& value) { SetInteractions(std::forward<InteractionsT>(value)); return *this;}
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
