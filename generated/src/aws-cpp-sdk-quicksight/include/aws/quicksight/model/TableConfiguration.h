/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TableFieldWells.h>
#include <aws/quicksight/model/TableSortConfiguration.h>
#include <aws/quicksight/model/TableOptions.h>
#include <aws/quicksight/model/TotalOptions.h>
#include <aws/quicksight/model/TableFieldOptions.h>
#include <aws/quicksight/model/TablePaginatedReportOptions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/VisualInteractionOptions.h>
#include <aws/quicksight/model/TableInlineVisualization.h>
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
   * <p>The configuration for a <code>TableVisual</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableConfiguration">AWS
   * API Reference</a></p>
   */
  class TableConfiguration
  {
  public:
    AWS_QUICKSIGHT_API TableConfiguration() = default;
    AWS_QUICKSIGHT_API TableConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field wells of the visual.</p>
     */
    inline const TableFieldWells& GetFieldWells() const { return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    template<typename FieldWellsT = TableFieldWells>
    void SetFieldWells(FieldWellsT&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::forward<FieldWellsT>(value); }
    template<typename FieldWellsT = TableFieldWells>
    TableConfiguration& WithFieldWells(FieldWellsT&& value) { SetFieldWells(std::forward<FieldWellsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration for a <code>TableVisual</code>.</p>
     */
    inline const TableSortConfiguration& GetSortConfiguration() const { return m_sortConfiguration; }
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }
    template<typename SortConfigurationT = TableSortConfiguration>
    void SetSortConfiguration(SortConfigurationT&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::forward<SortConfigurationT>(value); }
    template<typename SortConfigurationT = TableSortConfiguration>
    TableConfiguration& WithSortConfiguration(SortConfigurationT&& value) { SetSortConfiguration(std::forward<SortConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table options for a table visual.</p>
     */
    inline const TableOptions& GetTableOptions() const { return m_tableOptions; }
    inline bool TableOptionsHasBeenSet() const { return m_tableOptionsHasBeenSet; }
    template<typename TableOptionsT = TableOptions>
    void SetTableOptions(TableOptionsT&& value) { m_tableOptionsHasBeenSet = true; m_tableOptions = std::forward<TableOptionsT>(value); }
    template<typename TableOptionsT = TableOptions>
    TableConfiguration& WithTableOptions(TableOptionsT&& value) { SetTableOptions(std::forward<TableOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total options for a table visual.</p>
     */
    inline const TotalOptions& GetTotalOptions() const { return m_totalOptions; }
    inline bool TotalOptionsHasBeenSet() const { return m_totalOptionsHasBeenSet; }
    template<typename TotalOptionsT = TotalOptions>
    void SetTotalOptions(TotalOptionsT&& value) { m_totalOptionsHasBeenSet = true; m_totalOptions = std::forward<TotalOptionsT>(value); }
    template<typename TotalOptionsT = TotalOptions>
    TableConfiguration& WithTotalOptions(TotalOptionsT&& value) { SetTotalOptions(std::forward<TotalOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field options for a table visual.</p>
     */
    inline const TableFieldOptions& GetFieldOptions() const { return m_fieldOptions; }
    inline bool FieldOptionsHasBeenSet() const { return m_fieldOptionsHasBeenSet; }
    template<typename FieldOptionsT = TableFieldOptions>
    void SetFieldOptions(FieldOptionsT&& value) { m_fieldOptionsHasBeenSet = true; m_fieldOptions = std::forward<FieldOptionsT>(value); }
    template<typename FieldOptionsT = TableFieldOptions>
    TableConfiguration& WithFieldOptions(FieldOptionsT&& value) { SetFieldOptions(std::forward<FieldOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The paginated report options for a table visual.</p>
     */
    inline const TablePaginatedReportOptions& GetPaginatedReportOptions() const { return m_paginatedReportOptions; }
    inline bool PaginatedReportOptionsHasBeenSet() const { return m_paginatedReportOptionsHasBeenSet; }
    template<typename PaginatedReportOptionsT = TablePaginatedReportOptions>
    void SetPaginatedReportOptions(PaginatedReportOptionsT&& value) { m_paginatedReportOptionsHasBeenSet = true; m_paginatedReportOptions = std::forward<PaginatedReportOptionsT>(value); }
    template<typename PaginatedReportOptionsT = TablePaginatedReportOptions>
    TableConfiguration& WithPaginatedReportOptions(PaginatedReportOptionsT&& value) { SetPaginatedReportOptions(std::forward<PaginatedReportOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of inline visualizations to display within a chart.</p>
     */
    inline const Aws::Vector<TableInlineVisualization>& GetTableInlineVisualizations() const { return m_tableInlineVisualizations; }
    inline bool TableInlineVisualizationsHasBeenSet() const { return m_tableInlineVisualizationsHasBeenSet; }
    template<typename TableInlineVisualizationsT = Aws::Vector<TableInlineVisualization>>
    void SetTableInlineVisualizations(TableInlineVisualizationsT&& value) { m_tableInlineVisualizationsHasBeenSet = true; m_tableInlineVisualizations = std::forward<TableInlineVisualizationsT>(value); }
    template<typename TableInlineVisualizationsT = Aws::Vector<TableInlineVisualization>>
    TableConfiguration& WithTableInlineVisualizations(TableInlineVisualizationsT&& value) { SetTableInlineVisualizations(std::forward<TableInlineVisualizationsT>(value)); return *this;}
    template<typename TableInlineVisualizationsT = TableInlineVisualization>
    TableConfiguration& AddTableInlineVisualizations(TableInlineVisualizationsT&& value) { m_tableInlineVisualizationsHasBeenSet = true; m_tableInlineVisualizations.emplace_back(std::forward<TableInlineVisualizationsT>(value)); return *this; }
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
    TableConfiguration& WithInteractions(InteractionsT&& value) { SetInteractions(std::forward<InteractionsT>(value)); return *this;}
    ///@}
  private:

    TableFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    TableSortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    TableOptions m_tableOptions;
    bool m_tableOptionsHasBeenSet = false;

    TotalOptions m_totalOptions;
    bool m_totalOptionsHasBeenSet = false;

    TableFieldOptions m_fieldOptions;
    bool m_fieldOptionsHasBeenSet = false;

    TablePaginatedReportOptions m_paginatedReportOptions;
    bool m_paginatedReportOptionsHasBeenSet = false;

    Aws::Vector<TableInlineVisualization> m_tableInlineVisualizations;
    bool m_tableInlineVisualizationsHasBeenSet = false;

    VisualInteractionOptions m_interactions;
    bool m_interactionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
