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

Capabilities::Capabilities() : 
    m_exportToCsv(CapabilityState::NOT_SET),
    m_exportToCsvHasBeenSet(false),
    m_exportToExcel(CapabilityState::NOT_SET),
    m_exportToExcelHasBeenSet(false),
    m_createAndUpdateThemes(CapabilityState::NOT_SET),
    m_createAndUpdateThemesHasBeenSet(false),
    m_addOrRunAnomalyDetectionForAnalyses(CapabilityState::NOT_SET),
    m_addOrRunAnomalyDetectionForAnalysesHasBeenSet(false),
    m_shareAnalyses(CapabilityState::NOT_SET),
    m_shareAnalysesHasBeenSet(false),
    m_createAndUpdateDatasets(CapabilityState::NOT_SET),
    m_createAndUpdateDatasetsHasBeenSet(false),
    m_shareDatasets(CapabilityState::NOT_SET),
    m_shareDatasetsHasBeenSet(false),
    m_subscribeDashboardEmailReports(CapabilityState::NOT_SET),
    m_subscribeDashboardEmailReportsHasBeenSet(false),
    m_createAndUpdateDashboardEmailReports(CapabilityState::NOT_SET),
    m_createAndUpdateDashboardEmailReportsHasBeenSet(false),
    m_shareDashboards(CapabilityState::NOT_SET),
    m_shareDashboardsHasBeenSet(false),
    m_createAndUpdateThresholdAlerts(CapabilityState::NOT_SET),
    m_createAndUpdateThresholdAlertsHasBeenSet(false),
    m_renameSharedFolders(CapabilityState::NOT_SET),
    m_renameSharedFoldersHasBeenSet(false),
    m_createSharedFolders(CapabilityState::NOT_SET),
    m_createSharedFoldersHasBeenSet(false),
    m_createAndUpdateDataSources(CapabilityState::NOT_SET),
    m_createAndUpdateDataSourcesHasBeenSet(false),
    m_shareDataSources(CapabilityState::NOT_SET),
    m_shareDataSourcesHasBeenSet(false),
    m_viewAccountSPICECapacity(CapabilityState::NOT_SET),
    m_viewAccountSPICECapacityHasBeenSet(false),
    m_createSPICEDataset(CapabilityState::NOT_SET),
    m_createSPICEDatasetHasBeenSet(false)
{
}

Capabilities::Capabilities(JsonView jsonValue)
  : Capabilities()
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

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
