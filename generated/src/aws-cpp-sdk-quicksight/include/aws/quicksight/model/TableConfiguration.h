/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DashboardCustomizationVisualOptions.h>
#include <aws/quicksight/model/TableFieldOptions.h>
#include <aws/quicksight/model/TableFieldWells.h>
#include <aws/quicksight/model/TableInlineVisualization.h>
#include <aws/quicksight/model/TableOptions.h>
#include <aws/quicksight/model/TablePaginatedReportOptions.h>
#include <aws/quicksight/model/TableSortConfiguration.h>
#include <aws/quicksight/model/TotalOptions.h>
#include <aws/quicksight/model/VisualInteractionOptions.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>The configuration for a <code>TableVisual</code>.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableConfiguration">AWS
 * API Reference</a></p>
 */
class TableConfiguration {
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
  template <typename FieldWellsT = TableFieldWells>
  void SetFieldWells(FieldWellsT&& value) {
    m_fieldWellsHasBeenSet = true;
    m_fieldWells = std::forward<FieldWellsT>(value);
  }
  template <typename FieldWellsT = TableFieldWells>
  TableConfiguration& WithFieldWells(FieldWellsT&& value) {
    SetFieldWells(std::forward<FieldWellsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sort configuration for a <code>TableVisual</code>.</p>
   */
  inline const TableSortConfiguration& GetSortConfiguration() const { return m_sortConfiguration; }
  inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }
  template <typename SortConfigurationT = TableSortConfiguration>
  void SetSortConfiguration(SortConfigurationT&& value) {
    m_sortConfigurationHasBeenSet = true;
    m_sortConfiguration = std::forward<SortConfigurationT>(value);
  }
  template <typename SortConfigurationT = TableSortConfiguration>
  TableConfiguration& WithSortConfiguration(SortConfigurationT&& value) {
    SetSortConfiguration(std::forward<SortConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The table options for a table visual.</p>
   */
  inline const TableOptions& GetTableOptions() const { return m_tableOptions; }
  inline bool TableOptionsHasBeenSet() const { return m_tableOptionsHasBeenSet; }
  template <typename TableOptionsT = TableOptions>
  void SetTableOptions(TableOptionsT&& value) {
    m_tableOptionsHasBeenSet = true;
    m_tableOptions = std::forward<TableOptionsT>(value);
  }
  template <typename TableOptionsT = TableOptions>
  TableConfiguration& WithTableOptions(TableOptionsT&& value) {
    SetTableOptions(std::forward<TableOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total options for a table visual.</p>
   */
  inline const TotalOptions& GetTotalOptions() const { return m_totalOptions; }
  inline bool TotalOptionsHasBeenSet() const { return m_totalOptionsHasBeenSet; }
  template <typename TotalOptionsT = TotalOptions>
  void SetTotalOptions(TotalOptionsT&& value) {
    m_totalOptionsHasBeenSet = true;
    m_totalOptions = std::forward<TotalOptionsT>(value);
  }
  template <typename TotalOptionsT = TotalOptions>
  TableConfiguration& WithTotalOptions(TotalOptionsT&& value) {
    SetTotalOptions(std::forward<TotalOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field options for a table visual.</p>
   */
  inline const TableFieldOptions& GetFieldOptions() const { return m_fieldOptions; }
  inline bool FieldOptionsHasBeenSet() const { return m_fieldOptionsHasBeenSet; }
  template <typename FieldOptionsT = TableFieldOptions>
  void SetFieldOptions(FieldOptionsT&& value) {
    m_fieldOptionsHasBeenSet = true;
    m_fieldOptions = std::forward<FieldOptionsT>(value);
  }
  template <typename FieldOptionsT = TableFieldOptions>
  TableConfiguration& WithFieldOptions(FieldOptionsT&& value) {
    SetFieldOptions(std::forward<FieldOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The paginated report options for a table visual.</p>
   */
  inline const TablePaginatedReportOptions& GetPaginatedReportOptions() const { return m_paginatedReportOptions; }
  inline bool PaginatedReportOptionsHasBeenSet() const { return m_paginatedReportOptionsHasBeenSet; }
  template <typename PaginatedReportOptionsT = TablePaginatedReportOptions>
  void SetPaginatedReportOptions(PaginatedReportOptionsT&& value) {
    m_paginatedReportOptionsHasBeenSet = true;
    m_paginatedReportOptions = std::forward<PaginatedReportOptionsT>(value);
  }
  template <typename PaginatedReportOptionsT = TablePaginatedReportOptions>
  TableConfiguration& WithPaginatedReportOptions(PaginatedReportOptionsT&& value) {
    SetPaginatedReportOptions(std::forward<PaginatedReportOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A collection of inline visualizations to display within a chart.</p>
   */
  inline const Aws::Vector<TableInlineVisualization>& GetTableInlineVisualizations() const { return m_tableInlineVisualizations; }
  inline bool TableInlineVisualizationsHasBeenSet() const { return m_tableInlineVisualizationsHasBeenSet; }
  template <typename TableInlineVisualizationsT = Aws::Vector<TableInlineVisualization>>
  void SetTableInlineVisualizations(TableInlineVisualizationsT&& value) {
    m_tableInlineVisualizationsHasBeenSet = true;
    m_tableInlineVisualizations = std::forward<TableInlineVisualizationsT>(value);
  }
  template <typename TableInlineVisualizationsT = Aws::Vector<TableInlineVisualization>>
  TableConfiguration& WithTableInlineVisualizations(TableInlineVisualizationsT&& value) {
    SetTableInlineVisualizations(std::forward<TableInlineVisualizationsT>(value));
    return *this;
  }
  template <typename TableInlineVisualizationsT = TableInlineVisualization>
  TableConfiguration& AddTableInlineVisualizations(TableInlineVisualizationsT&& value) {
    m_tableInlineVisualizationsHasBeenSet = true;
    m_tableInlineVisualizations.emplace_back(std::forward<TableInlineVisualizationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The options that define customizations available to dashboard readers for a
   * specific visual</p>
   */
  inline const DashboardCustomizationVisualOptions& GetDashboardCustomizationVisualOptions() const {
    return m_dashboardCustomizationVisualOptions;
  }
  inline bool DashboardCustomizationVisualOptionsHasBeenSet() const { return m_dashboardCustomizationVisualOptionsHasBeenSet; }
  template <typename DashboardCustomizationVisualOptionsT = DashboardCustomizationVisualOptions>
  void SetDashboardCustomizationVisualOptions(DashboardCustomizationVisualOptionsT&& value) {
    m_dashboardCustomizationVisualOptionsHasBeenSet = true;
    m_dashboardCustomizationVisualOptions = std::forward<DashboardCustomizationVisualOptionsT>(value);
  }
  template <typename DashboardCustomizationVisualOptionsT = DashboardCustomizationVisualOptions>
  TableConfiguration& WithDashboardCustomizationVisualOptions(DashboardCustomizationVisualOptionsT&& value) {
    SetDashboardCustomizationVisualOptions(std::forward<DashboardCustomizationVisualOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The general visual interactions setup for a visual.</p>
   */
  inline const VisualInteractionOptions& GetInteractions() const { return m_interactions; }
  inline bool InteractionsHasBeenSet() const { return m_interactionsHasBeenSet; }
  template <typename InteractionsT = VisualInteractionOptions>
  void SetInteractions(InteractionsT&& value) {
    m_interactionsHasBeenSet = true;
    m_interactions = std::forward<InteractionsT>(value);
  }
  template <typename InteractionsT = VisualInteractionOptions>
  TableConfiguration& WithInteractions(InteractionsT&& value) {
    SetInteractions(std::forward<InteractionsT>(value));
    return *this;
  }
  ///@}
 private:
  TableFieldWells m_fieldWells;

  TableSortConfiguration m_sortConfiguration;

  TableOptions m_tableOptions;

  TotalOptions m_totalOptions;

  TableFieldOptions m_fieldOptions;

  TablePaginatedReportOptions m_paginatedReportOptions;

  Aws::Vector<TableInlineVisualization> m_tableInlineVisualizations;

  DashboardCustomizationVisualOptions m_dashboardCustomizationVisualOptions;

  VisualInteractionOptions m_interactions;
  bool m_fieldWellsHasBeenSet = false;
  bool m_sortConfigurationHasBeenSet = false;
  bool m_tableOptionsHasBeenSet = false;
  bool m_totalOptionsHasBeenSet = false;
  bool m_fieldOptionsHasBeenSet = false;
  bool m_paginatedReportOptionsHasBeenSet = false;
  bool m_tableInlineVisualizationsHasBeenSet = false;
  bool m_dashboardCustomizationVisualOptionsHasBeenSet = false;
  bool m_interactionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
