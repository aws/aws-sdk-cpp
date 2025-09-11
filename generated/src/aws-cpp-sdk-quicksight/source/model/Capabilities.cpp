/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Capabilities.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

Capabilities::Capabilities(JsonView jsonValue)
{
  *this = jsonValue;
}

Capabilities& Capabilities::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExportToCsv"))
  {
    m_exportToCsv = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ExportToCsv"));
    m_exportToCsvHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExportToExcel"))
  {
    m_exportToExcel = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ExportToExcel"));
    m_exportToExcelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExportToPdf"))
  {
    m_exportToPdf = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ExportToPdf"));
    m_exportToPdfHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PrintReports"))
  {
    m_printReports = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("PrintReports"));
    m_printReportsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreateAndUpdateThemes"))
  {
    m_createAndUpdateThemes = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateThemes"));
    m_createAndUpdateThemesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AddOrRunAnomalyDetectionForAnalyses"))
  {
    m_addOrRunAnomalyDetectionForAnalyses = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("AddOrRunAnomalyDetectionForAnalyses"));
    m_addOrRunAnomalyDetectionForAnalysesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ShareAnalyses"))
  {
    m_shareAnalyses = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareAnalyses"));
    m_shareAnalysesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreateAndUpdateDatasets"))
  {
    m_createAndUpdateDatasets = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateDatasets"));
    m_createAndUpdateDatasetsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ShareDatasets"))
  {
    m_shareDatasets = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareDatasets"));
    m_shareDatasetsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubscribeDashboardEmailReports"))
  {
    m_subscribeDashboardEmailReports = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("SubscribeDashboardEmailReports"));
    m_subscribeDashboardEmailReportsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreateAndUpdateDashboardEmailReports"))
  {
    m_createAndUpdateDashboardEmailReports = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateDashboardEmailReports"));
    m_createAndUpdateDashboardEmailReportsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ShareDashboards"))
  {
    m_shareDashboards = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareDashboards"));
    m_shareDashboardsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreateAndUpdateThresholdAlerts"))
  {
    m_createAndUpdateThresholdAlerts = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateThresholdAlerts"));
    m_createAndUpdateThresholdAlertsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RenameSharedFolders"))
  {
    m_renameSharedFolders = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("RenameSharedFolders"));
    m_renameSharedFoldersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreateSharedFolders"))
  {
    m_createSharedFolders = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateSharedFolders"));
    m_createSharedFoldersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreateAndUpdateDataSources"))
  {
    m_createAndUpdateDataSources = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateDataSources"));
    m_createAndUpdateDataSourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ShareDataSources"))
  {
    m_shareDataSources = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareDataSources"));
    m_shareDataSourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ViewAccountSPICECapacity"))
  {
    m_viewAccountSPICECapacity = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ViewAccountSPICECapacity"));
    m_viewAccountSPICECapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreateSPICEDataset"))
  {
    m_createSPICEDataset = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateSPICEDataset"));
    m_createSPICEDatasetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExportToPdfInScheduledReports"))
  {
    m_exportToPdfInScheduledReports = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ExportToPdfInScheduledReports"));
    m_exportToPdfInScheduledReportsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExportToCsvInScheduledReports"))
  {
    m_exportToCsvInScheduledReports = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ExportToCsvInScheduledReports"));
    m_exportToCsvInScheduledReportsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExportToExcelInScheduledReports"))
  {
    m_exportToExcelInScheduledReports = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ExportToExcelInScheduledReports"));
    m_exportToExcelInScheduledReportsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncludeContentInScheduledReportsEmail"))
  {
    m_includeContentInScheduledReportsEmail = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("IncludeContentInScheduledReportsEmail"));
    m_includeContentInScheduledReportsEmailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Dashboard"))
  {
    m_dashboard = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("Dashboard"));
    m_dashboardHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Analysis"))
  {
    m_analysis = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("Analysis"));
    m_analysisHasBeenSet = true;
  }
  return *this;
}

JsonValue Capabilities::Jsonize() const
{
  JsonValue payload;

  if(m_exportToCsvHasBeenSet)
  {
   payload.WithString("ExportToCsv", CapabilityStateMapper::GetNameForCapabilityState(m_exportToCsv));
  }

  if(m_exportToExcelHasBeenSet)
  {
   payload.WithString("ExportToExcel", CapabilityStateMapper::GetNameForCapabilityState(m_exportToExcel));
  }

  if(m_exportToPdfHasBeenSet)
  {
   payload.WithString("ExportToPdf", CapabilityStateMapper::GetNameForCapabilityState(m_exportToPdf));
  }

  if(m_printReportsHasBeenSet)
  {
   payload.WithString("PrintReports", CapabilityStateMapper::GetNameForCapabilityState(m_printReports));
  }

  if(m_createAndUpdateThemesHasBeenSet)
  {
   payload.WithString("CreateAndUpdateThemes", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateThemes));
  }

  if(m_addOrRunAnomalyDetectionForAnalysesHasBeenSet)
  {
   payload.WithString("AddOrRunAnomalyDetectionForAnalyses", CapabilityStateMapper::GetNameForCapabilityState(m_addOrRunAnomalyDetectionForAnalyses));
  }

  if(m_shareAnalysesHasBeenSet)
  {
   payload.WithString("ShareAnalyses", CapabilityStateMapper::GetNameForCapabilityState(m_shareAnalyses));
  }

  if(m_createAndUpdateDatasetsHasBeenSet)
  {
   payload.WithString("CreateAndUpdateDatasets", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateDatasets));
  }

  if(m_shareDatasetsHasBeenSet)
  {
   payload.WithString("ShareDatasets", CapabilityStateMapper::GetNameForCapabilityState(m_shareDatasets));
  }

  if(m_subscribeDashboardEmailReportsHasBeenSet)
  {
   payload.WithString("SubscribeDashboardEmailReports", CapabilityStateMapper::GetNameForCapabilityState(m_subscribeDashboardEmailReports));
  }

  if(m_createAndUpdateDashboardEmailReportsHasBeenSet)
  {
   payload.WithString("CreateAndUpdateDashboardEmailReports", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateDashboardEmailReports));
  }

  if(m_shareDashboardsHasBeenSet)
  {
   payload.WithString("ShareDashboards", CapabilityStateMapper::GetNameForCapabilityState(m_shareDashboards));
  }

  if(m_createAndUpdateThresholdAlertsHasBeenSet)
  {
   payload.WithString("CreateAndUpdateThresholdAlerts", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateThresholdAlerts));
  }

  if(m_renameSharedFoldersHasBeenSet)
  {
   payload.WithString("RenameSharedFolders", CapabilityStateMapper::GetNameForCapabilityState(m_renameSharedFolders));
  }

  if(m_createSharedFoldersHasBeenSet)
  {
   payload.WithString("CreateSharedFolders", CapabilityStateMapper::GetNameForCapabilityState(m_createSharedFolders));
  }

  if(m_createAndUpdateDataSourcesHasBeenSet)
  {
   payload.WithString("CreateAndUpdateDataSources", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateDataSources));
  }

  if(m_shareDataSourcesHasBeenSet)
  {
   payload.WithString("ShareDataSources", CapabilityStateMapper::GetNameForCapabilityState(m_shareDataSources));
  }

  if(m_viewAccountSPICECapacityHasBeenSet)
  {
   payload.WithString("ViewAccountSPICECapacity", CapabilityStateMapper::GetNameForCapabilityState(m_viewAccountSPICECapacity));
  }

  if(m_createSPICEDatasetHasBeenSet)
  {
   payload.WithString("CreateSPICEDataset", CapabilityStateMapper::GetNameForCapabilityState(m_createSPICEDataset));
  }

  if(m_exportToPdfInScheduledReportsHasBeenSet)
  {
   payload.WithString("ExportToPdfInScheduledReports", CapabilityStateMapper::GetNameForCapabilityState(m_exportToPdfInScheduledReports));
  }

  if(m_exportToCsvInScheduledReportsHasBeenSet)
  {
   payload.WithString("ExportToCsvInScheduledReports", CapabilityStateMapper::GetNameForCapabilityState(m_exportToCsvInScheduledReports));
  }

  if(m_exportToExcelInScheduledReportsHasBeenSet)
  {
   payload.WithString("ExportToExcelInScheduledReports", CapabilityStateMapper::GetNameForCapabilityState(m_exportToExcelInScheduledReports));
  }

  if(m_includeContentInScheduledReportsEmailHasBeenSet)
  {
   payload.WithString("IncludeContentInScheduledReportsEmail", CapabilityStateMapper::GetNameForCapabilityState(m_includeContentInScheduledReportsEmail));
  }

  if(m_dashboardHasBeenSet)
  {
   payload.WithString("Dashboard", CapabilityStateMapper::GetNameForCapabilityState(m_dashboard));
  }

  if(m_analysisHasBeenSet)
  {
   payload.WithString("Analysis", CapabilityStateMapper::GetNameForCapabilityState(m_analysis));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
