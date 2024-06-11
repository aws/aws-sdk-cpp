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
    AWS_QUICKSIGHT_API TableConfiguration();
    AWS_QUICKSIGHT_API TableConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field wells of the visual.</p>
     */
    inline const TableFieldWells& GetFieldWells() const{ return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    inline void SetFieldWells(const TableFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }
    inline void SetFieldWells(TableFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }
    inline TableConfiguration& WithFieldWells(const TableFieldWells& value) { SetFieldWells(value); return *this;}
    inline TableConfiguration& WithFieldWells(TableFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration for a <code>TableVisual</code>.</p>
     */
    inline const TableSortConfiguration& GetSortConfiguration() const{ return m_sortConfiguration; }
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }
    inline void SetSortConfiguration(const TableSortConfiguration& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = value; }
    inline void SetSortConfiguration(TableSortConfiguration&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::move(value); }
    inline TableConfiguration& WithSortConfiguration(const TableSortConfiguration& value) { SetSortConfiguration(value); return *this;}
    inline TableConfiguration& WithSortConfiguration(TableSortConfiguration&& value) { SetSortConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table options for a table visual.</p>
     */
    inline const TableOptions& GetTableOptions() const{ return m_tableOptions; }
    inline bool TableOptionsHasBeenSet() const { return m_tableOptionsHasBeenSet; }
    inline void SetTableOptions(const TableOptions& value) { m_tableOptionsHasBeenSet = true; m_tableOptions = value; }
    inline void SetTableOptions(TableOptions&& value) { m_tableOptionsHasBeenSet = true; m_tableOptions = std::move(value); }
    inline TableConfiguration& WithTableOptions(const TableOptions& value) { SetTableOptions(value); return *this;}
    inline TableConfiguration& WithTableOptions(TableOptions&& value) { SetTableOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total options for a table visual.</p>
     */
    inline const TotalOptions& GetTotalOptions() const{ return m_totalOptions; }
    inline bool TotalOptionsHasBeenSet() const { return m_totalOptionsHasBeenSet; }
    inline void SetTotalOptions(const TotalOptions& value) { m_totalOptionsHasBeenSet = true; m_totalOptions = value; }
    inline void SetTotalOptions(TotalOptions&& value) { m_totalOptionsHasBeenSet = true; m_totalOptions = std::move(value); }
    inline TableConfiguration& WithTotalOptions(const TotalOptions& value) { SetTotalOptions(value); return *this;}
    inline TableConfiguration& WithTotalOptions(TotalOptions&& value) { SetTotalOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field options for a table visual.</p>
     */
    inline const TableFieldOptions& GetFieldOptions() const{ return m_fieldOptions; }
    inline bool FieldOptionsHasBeenSet() const { return m_fieldOptionsHasBeenSet; }
    inline void SetFieldOptions(const TableFieldOptions& value) { m_fieldOptionsHasBeenSet = true; m_fieldOptions = value; }
    inline void SetFieldOptions(TableFieldOptions&& value) { m_fieldOptionsHasBeenSet = true; m_fieldOptions = std::move(value); }
    inline TableConfiguration& WithFieldOptions(const TableFieldOptions& value) { SetFieldOptions(value); return *this;}
    inline TableConfiguration& WithFieldOptions(TableFieldOptions&& value) { SetFieldOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The paginated report options for a table visual.</p>
     */
    inline const TablePaginatedReportOptions& GetPaginatedReportOptions() const{ return m_paginatedReportOptions; }
    inline bool PaginatedReportOptionsHasBeenSet() const { return m_paginatedReportOptionsHasBeenSet; }
    inline void SetPaginatedReportOptions(const TablePaginatedReportOptions& value) { m_paginatedReportOptionsHasBeenSet = true; m_paginatedReportOptions = value; }
    inline void SetPaginatedReportOptions(TablePaginatedReportOptions&& value) { m_paginatedReportOptionsHasBeenSet = true; m_paginatedReportOptions = std::move(value); }
    inline TableConfiguration& WithPaginatedReportOptions(const TablePaginatedReportOptions& value) { SetPaginatedReportOptions(value); return *this;}
    inline TableConfiguration& WithPaginatedReportOptions(TablePaginatedReportOptions&& value) { SetPaginatedReportOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of inline visualizations to display within a chart.</p>
     */
    inline const Aws::Vector<TableInlineVisualization>& GetTableInlineVisualizations() const{ return m_tableInlineVisualizations; }
    inline bool TableInlineVisualizationsHasBeenSet() const { return m_tableInlineVisualizationsHasBeenSet; }
    inline void SetTableInlineVisualizations(const Aws::Vector<TableInlineVisualization>& value) { m_tableInlineVisualizationsHasBeenSet = true; m_tableInlineVisualizations = value; }
    inline void SetTableInlineVisualizations(Aws::Vector<TableInlineVisualization>&& value) { m_tableInlineVisualizationsHasBeenSet = true; m_tableInlineVisualizations = std::move(value); }
    inline TableConfiguration& WithTableInlineVisualizations(const Aws::Vector<TableInlineVisualization>& value) { SetTableInlineVisualizations(value); return *this;}
    inline TableConfiguration& WithTableInlineVisualizations(Aws::Vector<TableInlineVisualization>&& value) { SetTableInlineVisualizations(std::move(value)); return *this;}
    inline TableConfiguration& AddTableInlineVisualizations(const TableInlineVisualization& value) { m_tableInlineVisualizationsHasBeenSet = true; m_tableInlineVisualizations.push_back(value); return *this; }
    inline TableConfiguration& AddTableInlineVisualizations(TableInlineVisualization&& value) { m_tableInlineVisualizationsHasBeenSet = true; m_tableInlineVisualizations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The general visual interactions setup for a visual.</p>
     */
    inline const VisualInteractionOptions& GetInteractions() const{ return m_interactions; }
    inline bool InteractionsHasBeenSet() const { return m_interactionsHasBeenSet; }
    inline void SetInteractions(const VisualInteractionOptions& value) { m_interactionsHasBeenSet = true; m_interactions = value; }
    inline void SetInteractions(VisualInteractionOptions&& value) { m_interactionsHasBeenSet = true; m_interactions = std::move(value); }
    inline TableConfiguration& WithInteractions(const VisualInteractionOptions& value) { SetInteractions(value); return *this;}
    inline TableConfiguration& WithInteractions(VisualInteractionOptions&& value) { SetInteractions(std::move(value)); return *this;}
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
