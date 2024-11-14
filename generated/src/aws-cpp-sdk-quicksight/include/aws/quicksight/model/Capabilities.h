/**
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
    AWS_QUICKSIGHT_API Capabilities();
    AWS_QUICKSIGHT_API Capabilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Capabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ability to export to CSV files.</p>
     */
    inline const CapabilityState& GetExportToCsv() const{ return m_exportToCsv; }
    inline bool ExportToCsvHasBeenSet() const { return m_exportToCsvHasBeenSet; }
    inline void SetExportToCsv(const CapabilityState& value) { m_exportToCsvHasBeenSet = true; m_exportToCsv = value; }
    inline void SetExportToCsv(CapabilityState&& value) { m_exportToCsvHasBeenSet = true; m_exportToCsv = std::move(value); }
    inline Capabilities& WithExportToCsv(const CapabilityState& value) { SetExportToCsv(value); return *this;}
    inline Capabilities& WithExportToCsv(CapabilityState&& value) { SetExportToCsv(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to export to Excel files.</p>
     */
    inline const CapabilityState& GetExportToExcel() const{ return m_exportToExcel; }
    inline bool ExportToExcelHasBeenSet() const { return m_exportToExcelHasBeenSet; }
    inline void SetExportToExcel(const CapabilityState& value) { m_exportToExcelHasBeenSet = true; m_exportToExcel = value; }
    inline void SetExportToExcel(CapabilityState&& value) { m_exportToExcelHasBeenSet = true; m_exportToExcel = std::move(value); }
    inline Capabilities& WithExportToExcel(const CapabilityState& value) { SetExportToExcel(value); return *this;}
    inline Capabilities& WithExportToExcel(CapabilityState&& value) { SetExportToExcel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to export to Create and Update themes.</p>
     */
    inline const CapabilityState& GetCreateAndUpdateThemes() const{ return m_createAndUpdateThemes; }
    inline bool CreateAndUpdateThemesHasBeenSet() const { return m_createAndUpdateThemesHasBeenSet; }
    inline void SetCreateAndUpdateThemes(const CapabilityState& value) { m_createAndUpdateThemesHasBeenSet = true; m_createAndUpdateThemes = value; }
    inline void SetCreateAndUpdateThemes(CapabilityState&& value) { m_createAndUpdateThemesHasBeenSet = true; m_createAndUpdateThemes = std::move(value); }
    inline Capabilities& WithCreateAndUpdateThemes(const CapabilityState& value) { SetCreateAndUpdateThemes(value); return *this;}
    inline Capabilities& WithCreateAndUpdateThemes(CapabilityState&& value) { SetCreateAndUpdateThemes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to add or run anomaly detection.</p>
     */
    inline const CapabilityState& GetAddOrRunAnomalyDetectionForAnalyses() const{ return m_addOrRunAnomalyDetectionForAnalyses; }
    inline bool AddOrRunAnomalyDetectionForAnalysesHasBeenSet() const { return m_addOrRunAnomalyDetectionForAnalysesHasBeenSet; }
    inline void SetAddOrRunAnomalyDetectionForAnalyses(const CapabilityState& value) { m_addOrRunAnomalyDetectionForAnalysesHasBeenSet = true; m_addOrRunAnomalyDetectionForAnalyses = value; }
    inline void SetAddOrRunAnomalyDetectionForAnalyses(CapabilityState&& value) { m_addOrRunAnomalyDetectionForAnalysesHasBeenSet = true; m_addOrRunAnomalyDetectionForAnalyses = std::move(value); }
    inline Capabilities& WithAddOrRunAnomalyDetectionForAnalyses(const CapabilityState& value) { SetAddOrRunAnomalyDetectionForAnalyses(value); return *this;}
    inline Capabilities& WithAddOrRunAnomalyDetectionForAnalyses(CapabilityState&& value) { SetAddOrRunAnomalyDetectionForAnalyses(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to share analyses.</p>
     */
    inline const CapabilityState& GetShareAnalyses() const{ return m_shareAnalyses; }
    inline bool ShareAnalysesHasBeenSet() const { return m_shareAnalysesHasBeenSet; }
    inline void SetShareAnalyses(const CapabilityState& value) { m_shareAnalysesHasBeenSet = true; m_shareAnalyses = value; }
    inline void SetShareAnalyses(CapabilityState&& value) { m_shareAnalysesHasBeenSet = true; m_shareAnalyses = std::move(value); }
    inline Capabilities& WithShareAnalyses(const CapabilityState& value) { SetShareAnalyses(value); return *this;}
    inline Capabilities& WithShareAnalyses(CapabilityState&& value) { SetShareAnalyses(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to create and update datasets.</p>
     */
    inline const CapabilityState& GetCreateAndUpdateDatasets() const{ return m_createAndUpdateDatasets; }
    inline bool CreateAndUpdateDatasetsHasBeenSet() const { return m_createAndUpdateDatasetsHasBeenSet; }
    inline void SetCreateAndUpdateDatasets(const CapabilityState& value) { m_createAndUpdateDatasetsHasBeenSet = true; m_createAndUpdateDatasets = value; }
    inline void SetCreateAndUpdateDatasets(CapabilityState&& value) { m_createAndUpdateDatasetsHasBeenSet = true; m_createAndUpdateDatasets = std::move(value); }
    inline Capabilities& WithCreateAndUpdateDatasets(const CapabilityState& value) { SetCreateAndUpdateDatasets(value); return *this;}
    inline Capabilities& WithCreateAndUpdateDatasets(CapabilityState&& value) { SetCreateAndUpdateDatasets(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to share datasets.</p>
     */
    inline const CapabilityState& GetShareDatasets() const{ return m_shareDatasets; }
    inline bool ShareDatasetsHasBeenSet() const { return m_shareDatasetsHasBeenSet; }
    inline void SetShareDatasets(const CapabilityState& value) { m_shareDatasetsHasBeenSet = true; m_shareDatasets = value; }
    inline void SetShareDatasets(CapabilityState&& value) { m_shareDatasetsHasBeenSet = true; m_shareDatasets = std::move(value); }
    inline Capabilities& WithShareDatasets(const CapabilityState& value) { SetShareDatasets(value); return *this;}
    inline Capabilities& WithShareDatasets(CapabilityState&& value) { SetShareDatasets(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to subscribe to email reports.</p>
     */
    inline const CapabilityState& GetSubscribeDashboardEmailReports() const{ return m_subscribeDashboardEmailReports; }
    inline bool SubscribeDashboardEmailReportsHasBeenSet() const { return m_subscribeDashboardEmailReportsHasBeenSet; }
    inline void SetSubscribeDashboardEmailReports(const CapabilityState& value) { m_subscribeDashboardEmailReportsHasBeenSet = true; m_subscribeDashboardEmailReports = value; }
    inline void SetSubscribeDashboardEmailReports(CapabilityState&& value) { m_subscribeDashboardEmailReportsHasBeenSet = true; m_subscribeDashboardEmailReports = std::move(value); }
    inline Capabilities& WithSubscribeDashboardEmailReports(const CapabilityState& value) { SetSubscribeDashboardEmailReports(value); return *this;}
    inline Capabilities& WithSubscribeDashboardEmailReports(CapabilityState&& value) { SetSubscribeDashboardEmailReports(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to create and update email reports.</p>
     */
    inline const CapabilityState& GetCreateAndUpdateDashboardEmailReports() const{ return m_createAndUpdateDashboardEmailReports; }
    inline bool CreateAndUpdateDashboardEmailReportsHasBeenSet() const { return m_createAndUpdateDashboardEmailReportsHasBeenSet; }
    inline void SetCreateAndUpdateDashboardEmailReports(const CapabilityState& value) { m_createAndUpdateDashboardEmailReportsHasBeenSet = true; m_createAndUpdateDashboardEmailReports = value; }
    inline void SetCreateAndUpdateDashboardEmailReports(CapabilityState&& value) { m_createAndUpdateDashboardEmailReportsHasBeenSet = true; m_createAndUpdateDashboardEmailReports = std::move(value); }
    inline Capabilities& WithCreateAndUpdateDashboardEmailReports(const CapabilityState& value) { SetCreateAndUpdateDashboardEmailReports(value); return *this;}
    inline Capabilities& WithCreateAndUpdateDashboardEmailReports(CapabilityState&& value) { SetCreateAndUpdateDashboardEmailReports(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to share dashboards.</p>
     */
    inline const CapabilityState& GetShareDashboards() const{ return m_shareDashboards; }
    inline bool ShareDashboardsHasBeenSet() const { return m_shareDashboardsHasBeenSet; }
    inline void SetShareDashboards(const CapabilityState& value) { m_shareDashboardsHasBeenSet = true; m_shareDashboards = value; }
    inline void SetShareDashboards(CapabilityState&& value) { m_shareDashboardsHasBeenSet = true; m_shareDashboards = std::move(value); }
    inline Capabilities& WithShareDashboards(const CapabilityState& value) { SetShareDashboards(value); return *this;}
    inline Capabilities& WithShareDashboards(CapabilityState&& value) { SetShareDashboards(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to create and update threshold alerts.</p>
     */
    inline const CapabilityState& GetCreateAndUpdateThresholdAlerts() const{ return m_createAndUpdateThresholdAlerts; }
    inline bool CreateAndUpdateThresholdAlertsHasBeenSet() const { return m_createAndUpdateThresholdAlertsHasBeenSet; }
    inline void SetCreateAndUpdateThresholdAlerts(const CapabilityState& value) { m_createAndUpdateThresholdAlertsHasBeenSet = true; m_createAndUpdateThresholdAlerts = value; }
    inline void SetCreateAndUpdateThresholdAlerts(CapabilityState&& value) { m_createAndUpdateThresholdAlertsHasBeenSet = true; m_createAndUpdateThresholdAlerts = std::move(value); }
    inline Capabilities& WithCreateAndUpdateThresholdAlerts(const CapabilityState& value) { SetCreateAndUpdateThresholdAlerts(value); return *this;}
    inline Capabilities& WithCreateAndUpdateThresholdAlerts(CapabilityState&& value) { SetCreateAndUpdateThresholdAlerts(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to rename shared folders.</p>
     */
    inline const CapabilityState& GetRenameSharedFolders() const{ return m_renameSharedFolders; }
    inline bool RenameSharedFoldersHasBeenSet() const { return m_renameSharedFoldersHasBeenSet; }
    inline void SetRenameSharedFolders(const CapabilityState& value) { m_renameSharedFoldersHasBeenSet = true; m_renameSharedFolders = value; }
    inline void SetRenameSharedFolders(CapabilityState&& value) { m_renameSharedFoldersHasBeenSet = true; m_renameSharedFolders = std::move(value); }
    inline Capabilities& WithRenameSharedFolders(const CapabilityState& value) { SetRenameSharedFolders(value); return *this;}
    inline Capabilities& WithRenameSharedFolders(CapabilityState&& value) { SetRenameSharedFolders(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to create shared folders.</p>
     */
    inline const CapabilityState& GetCreateSharedFolders() const{ return m_createSharedFolders; }
    inline bool CreateSharedFoldersHasBeenSet() const { return m_createSharedFoldersHasBeenSet; }
    inline void SetCreateSharedFolders(const CapabilityState& value) { m_createSharedFoldersHasBeenSet = true; m_createSharedFolders = value; }
    inline void SetCreateSharedFolders(CapabilityState&& value) { m_createSharedFoldersHasBeenSet = true; m_createSharedFolders = std::move(value); }
    inline Capabilities& WithCreateSharedFolders(const CapabilityState& value) { SetCreateSharedFolders(value); return *this;}
    inline Capabilities& WithCreateSharedFolders(CapabilityState&& value) { SetCreateSharedFolders(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to create and update data sources.</p>
     */
    inline const CapabilityState& GetCreateAndUpdateDataSources() const{ return m_createAndUpdateDataSources; }
    inline bool CreateAndUpdateDataSourcesHasBeenSet() const { return m_createAndUpdateDataSourcesHasBeenSet; }
    inline void SetCreateAndUpdateDataSources(const CapabilityState& value) { m_createAndUpdateDataSourcesHasBeenSet = true; m_createAndUpdateDataSources = value; }
    inline void SetCreateAndUpdateDataSources(CapabilityState&& value) { m_createAndUpdateDataSourcesHasBeenSet = true; m_createAndUpdateDataSources = std::move(value); }
    inline Capabilities& WithCreateAndUpdateDataSources(const CapabilityState& value) { SetCreateAndUpdateDataSources(value); return *this;}
    inline Capabilities& WithCreateAndUpdateDataSources(CapabilityState&& value) { SetCreateAndUpdateDataSources(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to share data sources.</p>
     */
    inline const CapabilityState& GetShareDataSources() const{ return m_shareDataSources; }
    inline bool ShareDataSourcesHasBeenSet() const { return m_shareDataSourcesHasBeenSet; }
    inline void SetShareDataSources(const CapabilityState& value) { m_shareDataSourcesHasBeenSet = true; m_shareDataSources = value; }
    inline void SetShareDataSources(CapabilityState&& value) { m_shareDataSourcesHasBeenSet = true; m_shareDataSources = std::move(value); }
    inline Capabilities& WithShareDataSources(const CapabilityState& value) { SetShareDataSources(value); return *this;}
    inline Capabilities& WithShareDataSources(CapabilityState&& value) { SetShareDataSources(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to view account SPICE capacity.</p>
     */
    inline const CapabilityState& GetViewAccountSPICECapacity() const{ return m_viewAccountSPICECapacity; }
    inline bool ViewAccountSPICECapacityHasBeenSet() const { return m_viewAccountSPICECapacityHasBeenSet; }
    inline void SetViewAccountSPICECapacity(const CapabilityState& value) { m_viewAccountSPICECapacityHasBeenSet = true; m_viewAccountSPICECapacity = value; }
    inline void SetViewAccountSPICECapacity(CapabilityState&& value) { m_viewAccountSPICECapacityHasBeenSet = true; m_viewAccountSPICECapacity = std::move(value); }
    inline Capabilities& WithViewAccountSPICECapacity(const CapabilityState& value) { SetViewAccountSPICECapacity(value); return *this;}
    inline Capabilities& WithViewAccountSPICECapacity(CapabilityState&& value) { SetViewAccountSPICECapacity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ability to create a SPICE dataset.</p>
     */
    inline const CapabilityState& GetCreateSPICEDataset() const{ return m_createSPICEDataset; }
    inline bool CreateSPICEDatasetHasBeenSet() const { return m_createSPICEDatasetHasBeenSet; }
    inline void SetCreateSPICEDataset(const CapabilityState& value) { m_createSPICEDatasetHasBeenSet = true; m_createSPICEDataset = value; }
    inline void SetCreateSPICEDataset(CapabilityState&& value) { m_createSPICEDatasetHasBeenSet = true; m_createSPICEDataset = std::move(value); }
    inline Capabilities& WithCreateSPICEDataset(const CapabilityState& value) { SetCreateSPICEDataset(value); return *this;}
    inline Capabilities& WithCreateSPICEDataset(CapabilityState&& value) { SetCreateSPICEDataset(std::move(value)); return *this;}
    ///@}
  private:

    CapabilityState m_exportToCsv;
    bool m_exportToCsvHasBeenSet = false;

    CapabilityState m_exportToExcel;
    bool m_exportToExcelHasBeenSet = false;

    CapabilityState m_createAndUpdateThemes;
    bool m_createAndUpdateThemesHasBeenSet = false;

    CapabilityState m_addOrRunAnomalyDetectionForAnalyses;
    bool m_addOrRunAnomalyDetectionForAnalysesHasBeenSet = false;

    CapabilityState m_shareAnalyses;
    bool m_shareAnalysesHasBeenSet = false;

    CapabilityState m_createAndUpdateDatasets;
    bool m_createAndUpdateDatasetsHasBeenSet = false;

    CapabilityState m_shareDatasets;
    bool m_shareDatasetsHasBeenSet = false;

    CapabilityState m_subscribeDashboardEmailReports;
    bool m_subscribeDashboardEmailReportsHasBeenSet = false;

    CapabilityState m_createAndUpdateDashboardEmailReports;
    bool m_createAndUpdateDashboardEmailReportsHasBeenSet = false;

    CapabilityState m_shareDashboards;
    bool m_shareDashboardsHasBeenSet = false;

    CapabilityState m_createAndUpdateThresholdAlerts;
    bool m_createAndUpdateThresholdAlertsHasBeenSet = false;

    CapabilityState m_renameSharedFolders;
    bool m_renameSharedFoldersHasBeenSet = false;

    CapabilityState m_createSharedFolders;
    bool m_createSharedFoldersHasBeenSet = false;

    CapabilityState m_createAndUpdateDataSources;
    bool m_createAndUpdateDataSourcesHasBeenSet = false;

    CapabilityState m_shareDataSources;
    bool m_shareDataSourcesHasBeenSet = false;

    CapabilityState m_viewAccountSPICECapacity;
    bool m_viewAccountSPICECapacityHasBeenSet = false;

    CapabilityState m_createSPICEDataset;
    bool m_createSPICEDatasetHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
