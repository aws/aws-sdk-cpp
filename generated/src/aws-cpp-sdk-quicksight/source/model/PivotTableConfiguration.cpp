/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/PivotTableConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

PivotTableConfiguration::PivotTableConfiguration(JsonView jsonValue) { *this = jsonValue; }

PivotTableConfiguration& PivotTableConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FieldWells")) {
    m_fieldWells = jsonValue.GetObject("FieldWells");
    m_fieldWellsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SortConfiguration")) {
    m_sortConfiguration = jsonValue.GetObject("SortConfiguration");
    m_sortConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TableOptions")) {
    m_tableOptions = jsonValue.GetObject("TableOptions");
    m_tableOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalOptions")) {
    m_totalOptions = jsonValue.GetObject("TotalOptions");
    m_totalOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FieldOptions")) {
    m_fieldOptions = jsonValue.GetObject("FieldOptions");
    m_fieldOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PaginatedReportOptions")) {
    m_paginatedReportOptions = jsonValue.GetObject("PaginatedReportOptions");
    m_paginatedReportOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DashboardCustomizationVisualOptions")) {
    m_dashboardCustomizationVisualOptions = jsonValue.GetObject("DashboardCustomizationVisualOptions");
    m_dashboardCustomizationVisualOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Interactions")) {
    m_interactions = jsonValue.GetObject("Interactions");
    m_interactionsHasBeenSet = true;
  }
  return *this;
}

JsonValue PivotTableConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_fieldWellsHasBeenSet) {
    payload.WithObject("FieldWells", m_fieldWells.Jsonize());
  }

  if (m_sortConfigurationHasBeenSet) {
    payload.WithObject("SortConfiguration", m_sortConfiguration.Jsonize());
  }

  if (m_tableOptionsHasBeenSet) {
    payload.WithObject("TableOptions", m_tableOptions.Jsonize());
  }

  if (m_totalOptionsHasBeenSet) {
    payload.WithObject("TotalOptions", m_totalOptions.Jsonize());
  }

  if (m_fieldOptionsHasBeenSet) {
    payload.WithObject("FieldOptions", m_fieldOptions.Jsonize());
  }

  if (m_paginatedReportOptionsHasBeenSet) {
    payload.WithObject("PaginatedReportOptions", m_paginatedReportOptions.Jsonize());
  }

  if (m_dashboardCustomizationVisualOptionsHasBeenSet) {
    payload.WithObject("DashboardCustomizationVisualOptions", m_dashboardCustomizationVisualOptions.Jsonize());
  }

  if (m_interactionsHasBeenSet) {
    payload.WithObject("Interactions", m_interactions.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
