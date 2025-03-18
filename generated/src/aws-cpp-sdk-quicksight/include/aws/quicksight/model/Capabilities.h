﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/CapabilityState.h>
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
   * <p>A set of actions that correspond to Amazon QuickSight
   * permissions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Capabilities">AWS
   * API Reference</a></p>
   */
  class Capabilities
  {
  public:
    AWS_QUICKSIGHT_API Capabilities() = default;
    AWS_QUICKSIGHT_API Capabilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Capabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ability to export to CSV files.</p>
     */
    inline CapabilityState GetExportToCsv() const { return m_exportToCsv; }
    inline bool ExportToCsvHasBeenSet() const { return m_exportToCsvHasBeenSet; }
    inline void SetExportToCsv(CapabilityState value) { m_exportToCsvHasBeenSet = true; m_exportToCsv = value; }
    inline Capabilities& WithExportToCsv(CapabilityState value) { SetExportToCsv(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to export to Excel files.</p>
     */
    inline CapabilityState GetExportToExcel() const { return m_exportToExcel; }
    inline bool ExportToExcelHasBeenSet() const { return m_exportToExcelHasBeenSet; }
    inline void SetExportToExcel(CapabilityState value) { m_exportToExcelHasBeenSet = true; m_exportToExcel = value; }
    inline Capabilities& WithExportToExcel(CapabilityState value) { SetExportToExcel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to export to Create and Update themes.</p>
     */
    inline CapabilityState GetCreateAndUpdateThemes() const { return m_createAndUpdateThemes; }
    inline bool CreateAndUpdateThemesHasBeenSet() const { return m_createAndUpdateThemesHasBeenSet; }
    inline void SetCreateAndUpdateThemes(CapabilityState value) { m_createAndUpdateThemesHasBeenSet = true; m_createAndUpdateThemes = value; }
    inline Capabilities& WithCreateAndUpdateThemes(CapabilityState value) { SetCreateAndUpdateThemes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to add or run anomaly detection.</p>
     */
    inline CapabilityState GetAddOrRunAnomalyDetectionForAnalyses() const { return m_addOrRunAnomalyDetectionForAnalyses; }
    inline bool AddOrRunAnomalyDetectionForAnalysesHasBeenSet() const { return m_addOrRunAnomalyDetectionForAnalysesHasBeenSet; }
    inline void SetAddOrRunAnomalyDetectionForAnalyses(CapabilityState value) { m_addOrRunAnomalyDetectionForAnalysesHasBeenSet = true; m_addOrRunAnomalyDetectionForAnalyses = value; }
    inline Capabilities& WithAddOrRunAnomalyDetectionForAnalyses(CapabilityState value) { SetAddOrRunAnomalyDetectionForAnalyses(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to share analyses.</p>
     */
    inline CapabilityState GetShareAnalyses() const { return m_shareAnalyses; }
    inline bool ShareAnalysesHasBeenSet() const { return m_shareAnalysesHasBeenSet; }
    inline void SetShareAnalyses(CapabilityState value) { m_shareAnalysesHasBeenSet = true; m_shareAnalyses = value; }
    inline Capabilities& WithShareAnalyses(CapabilityState value) { SetShareAnalyses(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to create and update datasets.</p>
     */
    inline CapabilityState GetCreateAndUpdateDatasets() const { return m_createAndUpdateDatasets; }
    inline bool CreateAndUpdateDatasetsHasBeenSet() const { return m_createAndUpdateDatasetsHasBeenSet; }
    inline void SetCreateAndUpdateDatasets(CapabilityState value) { m_createAndUpdateDatasetsHasBeenSet = true; m_createAndUpdateDatasets = value; }
    inline Capabilities& WithCreateAndUpdateDatasets(CapabilityState value) { SetCreateAndUpdateDatasets(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to share datasets.</p>
     */
    inline CapabilityState GetShareDatasets() const { return m_shareDatasets; }
    inline bool ShareDatasetsHasBeenSet() const { return m_shareDatasetsHasBeenSet; }
    inline void SetShareDatasets(CapabilityState value) { m_shareDatasetsHasBeenSet = true; m_shareDatasets = value; }
    inline Capabilities& WithShareDatasets(CapabilityState value) { SetShareDatasets(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to subscribe to email reports.</p>
     */
    inline CapabilityState GetSubscribeDashboardEmailReports() const { return m_subscribeDashboardEmailReports; }
    inline bool SubscribeDashboardEmailReportsHasBeenSet() const { return m_subscribeDashboardEmailReportsHasBeenSet; }
    inline void SetSubscribeDashboardEmailReports(CapabilityState value) { m_subscribeDashboardEmailReportsHasBeenSet = true; m_subscribeDashboardEmailReports = value; }
    inline Capabilities& WithSubscribeDashboardEmailReports(CapabilityState value) { SetSubscribeDashboardEmailReports(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to create and update email reports.</p>
     */
    inline CapabilityState GetCreateAndUpdateDashboardEmailReports() const { return m_createAndUpdateDashboardEmailReports; }
    inline bool CreateAndUpdateDashboardEmailReportsHasBeenSet() const { return m_createAndUpdateDashboardEmailReportsHasBeenSet; }
    inline void SetCreateAndUpdateDashboardEmailReports(CapabilityState value) { m_createAndUpdateDashboardEmailReportsHasBeenSet = true; m_createAndUpdateDashboardEmailReports = value; }
    inline Capabilities& WithCreateAndUpdateDashboardEmailReports(CapabilityState value) { SetCreateAndUpdateDashboardEmailReports(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to share dashboards.</p>
     */
    inline CapabilityState GetShareDashboards() const { return m_shareDashboards; }
    inline bool ShareDashboardsHasBeenSet() const { return m_shareDashboardsHasBeenSet; }
    inline void SetShareDashboards(CapabilityState value) { m_shareDashboardsHasBeenSet = true; m_shareDashboards = value; }
    inline Capabilities& WithShareDashboards(CapabilityState value) { SetShareDashboards(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to create and update threshold alerts.</p>
     */
    inline CapabilityState GetCreateAndUpdateThresholdAlerts() const { return m_createAndUpdateThresholdAlerts; }
    inline bool CreateAndUpdateThresholdAlertsHasBeenSet() const { return m_createAndUpdateThresholdAlertsHasBeenSet; }
    inline void SetCreateAndUpdateThresholdAlerts(CapabilityState value) { m_createAndUpdateThresholdAlertsHasBeenSet = true; m_createAndUpdateThresholdAlerts = value; }
    inline Capabilities& WithCreateAndUpdateThresholdAlerts(CapabilityState value) { SetCreateAndUpdateThresholdAlerts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to rename shared folders.</p>
     */
    inline CapabilityState GetRenameSharedFolders() const { return m_renameSharedFolders; }
    inline bool RenameSharedFoldersHasBeenSet() const { return m_renameSharedFoldersHasBeenSet; }
    inline void SetRenameSharedFolders(CapabilityState value) { m_renameSharedFoldersHasBeenSet = true; m_renameSharedFolders = value; }
    inline Capabilities& WithRenameSharedFolders(CapabilityState value) { SetRenameSharedFolders(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to create shared folders.</p>
     */
    inline CapabilityState GetCreateSharedFolders() const { return m_createSharedFolders; }
    inline bool CreateSharedFoldersHasBeenSet() const { return m_createSharedFoldersHasBeenSet; }
    inline void SetCreateSharedFolders(CapabilityState value) { m_createSharedFoldersHasBeenSet = true; m_createSharedFolders = value; }
    inline Capabilities& WithCreateSharedFolders(CapabilityState value) { SetCreateSharedFolders(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to create and update data sources.</p>
     */
    inline CapabilityState GetCreateAndUpdateDataSources() const { return m_createAndUpdateDataSources; }
    inline bool CreateAndUpdateDataSourcesHasBeenSet() const { return m_createAndUpdateDataSourcesHasBeenSet; }
    inline void SetCreateAndUpdateDataSources(CapabilityState value) { m_createAndUpdateDataSourcesHasBeenSet = true; m_createAndUpdateDataSources = value; }
    inline Capabilities& WithCreateAndUpdateDataSources(CapabilityState value) { SetCreateAndUpdateDataSources(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to share data sources.</p>
     */
    inline CapabilityState GetShareDataSources() const { return m_shareDataSources; }
    inline bool ShareDataSourcesHasBeenSet() const { return m_shareDataSourcesHasBeenSet; }
    inline void SetShareDataSources(CapabilityState value) { m_shareDataSourcesHasBeenSet = true; m_shareDataSources = value; }
    inline Capabilities& WithShareDataSources(CapabilityState value) { SetShareDataSources(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to view account SPICE capacity.</p>
     */
    inline CapabilityState GetViewAccountSPICECapacity() const { return m_viewAccountSPICECapacity; }
    inline bool ViewAccountSPICECapacityHasBeenSet() const { return m_viewAccountSPICECapacityHasBeenSet; }
    inline void SetViewAccountSPICECapacity(CapabilityState value) { m_viewAccountSPICECapacityHasBeenSet = true; m_viewAccountSPICECapacity = value; }
    inline Capabilities& WithViewAccountSPICECapacity(CapabilityState value) { SetViewAccountSPICECapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to create a SPICE dataset.</p>
     */
    inline CapabilityState GetCreateSPICEDataset() const { return m_createSPICEDataset; }
    inline bool CreateSPICEDatasetHasBeenSet() const { return m_createSPICEDatasetHasBeenSet; }
    inline void SetCreateSPICEDataset(CapabilityState value) { m_createSPICEDatasetHasBeenSet = true; m_createSPICEDataset = value; }
    inline Capabilities& WithCreateSPICEDataset(CapabilityState value) { SetCreateSPICEDataset(value); return *this;}
    ///@}
  private:

    CapabilityState m_exportToCsv{CapabilityState::NOT_SET};
    bool m_exportToCsvHasBeenSet = false;

    CapabilityState m_exportToExcel{CapabilityState::NOT_SET};
    bool m_exportToExcelHasBeenSet = false;

    CapabilityState m_createAndUpdateThemes{CapabilityState::NOT_SET};
    bool m_createAndUpdateThemesHasBeenSet = false;

    CapabilityState m_addOrRunAnomalyDetectionForAnalyses{CapabilityState::NOT_SET};
    bool m_addOrRunAnomalyDetectionForAnalysesHasBeenSet = false;

    CapabilityState m_shareAnalyses{CapabilityState::NOT_SET};
    bool m_shareAnalysesHasBeenSet = false;

    CapabilityState m_createAndUpdateDatasets{CapabilityState::NOT_SET};
    bool m_createAndUpdateDatasetsHasBeenSet = false;

    CapabilityState m_shareDatasets{CapabilityState::NOT_SET};
    bool m_shareDatasetsHasBeenSet = false;

    CapabilityState m_subscribeDashboardEmailReports{CapabilityState::NOT_SET};
    bool m_subscribeDashboardEmailReportsHasBeenSet = false;

    CapabilityState m_createAndUpdateDashboardEmailReports{CapabilityState::NOT_SET};
    bool m_createAndUpdateDashboardEmailReportsHasBeenSet = false;

    CapabilityState m_shareDashboards{CapabilityState::NOT_SET};
    bool m_shareDashboardsHasBeenSet = false;

    CapabilityState m_createAndUpdateThresholdAlerts{CapabilityState::NOT_SET};
    bool m_createAndUpdateThresholdAlertsHasBeenSet = false;

    CapabilityState m_renameSharedFolders{CapabilityState::NOT_SET};
    bool m_renameSharedFoldersHasBeenSet = false;

    CapabilityState m_createSharedFolders{CapabilityState::NOT_SET};
    bool m_createSharedFoldersHasBeenSet = false;

    CapabilityState m_createAndUpdateDataSources{CapabilityState::NOT_SET};
    bool m_createAndUpdateDataSourcesHasBeenSet = false;

    CapabilityState m_shareDataSources{CapabilityState::NOT_SET};
    bool m_shareDataSourcesHasBeenSet = false;

    CapabilityState m_viewAccountSPICECapacity{CapabilityState::NOT_SET};
    bool m_viewAccountSPICECapacityHasBeenSet = false;

    CapabilityState m_createSPICEDataset{CapabilityState::NOT_SET};
    bool m_createSPICEDatasetHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
