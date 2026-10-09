/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/CapabilityState.h>

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
 * <p>A set of actions that correspond to Amazon Quick Sight
 * permissions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Capabilities">AWS
 * API Reference</a></p>
 */
class Capabilities {
 public:
  AWS_QUICKSIGHT_API Capabilities() = default;
  AWS_QUICKSIGHT_API Capabilities(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Capabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ability to export to CSV files from the UI.</p>
   */
  inline CapabilityState GetExportToCsv() const { return m_exportToCsv; }
  inline bool ExportToCsvHasBeenSet() const { return m_exportToCsvHasBeenSet; }
  inline void SetExportToCsv(CapabilityState value) {
    m_exportToCsvHasBeenSet = true;
    m_exportToCsv = value;
  }
  inline Capabilities& WithExportToCsv(CapabilityState value) {
    SetExportToCsv(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to export to Excel files from the UI.</p>
   */
  inline CapabilityState GetExportToExcel() const { return m_exportToExcel; }
  inline bool ExportToExcelHasBeenSet() const { return m_exportToExcelHasBeenSet; }
  inline void SetExportToExcel(CapabilityState value) {
    m_exportToExcelHasBeenSet = true;
    m_exportToExcel = value;
  }
  inline Capabilities& WithExportToExcel(CapabilityState value) {
    SetExportToExcel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to export to PDF files from the UI.</p>
   */
  inline CapabilityState GetExportToPdf() const { return m_exportToPdf; }
  inline bool ExportToPdfHasBeenSet() const { return m_exportToPdfHasBeenSet; }
  inline void SetExportToPdf(CapabilityState value) {
    m_exportToPdfHasBeenSet = true;
    m_exportToPdf = value;
  }
  inline Capabilities& WithExportToPdf(CapabilityState value) {
    SetExportToPdf(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to print reports.</p>
   */
  inline CapabilityState GetPrintReports() const { return m_printReports; }
  inline bool PrintReportsHasBeenSet() const { return m_printReportsHasBeenSet; }
  inline void SetPrintReports(CapabilityState value) {
    m_printReportsHasBeenSet = true;
    m_printReports = value;
  }
  inline Capabilities& WithPrintReports(CapabilityState value) {
    SetPrintReports(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to export to Create and Update themes.</p>
   */
  inline CapabilityState GetCreateAndUpdateThemes() const { return m_createAndUpdateThemes; }
  inline bool CreateAndUpdateThemesHasBeenSet() const { return m_createAndUpdateThemesHasBeenSet; }
  inline void SetCreateAndUpdateThemes(CapabilityState value) {
    m_createAndUpdateThemesHasBeenSet = true;
    m_createAndUpdateThemes = value;
  }
  inline Capabilities& WithCreateAndUpdateThemes(CapabilityState value) {
    SetCreateAndUpdateThemes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to add or run anomaly detection.</p>
   */
  inline CapabilityState GetAddOrRunAnomalyDetectionForAnalyses() const { return m_addOrRunAnomalyDetectionForAnalyses; }
  inline bool AddOrRunAnomalyDetectionForAnalysesHasBeenSet() const { return m_addOrRunAnomalyDetectionForAnalysesHasBeenSet; }
  inline void SetAddOrRunAnomalyDetectionForAnalyses(CapabilityState value) {
    m_addOrRunAnomalyDetectionForAnalysesHasBeenSet = true;
    m_addOrRunAnomalyDetectionForAnalyses = value;
  }
  inline Capabilities& WithAddOrRunAnomalyDetectionForAnalyses(CapabilityState value) {
    SetAddOrRunAnomalyDetectionForAnalyses(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share analyses.</p>
   */
  inline CapabilityState GetShareAnalyses() const { return m_shareAnalyses; }
  inline bool ShareAnalysesHasBeenSet() const { return m_shareAnalysesHasBeenSet; }
  inline void SetShareAnalyses(CapabilityState value) {
    m_shareAnalysesHasBeenSet = true;
    m_shareAnalyses = value;
  }
  inline Capabilities& WithShareAnalyses(CapabilityState value) {
    SetShareAnalyses(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update datasets.</p>
   */
  inline CapabilityState GetCreateAndUpdateDatasets() const { return m_createAndUpdateDatasets; }
  inline bool CreateAndUpdateDatasetsHasBeenSet() const { return m_createAndUpdateDatasetsHasBeenSet; }
  inline void SetCreateAndUpdateDatasets(CapabilityState value) {
    m_createAndUpdateDatasetsHasBeenSet = true;
    m_createAndUpdateDatasets = value;
  }
  inline Capabilities& WithCreateAndUpdateDatasets(CapabilityState value) {
    SetCreateAndUpdateDatasets(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share datasets.</p>
   */
  inline CapabilityState GetShareDatasets() const { return m_shareDatasets; }
  inline bool ShareDatasetsHasBeenSet() const { return m_shareDatasetsHasBeenSet; }
  inline void SetShareDatasets(CapabilityState value) {
    m_shareDatasetsHasBeenSet = true;
    m_shareDatasets = value;
  }
  inline Capabilities& WithShareDatasets(CapabilityState value) {
    SetShareDatasets(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to subscribe to email reports.</p>
   */
  inline CapabilityState GetSubscribeDashboardEmailReports() const { return m_subscribeDashboardEmailReports; }
  inline bool SubscribeDashboardEmailReportsHasBeenSet() const { return m_subscribeDashboardEmailReportsHasBeenSet; }
  inline void SetSubscribeDashboardEmailReports(CapabilityState value) {
    m_subscribeDashboardEmailReportsHasBeenSet = true;
    m_subscribeDashboardEmailReports = value;
  }
  inline Capabilities& WithSubscribeDashboardEmailReports(CapabilityState value) {
    SetSubscribeDashboardEmailReports(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update email reports.</p>
   */
  inline CapabilityState GetCreateAndUpdateDashboardEmailReports() const { return m_createAndUpdateDashboardEmailReports; }
  inline bool CreateAndUpdateDashboardEmailReportsHasBeenSet() const { return m_createAndUpdateDashboardEmailReportsHasBeenSet; }
  inline void SetCreateAndUpdateDashboardEmailReports(CapabilityState value) {
    m_createAndUpdateDashboardEmailReportsHasBeenSet = true;
    m_createAndUpdateDashboardEmailReports = value;
  }
  inline Capabilities& WithCreateAndUpdateDashboardEmailReports(CapabilityState value) {
    SetCreateAndUpdateDashboardEmailReports(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share dashboards.</p>
   */
  inline CapabilityState GetShareDashboards() const { return m_shareDashboards; }
  inline bool ShareDashboardsHasBeenSet() const { return m_shareDashboardsHasBeenSet; }
  inline void SetShareDashboards(CapabilityState value) {
    m_shareDashboardsHasBeenSet = true;
    m_shareDashboards = value;
  }
  inline Capabilities& WithShareDashboards(CapabilityState value) {
    SetShareDashboards(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update threshold alerts.</p>
   */
  inline CapabilityState GetCreateAndUpdateThresholdAlerts() const { return m_createAndUpdateThresholdAlerts; }
  inline bool CreateAndUpdateThresholdAlertsHasBeenSet() const { return m_createAndUpdateThresholdAlertsHasBeenSet; }
  inline void SetCreateAndUpdateThresholdAlerts(CapabilityState value) {
    m_createAndUpdateThresholdAlertsHasBeenSet = true;
    m_createAndUpdateThresholdAlerts = value;
  }
  inline Capabilities& WithCreateAndUpdateThresholdAlerts(CapabilityState value) {
    SetCreateAndUpdateThresholdAlerts(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to rename shared folders.</p>
   */
  inline CapabilityState GetRenameSharedFolders() const { return m_renameSharedFolders; }
  inline bool RenameSharedFoldersHasBeenSet() const { return m_renameSharedFoldersHasBeenSet; }
  inline void SetRenameSharedFolders(CapabilityState value) {
    m_renameSharedFoldersHasBeenSet = true;
    m_renameSharedFolders = value;
  }
  inline Capabilities& WithRenameSharedFolders(CapabilityState value) {
    SetRenameSharedFolders(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create shared folders.</p>
   */
  inline CapabilityState GetCreateSharedFolders() const { return m_createSharedFolders; }
  inline bool CreateSharedFoldersHasBeenSet() const { return m_createSharedFoldersHasBeenSet; }
  inline void SetCreateSharedFolders(CapabilityState value) {
    m_createSharedFoldersHasBeenSet = true;
    m_createSharedFolders = value;
  }
  inline Capabilities& WithCreateSharedFolders(CapabilityState value) {
    SetCreateSharedFolders(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update data sources.</p>
   */
  inline CapabilityState GetCreateAndUpdateDataSources() const { return m_createAndUpdateDataSources; }
  inline bool CreateAndUpdateDataSourcesHasBeenSet() const { return m_createAndUpdateDataSourcesHasBeenSet; }
  inline void SetCreateAndUpdateDataSources(CapabilityState value) {
    m_createAndUpdateDataSourcesHasBeenSet = true;
    m_createAndUpdateDataSources = value;
  }
  inline Capabilities& WithCreateAndUpdateDataSources(CapabilityState value) {
    SetCreateAndUpdateDataSources(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share data sources.</p>
   */
  inline CapabilityState GetShareDataSources() const { return m_shareDataSources; }
  inline bool ShareDataSourcesHasBeenSet() const { return m_shareDataSourcesHasBeenSet; }
  inline void SetShareDataSources(CapabilityState value) {
    m_shareDataSourcesHasBeenSet = true;
    m_shareDataSources = value;
  }
  inline Capabilities& WithShareDataSources(CapabilityState value) {
    SetShareDataSources(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to view account SPICE capacity.</p>
   */
  inline CapabilityState GetViewAccountSPICECapacity() const { return m_viewAccountSPICECapacity; }
  inline bool ViewAccountSPICECapacityHasBeenSet() const { return m_viewAccountSPICECapacityHasBeenSet; }
  inline void SetViewAccountSPICECapacity(CapabilityState value) {
    m_viewAccountSPICECapacityHasBeenSet = true;
    m_viewAccountSPICECapacity = value;
  }
  inline Capabilities& WithViewAccountSPICECapacity(CapabilityState value) {
    SetViewAccountSPICECapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create a SPICE dataset.</p>
   */
  inline CapabilityState GetCreateSPICEDataset() const { return m_createSPICEDataset; }
  inline bool CreateSPICEDatasetHasBeenSet() const { return m_createSPICEDatasetHasBeenSet; }
  inline void SetCreateSPICEDataset(CapabilityState value) {
    m_createSPICEDatasetHasBeenSet = true;
    m_createSPICEDataset = value;
  }
  inline Capabilities& WithCreateSPICEDataset(CapabilityState value) {
    SetCreateSPICEDataset(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to export to PDF files in scheduled email reports.</p>
   */
  inline CapabilityState GetExportToPdfInScheduledReports() const { return m_exportToPdfInScheduledReports; }
  inline bool ExportToPdfInScheduledReportsHasBeenSet() const { return m_exportToPdfInScheduledReportsHasBeenSet; }
  inline void SetExportToPdfInScheduledReports(CapabilityState value) {
    m_exportToPdfInScheduledReportsHasBeenSet = true;
    m_exportToPdfInScheduledReports = value;
  }
  inline Capabilities& WithExportToPdfInScheduledReports(CapabilityState value) {
    SetExportToPdfInScheduledReports(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to export to CSV files in scheduled email reports.</p>
   */
  inline CapabilityState GetExportToCsvInScheduledReports() const { return m_exportToCsvInScheduledReports; }
  inline bool ExportToCsvInScheduledReportsHasBeenSet() const { return m_exportToCsvInScheduledReportsHasBeenSet; }
  inline void SetExportToCsvInScheduledReports(CapabilityState value) {
    m_exportToCsvInScheduledReportsHasBeenSet = true;
    m_exportToCsvInScheduledReports = value;
  }
  inline Capabilities& WithExportToCsvInScheduledReports(CapabilityState value) {
    SetExportToCsvInScheduledReports(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to export to Excel files in scheduled email reports.</p>
   */
  inline CapabilityState GetExportToExcelInScheduledReports() const { return m_exportToExcelInScheduledReports; }
  inline bool ExportToExcelInScheduledReportsHasBeenSet() const { return m_exportToExcelInScheduledReportsHasBeenSet; }
  inline void SetExportToExcelInScheduledReports(CapabilityState value) {
    m_exportToExcelInScheduledReportsHasBeenSet = true;
    m_exportToExcelInScheduledReports = value;
  }
  inline Capabilities& WithExportToExcelInScheduledReports(CapabilityState value) {
    SetExportToExcelInScheduledReports(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to include content in scheduled email reports.</p>
   */
  inline CapabilityState GetIncludeContentInScheduledReportsEmail() const { return m_includeContentInScheduledReportsEmail; }
  inline bool IncludeContentInScheduledReportsEmailHasBeenSet() const { return m_includeContentInScheduledReportsEmailHasBeenSet; }
  inline void SetIncludeContentInScheduledReportsEmail(CapabilityState value) {
    m_includeContentInScheduledReportsEmailHasBeenSet = true;
    m_includeContentInScheduledReportsEmail = value;
  }
  inline Capabilities& WithIncludeContentInScheduledReportsEmail(CapabilityState value) {
    SetIncludeContentInScheduledReportsEmail(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform dashboard-related actions.</p>
   */
  inline CapabilityState GetDashboard() const { return m_dashboard; }
  inline bool DashboardHasBeenSet() const { return m_dashboardHasBeenSet; }
  inline void SetDashboard(CapabilityState value) {
    m_dashboardHasBeenSet = true;
    m_dashboard = value;
  }
  inline Capabilities& WithDashboard(CapabilityState value) {
    SetDashboard(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform analysis-related actions.</p>
   */
  inline CapabilityState GetAnalysis() const { return m_analysis; }
  inline bool AnalysisHasBeenSet() const { return m_analysisHasBeenSet; }
  inline void SetAnalysis(CapabilityState value) {
    m_analysisHasBeenSet = true;
    m_analysis = value;
  }
  inline Capabilities& WithAnalysis(CapabilityState value) {
    SetAnalysis(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform automate-related actions.</p>
   */
  inline CapabilityState GetAutomate() const { return m_automate; }
  inline bool AutomateHasBeenSet() const { return m_automateHasBeenSet; }
  inline void SetAutomate(CapabilityState value) {
    m_automateHasBeenSet = true;
    m_automate = value;
  }
  inline Capabilities& WithAutomate(CapabilityState value) {
    SetAutomate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform flow-related actions.</p>
   */
  inline CapabilityState GetFlow() const { return m_flow; }
  inline bool FlowHasBeenSet() const { return m_flowHasBeenSet; }
  inline void SetFlow(CapabilityState value) {
    m_flowHasBeenSet = true;
    m_flow = value;
  }
  inline Capabilities& WithFlow(CapabilityState value) {
    SetFlow(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform apps-related actions.</p>
   */
  inline CapabilityState GetApps() const { return m_apps; }
  inline bool AppsHasBeenSet() const { return m_appsHasBeenSet; }
  inline void SetApps(CapabilityState value) {
    m_appsHasBeenSet = true;
    m_apps = value;
  }
  inline Capabilities& WithApps(CapabilityState value) {
    SetApps(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create or update apps.</p>
   */
  inline CapabilityState GetCreateAndUpdateApps() const { return m_createAndUpdateApps; }
  inline bool CreateAndUpdateAppsHasBeenSet() const { return m_createAndUpdateAppsHasBeenSet; }
  inline void SetCreateAndUpdateApps(CapabilityState value) {
    m_createAndUpdateAppsHasBeenSet = true;
    m_createAndUpdateApps = value;
  }
  inline Capabilities& WithCreateAndUpdateApps(CapabilityState value) {
    SetCreateAndUpdateApps(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share apps with other users.</p>
   */
  inline CapabilityState GetShareApps() const { return m_shareApps; }
  inline bool ShareAppsHasBeenSet() const { return m_shareAppsHasBeenSet; }
  inline void SetShareApps(CapabilityState value) {
    m_shareAppsHasBeenSet = true;
    m_shareApps = value;
  }
  inline Capabilities& WithShareApps(CapabilityState value) {
    SetShareApps(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to add and invoke AI inference in new and existing apps.</p>
   */
  inline CapabilityState GetInvokeAppsAIInference() const { return m_invokeAppsAIInference; }
  inline bool InvokeAppsAIInferenceHasBeenSet() const { return m_invokeAppsAIInferenceHasBeenSet; }
  inline void SetInvokeAppsAIInference(CapabilityState value) {
    m_invokeAppsAIInferenceHasBeenSet = true;
    m_invokeAppsAIInference = value;
  }
  inline Capabilities& WithInvokeAppsAIInference(CapabilityState value) {
    SetInvokeAppsAIInference(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to access the native data store for new and existing apps.</p>
   */
  inline CapabilityState GetAccessAppsNativeDataStore() const { return m_accessAppsNativeDataStore; }
  inline bool AccessAppsNativeDataStoreHasBeenSet() const { return m_accessAppsNativeDataStoreHasBeenSet; }
  inline void SetAccessAppsNativeDataStore(CapabilityState value) {
    m_accessAppsNativeDataStoreHasBeenSet = true;
    m_accessAppsNativeDataStore = value;
  }
  inline Capabilities& WithAccessAppsNativeDataStore(CapabilityState value) {
    SetAccessAppsNativeDataStore(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to enable approvals for flow share.</p>
   */
  inline CapabilityState GetPublishWithoutApproval() const { return m_publishWithoutApproval; }
  inline bool PublishWithoutApprovalHasBeenSet() const { return m_publishWithoutApprovalHasBeenSet; }
  inline void SetPublishWithoutApproval(CapabilityState value) {
    m_publishWithoutApprovalHasBeenSet = true;
    m_publishWithoutApproval = value;
  }
  inline Capabilities& WithPublishWithoutApproval(CapabilityState value) {
    SetPublishWithoutApproval(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Bedrock models for general knowledge step in flows.</p>
   */
  inline CapabilityState GetUseBedrockModels() const { return m_useBedrockModels; }
  inline bool UseBedrockModelsHasBeenSet() const { return m_useBedrockModelsHasBeenSet; }
  inline void SetUseBedrockModels(CapabilityState value) {
    m_useBedrockModelsHasBeenSet = true;
    m_useBedrockModels = value;
  }
  inline Capabilities& WithUseBedrockModels(CapabilityState value) {
    SetUseBedrockModels(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use UI Agent step to perform tasks on public websites.</p>
   */
  inline CapabilityState GetPerformFlowUiTask() const { return m_performFlowUiTask; }
  inline bool PerformFlowUiTaskHasBeenSet() const { return m_performFlowUiTaskHasBeenSet; }
  inline void SetPerformFlowUiTask(CapabilityState value) {
    m_performFlowUiTaskHasBeenSet = true;
    m_performFlowUiTask = value;
  }
  inline Capabilities& WithPerformFlowUiTask(CapabilityState value) {
    SetPerformFlowUiTask(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to review and approve sharing requests of Flows.</p>
   */
  inline CapabilityState GetApproveFlowShareRequests() const { return m_approveFlowShareRequests; }
  inline bool ApproveFlowShareRequestsHasBeenSet() const { return m_approveFlowShareRequestsHasBeenSet; }
  inline void SetApproveFlowShareRequests(CapabilityState value) {
    m_approveFlowShareRequestsHasBeenSet = true;
    m_approveFlowShareRequests = value;
  }
  inline Capabilities& WithApproveFlowShareRequests(CapabilityState value) {
    SetApproveFlowShareRequests(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use internet to enhance results in Chat Agents, Flows, and
   * Quick Research. Web search queries will be processed securely in an Amazon Web
   * Services region <code>us-east-1</code>.</p>
   */
  inline CapabilityState GetUseAgentWebSearch() const { return m_useAgentWebSearch; }
  inline bool UseAgentWebSearchHasBeenSet() const { return m_useAgentWebSearchHasBeenSet; }
  inline void SetUseAgentWebSearch(CapabilityState value) {
    m_useAgentWebSearchHasBeenSet = true;
    m_useAgentWebSearch = value;
  }
  inline Capabilities& WithUseAgentWebSearch(CapabilityState value) {
    SetUseAgentWebSearch(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use knowledge bases to specify content from external
   * applications.</p>
   */
  inline CapabilityState GetKnowledgeBase() const { return m_knowledgeBase; }
  inline bool KnowledgeBaseHasBeenSet() const { return m_knowledgeBaseHasBeenSet; }
  inline void SetKnowledgeBase(CapabilityState value) {
    m_knowledgeBaseHasBeenSet = true;
    m_knowledgeBase = value;
  }
  inline Capabilities& WithKnowledgeBase(CapabilityState value) {
    SetKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetCreateAndUpdateKnowledgeBases() const { return m_createAndUpdateKnowledgeBases; }
  inline bool CreateAndUpdateKnowledgeBasesHasBeenSet() const { return m_createAndUpdateKnowledgeBasesHasBeenSet; }
  inline void SetCreateAndUpdateKnowledgeBases(CapabilityState value) {
    m_createAndUpdateKnowledgeBasesHasBeenSet = true;
    m_createAndUpdateKnowledgeBases = value;
  }
  inline Capabilities& WithCreateAndUpdateKnowledgeBases(CapabilityState value) {
    SetCreateAndUpdateKnowledgeBases(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetShareKnowledgeBases() const { return m_shareKnowledgeBases; }
  inline bool ShareKnowledgeBasesHasBeenSet() const { return m_shareKnowledgeBasesHasBeenSet; }
  inline void SetShareKnowledgeBases(CapabilityState value) {
    m_shareKnowledgeBasesHasBeenSet = true;
    m_shareKnowledgeBases = value;
  }
  inline Capabilities& WithShareKnowledgeBases(CapabilityState value) {
    SetShareKnowledgeBases(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetSharePointKnowledgeBase() const { return m_sharePointKnowledgeBase; }
  inline bool SharePointKnowledgeBaseHasBeenSet() const { return m_sharePointKnowledgeBaseHasBeenSet; }
  inline void SetSharePointKnowledgeBase(CapabilityState value) {
    m_sharePointKnowledgeBaseHasBeenSet = true;
    m_sharePointKnowledgeBase = value;
  }
  inline Capabilities& WithSharePointKnowledgeBase(CapabilityState value) {
    SetSharePointKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetCreateAndUpdateSharePointKnowledgeBase() const { return m_createAndUpdateSharePointKnowledgeBase; }
  inline bool CreateAndUpdateSharePointKnowledgeBaseHasBeenSet() const { return m_createAndUpdateSharePointKnowledgeBaseHasBeenSet; }
  inline void SetCreateAndUpdateSharePointKnowledgeBase(CapabilityState value) {
    m_createAndUpdateSharePointKnowledgeBaseHasBeenSet = true;
    m_createAndUpdateSharePointKnowledgeBase = value;
  }
  inline Capabilities& WithCreateAndUpdateSharePointKnowledgeBase(CapabilityState value) {
    SetCreateAndUpdateSharePointKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetShareSharePointKnowledgeBase() const { return m_shareSharePointKnowledgeBase; }
  inline bool ShareSharePointKnowledgeBaseHasBeenSet() const { return m_shareSharePointKnowledgeBaseHasBeenSet; }
  inline void SetShareSharePointKnowledgeBase(CapabilityState value) {
    m_shareSharePointKnowledgeBaseHasBeenSet = true;
    m_shareSharePointKnowledgeBase = value;
  }
  inline Capabilities& WithShareSharePointKnowledgeBase(CapabilityState value) {
    SetShareSharePointKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetUseSharePointKnowledgeBase() const { return m_useSharePointKnowledgeBase; }
  inline bool UseSharePointKnowledgeBaseHasBeenSet() const { return m_useSharePointKnowledgeBaseHasBeenSet; }
  inline void SetUseSharePointKnowledgeBase(CapabilityState value) {
    m_useSharePointKnowledgeBaseHasBeenSet = true;
    m_useSharePointKnowledgeBase = value;
  }
  inline Capabilities& WithUseSharePointKnowledgeBase(CapabilityState value) {
    SetUseSharePointKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetGoogleDriveKnowledgeBase() const { return m_googleDriveKnowledgeBase; }
  inline bool GoogleDriveKnowledgeBaseHasBeenSet() const { return m_googleDriveKnowledgeBaseHasBeenSet; }
  inline void SetGoogleDriveKnowledgeBase(CapabilityState value) {
    m_googleDriveKnowledgeBaseHasBeenSet = true;
    m_googleDriveKnowledgeBase = value;
  }
  inline Capabilities& WithGoogleDriveKnowledgeBase(CapabilityState value) {
    SetGoogleDriveKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetCreateAndUpdateGoogleDriveKnowledgeBase() const { return m_createAndUpdateGoogleDriveKnowledgeBase; }
  inline bool CreateAndUpdateGoogleDriveKnowledgeBaseHasBeenSet() const { return m_createAndUpdateGoogleDriveKnowledgeBaseHasBeenSet; }
  inline void SetCreateAndUpdateGoogleDriveKnowledgeBase(CapabilityState value) {
    m_createAndUpdateGoogleDriveKnowledgeBaseHasBeenSet = true;
    m_createAndUpdateGoogleDriveKnowledgeBase = value;
  }
  inline Capabilities& WithCreateAndUpdateGoogleDriveKnowledgeBase(CapabilityState value) {
    SetCreateAndUpdateGoogleDriveKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetShareGoogleDriveKnowledgeBase() const { return m_shareGoogleDriveKnowledgeBase; }
  inline bool ShareGoogleDriveKnowledgeBaseHasBeenSet() const { return m_shareGoogleDriveKnowledgeBaseHasBeenSet; }
  inline void SetShareGoogleDriveKnowledgeBase(CapabilityState value) {
    m_shareGoogleDriveKnowledgeBaseHasBeenSet = true;
    m_shareGoogleDriveKnowledgeBase = value;
  }
  inline Capabilities& WithShareGoogleDriveKnowledgeBase(CapabilityState value) {
    SetShareGoogleDriveKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetUseGoogleDriveKnowledgeBase() const { return m_useGoogleDriveKnowledgeBase; }
  inline bool UseGoogleDriveKnowledgeBaseHasBeenSet() const { return m_useGoogleDriveKnowledgeBaseHasBeenSet; }
  inline void SetUseGoogleDriveKnowledgeBase(CapabilityState value) {
    m_useGoogleDriveKnowledgeBaseHasBeenSet = true;
    m_useGoogleDriveKnowledgeBase = value;
  }
  inline Capabilities& WithUseGoogleDriveKnowledgeBase(CapabilityState value) {
    SetUseGoogleDriveKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetWebCrawlerKnowledgeBase() const { return m_webCrawlerKnowledgeBase; }
  inline bool WebCrawlerKnowledgeBaseHasBeenSet() const { return m_webCrawlerKnowledgeBaseHasBeenSet; }
  inline void SetWebCrawlerKnowledgeBase(CapabilityState value) {
    m_webCrawlerKnowledgeBaseHasBeenSet = true;
    m_webCrawlerKnowledgeBase = value;
  }
  inline Capabilities& WithWebCrawlerKnowledgeBase(CapabilityState value) {
    SetWebCrawlerKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetCreateAndUpdateWebCrawlerKnowledgeBase() const { return m_createAndUpdateWebCrawlerKnowledgeBase; }
  inline bool CreateAndUpdateWebCrawlerKnowledgeBaseHasBeenSet() const { return m_createAndUpdateWebCrawlerKnowledgeBaseHasBeenSet; }
  inline void SetCreateAndUpdateWebCrawlerKnowledgeBase(CapabilityState value) {
    m_createAndUpdateWebCrawlerKnowledgeBaseHasBeenSet = true;
    m_createAndUpdateWebCrawlerKnowledgeBase = value;
  }
  inline Capabilities& WithCreateAndUpdateWebCrawlerKnowledgeBase(CapabilityState value) {
    SetCreateAndUpdateWebCrawlerKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetShareWebCrawlerKnowledgeBase() const { return m_shareWebCrawlerKnowledgeBase; }
  inline bool ShareWebCrawlerKnowledgeBaseHasBeenSet() const { return m_shareWebCrawlerKnowledgeBaseHasBeenSet; }
  inline void SetShareWebCrawlerKnowledgeBase(CapabilityState value) {
    m_shareWebCrawlerKnowledgeBaseHasBeenSet = true;
    m_shareWebCrawlerKnowledgeBase = value;
  }
  inline Capabilities& WithShareWebCrawlerKnowledgeBase(CapabilityState value) {
    SetShareWebCrawlerKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetUseWebCrawlerKnowledgeBase() const { return m_useWebCrawlerKnowledgeBase; }
  inline bool UseWebCrawlerKnowledgeBaseHasBeenSet() const { return m_useWebCrawlerKnowledgeBaseHasBeenSet; }
  inline void SetUseWebCrawlerKnowledgeBase(CapabilityState value) {
    m_useWebCrawlerKnowledgeBaseHasBeenSet = true;
    m_useWebCrawlerKnowledgeBase = value;
  }
  inline Capabilities& WithUseWebCrawlerKnowledgeBase(CapabilityState value) {
    SetUseWebCrawlerKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetS3KnowledgeBase() const { return m_s3KnowledgeBase; }
  inline bool S3KnowledgeBaseHasBeenSet() const { return m_s3KnowledgeBaseHasBeenSet; }
  inline void SetS3KnowledgeBase(CapabilityState value) {
    m_s3KnowledgeBaseHasBeenSet = true;
    m_s3KnowledgeBase = value;
  }
  inline Capabilities& WithS3KnowledgeBase(CapabilityState value) {
    SetS3KnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetCreateAndUpdateS3KnowledgeBase() const { return m_createAndUpdateS3KnowledgeBase; }
  inline bool CreateAndUpdateS3KnowledgeBaseHasBeenSet() const { return m_createAndUpdateS3KnowledgeBaseHasBeenSet; }
  inline void SetCreateAndUpdateS3KnowledgeBase(CapabilityState value) {
    m_createAndUpdateS3KnowledgeBaseHasBeenSet = true;
    m_createAndUpdateS3KnowledgeBase = value;
  }
  inline Capabilities& WithCreateAndUpdateS3KnowledgeBase(CapabilityState value) {
    SetCreateAndUpdateS3KnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetShareS3KnowledgeBase() const { return m_shareS3KnowledgeBase; }
  inline bool ShareS3KnowledgeBaseHasBeenSet() const { return m_shareS3KnowledgeBaseHasBeenSet; }
  inline void SetShareS3KnowledgeBase(CapabilityState value) {
    m_shareS3KnowledgeBaseHasBeenSet = true;
    m_shareS3KnowledgeBase = value;
  }
  inline Capabilities& WithShareS3KnowledgeBase(CapabilityState value) {
    SetShareS3KnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetUseS3KnowledgeBase() const { return m_useS3KnowledgeBase; }
  inline bool UseS3KnowledgeBaseHasBeenSet() const { return m_useS3KnowledgeBaseHasBeenSet; }
  inline void SetUseS3KnowledgeBase(CapabilityState value) {
    m_useS3KnowledgeBaseHasBeenSet = true;
    m_useS3KnowledgeBase = value;
  }
  inline Capabilities& WithUseS3KnowledgeBase(CapabilityState value) {
    SetUseS3KnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetConfluenceKnowledgeBase() const { return m_confluenceKnowledgeBase; }
  inline bool ConfluenceKnowledgeBaseHasBeenSet() const { return m_confluenceKnowledgeBaseHasBeenSet; }
  inline void SetConfluenceKnowledgeBase(CapabilityState value) {
    m_confluenceKnowledgeBaseHasBeenSet = true;
    m_confluenceKnowledgeBase = value;
  }
  inline Capabilities& WithConfluenceKnowledgeBase(CapabilityState value) {
    SetConfluenceKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetCreateAndUpdateConfluenceKnowledgeBase() const { return m_createAndUpdateConfluenceKnowledgeBase; }
  inline bool CreateAndUpdateConfluenceKnowledgeBaseHasBeenSet() const { return m_createAndUpdateConfluenceKnowledgeBaseHasBeenSet; }
  inline void SetCreateAndUpdateConfluenceKnowledgeBase(CapabilityState value) {
    m_createAndUpdateConfluenceKnowledgeBaseHasBeenSet = true;
    m_createAndUpdateConfluenceKnowledgeBase = value;
  }
  inline Capabilities& WithCreateAndUpdateConfluenceKnowledgeBase(CapabilityState value) {
    SetCreateAndUpdateConfluenceKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetShareConfluenceKnowledgeBase() const { return m_shareConfluenceKnowledgeBase; }
  inline bool ShareConfluenceKnowledgeBaseHasBeenSet() const { return m_shareConfluenceKnowledgeBaseHasBeenSet; }
  inline void SetShareConfluenceKnowledgeBase(CapabilityState value) {
    m_shareConfluenceKnowledgeBaseHasBeenSet = true;
    m_shareConfluenceKnowledgeBase = value;
  }
  inline Capabilities& WithShareConfluenceKnowledgeBase(CapabilityState value) {
    SetShareConfluenceKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetUseConfluenceKnowledgeBase() const { return m_useConfluenceKnowledgeBase; }
  inline bool UseConfluenceKnowledgeBaseHasBeenSet() const { return m_useConfluenceKnowledgeBaseHasBeenSet; }
  inline void SetUseConfluenceKnowledgeBase(CapabilityState value) {
    m_useConfluenceKnowledgeBaseHasBeenSet = true;
    m_useConfluenceKnowledgeBase = value;
  }
  inline Capabilities& WithUseConfluenceKnowledgeBase(CapabilityState value) {
    SetUseConfluenceKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetOneDriveKnowledgeBase() const { return m_oneDriveKnowledgeBase; }
  inline bool OneDriveKnowledgeBaseHasBeenSet() const { return m_oneDriveKnowledgeBaseHasBeenSet; }
  inline void SetOneDriveKnowledgeBase(CapabilityState value) {
    m_oneDriveKnowledgeBaseHasBeenSet = true;
    m_oneDriveKnowledgeBase = value;
  }
  inline Capabilities& WithOneDriveKnowledgeBase(CapabilityState value) {
    SetOneDriveKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetCreateAndUpdateOneDriveKnowledgeBase() const { return m_createAndUpdateOneDriveKnowledgeBase; }
  inline bool CreateAndUpdateOneDriveKnowledgeBaseHasBeenSet() const { return m_createAndUpdateOneDriveKnowledgeBaseHasBeenSet; }
  inline void SetCreateAndUpdateOneDriveKnowledgeBase(CapabilityState value) {
    m_createAndUpdateOneDriveKnowledgeBaseHasBeenSet = true;
    m_createAndUpdateOneDriveKnowledgeBase = value;
  }
  inline Capabilities& WithCreateAndUpdateOneDriveKnowledgeBase(CapabilityState value) {
    SetCreateAndUpdateOneDriveKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetShareOneDriveKnowledgeBase() const { return m_shareOneDriveKnowledgeBase; }
  inline bool ShareOneDriveKnowledgeBaseHasBeenSet() const { return m_shareOneDriveKnowledgeBaseHasBeenSet; }
  inline void SetShareOneDriveKnowledgeBase(CapabilityState value) {
    m_shareOneDriveKnowledgeBaseHasBeenSet = true;
    m_shareOneDriveKnowledgeBase = value;
  }
  inline Capabilities& WithShareOneDriveKnowledgeBase(CapabilityState value) {
    SetShareOneDriveKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetUseOneDriveKnowledgeBase() const { return m_useOneDriveKnowledgeBase; }
  inline bool UseOneDriveKnowledgeBaseHasBeenSet() const { return m_useOneDriveKnowledgeBaseHasBeenSet; }
  inline void SetUseOneDriveKnowledgeBase(CapabilityState value) {
    m_useOneDriveKnowledgeBaseHasBeenSet = true;
    m_useOneDriveKnowledgeBase = value;
  }
  inline Capabilities& WithUseOneDriveKnowledgeBase(CapabilityState value) {
    SetUseOneDriveKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetQBusinessKnowledgeBase() const { return m_qBusinessKnowledgeBase; }
  inline bool QBusinessKnowledgeBaseHasBeenSet() const { return m_qBusinessKnowledgeBaseHasBeenSet; }
  inline void SetQBusinessKnowledgeBase(CapabilityState value) {
    m_qBusinessKnowledgeBaseHasBeenSet = true;
    m_qBusinessKnowledgeBase = value;
  }
  inline Capabilities& WithQBusinessKnowledgeBase(CapabilityState value) {
    SetQBusinessKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetCreateAndUpdateQBusinessKnowledgeBase() const { return m_createAndUpdateQBusinessKnowledgeBase; }
  inline bool CreateAndUpdateQBusinessKnowledgeBaseHasBeenSet() const { return m_createAndUpdateQBusinessKnowledgeBaseHasBeenSet; }
  inline void SetCreateAndUpdateQBusinessKnowledgeBase(CapabilityState value) {
    m_createAndUpdateQBusinessKnowledgeBaseHasBeenSet = true;
    m_createAndUpdateQBusinessKnowledgeBase = value;
  }
  inline Capabilities& WithCreateAndUpdateQBusinessKnowledgeBase(CapabilityState value) {
    SetCreateAndUpdateQBusinessKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetShareQBusinessKnowledgeBase() const { return m_shareQBusinessKnowledgeBase; }
  inline bool ShareQBusinessKnowledgeBaseHasBeenSet() const { return m_shareQBusinessKnowledgeBaseHasBeenSet; }
  inline void SetShareQBusinessKnowledgeBase(CapabilityState value) {
    m_shareQBusinessKnowledgeBaseHasBeenSet = true;
    m_shareQBusinessKnowledgeBase = value;
  }
  inline Capabilities& WithShareQBusinessKnowledgeBase(CapabilityState value) {
    SetShareQBusinessKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetUseQBusinessKnowledgeBase() const { return m_useQBusinessKnowledgeBase; }
  inline bool UseQBusinessKnowledgeBaseHasBeenSet() const { return m_useQBusinessKnowledgeBaseHasBeenSet; }
  inline void SetUseQBusinessKnowledgeBase(CapabilityState value) {
    m_useQBusinessKnowledgeBaseHasBeenSet = true;
    m_useQBusinessKnowledgeBase = value;
  }
  inline Capabilities& WithUseQBusinessKnowledgeBase(CapabilityState value) {
    SetUseQBusinessKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetBedrockManagedKnowledgeBase() const { return m_bedrockManagedKnowledgeBase; }
  inline bool BedrockManagedKnowledgeBaseHasBeenSet() const { return m_bedrockManagedKnowledgeBaseHasBeenSet; }
  inline void SetBedrockManagedKnowledgeBase(CapabilityState value) {
    m_bedrockManagedKnowledgeBaseHasBeenSet = true;
    m_bedrockManagedKnowledgeBase = value;
  }
  inline Capabilities& WithBedrockManagedKnowledgeBase(CapabilityState value) {
    SetBedrockManagedKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetCreateAndUpdateBedrockManagedKnowledgeBase() const { return m_createAndUpdateBedrockManagedKnowledgeBase; }
  inline bool CreateAndUpdateBedrockManagedKnowledgeBaseHasBeenSet() const {
    return m_createAndUpdateBedrockManagedKnowledgeBaseHasBeenSet;
  }
  inline void SetCreateAndUpdateBedrockManagedKnowledgeBase(CapabilityState value) {
    m_createAndUpdateBedrockManagedKnowledgeBaseHasBeenSet = true;
    m_createAndUpdateBedrockManagedKnowledgeBase = value;
  }
  inline Capabilities& WithCreateAndUpdateBedrockManagedKnowledgeBase(CapabilityState value) {
    SetCreateAndUpdateBedrockManagedKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetShareBedrockManagedKnowledgeBase() const { return m_shareBedrockManagedKnowledgeBase; }
  inline bool ShareBedrockManagedKnowledgeBaseHasBeenSet() const { return m_shareBedrockManagedKnowledgeBaseHasBeenSet; }
  inline void SetShareBedrockManagedKnowledgeBase(CapabilityState value) {
    m_shareBedrockManagedKnowledgeBaseHasBeenSet = true;
    m_shareBedrockManagedKnowledgeBase = value;
  }
  inline Capabilities& WithShareBedrockManagedKnowledgeBase(CapabilityState value) {
    SetShareBedrockManagedKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetUseBedrockManagedKnowledgeBase() const { return m_useBedrockManagedKnowledgeBase; }
  inline bool UseBedrockManagedKnowledgeBaseHasBeenSet() const { return m_useBedrockManagedKnowledgeBaseHasBeenSet; }
  inline void SetUseBedrockManagedKnowledgeBase(CapabilityState value) {
    m_useBedrockManagedKnowledgeBaseHasBeenSet = true;
    m_useBedrockManagedKnowledgeBase = value;
  }
  inline Capabilities& WithUseBedrockManagedKnowledgeBase(CapabilityState value) {
    SetUseBedrockManagedKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetBoxKnowledgeBase() const { return m_boxKnowledgeBase; }
  inline bool BoxKnowledgeBaseHasBeenSet() const { return m_boxKnowledgeBaseHasBeenSet; }
  inline void SetBoxKnowledgeBase(CapabilityState value) {
    m_boxKnowledgeBaseHasBeenSet = true;
    m_boxKnowledgeBase = value;
  }
  inline Capabilities& WithBoxKnowledgeBase(CapabilityState value) {
    SetBoxKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetCreateAndUpdateBoxKnowledgeBase() const { return m_createAndUpdateBoxKnowledgeBase; }
  inline bool CreateAndUpdateBoxKnowledgeBaseHasBeenSet() const { return m_createAndUpdateBoxKnowledgeBaseHasBeenSet; }
  inline void SetCreateAndUpdateBoxKnowledgeBase(CapabilityState value) {
    m_createAndUpdateBoxKnowledgeBaseHasBeenSet = true;
    m_createAndUpdateBoxKnowledgeBase = value;
  }
  inline Capabilities& WithCreateAndUpdateBoxKnowledgeBase(CapabilityState value) {
    SetCreateAndUpdateBoxKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetShareBoxKnowledgeBase() const { return m_shareBoxKnowledgeBase; }
  inline bool ShareBoxKnowledgeBaseHasBeenSet() const { return m_shareBoxKnowledgeBaseHasBeenSet; }
  inline void SetShareBoxKnowledgeBase(CapabilityState value) {
    m_shareBoxKnowledgeBaseHasBeenSet = true;
    m_shareBoxKnowledgeBase = value;
  }
  inline Capabilities& WithShareBoxKnowledgeBase(CapabilityState value) {
    SetShareBoxKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetUseBoxKnowledgeBase() const { return m_useBoxKnowledgeBase; }
  inline bool UseBoxKnowledgeBaseHasBeenSet() const { return m_useBoxKnowledgeBaseHasBeenSet; }
  inline void SetUseBoxKnowledgeBase(CapabilityState value) {
    m_useBoxKnowledgeBaseHasBeenSet = true;
    m_useBoxKnowledgeBase = value;
  }
  inline Capabilities& WithUseBoxKnowledgeBase(CapabilityState value) {
    SetUseBoxKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetIDCKnowledgeBase() const { return m_iDCKnowledgeBase; }
  inline bool IDCKnowledgeBaseHasBeenSet() const { return m_iDCKnowledgeBaseHasBeenSet; }
  inline void SetIDCKnowledgeBase(CapabilityState value) {
    m_iDCKnowledgeBaseHasBeenSet = true;
    m_iDCKnowledgeBase = value;
  }
  inline Capabilities& WithIDCKnowledgeBase(CapabilityState value) {
    SetIDCKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetCreateAndUpdateIDCKnowledgeBase() const { return m_createAndUpdateIDCKnowledgeBase; }
  inline bool CreateAndUpdateIDCKnowledgeBaseHasBeenSet() const { return m_createAndUpdateIDCKnowledgeBaseHasBeenSet; }
  inline void SetCreateAndUpdateIDCKnowledgeBase(CapabilityState value) {
    m_createAndUpdateIDCKnowledgeBaseHasBeenSet = true;
    m_createAndUpdateIDCKnowledgeBase = value;
  }
  inline Capabilities& WithCreateAndUpdateIDCKnowledgeBase(CapabilityState value) {
    SetCreateAndUpdateIDCKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetShareIDCKnowledgeBase() const { return m_shareIDCKnowledgeBase; }
  inline bool ShareIDCKnowledgeBaseHasBeenSet() const { return m_shareIDCKnowledgeBaseHasBeenSet; }
  inline void SetShareIDCKnowledgeBase(CapabilityState value) {
    m_shareIDCKnowledgeBaseHasBeenSet = true;
    m_shareIDCKnowledgeBase = value;
  }
  inline Capabilities& WithShareIDCKnowledgeBase(CapabilityState value) {
    SetShareIDCKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{

  inline CapabilityState GetUseIDCKnowledgeBase() const { return m_useIDCKnowledgeBase; }
  inline bool UseIDCKnowledgeBaseHasBeenSet() const { return m_useIDCKnowledgeBaseHasBeenSet; }
  inline void SetUseIDCKnowledgeBase(CapabilityState value) {
    m_useIDCKnowledgeBaseHasBeenSet = true;
    m_useIDCKnowledgeBase = value;
  }
  inline Capabilities& WithUseIDCKnowledgeBase(CapabilityState value) {
    SetUseIDCKnowledgeBase(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions in external services through Action
   * connectors. Actions allow users to interact with third-party systems.</p>
   */
  inline CapabilityState GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(CapabilityState value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline Capabilities& WithAction(CapabilityState value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using REST API connection connectors.</p>
   */
  inline CapabilityState GetGenericHTTPAction() const { return m_genericHTTPAction; }
  inline bool GenericHTTPActionHasBeenSet() const { return m_genericHTTPActionHasBeenSet; }
  inline void SetGenericHTTPAction(CapabilityState value) {
    m_genericHTTPActionHasBeenSet = true;
    m_genericHTTPAction = value;
  }
  inline Capabilities& WithGenericHTTPAction(CapabilityState value) {
    SetGenericHTTPAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update REST API connection actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateGenericHTTPAction() const { return m_createAndUpdateGenericHTTPAction; }
  inline bool CreateAndUpdateGenericHTTPActionHasBeenSet() const { return m_createAndUpdateGenericHTTPActionHasBeenSet; }
  inline void SetCreateAndUpdateGenericHTTPAction(CapabilityState value) {
    m_createAndUpdateGenericHTTPActionHasBeenSet = true;
    m_createAndUpdateGenericHTTPAction = value;
  }
  inline Capabilities& WithCreateAndUpdateGenericHTTPAction(CapabilityState value) {
    SetCreateAndUpdateGenericHTTPAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share REST API connection actions.</p>
   */
  inline CapabilityState GetShareGenericHTTPAction() const { return m_shareGenericHTTPAction; }
  inline bool ShareGenericHTTPActionHasBeenSet() const { return m_shareGenericHTTPActionHasBeenSet; }
  inline void SetShareGenericHTTPAction(CapabilityState value) {
    m_shareGenericHTTPActionHasBeenSet = true;
    m_shareGenericHTTPAction = value;
  }
  inline Capabilities& WithShareGenericHTTPAction(CapabilityState value) {
    SetShareGenericHTTPAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use REST API connection actions.</p>
   */
  inline CapabilityState GetUseGenericHTTPAction() const { return m_useGenericHTTPAction; }
  inline bool UseGenericHTTPActionHasBeenSet() const { return m_useGenericHTTPActionHasBeenSet; }
  inline void SetUseGenericHTTPAction(CapabilityState value) {
    m_useGenericHTTPActionHasBeenSet = true;
    m_useGenericHTTPAction = value;
  }
  inline Capabilities& WithUseGenericHTTPAction(CapabilityState value) {
    SetUseGenericHTTPAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Asana connectors.</p>
   */
  inline CapabilityState GetAsanaAction() const { return m_asanaAction; }
  inline bool AsanaActionHasBeenSet() const { return m_asanaActionHasBeenSet; }
  inline void SetAsanaAction(CapabilityState value) {
    m_asanaActionHasBeenSet = true;
    m_asanaAction = value;
  }
  inline Capabilities& WithAsanaAction(CapabilityState value) {
    SetAsanaAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Asana actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateAsanaAction() const { return m_createAndUpdateAsanaAction; }
  inline bool CreateAndUpdateAsanaActionHasBeenSet() const { return m_createAndUpdateAsanaActionHasBeenSet; }
  inline void SetCreateAndUpdateAsanaAction(CapabilityState value) {
    m_createAndUpdateAsanaActionHasBeenSet = true;
    m_createAndUpdateAsanaAction = value;
  }
  inline Capabilities& WithCreateAndUpdateAsanaAction(CapabilityState value) {
    SetCreateAndUpdateAsanaAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Asana actions.</p>
   */
  inline CapabilityState GetShareAsanaAction() const { return m_shareAsanaAction; }
  inline bool ShareAsanaActionHasBeenSet() const { return m_shareAsanaActionHasBeenSet; }
  inline void SetShareAsanaAction(CapabilityState value) {
    m_shareAsanaActionHasBeenSet = true;
    m_shareAsanaAction = value;
  }
  inline Capabilities& WithShareAsanaAction(CapabilityState value) {
    SetShareAsanaAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Asana actions.</p>
   */
  inline CapabilityState GetUseAsanaAction() const { return m_useAsanaAction; }
  inline bool UseAsanaActionHasBeenSet() const { return m_useAsanaActionHasBeenSet; }
  inline void SetUseAsanaAction(CapabilityState value) {
    m_useAsanaActionHasBeenSet = true;
    m_useAsanaAction = value;
  }
  inline Capabilities& WithUseAsanaAction(CapabilityState value) {
    SetUseAsanaAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Slack connectors.</p>
   */
  inline CapabilityState GetSlackAction() const { return m_slackAction; }
  inline bool SlackActionHasBeenSet() const { return m_slackActionHasBeenSet; }
  inline void SetSlackAction(CapabilityState value) {
    m_slackActionHasBeenSet = true;
    m_slackAction = value;
  }
  inline Capabilities& WithSlackAction(CapabilityState value) {
    SetSlackAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Slack actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateSlackAction() const { return m_createAndUpdateSlackAction; }
  inline bool CreateAndUpdateSlackActionHasBeenSet() const { return m_createAndUpdateSlackActionHasBeenSet; }
  inline void SetCreateAndUpdateSlackAction(CapabilityState value) {
    m_createAndUpdateSlackActionHasBeenSet = true;
    m_createAndUpdateSlackAction = value;
  }
  inline Capabilities& WithCreateAndUpdateSlackAction(CapabilityState value) {
    SetCreateAndUpdateSlackAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Slack actions.</p>
   */
  inline CapabilityState GetShareSlackAction() const { return m_shareSlackAction; }
  inline bool ShareSlackActionHasBeenSet() const { return m_shareSlackActionHasBeenSet; }
  inline void SetShareSlackAction(CapabilityState value) {
    m_shareSlackActionHasBeenSet = true;
    m_shareSlackAction = value;
  }
  inline Capabilities& WithShareSlackAction(CapabilityState value) {
    SetShareSlackAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Slack actions.</p>
   */
  inline CapabilityState GetUseSlackAction() const { return m_useSlackAction; }
  inline bool UseSlackActionHasBeenSet() const { return m_useSlackActionHasBeenSet; }
  inline void SetUseSlackAction(CapabilityState value) {
    m_useSlackActionHasBeenSet = true;
    m_useSlackAction = value;
  }
  inline Capabilities& WithUseSlackAction(CapabilityState value) {
    SetUseSlackAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using ServiceNow connectors.</p>
   */
  inline CapabilityState GetServiceNowAction() const { return m_serviceNowAction; }
  inline bool ServiceNowActionHasBeenSet() const { return m_serviceNowActionHasBeenSet; }
  inline void SetServiceNowAction(CapabilityState value) {
    m_serviceNowActionHasBeenSet = true;
    m_serviceNowAction = value;
  }
  inline Capabilities& WithServiceNowAction(CapabilityState value) {
    SetServiceNowAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update ServiceNow actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateServiceNowAction() const { return m_createAndUpdateServiceNowAction; }
  inline bool CreateAndUpdateServiceNowActionHasBeenSet() const { return m_createAndUpdateServiceNowActionHasBeenSet; }
  inline void SetCreateAndUpdateServiceNowAction(CapabilityState value) {
    m_createAndUpdateServiceNowActionHasBeenSet = true;
    m_createAndUpdateServiceNowAction = value;
  }
  inline Capabilities& WithCreateAndUpdateServiceNowAction(CapabilityState value) {
    SetCreateAndUpdateServiceNowAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share ServiceNow actions.</p>
   */
  inline CapabilityState GetShareServiceNowAction() const { return m_shareServiceNowAction; }
  inline bool ShareServiceNowActionHasBeenSet() const { return m_shareServiceNowActionHasBeenSet; }
  inline void SetShareServiceNowAction(CapabilityState value) {
    m_shareServiceNowActionHasBeenSet = true;
    m_shareServiceNowAction = value;
  }
  inline Capabilities& WithShareServiceNowAction(CapabilityState value) {
    SetShareServiceNowAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use ServiceNow actions.</p>
   */
  inline CapabilityState GetUseServiceNowAction() const { return m_useServiceNowAction; }
  inline bool UseServiceNowActionHasBeenSet() const { return m_useServiceNowActionHasBeenSet; }
  inline void SetUseServiceNowAction(CapabilityState value) {
    m_useServiceNowActionHasBeenSet = true;
    m_useServiceNowAction = value;
  }
  inline Capabilities& WithUseServiceNowAction(CapabilityState value) {
    SetUseServiceNowAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Salesforce connectors.</p>
   */
  inline CapabilityState GetSalesforceAction() const { return m_salesforceAction; }
  inline bool SalesforceActionHasBeenSet() const { return m_salesforceActionHasBeenSet; }
  inline void SetSalesforceAction(CapabilityState value) {
    m_salesforceActionHasBeenSet = true;
    m_salesforceAction = value;
  }
  inline Capabilities& WithSalesforceAction(CapabilityState value) {
    SetSalesforceAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Salesforce actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateSalesforceAction() const { return m_createAndUpdateSalesforceAction; }
  inline bool CreateAndUpdateSalesforceActionHasBeenSet() const { return m_createAndUpdateSalesforceActionHasBeenSet; }
  inline void SetCreateAndUpdateSalesforceAction(CapabilityState value) {
    m_createAndUpdateSalesforceActionHasBeenSet = true;
    m_createAndUpdateSalesforceAction = value;
  }
  inline Capabilities& WithCreateAndUpdateSalesforceAction(CapabilityState value) {
    SetCreateAndUpdateSalesforceAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Salesforce actions.</p>
   */
  inline CapabilityState GetShareSalesforceAction() const { return m_shareSalesforceAction; }
  inline bool ShareSalesforceActionHasBeenSet() const { return m_shareSalesforceActionHasBeenSet; }
  inline void SetShareSalesforceAction(CapabilityState value) {
    m_shareSalesforceActionHasBeenSet = true;
    m_shareSalesforceAction = value;
  }
  inline Capabilities& WithShareSalesforceAction(CapabilityState value) {
    SetShareSalesforceAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Salesforce actions.</p>
   */
  inline CapabilityState GetUseSalesforceAction() const { return m_useSalesforceAction; }
  inline bool UseSalesforceActionHasBeenSet() const { return m_useSalesforceActionHasBeenSet; }
  inline void SetUseSalesforceAction(CapabilityState value) {
    m_useSalesforceActionHasBeenSet = true;
    m_useSalesforceAction = value;
  }
  inline Capabilities& WithUseSalesforceAction(CapabilityState value) {
    SetUseSalesforceAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Microsoft Outlook connectors.</p>
   */
  inline CapabilityState GetMSExchangeAction() const { return m_mSExchangeAction; }
  inline bool MSExchangeActionHasBeenSet() const { return m_mSExchangeActionHasBeenSet; }
  inline void SetMSExchangeAction(CapabilityState value) {
    m_mSExchangeActionHasBeenSet = true;
    m_mSExchangeAction = value;
  }
  inline Capabilities& WithMSExchangeAction(CapabilityState value) {
    SetMSExchangeAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Microsoft Outlook actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateMSExchangeAction() const { return m_createAndUpdateMSExchangeAction; }
  inline bool CreateAndUpdateMSExchangeActionHasBeenSet() const { return m_createAndUpdateMSExchangeActionHasBeenSet; }
  inline void SetCreateAndUpdateMSExchangeAction(CapabilityState value) {
    m_createAndUpdateMSExchangeActionHasBeenSet = true;
    m_createAndUpdateMSExchangeAction = value;
  }
  inline Capabilities& WithCreateAndUpdateMSExchangeAction(CapabilityState value) {
    SetCreateAndUpdateMSExchangeAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Microsoft Outlook actions.</p>
   */
  inline CapabilityState GetShareMSExchangeAction() const { return m_shareMSExchangeAction; }
  inline bool ShareMSExchangeActionHasBeenSet() const { return m_shareMSExchangeActionHasBeenSet; }
  inline void SetShareMSExchangeAction(CapabilityState value) {
    m_shareMSExchangeActionHasBeenSet = true;
    m_shareMSExchangeAction = value;
  }
  inline Capabilities& WithShareMSExchangeAction(CapabilityState value) {
    SetShareMSExchangeAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Microsoft Outlook actions.</p>
   */
  inline CapabilityState GetUseMSExchangeAction() const { return m_useMSExchangeAction; }
  inline bool UseMSExchangeActionHasBeenSet() const { return m_useMSExchangeActionHasBeenSet; }
  inline void SetUseMSExchangeAction(CapabilityState value) {
    m_useMSExchangeActionHasBeenSet = true;
    m_useMSExchangeAction = value;
  }
  inline Capabilities& WithUseMSExchangeAction(CapabilityState value) {
    SetUseMSExchangeAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using PagerDuty Advance connectors.</p>
   */
  inline CapabilityState GetPagerDutyAction() const { return m_pagerDutyAction; }
  inline bool PagerDutyActionHasBeenSet() const { return m_pagerDutyActionHasBeenSet; }
  inline void SetPagerDutyAction(CapabilityState value) {
    m_pagerDutyActionHasBeenSet = true;
    m_pagerDutyAction = value;
  }
  inline Capabilities& WithPagerDutyAction(CapabilityState value) {
    SetPagerDutyAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update PagerDuty Advance actions.</p>
   */
  inline CapabilityState GetCreateAndUpdatePagerDutyAction() const { return m_createAndUpdatePagerDutyAction; }
  inline bool CreateAndUpdatePagerDutyActionHasBeenSet() const { return m_createAndUpdatePagerDutyActionHasBeenSet; }
  inline void SetCreateAndUpdatePagerDutyAction(CapabilityState value) {
    m_createAndUpdatePagerDutyActionHasBeenSet = true;
    m_createAndUpdatePagerDutyAction = value;
  }
  inline Capabilities& WithCreateAndUpdatePagerDutyAction(CapabilityState value) {
    SetCreateAndUpdatePagerDutyAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share PagerDuty Advance actions.</p>
   */
  inline CapabilityState GetSharePagerDutyAction() const { return m_sharePagerDutyAction; }
  inline bool SharePagerDutyActionHasBeenSet() const { return m_sharePagerDutyActionHasBeenSet; }
  inline void SetSharePagerDutyAction(CapabilityState value) {
    m_sharePagerDutyActionHasBeenSet = true;
    m_sharePagerDutyAction = value;
  }
  inline Capabilities& WithSharePagerDutyAction(CapabilityState value) {
    SetSharePagerDutyAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use PagerDuty Advance actions.</p>
   */
  inline CapabilityState GetUsePagerDutyAction() const { return m_usePagerDutyAction; }
  inline bool UsePagerDutyActionHasBeenSet() const { return m_usePagerDutyActionHasBeenSet; }
  inline void SetUsePagerDutyAction(CapabilityState value) {
    m_usePagerDutyActionHasBeenSet = true;
    m_usePagerDutyAction = value;
  }
  inline Capabilities& WithUsePagerDutyAction(CapabilityState value) {
    SetUsePagerDutyAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Jira connectors.</p>
   */
  inline CapabilityState GetJiraAction() const { return m_jiraAction; }
  inline bool JiraActionHasBeenSet() const { return m_jiraActionHasBeenSet; }
  inline void SetJiraAction(CapabilityState value) {
    m_jiraActionHasBeenSet = true;
    m_jiraAction = value;
  }
  inline Capabilities& WithJiraAction(CapabilityState value) {
    SetJiraAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Jira actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateJiraAction() const { return m_createAndUpdateJiraAction; }
  inline bool CreateAndUpdateJiraActionHasBeenSet() const { return m_createAndUpdateJiraActionHasBeenSet; }
  inline void SetCreateAndUpdateJiraAction(CapabilityState value) {
    m_createAndUpdateJiraActionHasBeenSet = true;
    m_createAndUpdateJiraAction = value;
  }
  inline Capabilities& WithCreateAndUpdateJiraAction(CapabilityState value) {
    SetCreateAndUpdateJiraAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Jira actions.</p>
   */
  inline CapabilityState GetShareJiraAction() const { return m_shareJiraAction; }
  inline bool ShareJiraActionHasBeenSet() const { return m_shareJiraActionHasBeenSet; }
  inline void SetShareJiraAction(CapabilityState value) {
    m_shareJiraActionHasBeenSet = true;
    m_shareJiraAction = value;
  }
  inline Capabilities& WithShareJiraAction(CapabilityState value) {
    SetShareJiraAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Jira actions.</p>
   */
  inline CapabilityState GetUseJiraAction() const { return m_useJiraAction; }
  inline bool UseJiraActionHasBeenSet() const { return m_useJiraActionHasBeenSet; }
  inline void SetUseJiraAction(CapabilityState value) {
    m_useJiraActionHasBeenSet = true;
    m_useJiraAction = value;
  }
  inline Capabilities& WithUseJiraAction(CapabilityState value) {
    SetUseJiraAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Atlassian Confluence Cloud
   * connectors.</p>
   */
  inline CapabilityState GetConfluenceAction() const { return m_confluenceAction; }
  inline bool ConfluenceActionHasBeenSet() const { return m_confluenceActionHasBeenSet; }
  inline void SetConfluenceAction(CapabilityState value) {
    m_confluenceActionHasBeenSet = true;
    m_confluenceAction = value;
  }
  inline Capabilities& WithConfluenceAction(CapabilityState value) {
    SetConfluenceAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Atlassian Confluence Cloud actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateConfluenceAction() const { return m_createAndUpdateConfluenceAction; }
  inline bool CreateAndUpdateConfluenceActionHasBeenSet() const { return m_createAndUpdateConfluenceActionHasBeenSet; }
  inline void SetCreateAndUpdateConfluenceAction(CapabilityState value) {
    m_createAndUpdateConfluenceActionHasBeenSet = true;
    m_createAndUpdateConfluenceAction = value;
  }
  inline Capabilities& WithCreateAndUpdateConfluenceAction(CapabilityState value) {
    SetCreateAndUpdateConfluenceAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Atlassian Confluence Cloud actions.</p>
   */
  inline CapabilityState GetShareConfluenceAction() const { return m_shareConfluenceAction; }
  inline bool ShareConfluenceActionHasBeenSet() const { return m_shareConfluenceActionHasBeenSet; }
  inline void SetShareConfluenceAction(CapabilityState value) {
    m_shareConfluenceActionHasBeenSet = true;
    m_shareConfluenceAction = value;
  }
  inline Capabilities& WithShareConfluenceAction(CapabilityState value) {
    SetShareConfluenceAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Atlassian Confluence Cloud actions.</p>
   */
  inline CapabilityState GetUseConfluenceAction() const { return m_useConfluenceAction; }
  inline bool UseConfluenceActionHasBeenSet() const { return m_useConfluenceActionHasBeenSet; }
  inline void SetUseConfluenceAction(CapabilityState value) {
    m_useConfluenceActionHasBeenSet = true;
    m_useConfluenceAction = value;
  }
  inline Capabilities& WithUseConfluenceAction(CapabilityState value) {
    SetUseConfluenceAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Microsoft OneDrive connectors.</p>
   */
  inline CapabilityState GetOneDriveAction() const { return m_oneDriveAction; }
  inline bool OneDriveActionHasBeenSet() const { return m_oneDriveActionHasBeenSet; }
  inline void SetOneDriveAction(CapabilityState value) {
    m_oneDriveActionHasBeenSet = true;
    m_oneDriveAction = value;
  }
  inline Capabilities& WithOneDriveAction(CapabilityState value) {
    SetOneDriveAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Microsoft OneDrive actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateOneDriveAction() const { return m_createAndUpdateOneDriveAction; }
  inline bool CreateAndUpdateOneDriveActionHasBeenSet() const { return m_createAndUpdateOneDriveActionHasBeenSet; }
  inline void SetCreateAndUpdateOneDriveAction(CapabilityState value) {
    m_createAndUpdateOneDriveActionHasBeenSet = true;
    m_createAndUpdateOneDriveAction = value;
  }
  inline Capabilities& WithCreateAndUpdateOneDriveAction(CapabilityState value) {
    SetCreateAndUpdateOneDriveAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Microsoft OneDrive actions.</p>
   */
  inline CapabilityState GetShareOneDriveAction() const { return m_shareOneDriveAction; }
  inline bool ShareOneDriveActionHasBeenSet() const { return m_shareOneDriveActionHasBeenSet; }
  inline void SetShareOneDriveAction(CapabilityState value) {
    m_shareOneDriveActionHasBeenSet = true;
    m_shareOneDriveAction = value;
  }
  inline Capabilities& WithShareOneDriveAction(CapabilityState value) {
    SetShareOneDriveAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Microsoft OneDrive actions.</p>
   */
  inline CapabilityState GetUseOneDriveAction() const { return m_useOneDriveAction; }
  inline bool UseOneDriveActionHasBeenSet() const { return m_useOneDriveActionHasBeenSet; }
  inline void SetUseOneDriveAction(CapabilityState value) {
    m_useOneDriveActionHasBeenSet = true;
    m_useOneDriveAction = value;
  }
  inline Capabilities& WithUseOneDriveAction(CapabilityState value) {
    SetUseOneDriveAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Microsoft SharePoint Online
   * connectors.</p>
   */
  inline CapabilityState GetSharePointAction() const { return m_sharePointAction; }
  inline bool SharePointActionHasBeenSet() const { return m_sharePointActionHasBeenSet; }
  inline void SetSharePointAction(CapabilityState value) {
    m_sharePointActionHasBeenSet = true;
    m_sharePointAction = value;
  }
  inline Capabilities& WithSharePointAction(CapabilityState value) {
    SetSharePointAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Microsoft SharePoint Online actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateSharePointAction() const { return m_createAndUpdateSharePointAction; }
  inline bool CreateAndUpdateSharePointActionHasBeenSet() const { return m_createAndUpdateSharePointActionHasBeenSet; }
  inline void SetCreateAndUpdateSharePointAction(CapabilityState value) {
    m_createAndUpdateSharePointActionHasBeenSet = true;
    m_createAndUpdateSharePointAction = value;
  }
  inline Capabilities& WithCreateAndUpdateSharePointAction(CapabilityState value) {
    SetCreateAndUpdateSharePointAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Microsoft SharePoint Online actions.</p>
   */
  inline CapabilityState GetShareSharePointAction() const { return m_shareSharePointAction; }
  inline bool ShareSharePointActionHasBeenSet() const { return m_shareSharePointActionHasBeenSet; }
  inline void SetShareSharePointAction(CapabilityState value) {
    m_shareSharePointActionHasBeenSet = true;
    m_shareSharePointAction = value;
  }
  inline Capabilities& WithShareSharePointAction(CapabilityState value) {
    SetShareSharePointAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Microsoft SharePoint Online actions.</p>
   */
  inline CapabilityState GetUseSharePointAction() const { return m_useSharePointAction; }
  inline bool UseSharePointActionHasBeenSet() const { return m_useSharePointActionHasBeenSet; }
  inline void SetUseSharePointAction(CapabilityState value) {
    m_useSharePointActionHasBeenSet = true;
    m_useSharePointAction = value;
  }
  inline Capabilities& WithUseSharePointAction(CapabilityState value) {
    SetUseSharePointAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Microsoft Teams connectors.</p>
   */
  inline CapabilityState GetMSTeamsAction() const { return m_mSTeamsAction; }
  inline bool MSTeamsActionHasBeenSet() const { return m_mSTeamsActionHasBeenSet; }
  inline void SetMSTeamsAction(CapabilityState value) {
    m_mSTeamsActionHasBeenSet = true;
    m_mSTeamsAction = value;
  }
  inline Capabilities& WithMSTeamsAction(CapabilityState value) {
    SetMSTeamsAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Microsoft Teams actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateMSTeamsAction() const { return m_createAndUpdateMSTeamsAction; }
  inline bool CreateAndUpdateMSTeamsActionHasBeenSet() const { return m_createAndUpdateMSTeamsActionHasBeenSet; }
  inline void SetCreateAndUpdateMSTeamsAction(CapabilityState value) {
    m_createAndUpdateMSTeamsActionHasBeenSet = true;
    m_createAndUpdateMSTeamsAction = value;
  }
  inline Capabilities& WithCreateAndUpdateMSTeamsAction(CapabilityState value) {
    SetCreateAndUpdateMSTeamsAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Microsoft Teams actions.</p>
   */
  inline CapabilityState GetShareMSTeamsAction() const { return m_shareMSTeamsAction; }
  inline bool ShareMSTeamsActionHasBeenSet() const { return m_shareMSTeamsActionHasBeenSet; }
  inline void SetShareMSTeamsAction(CapabilityState value) {
    m_shareMSTeamsActionHasBeenSet = true;
    m_shareMSTeamsAction = value;
  }
  inline Capabilities& WithShareMSTeamsAction(CapabilityState value) {
    SetShareMSTeamsAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Microsoft Teams actions.</p>
   */
  inline CapabilityState GetUseMSTeamsAction() const { return m_useMSTeamsAction; }
  inline bool UseMSTeamsActionHasBeenSet() const { return m_useMSTeamsActionHasBeenSet; }
  inline void SetUseMSTeamsAction(CapabilityState value) {
    m_useMSTeamsActionHasBeenSet = true;
    m_useMSTeamsAction = value;
  }
  inline Capabilities& WithUseMSTeamsAction(CapabilityState value) {
    SetUseMSTeamsAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Google Calendar connectors.</p>
   */
  inline CapabilityState GetGoogleCalendarAction() const { return m_googleCalendarAction; }
  inline bool GoogleCalendarActionHasBeenSet() const { return m_googleCalendarActionHasBeenSet; }
  inline void SetGoogleCalendarAction(CapabilityState value) {
    m_googleCalendarActionHasBeenSet = true;
    m_googleCalendarAction = value;
  }
  inline Capabilities& WithGoogleCalendarAction(CapabilityState value) {
    SetGoogleCalendarAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Google Calendar actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateGoogleCalendarAction() const { return m_createAndUpdateGoogleCalendarAction; }
  inline bool CreateAndUpdateGoogleCalendarActionHasBeenSet() const { return m_createAndUpdateGoogleCalendarActionHasBeenSet; }
  inline void SetCreateAndUpdateGoogleCalendarAction(CapabilityState value) {
    m_createAndUpdateGoogleCalendarActionHasBeenSet = true;
    m_createAndUpdateGoogleCalendarAction = value;
  }
  inline Capabilities& WithCreateAndUpdateGoogleCalendarAction(CapabilityState value) {
    SetCreateAndUpdateGoogleCalendarAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Google Calendar actions.</p>
   */
  inline CapabilityState GetShareGoogleCalendarAction() const { return m_shareGoogleCalendarAction; }
  inline bool ShareGoogleCalendarActionHasBeenSet() const { return m_shareGoogleCalendarActionHasBeenSet; }
  inline void SetShareGoogleCalendarAction(CapabilityState value) {
    m_shareGoogleCalendarActionHasBeenSet = true;
    m_shareGoogleCalendarAction = value;
  }
  inline Capabilities& WithShareGoogleCalendarAction(CapabilityState value) {
    SetShareGoogleCalendarAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Google Calendar actions.</p>
   */
  inline CapabilityState GetUseGoogleCalendarAction() const { return m_useGoogleCalendarAction; }
  inline bool UseGoogleCalendarActionHasBeenSet() const { return m_useGoogleCalendarActionHasBeenSet; }
  inline void SetUseGoogleCalendarAction(CapabilityState value) {
    m_useGoogleCalendarActionHasBeenSet = true;
    m_useGoogleCalendarAction = value;
  }
  inline Capabilities& WithUseGoogleCalendarAction(CapabilityState value) {
    SetUseGoogleCalendarAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Zendesk connectors.</p>
   */
  inline CapabilityState GetZendeskAction() const { return m_zendeskAction; }
  inline bool ZendeskActionHasBeenSet() const { return m_zendeskActionHasBeenSet; }
  inline void SetZendeskAction(CapabilityState value) {
    m_zendeskActionHasBeenSet = true;
    m_zendeskAction = value;
  }
  inline Capabilities& WithZendeskAction(CapabilityState value) {
    SetZendeskAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Zendesk actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateZendeskAction() const { return m_createAndUpdateZendeskAction; }
  inline bool CreateAndUpdateZendeskActionHasBeenSet() const { return m_createAndUpdateZendeskActionHasBeenSet; }
  inline void SetCreateAndUpdateZendeskAction(CapabilityState value) {
    m_createAndUpdateZendeskActionHasBeenSet = true;
    m_createAndUpdateZendeskAction = value;
  }
  inline Capabilities& WithCreateAndUpdateZendeskAction(CapabilityState value) {
    SetCreateAndUpdateZendeskAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Zendesk actions.</p>
   */
  inline CapabilityState GetShareZendeskAction() const { return m_shareZendeskAction; }
  inline bool ShareZendeskActionHasBeenSet() const { return m_shareZendeskActionHasBeenSet; }
  inline void SetShareZendeskAction(CapabilityState value) {
    m_shareZendeskActionHasBeenSet = true;
    m_shareZendeskAction = value;
  }
  inline Capabilities& WithShareZendeskAction(CapabilityState value) {
    SetShareZendeskAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Zendesk actions.</p>
   */
  inline CapabilityState GetUseZendeskAction() const { return m_useZendeskAction; }
  inline bool UseZendeskActionHasBeenSet() const { return m_useZendeskActionHasBeenSet; }
  inline void SetUseZendeskAction(CapabilityState value) {
    m_useZendeskActionHasBeenSet = true;
    m_useZendeskAction = value;
  }
  inline Capabilities& WithUseZendeskAction(CapabilityState value) {
    SetUseZendeskAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Smartsheet connectors.</p>
   */
  inline CapabilityState GetSmartsheetAction() const { return m_smartsheetAction; }
  inline bool SmartsheetActionHasBeenSet() const { return m_smartsheetActionHasBeenSet; }
  inline void SetSmartsheetAction(CapabilityState value) {
    m_smartsheetActionHasBeenSet = true;
    m_smartsheetAction = value;
  }
  inline Capabilities& WithSmartsheetAction(CapabilityState value) {
    SetSmartsheetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Smartsheet actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateSmartsheetAction() const { return m_createAndUpdateSmartsheetAction; }
  inline bool CreateAndUpdateSmartsheetActionHasBeenSet() const { return m_createAndUpdateSmartsheetActionHasBeenSet; }
  inline void SetCreateAndUpdateSmartsheetAction(CapabilityState value) {
    m_createAndUpdateSmartsheetActionHasBeenSet = true;
    m_createAndUpdateSmartsheetAction = value;
  }
  inline Capabilities& WithCreateAndUpdateSmartsheetAction(CapabilityState value) {
    SetCreateAndUpdateSmartsheetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Smartsheet actions.</p>
   */
  inline CapabilityState GetShareSmartsheetAction() const { return m_shareSmartsheetAction; }
  inline bool ShareSmartsheetActionHasBeenSet() const { return m_shareSmartsheetActionHasBeenSet; }
  inline void SetShareSmartsheetAction(CapabilityState value) {
    m_shareSmartsheetActionHasBeenSet = true;
    m_shareSmartsheetAction = value;
  }
  inline Capabilities& WithShareSmartsheetAction(CapabilityState value) {
    SetShareSmartsheetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Smartsheet actions.</p>
   */
  inline CapabilityState GetUseSmartsheetAction() const { return m_useSmartsheetAction; }
  inline bool UseSmartsheetActionHasBeenSet() const { return m_useSmartsheetActionHasBeenSet; }
  inline void SetUseSmartsheetAction(CapabilityState value) {
    m_useSmartsheetActionHasBeenSet = true;
    m_useSmartsheetAction = value;
  }
  inline Capabilities& WithUseSmartsheetAction(CapabilityState value) {
    SetUseSmartsheetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using SAP Business Partner connectors.</p>
   */
  inline CapabilityState GetSAPBusinessPartnerAction() const { return m_sAPBusinessPartnerAction; }
  inline bool SAPBusinessPartnerActionHasBeenSet() const { return m_sAPBusinessPartnerActionHasBeenSet; }
  inline void SetSAPBusinessPartnerAction(CapabilityState value) {
    m_sAPBusinessPartnerActionHasBeenSet = true;
    m_sAPBusinessPartnerAction = value;
  }
  inline Capabilities& WithSAPBusinessPartnerAction(CapabilityState value) {
    SetSAPBusinessPartnerAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update SAP Business Partner actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateSAPBusinessPartnerAction() const { return m_createAndUpdateSAPBusinessPartnerAction; }
  inline bool CreateAndUpdateSAPBusinessPartnerActionHasBeenSet() const { return m_createAndUpdateSAPBusinessPartnerActionHasBeenSet; }
  inline void SetCreateAndUpdateSAPBusinessPartnerAction(CapabilityState value) {
    m_createAndUpdateSAPBusinessPartnerActionHasBeenSet = true;
    m_createAndUpdateSAPBusinessPartnerAction = value;
  }
  inline Capabilities& WithCreateAndUpdateSAPBusinessPartnerAction(CapabilityState value) {
    SetCreateAndUpdateSAPBusinessPartnerAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share SAP Business Partner actions.</p>
   */
  inline CapabilityState GetShareSAPBusinessPartnerAction() const { return m_shareSAPBusinessPartnerAction; }
  inline bool ShareSAPBusinessPartnerActionHasBeenSet() const { return m_shareSAPBusinessPartnerActionHasBeenSet; }
  inline void SetShareSAPBusinessPartnerAction(CapabilityState value) {
    m_shareSAPBusinessPartnerActionHasBeenSet = true;
    m_shareSAPBusinessPartnerAction = value;
  }
  inline Capabilities& WithShareSAPBusinessPartnerAction(CapabilityState value) {
    SetShareSAPBusinessPartnerAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use SAP Business Partner actions.</p>
   */
  inline CapabilityState GetUseSAPBusinessPartnerAction() const { return m_useSAPBusinessPartnerAction; }
  inline bool UseSAPBusinessPartnerActionHasBeenSet() const { return m_useSAPBusinessPartnerActionHasBeenSet; }
  inline void SetUseSAPBusinessPartnerAction(CapabilityState value) {
    m_useSAPBusinessPartnerActionHasBeenSet = true;
    m_useSAPBusinessPartnerAction = value;
  }
  inline Capabilities& WithUseSAPBusinessPartnerAction(CapabilityState value) {
    SetUseSAPBusinessPartnerAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using SAP Product Master connectors.</p>
   */
  inline CapabilityState GetSAPProductMasterDataAction() const { return m_sAPProductMasterDataAction; }
  inline bool SAPProductMasterDataActionHasBeenSet() const { return m_sAPProductMasterDataActionHasBeenSet; }
  inline void SetSAPProductMasterDataAction(CapabilityState value) {
    m_sAPProductMasterDataActionHasBeenSet = true;
    m_sAPProductMasterDataAction = value;
  }
  inline Capabilities& WithSAPProductMasterDataAction(CapabilityState value) {
    SetSAPProductMasterDataAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update SAP Product Master actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateSAPProductMasterDataAction() const { return m_createAndUpdateSAPProductMasterDataAction; }
  inline bool CreateAndUpdateSAPProductMasterDataActionHasBeenSet() const { return m_createAndUpdateSAPProductMasterDataActionHasBeenSet; }
  inline void SetCreateAndUpdateSAPProductMasterDataAction(CapabilityState value) {
    m_createAndUpdateSAPProductMasterDataActionHasBeenSet = true;
    m_createAndUpdateSAPProductMasterDataAction = value;
  }
  inline Capabilities& WithCreateAndUpdateSAPProductMasterDataAction(CapabilityState value) {
    SetCreateAndUpdateSAPProductMasterDataAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share SAP Product Master actions.</p>
   */
  inline CapabilityState GetShareSAPProductMasterDataAction() const { return m_shareSAPProductMasterDataAction; }
  inline bool ShareSAPProductMasterDataActionHasBeenSet() const { return m_shareSAPProductMasterDataActionHasBeenSet; }
  inline void SetShareSAPProductMasterDataAction(CapabilityState value) {
    m_shareSAPProductMasterDataActionHasBeenSet = true;
    m_shareSAPProductMasterDataAction = value;
  }
  inline Capabilities& WithShareSAPProductMasterDataAction(CapabilityState value) {
    SetShareSAPProductMasterDataAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use SAP Product Master actions.</p>
   */
  inline CapabilityState GetUseSAPProductMasterDataAction() const { return m_useSAPProductMasterDataAction; }
  inline bool UseSAPProductMasterDataActionHasBeenSet() const { return m_useSAPProductMasterDataActionHasBeenSet; }
  inline void SetUseSAPProductMasterDataAction(CapabilityState value) {
    m_useSAPProductMasterDataActionHasBeenSet = true;
    m_useSAPProductMasterDataAction = value;
  }
  inline Capabilities& WithUseSAPProductMasterDataAction(CapabilityState value) {
    SetUseSAPProductMasterDataAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using SAP Physical Inventory connectors.</p>
   */
  inline CapabilityState GetSAPPhysicalInventoryAction() const { return m_sAPPhysicalInventoryAction; }
  inline bool SAPPhysicalInventoryActionHasBeenSet() const { return m_sAPPhysicalInventoryActionHasBeenSet; }
  inline void SetSAPPhysicalInventoryAction(CapabilityState value) {
    m_sAPPhysicalInventoryActionHasBeenSet = true;
    m_sAPPhysicalInventoryAction = value;
  }
  inline Capabilities& WithSAPPhysicalInventoryAction(CapabilityState value) {
    SetSAPPhysicalInventoryAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update SAP Physical Inventory actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateSAPPhysicalInventoryAction() const { return m_createAndUpdateSAPPhysicalInventoryAction; }
  inline bool CreateAndUpdateSAPPhysicalInventoryActionHasBeenSet() const { return m_createAndUpdateSAPPhysicalInventoryActionHasBeenSet; }
  inline void SetCreateAndUpdateSAPPhysicalInventoryAction(CapabilityState value) {
    m_createAndUpdateSAPPhysicalInventoryActionHasBeenSet = true;
    m_createAndUpdateSAPPhysicalInventoryAction = value;
  }
  inline Capabilities& WithCreateAndUpdateSAPPhysicalInventoryAction(CapabilityState value) {
    SetCreateAndUpdateSAPPhysicalInventoryAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share SAP Physical Inventory actions.</p>
   */
  inline CapabilityState GetShareSAPPhysicalInventoryAction() const { return m_shareSAPPhysicalInventoryAction; }
  inline bool ShareSAPPhysicalInventoryActionHasBeenSet() const { return m_shareSAPPhysicalInventoryActionHasBeenSet; }
  inline void SetShareSAPPhysicalInventoryAction(CapabilityState value) {
    m_shareSAPPhysicalInventoryActionHasBeenSet = true;
    m_shareSAPPhysicalInventoryAction = value;
  }
  inline Capabilities& WithShareSAPPhysicalInventoryAction(CapabilityState value) {
    SetShareSAPPhysicalInventoryAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use SAP Physical Inventory actions.</p>
   */
  inline CapabilityState GetUseSAPPhysicalInventoryAction() const { return m_useSAPPhysicalInventoryAction; }
  inline bool UseSAPPhysicalInventoryActionHasBeenSet() const { return m_useSAPPhysicalInventoryActionHasBeenSet; }
  inline void SetUseSAPPhysicalInventoryAction(CapabilityState value) {
    m_useSAPPhysicalInventoryActionHasBeenSet = true;
    m_useSAPPhysicalInventoryAction = value;
  }
  inline Capabilities& WithUseSAPPhysicalInventoryAction(CapabilityState value) {
    SetUseSAPPhysicalInventoryAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using SAP Bill of Materials connectors.</p>
   */
  inline CapabilityState GetSAPBillOfMaterialAction() const { return m_sAPBillOfMaterialAction; }
  inline bool SAPBillOfMaterialActionHasBeenSet() const { return m_sAPBillOfMaterialActionHasBeenSet; }
  inline void SetSAPBillOfMaterialAction(CapabilityState value) {
    m_sAPBillOfMaterialActionHasBeenSet = true;
    m_sAPBillOfMaterialAction = value;
  }
  inline Capabilities& WithSAPBillOfMaterialAction(CapabilityState value) {
    SetSAPBillOfMaterialAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update SAP Bill of Materials actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateSAPBillOfMaterialAction() const { return m_createAndUpdateSAPBillOfMaterialAction; }
  inline bool CreateAndUpdateSAPBillOfMaterialActionHasBeenSet() const { return m_createAndUpdateSAPBillOfMaterialActionHasBeenSet; }
  inline void SetCreateAndUpdateSAPBillOfMaterialAction(CapabilityState value) {
    m_createAndUpdateSAPBillOfMaterialActionHasBeenSet = true;
    m_createAndUpdateSAPBillOfMaterialAction = value;
  }
  inline Capabilities& WithCreateAndUpdateSAPBillOfMaterialAction(CapabilityState value) {
    SetCreateAndUpdateSAPBillOfMaterialAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share SAP Bill of Materials actions.</p>
   */
  inline CapabilityState GetShareSAPBillOfMaterialAction() const { return m_shareSAPBillOfMaterialAction; }
  inline bool ShareSAPBillOfMaterialActionHasBeenSet() const { return m_shareSAPBillOfMaterialActionHasBeenSet; }
  inline void SetShareSAPBillOfMaterialAction(CapabilityState value) {
    m_shareSAPBillOfMaterialActionHasBeenSet = true;
    m_shareSAPBillOfMaterialAction = value;
  }
  inline Capabilities& WithShareSAPBillOfMaterialAction(CapabilityState value) {
    SetShareSAPBillOfMaterialAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use SAP Bill of Materials actions.</p>
   */
  inline CapabilityState GetUseSAPBillOfMaterialAction() const { return m_useSAPBillOfMaterialAction; }
  inline bool UseSAPBillOfMaterialActionHasBeenSet() const { return m_useSAPBillOfMaterialActionHasBeenSet; }
  inline void SetUseSAPBillOfMaterialAction(CapabilityState value) {
    m_useSAPBillOfMaterialActionHasBeenSet = true;
    m_useSAPBillOfMaterialAction = value;
  }
  inline Capabilities& WithUseSAPBillOfMaterialAction(CapabilityState value) {
    SetUseSAPBillOfMaterialAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using SAP Material Stock connectors.</p>
   */
  inline CapabilityState GetSAPMaterialStockAction() const { return m_sAPMaterialStockAction; }
  inline bool SAPMaterialStockActionHasBeenSet() const { return m_sAPMaterialStockActionHasBeenSet; }
  inline void SetSAPMaterialStockAction(CapabilityState value) {
    m_sAPMaterialStockActionHasBeenSet = true;
    m_sAPMaterialStockAction = value;
  }
  inline Capabilities& WithSAPMaterialStockAction(CapabilityState value) {
    SetSAPMaterialStockAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update SAP Material Stock actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateSAPMaterialStockAction() const { return m_createAndUpdateSAPMaterialStockAction; }
  inline bool CreateAndUpdateSAPMaterialStockActionHasBeenSet() const { return m_createAndUpdateSAPMaterialStockActionHasBeenSet; }
  inline void SetCreateAndUpdateSAPMaterialStockAction(CapabilityState value) {
    m_createAndUpdateSAPMaterialStockActionHasBeenSet = true;
    m_createAndUpdateSAPMaterialStockAction = value;
  }
  inline Capabilities& WithCreateAndUpdateSAPMaterialStockAction(CapabilityState value) {
    SetCreateAndUpdateSAPMaterialStockAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share SAP Material Stock actions.</p>
   */
  inline CapabilityState GetShareSAPMaterialStockAction() const { return m_shareSAPMaterialStockAction; }
  inline bool ShareSAPMaterialStockActionHasBeenSet() const { return m_shareSAPMaterialStockActionHasBeenSet; }
  inline void SetShareSAPMaterialStockAction(CapabilityState value) {
    m_shareSAPMaterialStockActionHasBeenSet = true;
    m_shareSAPMaterialStockAction = value;
  }
  inline Capabilities& WithShareSAPMaterialStockAction(CapabilityState value) {
    SetShareSAPMaterialStockAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use SAP Material Stock actions.</p>
   */
  inline CapabilityState GetUseSAPMaterialStockAction() const { return m_useSAPMaterialStockAction; }
  inline bool UseSAPMaterialStockActionHasBeenSet() const { return m_useSAPMaterialStockActionHasBeenSet; }
  inline void SetUseSAPMaterialStockAction(CapabilityState value) {
    m_useSAPMaterialStockActionHasBeenSet = true;
    m_useSAPMaterialStockAction = value;
  }
  inline Capabilities& WithUseSAPMaterialStockAction(CapabilityState value) {
    SetUseSAPMaterialStockAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using FactSet connectors.</p>
   */
  inline CapabilityState GetFactSetAction() const { return m_factSetAction; }
  inline bool FactSetActionHasBeenSet() const { return m_factSetActionHasBeenSet; }
  inline void SetFactSetAction(CapabilityState value) {
    m_factSetActionHasBeenSet = true;
    m_factSetAction = value;
  }
  inline Capabilities& WithFactSetAction(CapabilityState value) {
    SetFactSetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update FactSet actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateFactSetAction() const { return m_createAndUpdateFactSetAction; }
  inline bool CreateAndUpdateFactSetActionHasBeenSet() const { return m_createAndUpdateFactSetActionHasBeenSet; }
  inline void SetCreateAndUpdateFactSetAction(CapabilityState value) {
    m_createAndUpdateFactSetActionHasBeenSet = true;
    m_createAndUpdateFactSetAction = value;
  }
  inline Capabilities& WithCreateAndUpdateFactSetAction(CapabilityState value) {
    SetCreateAndUpdateFactSetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share FactSet actions.</p>
   */
  inline CapabilityState GetShareFactSetAction() const { return m_shareFactSetAction; }
  inline bool ShareFactSetActionHasBeenSet() const { return m_shareFactSetActionHasBeenSet; }
  inline void SetShareFactSetAction(CapabilityState value) {
    m_shareFactSetActionHasBeenSet = true;
    m_shareFactSetAction = value;
  }
  inline Capabilities& WithShareFactSetAction(CapabilityState value) {
    SetShareFactSetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use FactSet actions.</p>
   */
  inline CapabilityState GetUseFactSetAction() const { return m_useFactSetAction; }
  inline bool UseFactSetActionHasBeenSet() const { return m_useFactSetActionHasBeenSet; }
  inline void SetUseFactSetAction(CapabilityState value) {
    m_useFactSetActionHasBeenSet = true;
    m_useFactSetAction = value;
  }
  inline Capabilities& WithUseFactSetAction(CapabilityState value) {
    SetUseFactSetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Amazon S3 connectors.</p>
   */
  inline CapabilityState GetAmazonSThreeAction() const { return m_amazonSThreeAction; }
  inline bool AmazonSThreeActionHasBeenSet() const { return m_amazonSThreeActionHasBeenSet; }
  inline void SetAmazonSThreeAction(CapabilityState value) {
    m_amazonSThreeActionHasBeenSet = true;
    m_amazonSThreeAction = value;
  }
  inline Capabilities& WithAmazonSThreeAction(CapabilityState value) {
    SetAmazonSThreeAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Amazon S3 actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateAmazonSThreeAction() const { return m_createAndUpdateAmazonSThreeAction; }
  inline bool CreateAndUpdateAmazonSThreeActionHasBeenSet() const { return m_createAndUpdateAmazonSThreeActionHasBeenSet; }
  inline void SetCreateAndUpdateAmazonSThreeAction(CapabilityState value) {
    m_createAndUpdateAmazonSThreeActionHasBeenSet = true;
    m_createAndUpdateAmazonSThreeAction = value;
  }
  inline Capabilities& WithCreateAndUpdateAmazonSThreeAction(CapabilityState value) {
    SetCreateAndUpdateAmazonSThreeAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Amazon S3 actions.</p>
   */
  inline CapabilityState GetShareAmazonSThreeAction() const { return m_shareAmazonSThreeAction; }
  inline bool ShareAmazonSThreeActionHasBeenSet() const { return m_shareAmazonSThreeActionHasBeenSet; }
  inline void SetShareAmazonSThreeAction(CapabilityState value) {
    m_shareAmazonSThreeActionHasBeenSet = true;
    m_shareAmazonSThreeAction = value;
  }
  inline Capabilities& WithShareAmazonSThreeAction(CapabilityState value) {
    SetShareAmazonSThreeAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Amazon S3 actions.</p>
   */
  inline CapabilityState GetUseAmazonSThreeAction() const { return m_useAmazonSThreeAction; }
  inline bool UseAmazonSThreeActionHasBeenSet() const { return m_useAmazonSThreeActionHasBeenSet; }
  inline void SetUseAmazonSThreeAction(CapabilityState value) {
    m_useAmazonSThreeActionHasBeenSet = true;
    m_useAmazonSThreeAction = value;
  }
  inline Capabilities& WithUseAmazonSThreeAction(CapabilityState value) {
    SetUseAmazonSThreeAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Textract connectors.</p>
   */
  inline CapabilityState GetTextractAction() const { return m_textractAction; }
  inline bool TextractActionHasBeenSet() const { return m_textractActionHasBeenSet; }
  inline void SetTextractAction(CapabilityState value) {
    m_textractActionHasBeenSet = true;
    m_textractAction = value;
  }
  inline Capabilities& WithTextractAction(CapabilityState value) {
    SetTextractAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Textract actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateTextractAction() const { return m_createAndUpdateTextractAction; }
  inline bool CreateAndUpdateTextractActionHasBeenSet() const { return m_createAndUpdateTextractActionHasBeenSet; }
  inline void SetCreateAndUpdateTextractAction(CapabilityState value) {
    m_createAndUpdateTextractActionHasBeenSet = true;
    m_createAndUpdateTextractAction = value;
  }
  inline Capabilities& WithCreateAndUpdateTextractAction(CapabilityState value) {
    SetCreateAndUpdateTextractAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Textract actions.</p>
   */
  inline CapabilityState GetShareTextractAction() const { return m_shareTextractAction; }
  inline bool ShareTextractActionHasBeenSet() const { return m_shareTextractActionHasBeenSet; }
  inline void SetShareTextractAction(CapabilityState value) {
    m_shareTextractActionHasBeenSet = true;
    m_shareTextractAction = value;
  }
  inline Capabilities& WithShareTextractAction(CapabilityState value) {
    SetShareTextractAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Textract actions.</p>
   */
  inline CapabilityState GetUseTextractAction() const { return m_useTextractAction; }
  inline bool UseTextractActionHasBeenSet() const { return m_useTextractActionHasBeenSet; }
  inline void SetUseTextractAction(CapabilityState value) {
    m_useTextractActionHasBeenSet = true;
    m_useTextractAction = value;
  }
  inline Capabilities& WithUseTextractAction(CapabilityState value) {
    SetUseTextractAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Comprehend connectors.</p>
   */
  inline CapabilityState GetComprehendAction() const { return m_comprehendAction; }
  inline bool ComprehendActionHasBeenSet() const { return m_comprehendActionHasBeenSet; }
  inline void SetComprehendAction(CapabilityState value) {
    m_comprehendActionHasBeenSet = true;
    m_comprehendAction = value;
  }
  inline Capabilities& WithComprehendAction(CapabilityState value) {
    SetComprehendAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Comprehend actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateComprehendAction() const { return m_createAndUpdateComprehendAction; }
  inline bool CreateAndUpdateComprehendActionHasBeenSet() const { return m_createAndUpdateComprehendActionHasBeenSet; }
  inline void SetCreateAndUpdateComprehendAction(CapabilityState value) {
    m_createAndUpdateComprehendActionHasBeenSet = true;
    m_createAndUpdateComprehendAction = value;
  }
  inline Capabilities& WithCreateAndUpdateComprehendAction(CapabilityState value) {
    SetCreateAndUpdateComprehendAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Comprehend actions.</p>
   */
  inline CapabilityState GetShareComprehendAction() const { return m_shareComprehendAction; }
  inline bool ShareComprehendActionHasBeenSet() const { return m_shareComprehendActionHasBeenSet; }
  inline void SetShareComprehendAction(CapabilityState value) {
    m_shareComprehendActionHasBeenSet = true;
    m_shareComprehendAction = value;
  }
  inline Capabilities& WithShareComprehendAction(CapabilityState value) {
    SetShareComprehendAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Comprehend actions.</p>
   */
  inline CapabilityState GetUseComprehendAction() const { return m_useComprehendAction; }
  inline bool UseComprehendActionHasBeenSet() const { return m_useComprehendActionHasBeenSet; }
  inline void SetUseComprehendAction(CapabilityState value) {
    m_useComprehendActionHasBeenSet = true;
    m_useComprehendAction = value;
  }
  inline Capabilities& WithUseComprehendAction(CapabilityState value) {
    SetUseComprehendAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Comprehend Medical connectors.</p>
   */
  inline CapabilityState GetComprehendMedicalAction() const { return m_comprehendMedicalAction; }
  inline bool ComprehendMedicalActionHasBeenSet() const { return m_comprehendMedicalActionHasBeenSet; }
  inline void SetComprehendMedicalAction(CapabilityState value) {
    m_comprehendMedicalActionHasBeenSet = true;
    m_comprehendMedicalAction = value;
  }
  inline Capabilities& WithComprehendMedicalAction(CapabilityState value) {
    SetComprehendMedicalAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Comprehend Medical actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateComprehendMedicalAction() const { return m_createAndUpdateComprehendMedicalAction; }
  inline bool CreateAndUpdateComprehendMedicalActionHasBeenSet() const { return m_createAndUpdateComprehendMedicalActionHasBeenSet; }
  inline void SetCreateAndUpdateComprehendMedicalAction(CapabilityState value) {
    m_createAndUpdateComprehendMedicalActionHasBeenSet = true;
    m_createAndUpdateComprehendMedicalAction = value;
  }
  inline Capabilities& WithCreateAndUpdateComprehendMedicalAction(CapabilityState value) {
    SetCreateAndUpdateComprehendMedicalAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Comprehend Medical actions.</p>
   */
  inline CapabilityState GetShareComprehendMedicalAction() const { return m_shareComprehendMedicalAction; }
  inline bool ShareComprehendMedicalActionHasBeenSet() const { return m_shareComprehendMedicalActionHasBeenSet; }
  inline void SetShareComprehendMedicalAction(CapabilityState value) {
    m_shareComprehendMedicalActionHasBeenSet = true;
    m_shareComprehendMedicalAction = value;
  }
  inline Capabilities& WithShareComprehendMedicalAction(CapabilityState value) {
    SetShareComprehendMedicalAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Comprehend Medical actions.</p>
   */
  inline CapabilityState GetUseComprehendMedicalAction() const { return m_useComprehendMedicalAction; }
  inline bool UseComprehendMedicalActionHasBeenSet() const { return m_useComprehendMedicalActionHasBeenSet; }
  inline void SetUseComprehendMedicalAction(CapabilityState value) {
    m_useComprehendMedicalActionHasBeenSet = true;
    m_useComprehendMedicalAction = value;
  }
  inline Capabilities& WithUseComprehendMedicalAction(CapabilityState value) {
    SetUseComprehendMedicalAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Bedrock Agent connectors.</p>
   */
  inline CapabilityState GetAmazonBedrockARSAction() const { return m_amazonBedrockARSAction; }
  inline bool AmazonBedrockARSActionHasBeenSet() const { return m_amazonBedrockARSActionHasBeenSet; }
  inline void SetAmazonBedrockARSAction(CapabilityState value) {
    m_amazonBedrockARSActionHasBeenSet = true;
    m_amazonBedrockARSAction = value;
  }
  inline Capabilities& WithAmazonBedrockARSAction(CapabilityState value) {
    SetAmazonBedrockARSAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Bedrock Agent actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateAmazonBedrockARSAction() const { return m_createAndUpdateAmazonBedrockARSAction; }
  inline bool CreateAndUpdateAmazonBedrockARSActionHasBeenSet() const { return m_createAndUpdateAmazonBedrockARSActionHasBeenSet; }
  inline void SetCreateAndUpdateAmazonBedrockARSAction(CapabilityState value) {
    m_createAndUpdateAmazonBedrockARSActionHasBeenSet = true;
    m_createAndUpdateAmazonBedrockARSAction = value;
  }
  inline Capabilities& WithCreateAndUpdateAmazonBedrockARSAction(CapabilityState value) {
    SetCreateAndUpdateAmazonBedrockARSAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Bedrock Agent actions.</p>
   */
  inline CapabilityState GetShareAmazonBedrockARSAction() const { return m_shareAmazonBedrockARSAction; }
  inline bool ShareAmazonBedrockARSActionHasBeenSet() const { return m_shareAmazonBedrockARSActionHasBeenSet; }
  inline void SetShareAmazonBedrockARSAction(CapabilityState value) {
    m_shareAmazonBedrockARSActionHasBeenSet = true;
    m_shareAmazonBedrockARSAction = value;
  }
  inline Capabilities& WithShareAmazonBedrockARSAction(CapabilityState value) {
    SetShareAmazonBedrockARSAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Bedrock Agent actions.</p>
   */
  inline CapabilityState GetUseAmazonBedrockARSAction() const { return m_useAmazonBedrockARSAction; }
  inline bool UseAmazonBedrockARSActionHasBeenSet() const { return m_useAmazonBedrockARSActionHasBeenSet; }
  inline void SetUseAmazonBedrockARSAction(CapabilityState value) {
    m_useAmazonBedrockARSActionHasBeenSet = true;
    m_useAmazonBedrockARSAction = value;
  }
  inline Capabilities& WithUseAmazonBedrockARSAction(CapabilityState value) {
    SetUseAmazonBedrockARSAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Bedrock Runtime connectors.</p>
   */
  inline CapabilityState GetAmazonBedrockFSAction() const { return m_amazonBedrockFSAction; }
  inline bool AmazonBedrockFSActionHasBeenSet() const { return m_amazonBedrockFSActionHasBeenSet; }
  inline void SetAmazonBedrockFSAction(CapabilityState value) {
    m_amazonBedrockFSActionHasBeenSet = true;
    m_amazonBedrockFSAction = value;
  }
  inline Capabilities& WithAmazonBedrockFSAction(CapabilityState value) {
    SetAmazonBedrockFSAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Bedrock Runtime actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateAmazonBedrockFSAction() const { return m_createAndUpdateAmazonBedrockFSAction; }
  inline bool CreateAndUpdateAmazonBedrockFSActionHasBeenSet() const { return m_createAndUpdateAmazonBedrockFSActionHasBeenSet; }
  inline void SetCreateAndUpdateAmazonBedrockFSAction(CapabilityState value) {
    m_createAndUpdateAmazonBedrockFSActionHasBeenSet = true;
    m_createAndUpdateAmazonBedrockFSAction = value;
  }
  inline Capabilities& WithCreateAndUpdateAmazonBedrockFSAction(CapabilityState value) {
    SetCreateAndUpdateAmazonBedrockFSAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Bedrock Runtime actions.</p>
   */
  inline CapabilityState GetShareAmazonBedrockFSAction() const { return m_shareAmazonBedrockFSAction; }
  inline bool ShareAmazonBedrockFSActionHasBeenSet() const { return m_shareAmazonBedrockFSActionHasBeenSet; }
  inline void SetShareAmazonBedrockFSAction(CapabilityState value) {
    m_shareAmazonBedrockFSActionHasBeenSet = true;
    m_shareAmazonBedrockFSAction = value;
  }
  inline Capabilities& WithShareAmazonBedrockFSAction(CapabilityState value) {
    SetShareAmazonBedrockFSAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Bedrock Runtime actions.</p>
   */
  inline CapabilityState GetUseAmazonBedrockFSAction() const { return m_useAmazonBedrockFSAction; }
  inline bool UseAmazonBedrockFSActionHasBeenSet() const { return m_useAmazonBedrockFSActionHasBeenSet; }
  inline void SetUseAmazonBedrockFSAction(CapabilityState value) {
    m_useAmazonBedrockFSActionHasBeenSet = true;
    m_useAmazonBedrockFSAction = value;
  }
  inline Capabilities& WithUseAmazonBedrockFSAction(CapabilityState value) {
    SetUseAmazonBedrockFSAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Bedrock Data Automation Runtime
   * connectors.</p>
   */
  inline CapabilityState GetAmazonBedrockKRSAction() const { return m_amazonBedrockKRSAction; }
  inline bool AmazonBedrockKRSActionHasBeenSet() const { return m_amazonBedrockKRSActionHasBeenSet; }
  inline void SetAmazonBedrockKRSAction(CapabilityState value) {
    m_amazonBedrockKRSActionHasBeenSet = true;
    m_amazonBedrockKRSAction = value;
  }
  inline Capabilities& WithAmazonBedrockKRSAction(CapabilityState value) {
    SetAmazonBedrockKRSAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Bedrock Data Automation Runtime actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateAmazonBedrockKRSAction() const { return m_createAndUpdateAmazonBedrockKRSAction; }
  inline bool CreateAndUpdateAmazonBedrockKRSActionHasBeenSet() const { return m_createAndUpdateAmazonBedrockKRSActionHasBeenSet; }
  inline void SetCreateAndUpdateAmazonBedrockKRSAction(CapabilityState value) {
    m_createAndUpdateAmazonBedrockKRSActionHasBeenSet = true;
    m_createAndUpdateAmazonBedrockKRSAction = value;
  }
  inline Capabilities& WithCreateAndUpdateAmazonBedrockKRSAction(CapabilityState value) {
    SetCreateAndUpdateAmazonBedrockKRSAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Bedrock Data Automation Runtime actions.</p>
   */
  inline CapabilityState GetShareAmazonBedrockKRSAction() const { return m_shareAmazonBedrockKRSAction; }
  inline bool ShareAmazonBedrockKRSActionHasBeenSet() const { return m_shareAmazonBedrockKRSActionHasBeenSet; }
  inline void SetShareAmazonBedrockKRSAction(CapabilityState value) {
    m_shareAmazonBedrockKRSActionHasBeenSet = true;
    m_shareAmazonBedrockKRSAction = value;
  }
  inline Capabilities& WithShareAmazonBedrockKRSAction(CapabilityState value) {
    SetShareAmazonBedrockKRSAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Bedrock Data Automation Runtime actions.</p>
   */
  inline CapabilityState GetUseAmazonBedrockKRSAction() const { return m_useAmazonBedrockKRSAction; }
  inline bool UseAmazonBedrockKRSActionHasBeenSet() const { return m_useAmazonBedrockKRSActionHasBeenSet; }
  inline void SetUseAmazonBedrockKRSAction(CapabilityState value) {
    m_useAmazonBedrockKRSActionHasBeenSet = true;
    m_useAmazonBedrockKRSAction = value;
  }
  inline Capabilities& WithUseAmazonBedrockKRSAction(CapabilityState value) {
    SetUseAmazonBedrockKRSAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Model Context Protocol connectors.</p>
   */
  inline CapabilityState GetMCPAction() const { return m_mCPAction; }
  inline bool MCPActionHasBeenSet() const { return m_mCPActionHasBeenSet; }
  inline void SetMCPAction(CapabilityState value) {
    m_mCPActionHasBeenSet = true;
    m_mCPAction = value;
  }
  inline Capabilities& WithMCPAction(CapabilityState value) {
    SetMCPAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Model Context Protocol actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateMCPAction() const { return m_createAndUpdateMCPAction; }
  inline bool CreateAndUpdateMCPActionHasBeenSet() const { return m_createAndUpdateMCPActionHasBeenSet; }
  inline void SetCreateAndUpdateMCPAction(CapabilityState value) {
    m_createAndUpdateMCPActionHasBeenSet = true;
    m_createAndUpdateMCPAction = value;
  }
  inline Capabilities& WithCreateAndUpdateMCPAction(CapabilityState value) {
    SetCreateAndUpdateMCPAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Model Context Protocol actions.</p>
   */
  inline CapabilityState GetShareMCPAction() const { return m_shareMCPAction; }
  inline bool ShareMCPActionHasBeenSet() const { return m_shareMCPActionHasBeenSet; }
  inline void SetShareMCPAction(CapabilityState value) {
    m_shareMCPActionHasBeenSet = true;
    m_shareMCPAction = value;
  }
  inline Capabilities& WithShareMCPAction(CapabilityState value) {
    SetShareMCPAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Model Context Protocol actions.</p>
   */
  inline CapabilityState GetUseMCPAction() const { return m_useMCPAction; }
  inline bool UseMCPActionHasBeenSet() const { return m_useMCPActionHasBeenSet; }
  inline void SetUseMCPAction(CapabilityState value) {
    m_useMCPActionHasBeenSet = true;
    m_useMCPAction = value;
  }
  inline Capabilities& WithUseMCPAction(CapabilityState value) {
    SetUseMCPAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using OpenAPI Specification connectors.</p>
   */
  inline CapabilityState GetOpenAPIAction() const { return m_openAPIAction; }
  inline bool OpenAPIActionHasBeenSet() const { return m_openAPIActionHasBeenSet; }
  inline void SetOpenAPIAction(CapabilityState value) {
    m_openAPIActionHasBeenSet = true;
    m_openAPIAction = value;
  }
  inline Capabilities& WithOpenAPIAction(CapabilityState value) {
    SetOpenAPIAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update OpenAPI Specification actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateOpenAPIAction() const { return m_createAndUpdateOpenAPIAction; }
  inline bool CreateAndUpdateOpenAPIActionHasBeenSet() const { return m_createAndUpdateOpenAPIActionHasBeenSet; }
  inline void SetCreateAndUpdateOpenAPIAction(CapabilityState value) {
    m_createAndUpdateOpenAPIActionHasBeenSet = true;
    m_createAndUpdateOpenAPIAction = value;
  }
  inline Capabilities& WithCreateAndUpdateOpenAPIAction(CapabilityState value) {
    SetCreateAndUpdateOpenAPIAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share OpenAPI Specification actions.</p>
   */
  inline CapabilityState GetShareOpenAPIAction() const { return m_shareOpenAPIAction; }
  inline bool ShareOpenAPIActionHasBeenSet() const { return m_shareOpenAPIActionHasBeenSet; }
  inline void SetShareOpenAPIAction(CapabilityState value) {
    m_shareOpenAPIActionHasBeenSet = true;
    m_shareOpenAPIAction = value;
  }
  inline Capabilities& WithShareOpenAPIAction(CapabilityState value) {
    SetShareOpenAPIAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use OpenAPI Specification actions.</p>
   */
  inline CapabilityState GetUseOpenAPIAction() const { return m_useOpenAPIAction; }
  inline bool UseOpenAPIActionHasBeenSet() const { return m_useOpenAPIActionHasBeenSet; }
  inline void SetUseOpenAPIAction(CapabilityState value) {
    m_useOpenAPIActionHasBeenSet = true;
    m_useOpenAPIAction = value;
  }
  inline Capabilities& WithUseOpenAPIAction(CapabilityState value) {
    SetUseOpenAPIAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using S&amp;P Global Market Intelligence
   * connectors.</p>
   */
  inline CapabilityState GetSandPGMIAction() const { return m_sandPGMIAction; }
  inline bool SandPGMIActionHasBeenSet() const { return m_sandPGMIActionHasBeenSet; }
  inline void SetSandPGMIAction(CapabilityState value) {
    m_sandPGMIActionHasBeenSet = true;
    m_sandPGMIAction = value;
  }
  inline Capabilities& WithSandPGMIAction(CapabilityState value) {
    SetSandPGMIAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update S&amp;P Global Market Intelligence
   * actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateSandPGMIAction() const { return m_createAndUpdateSandPGMIAction; }
  inline bool CreateAndUpdateSandPGMIActionHasBeenSet() const { return m_createAndUpdateSandPGMIActionHasBeenSet; }
  inline void SetCreateAndUpdateSandPGMIAction(CapabilityState value) {
    m_createAndUpdateSandPGMIActionHasBeenSet = true;
    m_createAndUpdateSandPGMIAction = value;
  }
  inline Capabilities& WithCreateAndUpdateSandPGMIAction(CapabilityState value) {
    SetCreateAndUpdateSandPGMIAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share S&amp;P Global Market Intelligence actions.</p>
   */
  inline CapabilityState GetShareSandPGMIAction() const { return m_shareSandPGMIAction; }
  inline bool ShareSandPGMIActionHasBeenSet() const { return m_shareSandPGMIActionHasBeenSet; }
  inline void SetShareSandPGMIAction(CapabilityState value) {
    m_shareSandPGMIActionHasBeenSet = true;
    m_shareSandPGMIAction = value;
  }
  inline Capabilities& WithShareSandPGMIAction(CapabilityState value) {
    SetShareSandPGMIAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use S&amp;P Global Market Intelligence actions.</p>
   */
  inline CapabilityState GetUseSandPGMIAction() const { return m_useSandPGMIAction; }
  inline bool UseSandPGMIActionHasBeenSet() const { return m_useSandPGMIActionHasBeenSet; }
  inline void SetUseSandPGMIAction(CapabilityState value) {
    m_useSandPGMIActionHasBeenSet = true;
    m_useSandPGMIAction = value;
  }
  inline Capabilities& WithUseSandPGMIAction(CapabilityState value) {
    SetUseSandPGMIAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using S&amp;P Global Energy connectors.</p>
   */
  inline CapabilityState GetSandPGlobalEnergyAction() const { return m_sandPGlobalEnergyAction; }
  inline bool SandPGlobalEnergyActionHasBeenSet() const { return m_sandPGlobalEnergyActionHasBeenSet; }
  inline void SetSandPGlobalEnergyAction(CapabilityState value) {
    m_sandPGlobalEnergyActionHasBeenSet = true;
    m_sandPGlobalEnergyAction = value;
  }
  inline Capabilities& WithSandPGlobalEnergyAction(CapabilityState value) {
    SetSandPGlobalEnergyAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update S&amp;P Global Energy actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateSandPGlobalEnergyAction() const { return m_createAndUpdateSandPGlobalEnergyAction; }
  inline bool CreateAndUpdateSandPGlobalEnergyActionHasBeenSet() const { return m_createAndUpdateSandPGlobalEnergyActionHasBeenSet; }
  inline void SetCreateAndUpdateSandPGlobalEnergyAction(CapabilityState value) {
    m_createAndUpdateSandPGlobalEnergyActionHasBeenSet = true;
    m_createAndUpdateSandPGlobalEnergyAction = value;
  }
  inline Capabilities& WithCreateAndUpdateSandPGlobalEnergyAction(CapabilityState value) {
    SetCreateAndUpdateSandPGlobalEnergyAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share S&amp;P Global Energy actions.</p>
   */
  inline CapabilityState GetShareSandPGlobalEnergyAction() const { return m_shareSandPGlobalEnergyAction; }
  inline bool ShareSandPGlobalEnergyActionHasBeenSet() const { return m_shareSandPGlobalEnergyActionHasBeenSet; }
  inline void SetShareSandPGlobalEnergyAction(CapabilityState value) {
    m_shareSandPGlobalEnergyActionHasBeenSet = true;
    m_shareSandPGlobalEnergyAction = value;
  }
  inline Capabilities& WithShareSandPGlobalEnergyAction(CapabilityState value) {
    SetShareSandPGlobalEnergyAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use S&amp;P Global Energy actions.</p>
   */
  inline CapabilityState GetUseSandPGlobalEnergyAction() const { return m_useSandPGlobalEnergyAction; }
  inline bool UseSandPGlobalEnergyActionHasBeenSet() const { return m_useSandPGlobalEnergyActionHasBeenSet; }
  inline void SetUseSandPGlobalEnergyAction(CapabilityState value) {
    m_useSandPGlobalEnergyActionHasBeenSet = true;
    m_useSandPGlobalEnergyAction = value;
  }
  inline Capabilities& WithUseSandPGlobalEnergyAction(CapabilityState value) {
    SetUseSandPGlobalEnergyAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using BambooHR connectors.</p>
   */
  inline CapabilityState GetBambooHRAction() const { return m_bambooHRAction; }
  inline bool BambooHRActionHasBeenSet() const { return m_bambooHRActionHasBeenSet; }
  inline void SetBambooHRAction(CapabilityState value) {
    m_bambooHRActionHasBeenSet = true;
    m_bambooHRAction = value;
  }
  inline Capabilities& WithBambooHRAction(CapabilityState value) {
    SetBambooHRAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update BambooHR actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateBambooHRAction() const { return m_createAndUpdateBambooHRAction; }
  inline bool CreateAndUpdateBambooHRActionHasBeenSet() const { return m_createAndUpdateBambooHRActionHasBeenSet; }
  inline void SetCreateAndUpdateBambooHRAction(CapabilityState value) {
    m_createAndUpdateBambooHRActionHasBeenSet = true;
    m_createAndUpdateBambooHRAction = value;
  }
  inline Capabilities& WithCreateAndUpdateBambooHRAction(CapabilityState value) {
    SetCreateAndUpdateBambooHRAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share BambooHR actions.</p>
   */
  inline CapabilityState GetShareBambooHRAction() const { return m_shareBambooHRAction; }
  inline bool ShareBambooHRActionHasBeenSet() const { return m_shareBambooHRActionHasBeenSet; }
  inline void SetShareBambooHRAction(CapabilityState value) {
    m_shareBambooHRActionHasBeenSet = true;
    m_shareBambooHRAction = value;
  }
  inline Capabilities& WithShareBambooHRAction(CapabilityState value) {
    SetShareBambooHRAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use BambooHR actions.</p>
   */
  inline CapabilityState GetUseBambooHRAction() const { return m_useBambooHRAction; }
  inline bool UseBambooHRActionHasBeenSet() const { return m_useBambooHRActionHasBeenSet; }
  inline void SetUseBambooHRAction(CapabilityState value) {
    m_useBambooHRActionHasBeenSet = true;
    m_useBambooHRAction = value;
  }
  inline Capabilities& WithUseBambooHRAction(CapabilityState value) {
    SetUseBambooHRAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Box Agent connectors.</p>
   */
  inline CapabilityState GetBoxAgentAction() const { return m_boxAgentAction; }
  inline bool BoxAgentActionHasBeenSet() const { return m_boxAgentActionHasBeenSet; }
  inline void SetBoxAgentAction(CapabilityState value) {
    m_boxAgentActionHasBeenSet = true;
    m_boxAgentAction = value;
  }
  inline Capabilities& WithBoxAgentAction(CapabilityState value) {
    SetBoxAgentAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Box Agent actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateBoxAgentAction() const { return m_createAndUpdateBoxAgentAction; }
  inline bool CreateAndUpdateBoxAgentActionHasBeenSet() const { return m_createAndUpdateBoxAgentActionHasBeenSet; }
  inline void SetCreateAndUpdateBoxAgentAction(CapabilityState value) {
    m_createAndUpdateBoxAgentActionHasBeenSet = true;
    m_createAndUpdateBoxAgentAction = value;
  }
  inline Capabilities& WithCreateAndUpdateBoxAgentAction(CapabilityState value) {
    SetCreateAndUpdateBoxAgentAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Box Agent actions.</p>
   */
  inline CapabilityState GetShareBoxAgentAction() const { return m_shareBoxAgentAction; }
  inline bool ShareBoxAgentActionHasBeenSet() const { return m_shareBoxAgentActionHasBeenSet; }
  inline void SetShareBoxAgentAction(CapabilityState value) {
    m_shareBoxAgentActionHasBeenSet = true;
    m_shareBoxAgentAction = value;
  }
  inline Capabilities& WithShareBoxAgentAction(CapabilityState value) {
    SetShareBoxAgentAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Box Agent actions.</p>
   */
  inline CapabilityState GetUseBoxAgentAction() const { return m_useBoxAgentAction; }
  inline bool UseBoxAgentActionHasBeenSet() const { return m_useBoxAgentActionHasBeenSet; }
  inline void SetUseBoxAgentAction(CapabilityState value) {
    m_useBoxAgentActionHasBeenSet = true;
    m_useBoxAgentAction = value;
  }
  inline Capabilities& WithUseBoxAgentAction(CapabilityState value) {
    SetUseBoxAgentAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Canva Agent connectors.</p>
   */
  inline CapabilityState GetCanvaAgentAction() const { return m_canvaAgentAction; }
  inline bool CanvaAgentActionHasBeenSet() const { return m_canvaAgentActionHasBeenSet; }
  inline void SetCanvaAgentAction(CapabilityState value) {
    m_canvaAgentActionHasBeenSet = true;
    m_canvaAgentAction = value;
  }
  inline Capabilities& WithCanvaAgentAction(CapabilityState value) {
    SetCanvaAgentAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Canva Agent actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateCanvaAgentAction() const { return m_createAndUpdateCanvaAgentAction; }
  inline bool CreateAndUpdateCanvaAgentActionHasBeenSet() const { return m_createAndUpdateCanvaAgentActionHasBeenSet; }
  inline void SetCreateAndUpdateCanvaAgentAction(CapabilityState value) {
    m_createAndUpdateCanvaAgentActionHasBeenSet = true;
    m_createAndUpdateCanvaAgentAction = value;
  }
  inline Capabilities& WithCreateAndUpdateCanvaAgentAction(CapabilityState value) {
    SetCreateAndUpdateCanvaAgentAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Canva Agent actions.</p>
   */
  inline CapabilityState GetShareCanvaAgentAction() const { return m_shareCanvaAgentAction; }
  inline bool ShareCanvaAgentActionHasBeenSet() const { return m_shareCanvaAgentActionHasBeenSet; }
  inline void SetShareCanvaAgentAction(CapabilityState value) {
    m_shareCanvaAgentActionHasBeenSet = true;
    m_shareCanvaAgentAction = value;
  }
  inline Capabilities& WithShareCanvaAgentAction(CapabilityState value) {
    SetShareCanvaAgentAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Canva Agent actions.</p>
   */
  inline CapabilityState GetUseCanvaAgentAction() const { return m_useCanvaAgentAction; }
  inline bool UseCanvaAgentActionHasBeenSet() const { return m_useCanvaAgentActionHasBeenSet; }
  inline void SetUseCanvaAgentAction(CapabilityState value) {
    m_useCanvaAgentActionHasBeenSet = true;
    m_useCanvaAgentAction = value;
  }
  inline Capabilities& WithUseCanvaAgentAction(CapabilityState value) {
    SetUseCanvaAgentAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using GitHub connectors.</p>
   */
  inline CapabilityState GetGithubAction() const { return m_githubAction; }
  inline bool GithubActionHasBeenSet() const { return m_githubActionHasBeenSet; }
  inline void SetGithubAction(CapabilityState value) {
    m_githubActionHasBeenSet = true;
    m_githubAction = value;
  }
  inline Capabilities& WithGithubAction(CapabilityState value) {
    SetGithubAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update GitHub actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateGithubAction() const { return m_createAndUpdateGithubAction; }
  inline bool CreateAndUpdateGithubActionHasBeenSet() const { return m_createAndUpdateGithubActionHasBeenSet; }
  inline void SetCreateAndUpdateGithubAction(CapabilityState value) {
    m_createAndUpdateGithubActionHasBeenSet = true;
    m_createAndUpdateGithubAction = value;
  }
  inline Capabilities& WithCreateAndUpdateGithubAction(CapabilityState value) {
    SetCreateAndUpdateGithubAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share GitHub actions.</p>
   */
  inline CapabilityState GetShareGithubAction() const { return m_shareGithubAction; }
  inline bool ShareGithubActionHasBeenSet() const { return m_shareGithubActionHasBeenSet; }
  inline void SetShareGithubAction(CapabilityState value) {
    m_shareGithubActionHasBeenSet = true;
    m_shareGithubAction = value;
  }
  inline Capabilities& WithShareGithubAction(CapabilityState value) {
    SetShareGithubAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use GitHub actions.</p>
   */
  inline CapabilityState GetUseGithubAction() const { return m_useGithubAction; }
  inline bool UseGithubActionHasBeenSet() const { return m_useGithubActionHasBeenSet; }
  inline void SetUseGithubAction(CapabilityState value) {
    m_useGithubActionHasBeenSet = true;
    m_useGithubAction = value;
  }
  inline Capabilities& WithUseGithubAction(CapabilityState value) {
    SetUseGithubAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Notion connectors.</p>
   */
  inline CapabilityState GetNotionAction() const { return m_notionAction; }
  inline bool NotionActionHasBeenSet() const { return m_notionActionHasBeenSet; }
  inline void SetNotionAction(CapabilityState value) {
    m_notionActionHasBeenSet = true;
    m_notionAction = value;
  }
  inline Capabilities& WithNotionAction(CapabilityState value) {
    SetNotionAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Notion actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateNotionAction() const { return m_createAndUpdateNotionAction; }
  inline bool CreateAndUpdateNotionActionHasBeenSet() const { return m_createAndUpdateNotionActionHasBeenSet; }
  inline void SetCreateAndUpdateNotionAction(CapabilityState value) {
    m_createAndUpdateNotionActionHasBeenSet = true;
    m_createAndUpdateNotionAction = value;
  }
  inline Capabilities& WithCreateAndUpdateNotionAction(CapabilityState value) {
    SetCreateAndUpdateNotionAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Notion actions.</p>
   */
  inline CapabilityState GetShareNotionAction() const { return m_shareNotionAction; }
  inline bool ShareNotionActionHasBeenSet() const { return m_shareNotionActionHasBeenSet; }
  inline void SetShareNotionAction(CapabilityState value) {
    m_shareNotionActionHasBeenSet = true;
    m_shareNotionAction = value;
  }
  inline Capabilities& WithShareNotionAction(CapabilityState value) {
    SetShareNotionAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Notion actions.</p>
   */
  inline CapabilityState GetUseNotionAction() const { return m_useNotionAction; }
  inline bool UseNotionActionHasBeenSet() const { return m_useNotionActionHasBeenSet; }
  inline void SetUseNotionAction(CapabilityState value) {
    m_useNotionActionHasBeenSet = true;
    m_useNotionAction = value;
  }
  inline Capabilities& WithUseNotionAction(CapabilityState value) {
    SetUseNotionAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Linear connectors.</p>
   */
  inline CapabilityState GetLinearAction() const { return m_linearAction; }
  inline bool LinearActionHasBeenSet() const { return m_linearActionHasBeenSet; }
  inline void SetLinearAction(CapabilityState value) {
    m_linearActionHasBeenSet = true;
    m_linearAction = value;
  }
  inline Capabilities& WithLinearAction(CapabilityState value) {
    SetLinearAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Linear actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateLinearAction() const { return m_createAndUpdateLinearAction; }
  inline bool CreateAndUpdateLinearActionHasBeenSet() const { return m_createAndUpdateLinearActionHasBeenSet; }
  inline void SetCreateAndUpdateLinearAction(CapabilityState value) {
    m_createAndUpdateLinearActionHasBeenSet = true;
    m_createAndUpdateLinearAction = value;
  }
  inline Capabilities& WithCreateAndUpdateLinearAction(CapabilityState value) {
    SetCreateAndUpdateLinearAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Linear actions.</p>
   */
  inline CapabilityState GetShareLinearAction() const { return m_shareLinearAction; }
  inline bool ShareLinearActionHasBeenSet() const { return m_shareLinearActionHasBeenSet; }
  inline void SetShareLinearAction(CapabilityState value) {
    m_shareLinearActionHasBeenSet = true;
    m_shareLinearAction = value;
  }
  inline Capabilities& WithShareLinearAction(CapabilityState value) {
    SetShareLinearAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Linear actions.</p>
   */
  inline CapabilityState GetUseLinearAction() const { return m_useLinearAction; }
  inline bool UseLinearActionHasBeenSet() const { return m_useLinearActionHasBeenSet; }
  inline void SetUseLinearAction(CapabilityState value) {
    m_useLinearActionHasBeenSet = true;
    m_useLinearAction = value;
  }
  inline Capabilities& WithUseLinearAction(CapabilityState value) {
    SetUseLinearAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using HuggingFace connectors.</p>
   */
  inline CapabilityState GetHuggingFaceAction() const { return m_huggingFaceAction; }
  inline bool HuggingFaceActionHasBeenSet() const { return m_huggingFaceActionHasBeenSet; }
  inline void SetHuggingFaceAction(CapabilityState value) {
    m_huggingFaceActionHasBeenSet = true;
    m_huggingFaceAction = value;
  }
  inline Capabilities& WithHuggingFaceAction(CapabilityState value) {
    SetHuggingFaceAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update HuggingFace actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateHuggingFaceAction() const { return m_createAndUpdateHuggingFaceAction; }
  inline bool CreateAndUpdateHuggingFaceActionHasBeenSet() const { return m_createAndUpdateHuggingFaceActionHasBeenSet; }
  inline void SetCreateAndUpdateHuggingFaceAction(CapabilityState value) {
    m_createAndUpdateHuggingFaceActionHasBeenSet = true;
    m_createAndUpdateHuggingFaceAction = value;
  }
  inline Capabilities& WithCreateAndUpdateHuggingFaceAction(CapabilityState value) {
    SetCreateAndUpdateHuggingFaceAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share HuggingFace actions.</p>
   */
  inline CapabilityState GetShareHuggingFaceAction() const { return m_shareHuggingFaceAction; }
  inline bool ShareHuggingFaceActionHasBeenSet() const { return m_shareHuggingFaceActionHasBeenSet; }
  inline void SetShareHuggingFaceAction(CapabilityState value) {
    m_shareHuggingFaceActionHasBeenSet = true;
    m_shareHuggingFaceAction = value;
  }
  inline Capabilities& WithShareHuggingFaceAction(CapabilityState value) {
    SetShareHuggingFaceAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use HuggingFace actions.</p>
   */
  inline CapabilityState GetUseHuggingFaceAction() const { return m_useHuggingFaceAction; }
  inline bool UseHuggingFaceActionHasBeenSet() const { return m_useHuggingFaceActionHasBeenSet; }
  inline void SetUseHuggingFaceAction(CapabilityState value) {
    m_useHuggingFaceActionHasBeenSet = true;
    m_useHuggingFaceAction = value;
  }
  inline Capabilities& WithUseHuggingFaceAction(CapabilityState value) {
    SetUseHuggingFaceAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Monday connectors.</p>
   */
  inline CapabilityState GetMondayAction() const { return m_mondayAction; }
  inline bool MondayActionHasBeenSet() const { return m_mondayActionHasBeenSet; }
  inline void SetMondayAction(CapabilityState value) {
    m_mondayActionHasBeenSet = true;
    m_mondayAction = value;
  }
  inline Capabilities& WithMondayAction(CapabilityState value) {
    SetMondayAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Monday actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateMondayAction() const { return m_createAndUpdateMondayAction; }
  inline bool CreateAndUpdateMondayActionHasBeenSet() const { return m_createAndUpdateMondayActionHasBeenSet; }
  inline void SetCreateAndUpdateMondayAction(CapabilityState value) {
    m_createAndUpdateMondayActionHasBeenSet = true;
    m_createAndUpdateMondayAction = value;
  }
  inline Capabilities& WithCreateAndUpdateMondayAction(CapabilityState value) {
    SetCreateAndUpdateMondayAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Monday actions.</p>
   */
  inline CapabilityState GetShareMondayAction() const { return m_shareMondayAction; }
  inline bool ShareMondayActionHasBeenSet() const { return m_shareMondayActionHasBeenSet; }
  inline void SetShareMondayAction(CapabilityState value) {
    m_shareMondayActionHasBeenSet = true;
    m_shareMondayAction = value;
  }
  inline Capabilities& WithShareMondayAction(CapabilityState value) {
    SetShareMondayAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Monday actions.</p>
   */
  inline CapabilityState GetUseMondayAction() const { return m_useMondayAction; }
  inline bool UseMondayActionHasBeenSet() const { return m_useMondayActionHasBeenSet; }
  inline void SetUseMondayAction(CapabilityState value) {
    m_useMondayActionHasBeenSet = true;
    m_useMondayAction = value;
  }
  inline Capabilities& WithUseMondayAction(CapabilityState value) {
    SetUseMondayAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Hubspot connectors.</p>
   */
  inline CapabilityState GetHubspotAction() const { return m_hubspotAction; }
  inline bool HubspotActionHasBeenSet() const { return m_hubspotActionHasBeenSet; }
  inline void SetHubspotAction(CapabilityState value) {
    m_hubspotActionHasBeenSet = true;
    m_hubspotAction = value;
  }
  inline Capabilities& WithHubspotAction(CapabilityState value) {
    SetHubspotAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Hubspot actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateHubspotAction() const { return m_createAndUpdateHubspotAction; }
  inline bool CreateAndUpdateHubspotActionHasBeenSet() const { return m_createAndUpdateHubspotActionHasBeenSet; }
  inline void SetCreateAndUpdateHubspotAction(CapabilityState value) {
    m_createAndUpdateHubspotActionHasBeenSet = true;
    m_createAndUpdateHubspotAction = value;
  }
  inline Capabilities& WithCreateAndUpdateHubspotAction(CapabilityState value) {
    SetCreateAndUpdateHubspotAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Hubspot actions.</p>
   */
  inline CapabilityState GetShareHubspotAction() const { return m_shareHubspotAction; }
  inline bool ShareHubspotActionHasBeenSet() const { return m_shareHubspotActionHasBeenSet; }
  inline void SetShareHubspotAction(CapabilityState value) {
    m_shareHubspotActionHasBeenSet = true;
    m_shareHubspotAction = value;
  }
  inline Capabilities& WithShareHubspotAction(CapabilityState value) {
    SetShareHubspotAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Hubspot actions.</p>
   */
  inline CapabilityState GetUseHubspotAction() const { return m_useHubspotAction; }
  inline bool UseHubspotActionHasBeenSet() const { return m_useHubspotActionHasBeenSet; }
  inline void SetUseHubspotAction(CapabilityState value) {
    m_useHubspotActionHasBeenSet = true;
    m_useHubspotAction = value;
  }
  inline Capabilities& WithUseHubspotAction(CapabilityState value) {
    SetUseHubspotAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Intercom connectors.</p>
   */
  inline CapabilityState GetIntercomAction() const { return m_intercomAction; }
  inline bool IntercomActionHasBeenSet() const { return m_intercomActionHasBeenSet; }
  inline void SetIntercomAction(CapabilityState value) {
    m_intercomActionHasBeenSet = true;
    m_intercomAction = value;
  }
  inline Capabilities& WithIntercomAction(CapabilityState value) {
    SetIntercomAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Intercom actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateIntercomAction() const { return m_createAndUpdateIntercomAction; }
  inline bool CreateAndUpdateIntercomActionHasBeenSet() const { return m_createAndUpdateIntercomActionHasBeenSet; }
  inline void SetCreateAndUpdateIntercomAction(CapabilityState value) {
    m_createAndUpdateIntercomActionHasBeenSet = true;
    m_createAndUpdateIntercomAction = value;
  }
  inline Capabilities& WithCreateAndUpdateIntercomAction(CapabilityState value) {
    SetCreateAndUpdateIntercomAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Intercom actions.</p>
   */
  inline CapabilityState GetShareIntercomAction() const { return m_shareIntercomAction; }
  inline bool ShareIntercomActionHasBeenSet() const { return m_shareIntercomActionHasBeenSet; }
  inline void SetShareIntercomAction(CapabilityState value) {
    m_shareIntercomActionHasBeenSet = true;
    m_shareIntercomAction = value;
  }
  inline Capabilities& WithShareIntercomAction(CapabilityState value) {
    SetShareIntercomAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Intercom actions.</p>
   */
  inline CapabilityState GetUseIntercomAction() const { return m_useIntercomAction; }
  inline bool UseIntercomActionHasBeenSet() const { return m_useIntercomActionHasBeenSet; }
  inline void SetUseIntercomAction(CapabilityState value) {
    m_useIntercomActionHasBeenSet = true;
    m_useIntercomAction = value;
  }
  inline Capabilities& WithUseIntercomAction(CapabilityState value) {
    SetUseIntercomAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using New Relic connectors.</p>
   */
  inline CapabilityState GetNewRelicAction() const { return m_newRelicAction; }
  inline bool NewRelicActionHasBeenSet() const { return m_newRelicActionHasBeenSet; }
  inline void SetNewRelicAction(CapabilityState value) {
    m_newRelicActionHasBeenSet = true;
    m_newRelicAction = value;
  }
  inline Capabilities& WithNewRelicAction(CapabilityState value) {
    SetNewRelicAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update New Relic actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateNewRelicAction() const { return m_createAndUpdateNewRelicAction; }
  inline bool CreateAndUpdateNewRelicActionHasBeenSet() const { return m_createAndUpdateNewRelicActionHasBeenSet; }
  inline void SetCreateAndUpdateNewRelicAction(CapabilityState value) {
    m_createAndUpdateNewRelicActionHasBeenSet = true;
    m_createAndUpdateNewRelicAction = value;
  }
  inline Capabilities& WithCreateAndUpdateNewRelicAction(CapabilityState value) {
    SetCreateAndUpdateNewRelicAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share New Relic actions.</p>
   */
  inline CapabilityState GetShareNewRelicAction() const { return m_shareNewRelicAction; }
  inline bool ShareNewRelicActionHasBeenSet() const { return m_shareNewRelicActionHasBeenSet; }
  inline void SetShareNewRelicAction(CapabilityState value) {
    m_shareNewRelicActionHasBeenSet = true;
    m_shareNewRelicAction = value;
  }
  inline Capabilities& WithShareNewRelicAction(CapabilityState value) {
    SetShareNewRelicAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use New Relic actions.</p>
   */
  inline CapabilityState GetUseNewRelicAction() const { return m_useNewRelicAction; }
  inline bool UseNewRelicActionHasBeenSet() const { return m_useNewRelicActionHasBeenSet; }
  inline void SetUseNewRelicAction(CapabilityState value) {
    m_useNewRelicActionHasBeenSet = true;
    m_useNewRelicAction = value;
  }
  inline Capabilities& WithUseNewRelicAction(CapabilityState value) {
    SetUseNewRelicAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using PagerDuty Agent connectors.</p>
   */
  inline CapabilityState GetPagerDutyAgentAction() const { return m_pagerDutyAgentAction; }
  inline bool PagerDutyAgentActionHasBeenSet() const { return m_pagerDutyAgentActionHasBeenSet; }
  inline void SetPagerDutyAgentAction(CapabilityState value) {
    m_pagerDutyAgentActionHasBeenSet = true;
    m_pagerDutyAgentAction = value;
  }
  inline Capabilities& WithPagerDutyAgentAction(CapabilityState value) {
    SetPagerDutyAgentAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update PagerDuty Agent actions.</p>
   */
  inline CapabilityState GetCreateAndUpdatePagerDutyAgentAction() const { return m_createAndUpdatePagerDutyAgentAction; }
  inline bool CreateAndUpdatePagerDutyAgentActionHasBeenSet() const { return m_createAndUpdatePagerDutyAgentActionHasBeenSet; }
  inline void SetCreateAndUpdatePagerDutyAgentAction(CapabilityState value) {
    m_createAndUpdatePagerDutyAgentActionHasBeenSet = true;
    m_createAndUpdatePagerDutyAgentAction = value;
  }
  inline Capabilities& WithCreateAndUpdatePagerDutyAgentAction(CapabilityState value) {
    SetCreateAndUpdatePagerDutyAgentAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share PagerDuty Agent actions.</p>
   */
  inline CapabilityState GetSharePagerDutyAgentAction() const { return m_sharePagerDutyAgentAction; }
  inline bool SharePagerDutyAgentActionHasBeenSet() const { return m_sharePagerDutyAgentActionHasBeenSet; }
  inline void SetSharePagerDutyAgentAction(CapabilityState value) {
    m_sharePagerDutyAgentActionHasBeenSet = true;
    m_sharePagerDutyAgentAction = value;
  }
  inline Capabilities& WithSharePagerDutyAgentAction(CapabilityState value) {
    SetSharePagerDutyAgentAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use PagerDuty Agent actions.</p>
   */
  inline CapabilityState GetUsePagerDutyAgentAction() const { return m_usePagerDutyAgentAction; }
  inline bool UsePagerDutyAgentActionHasBeenSet() const { return m_usePagerDutyAgentActionHasBeenSet; }
  inline void SetUsePagerDutyAgentAction(CapabilityState value) {
    m_usePagerDutyAgentActionHasBeenSet = true;
    m_usePagerDutyAgentAction = value;
  }
  inline Capabilities& WithUsePagerDutyAgentAction(CapabilityState value) {
    SetUsePagerDutyAgentAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Visier Agent connectors.</p>
   */
  inline CapabilityState GetVisierAgentAction() const { return m_visierAgentAction; }
  inline bool VisierAgentActionHasBeenSet() const { return m_visierAgentActionHasBeenSet; }
  inline void SetVisierAgentAction(CapabilityState value) {
    m_visierAgentActionHasBeenSet = true;
    m_visierAgentAction = value;
  }
  inline Capabilities& WithVisierAgentAction(CapabilityState value) {
    SetVisierAgentAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Visier Agent actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateVisierAgentAction() const { return m_createAndUpdateVisierAgentAction; }
  inline bool CreateAndUpdateVisierAgentActionHasBeenSet() const { return m_createAndUpdateVisierAgentActionHasBeenSet; }
  inline void SetCreateAndUpdateVisierAgentAction(CapabilityState value) {
    m_createAndUpdateVisierAgentActionHasBeenSet = true;
    m_createAndUpdateVisierAgentAction = value;
  }
  inline Capabilities& WithCreateAndUpdateVisierAgentAction(CapabilityState value) {
    SetCreateAndUpdateVisierAgentAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Visier Agent actions.</p>
   */
  inline CapabilityState GetShareVisierAgentAction() const { return m_shareVisierAgentAction; }
  inline bool ShareVisierAgentActionHasBeenSet() const { return m_shareVisierAgentActionHasBeenSet; }
  inline void SetShareVisierAgentAction(CapabilityState value) {
    m_shareVisierAgentActionHasBeenSet = true;
    m_shareVisierAgentAction = value;
  }
  inline Capabilities& WithShareVisierAgentAction(CapabilityState value) {
    SetShareVisierAgentAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Visier Agent actions.</p>
   */
  inline CapabilityState GetUseVisierAgentAction() const { return m_useVisierAgentAction; }
  inline bool UseVisierAgentActionHasBeenSet() const { return m_useVisierAgentActionHasBeenSet; }
  inline void SetUseVisierAgentAction(CapabilityState value) {
    m_useVisierAgentActionHasBeenSet = true;
    m_useVisierAgentAction = value;
  }
  inline Capabilities& WithUseVisierAgentAction(CapabilityState value) {
    SetUseVisierAgentAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Zoom connectors.</p>
   */
  inline CapabilityState GetZoomAction() const { return m_zoomAction; }
  inline bool ZoomActionHasBeenSet() const { return m_zoomActionHasBeenSet; }
  inline void SetZoomAction(CapabilityState value) {
    m_zoomActionHasBeenSet = true;
    m_zoomAction = value;
  }
  inline Capabilities& WithZoomAction(CapabilityState value) {
    SetZoomAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Zoom actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateZoomAction() const { return m_createAndUpdateZoomAction; }
  inline bool CreateAndUpdateZoomActionHasBeenSet() const { return m_createAndUpdateZoomActionHasBeenSet; }
  inline void SetCreateAndUpdateZoomAction(CapabilityState value) {
    m_createAndUpdateZoomActionHasBeenSet = true;
    m_createAndUpdateZoomAction = value;
  }
  inline Capabilities& WithCreateAndUpdateZoomAction(CapabilityState value) {
    SetCreateAndUpdateZoomAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Zoom actions.</p>
   */
  inline CapabilityState GetShareZoomAction() const { return m_shareZoomAction; }
  inline bool ShareZoomActionHasBeenSet() const { return m_shareZoomActionHasBeenSet; }
  inline void SetShareZoomAction(CapabilityState value) {
    m_shareZoomActionHasBeenSet = true;
    m_shareZoomAction = value;
  }
  inline Capabilities& WithShareZoomAction(CapabilityState value) {
    SetShareZoomAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Zoom actions.</p>
   */
  inline CapabilityState GetUseZoomAction() const { return m_useZoomAction; }
  inline bool UseZoomActionHasBeenSet() const { return m_useZoomActionHasBeenSet; }
  inline void SetUseZoomAction(CapabilityState value) {
    m_useZoomActionHasBeenSet = true;
    m_useZoomAction = value;
  }
  inline Capabilities& WithUseZoomAction(CapabilityState value) {
    SetUseZoomAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Snowflake Cortex Agent connectors.</p>
   */
  inline CapabilityState GetSnowFlakeAction() const { return m_snowFlakeAction; }
  inline bool SnowFlakeActionHasBeenSet() const { return m_snowFlakeActionHasBeenSet; }
  inline void SetSnowFlakeAction(CapabilityState value) {
    m_snowFlakeActionHasBeenSet = true;
    m_snowFlakeAction = value;
  }
  inline Capabilities& WithSnowFlakeAction(CapabilityState value) {
    SetSnowFlakeAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Snowflake Cortex Agent actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateSnowFlakeAction() const { return m_createAndUpdateSnowFlakeAction; }
  inline bool CreateAndUpdateSnowFlakeActionHasBeenSet() const { return m_createAndUpdateSnowFlakeActionHasBeenSet; }
  inline void SetCreateAndUpdateSnowFlakeAction(CapabilityState value) {
    m_createAndUpdateSnowFlakeActionHasBeenSet = true;
    m_createAndUpdateSnowFlakeAction = value;
  }
  inline Capabilities& WithCreateAndUpdateSnowFlakeAction(CapabilityState value) {
    SetCreateAndUpdateSnowFlakeAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Snowflake Cortex Agent actions.</p>
   */
  inline CapabilityState GetShareSnowFlakeAction() const { return m_shareSnowFlakeAction; }
  inline bool ShareSnowFlakeActionHasBeenSet() const { return m_shareSnowFlakeActionHasBeenSet; }
  inline void SetShareSnowFlakeAction(CapabilityState value) {
    m_shareSnowFlakeActionHasBeenSet = true;
    m_shareSnowFlakeAction = value;
  }
  inline Capabilities& WithShareSnowFlakeAction(CapabilityState value) {
    SetShareSnowFlakeAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Snowflake Cortex Agent actions.</p>
   */
  inline CapabilityState GetUseSnowFlakeAction() const { return m_useSnowFlakeAction; }
  inline bool UseSnowFlakeActionHasBeenSet() const { return m_useSnowFlakeActionHasBeenSet; }
  inline void SetUseSnowFlakeAction(CapabilityState value) {
    m_useSnowFlakeActionHasBeenSet = true;
    m_useSnowFlakeAction = value;
  }
  inline Capabilities& WithUseSnowFlakeAction(CapabilityState value) {
    SetUseSnowFlakeAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Zapier Agent connectors.</p>
   */
  inline CapabilityState GetZapierAction() const { return m_zapierAction; }
  inline bool ZapierActionHasBeenSet() const { return m_zapierActionHasBeenSet; }
  inline void SetZapierAction(CapabilityState value) {
    m_zapierActionHasBeenSet = true;
    m_zapierAction = value;
  }
  inline Capabilities& WithZapierAction(CapabilityState value) {
    SetZapierAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Zapier Agent actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateZapierAction() const { return m_createAndUpdateZapierAction; }
  inline bool CreateAndUpdateZapierActionHasBeenSet() const { return m_createAndUpdateZapierActionHasBeenSet; }
  inline void SetCreateAndUpdateZapierAction(CapabilityState value) {
    m_createAndUpdateZapierActionHasBeenSet = true;
    m_createAndUpdateZapierAction = value;
  }
  inline Capabilities& WithCreateAndUpdateZapierAction(CapabilityState value) {
    SetCreateAndUpdateZapierAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Zapier Agent actions.</p>
   */
  inline CapabilityState GetShareZapierAction() const { return m_shareZapierAction; }
  inline bool ShareZapierActionHasBeenSet() const { return m_shareZapierActionHasBeenSet; }
  inline void SetShareZapierAction(CapabilityState value) {
    m_shareZapierActionHasBeenSet = true;
    m_shareZapierAction = value;
  }
  inline Capabilities& WithShareZapierAction(CapabilityState value) {
    SetShareZapierAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Zapier Agent actions.</p>
   */
  inline CapabilityState GetUseZapierAction() const { return m_useZapierAction; }
  inline bool UseZapierActionHasBeenSet() const { return m_useZapierActionHasBeenSet; }
  inline void SetUseZapierAction(CapabilityState value) {
    m_useZapierActionHasBeenSet = true;
    m_useZapierAction = value;
  }
  inline Capabilities& WithUseZapierAction(CapabilityState value) {
    SetUseZapierAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Airtable connectors.</p>
   */
  inline CapabilityState GetAirtableAction() const { return m_airtableAction; }
  inline bool AirtableActionHasBeenSet() const { return m_airtableActionHasBeenSet; }
  inline void SetAirtableAction(CapabilityState value) {
    m_airtableActionHasBeenSet = true;
    m_airtableAction = value;
  }
  inline Capabilities& WithAirtableAction(CapabilityState value) {
    SetAirtableAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Airtable actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateAirtableAction() const { return m_createAndUpdateAirtableAction; }
  inline bool CreateAndUpdateAirtableActionHasBeenSet() const { return m_createAndUpdateAirtableActionHasBeenSet; }
  inline void SetCreateAndUpdateAirtableAction(CapabilityState value) {
    m_createAndUpdateAirtableActionHasBeenSet = true;
    m_createAndUpdateAirtableAction = value;
  }
  inline Capabilities& WithCreateAndUpdateAirtableAction(CapabilityState value) {
    SetCreateAndUpdateAirtableAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Airtable actions.</p>
   */
  inline CapabilityState GetShareAirtableAction() const { return m_shareAirtableAction; }
  inline bool ShareAirtableActionHasBeenSet() const { return m_shareAirtableActionHasBeenSet; }
  inline void SetShareAirtableAction(CapabilityState value) {
    m_shareAirtableActionHasBeenSet = true;
    m_shareAirtableAction = value;
  }
  inline Capabilities& WithShareAirtableAction(CapabilityState value) {
    SetShareAirtableAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Airtable actions.</p>
   */
  inline CapabilityState GetUseAirtableAction() const { return m_useAirtableAction; }
  inline bool UseAirtableActionHasBeenSet() const { return m_useAirtableActionHasBeenSet; }
  inline void SetUseAirtableAction(CapabilityState value) {
    m_useAirtableActionHasBeenSet = true;
    m_useAirtableAction = value;
  }
  inline Capabilities& WithUseAirtableAction(CapabilityState value) {
    SetUseAirtableAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Dropbox connectors.</p>
   */
  inline CapabilityState GetDropboxAction() const { return m_dropboxAction; }
  inline bool DropboxActionHasBeenSet() const { return m_dropboxActionHasBeenSet; }
  inline void SetDropboxAction(CapabilityState value) {
    m_dropboxActionHasBeenSet = true;
    m_dropboxAction = value;
  }
  inline Capabilities& WithDropboxAction(CapabilityState value) {
    SetDropboxAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Dropbox actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateDropboxAction() const { return m_createAndUpdateDropboxAction; }
  inline bool CreateAndUpdateDropboxActionHasBeenSet() const { return m_createAndUpdateDropboxActionHasBeenSet; }
  inline void SetCreateAndUpdateDropboxAction(CapabilityState value) {
    m_createAndUpdateDropboxActionHasBeenSet = true;
    m_createAndUpdateDropboxAction = value;
  }
  inline Capabilities& WithCreateAndUpdateDropboxAction(CapabilityState value) {
    SetCreateAndUpdateDropboxAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Dropbox actions.</p>
   */
  inline CapabilityState GetShareDropboxAction() const { return m_shareDropboxAction; }
  inline bool ShareDropboxActionHasBeenSet() const { return m_shareDropboxActionHasBeenSet; }
  inline void SetShareDropboxAction(CapabilityState value) {
    m_shareDropboxActionHasBeenSet = true;
    m_shareDropboxAction = value;
  }
  inline Capabilities& WithShareDropboxAction(CapabilityState value) {
    SetShareDropboxAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Dropbox actions.</p>
   */
  inline CapabilityState GetUseDropboxAction() const { return m_useDropboxAction; }
  inline bool UseDropboxActionHasBeenSet() const { return m_useDropboxActionHasBeenSet; }
  inline void SetUseDropboxAction(CapabilityState value) {
    m_useDropboxActionHasBeenSet = true;
    m_useDropboxAction = value;
  }
  inline Capabilities& WithUseDropboxAction(CapabilityState value) {
    SetUseDropboxAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Gmail connectors.</p>
   */
  inline CapabilityState GetGmailAction() const { return m_gmailAction; }
  inline bool GmailActionHasBeenSet() const { return m_gmailActionHasBeenSet; }
  inline void SetGmailAction(CapabilityState value) {
    m_gmailActionHasBeenSet = true;
    m_gmailAction = value;
  }
  inline Capabilities& WithGmailAction(CapabilityState value) {
    SetGmailAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Gmail actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateGmailAction() const { return m_createAndUpdateGmailAction; }
  inline bool CreateAndUpdateGmailActionHasBeenSet() const { return m_createAndUpdateGmailActionHasBeenSet; }
  inline void SetCreateAndUpdateGmailAction(CapabilityState value) {
    m_createAndUpdateGmailActionHasBeenSet = true;
    m_createAndUpdateGmailAction = value;
  }
  inline Capabilities& WithCreateAndUpdateGmailAction(CapabilityState value) {
    SetCreateAndUpdateGmailAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Gmail actions.</p>
   */
  inline CapabilityState GetShareGmailAction() const { return m_shareGmailAction; }
  inline bool ShareGmailActionHasBeenSet() const { return m_shareGmailActionHasBeenSet; }
  inline void SetShareGmailAction(CapabilityState value) {
    m_shareGmailActionHasBeenSet = true;
    m_shareGmailAction = value;
  }
  inline Capabilities& WithShareGmailAction(CapabilityState value) {
    SetShareGmailAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Gmail actions.</p>
   */
  inline CapabilityState GetUseGmailAction() const { return m_useGmailAction; }
  inline bool UseGmailActionHasBeenSet() const { return m_useGmailActionHasBeenSet; }
  inline void SetUseGmailAction(CapabilityState value) {
    m_useGmailActionHasBeenSet = true;
    m_useGmailAction = value;
  }
  inline Capabilities& WithUseGmailAction(CapabilityState value) {
    SetUseGmailAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Google Analytics connectors.</p>
   */
  inline CapabilityState GetGoogleAnalyticsAction() const { return m_googleAnalyticsAction; }
  inline bool GoogleAnalyticsActionHasBeenSet() const { return m_googleAnalyticsActionHasBeenSet; }
  inline void SetGoogleAnalyticsAction(CapabilityState value) {
    m_googleAnalyticsActionHasBeenSet = true;
    m_googleAnalyticsAction = value;
  }
  inline Capabilities& WithGoogleAnalyticsAction(CapabilityState value) {
    SetGoogleAnalyticsAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Google Analytics actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateGoogleAnalyticsAction() const { return m_createAndUpdateGoogleAnalyticsAction; }
  inline bool CreateAndUpdateGoogleAnalyticsActionHasBeenSet() const { return m_createAndUpdateGoogleAnalyticsActionHasBeenSet; }
  inline void SetCreateAndUpdateGoogleAnalyticsAction(CapabilityState value) {
    m_createAndUpdateGoogleAnalyticsActionHasBeenSet = true;
    m_createAndUpdateGoogleAnalyticsAction = value;
  }
  inline Capabilities& WithCreateAndUpdateGoogleAnalyticsAction(CapabilityState value) {
    SetCreateAndUpdateGoogleAnalyticsAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Google Analytics actions.</p>
   */
  inline CapabilityState GetShareGoogleAnalyticsAction() const { return m_shareGoogleAnalyticsAction; }
  inline bool ShareGoogleAnalyticsActionHasBeenSet() const { return m_shareGoogleAnalyticsActionHasBeenSet; }
  inline void SetShareGoogleAnalyticsAction(CapabilityState value) {
    m_shareGoogleAnalyticsActionHasBeenSet = true;
    m_shareGoogleAnalyticsAction = value;
  }
  inline Capabilities& WithShareGoogleAnalyticsAction(CapabilityState value) {
    SetShareGoogleAnalyticsAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Google Analytics actions.</p>
   */
  inline CapabilityState GetUseGoogleAnalyticsAction() const { return m_useGoogleAnalyticsAction; }
  inline bool UseGoogleAnalyticsActionHasBeenSet() const { return m_useGoogleAnalyticsActionHasBeenSet; }
  inline void SetUseGoogleAnalyticsAction(CapabilityState value) {
    m_useGoogleAnalyticsActionHasBeenSet = true;
    m_useGoogleAnalyticsAction = value;
  }
  inline Capabilities& WithUseGoogleAnalyticsAction(CapabilityState value) {
    SetUseGoogleAnalyticsAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Google Docs connectors.</p>
   */
  inline CapabilityState GetGoogleDocsAction() const { return m_googleDocsAction; }
  inline bool GoogleDocsActionHasBeenSet() const { return m_googleDocsActionHasBeenSet; }
  inline void SetGoogleDocsAction(CapabilityState value) {
    m_googleDocsActionHasBeenSet = true;
    m_googleDocsAction = value;
  }
  inline Capabilities& WithGoogleDocsAction(CapabilityState value) {
    SetGoogleDocsAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Google Docs actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateGoogleDocsAction() const { return m_createAndUpdateGoogleDocsAction; }
  inline bool CreateAndUpdateGoogleDocsActionHasBeenSet() const { return m_createAndUpdateGoogleDocsActionHasBeenSet; }
  inline void SetCreateAndUpdateGoogleDocsAction(CapabilityState value) {
    m_createAndUpdateGoogleDocsActionHasBeenSet = true;
    m_createAndUpdateGoogleDocsAction = value;
  }
  inline Capabilities& WithCreateAndUpdateGoogleDocsAction(CapabilityState value) {
    SetCreateAndUpdateGoogleDocsAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Google Docs actions.</p>
   */
  inline CapabilityState GetShareGoogleDocsAction() const { return m_shareGoogleDocsAction; }
  inline bool ShareGoogleDocsActionHasBeenSet() const { return m_shareGoogleDocsActionHasBeenSet; }
  inline void SetShareGoogleDocsAction(CapabilityState value) {
    m_shareGoogleDocsActionHasBeenSet = true;
    m_shareGoogleDocsAction = value;
  }
  inline Capabilities& WithShareGoogleDocsAction(CapabilityState value) {
    SetShareGoogleDocsAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Google Docs actions.</p>
   */
  inline CapabilityState GetUseGoogleDocsAction() const { return m_useGoogleDocsAction; }
  inline bool UseGoogleDocsActionHasBeenSet() const { return m_useGoogleDocsActionHasBeenSet; }
  inline void SetUseGoogleDocsAction(CapabilityState value) {
    m_useGoogleDocsActionHasBeenSet = true;
    m_useGoogleDocsAction = value;
  }
  inline Capabilities& WithUseGoogleDocsAction(CapabilityState value) {
    SetUseGoogleDocsAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Google Drive connectors.</p>
   */
  inline CapabilityState GetGoogleDriveAction() const { return m_googleDriveAction; }
  inline bool GoogleDriveActionHasBeenSet() const { return m_googleDriveActionHasBeenSet; }
  inline void SetGoogleDriveAction(CapabilityState value) {
    m_googleDriveActionHasBeenSet = true;
    m_googleDriveAction = value;
  }
  inline Capabilities& WithGoogleDriveAction(CapabilityState value) {
    SetGoogleDriveAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Google Drive actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateGoogleDriveAction() const { return m_createAndUpdateGoogleDriveAction; }
  inline bool CreateAndUpdateGoogleDriveActionHasBeenSet() const { return m_createAndUpdateGoogleDriveActionHasBeenSet; }
  inline void SetCreateAndUpdateGoogleDriveAction(CapabilityState value) {
    m_createAndUpdateGoogleDriveActionHasBeenSet = true;
    m_createAndUpdateGoogleDriveAction = value;
  }
  inline Capabilities& WithCreateAndUpdateGoogleDriveAction(CapabilityState value) {
    SetCreateAndUpdateGoogleDriveAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Google Drive actions.</p>
   */
  inline CapabilityState GetShareGoogleDriveAction() const { return m_shareGoogleDriveAction; }
  inline bool ShareGoogleDriveActionHasBeenSet() const { return m_shareGoogleDriveActionHasBeenSet; }
  inline void SetShareGoogleDriveAction(CapabilityState value) {
    m_shareGoogleDriveActionHasBeenSet = true;
    m_shareGoogleDriveAction = value;
  }
  inline Capabilities& WithShareGoogleDriveAction(CapabilityState value) {
    SetShareGoogleDriveAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Google Drive actions.</p>
   */
  inline CapabilityState GetUseGoogleDriveAction() const { return m_useGoogleDriveAction; }
  inline bool UseGoogleDriveActionHasBeenSet() const { return m_useGoogleDriveActionHasBeenSet; }
  inline void SetUseGoogleDriveAction(CapabilityState value) {
    m_useGoogleDriveActionHasBeenSet = true;
    m_useGoogleDriveAction = value;
  }
  inline Capabilities& WithUseGoogleDriveAction(CapabilityState value) {
    SetUseGoogleDriveAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Google Meet connectors.</p>
   */
  inline CapabilityState GetGoogleMeetAction() const { return m_googleMeetAction; }
  inline bool GoogleMeetActionHasBeenSet() const { return m_googleMeetActionHasBeenSet; }
  inline void SetGoogleMeetAction(CapabilityState value) {
    m_googleMeetActionHasBeenSet = true;
    m_googleMeetAction = value;
  }
  inline Capabilities& WithGoogleMeetAction(CapabilityState value) {
    SetGoogleMeetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Google Meet actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateGoogleMeetAction() const { return m_createAndUpdateGoogleMeetAction; }
  inline bool CreateAndUpdateGoogleMeetActionHasBeenSet() const { return m_createAndUpdateGoogleMeetActionHasBeenSet; }
  inline void SetCreateAndUpdateGoogleMeetAction(CapabilityState value) {
    m_createAndUpdateGoogleMeetActionHasBeenSet = true;
    m_createAndUpdateGoogleMeetAction = value;
  }
  inline Capabilities& WithCreateAndUpdateGoogleMeetAction(CapabilityState value) {
    SetCreateAndUpdateGoogleMeetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Google Meet actions.</p>
   */
  inline CapabilityState GetShareGoogleMeetAction() const { return m_shareGoogleMeetAction; }
  inline bool ShareGoogleMeetActionHasBeenSet() const { return m_shareGoogleMeetActionHasBeenSet; }
  inline void SetShareGoogleMeetAction(CapabilityState value) {
    m_shareGoogleMeetActionHasBeenSet = true;
    m_shareGoogleMeetAction = value;
  }
  inline Capabilities& WithShareGoogleMeetAction(CapabilityState value) {
    SetShareGoogleMeetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Google Meet actions.</p>
   */
  inline CapabilityState GetUseGoogleMeetAction() const { return m_useGoogleMeetAction; }
  inline bool UseGoogleMeetActionHasBeenSet() const { return m_useGoogleMeetActionHasBeenSet; }
  inline void SetUseGoogleMeetAction(CapabilityState value) {
    m_useGoogleMeetActionHasBeenSet = true;
    m_useGoogleMeetAction = value;
  }
  inline Capabilities& WithUseGoogleMeetAction(CapabilityState value) {
    SetUseGoogleMeetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Google Sheets connectors.</p>
   */
  inline CapabilityState GetGoogleSheetsAction() const { return m_googleSheetsAction; }
  inline bool GoogleSheetsActionHasBeenSet() const { return m_googleSheetsActionHasBeenSet; }
  inline void SetGoogleSheetsAction(CapabilityState value) {
    m_googleSheetsActionHasBeenSet = true;
    m_googleSheetsAction = value;
  }
  inline Capabilities& WithGoogleSheetsAction(CapabilityState value) {
    SetGoogleSheetsAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Google Sheets actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateGoogleSheetsAction() const { return m_createAndUpdateGoogleSheetsAction; }
  inline bool CreateAndUpdateGoogleSheetsActionHasBeenSet() const { return m_createAndUpdateGoogleSheetsActionHasBeenSet; }
  inline void SetCreateAndUpdateGoogleSheetsAction(CapabilityState value) {
    m_createAndUpdateGoogleSheetsActionHasBeenSet = true;
    m_createAndUpdateGoogleSheetsAction = value;
  }
  inline Capabilities& WithCreateAndUpdateGoogleSheetsAction(CapabilityState value) {
    SetCreateAndUpdateGoogleSheetsAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Google Sheets actions.</p>
   */
  inline CapabilityState GetShareGoogleSheetsAction() const { return m_shareGoogleSheetsAction; }
  inline bool ShareGoogleSheetsActionHasBeenSet() const { return m_shareGoogleSheetsActionHasBeenSet; }
  inline void SetShareGoogleSheetsAction(CapabilityState value) {
    m_shareGoogleSheetsActionHasBeenSet = true;
    m_shareGoogleSheetsAction = value;
  }
  inline Capabilities& WithShareGoogleSheetsAction(CapabilityState value) {
    SetShareGoogleSheetsAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Google Sheets actions.</p>
   */
  inline CapabilityState GetUseGoogleSheetsAction() const { return m_useGoogleSheetsAction; }
  inline bool UseGoogleSheetsActionHasBeenSet() const { return m_useGoogleSheetsActionHasBeenSet; }
  inline void SetUseGoogleSheetsAction(CapabilityState value) {
    m_useGoogleSheetsActionHasBeenSet = true;
    m_useGoogleSheetsAction = value;
  }
  inline Capabilities& WithUseGoogleSheetsAction(CapabilityState value) {
    SetUseGoogleSheetsAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Google Slides connectors.</p>
   */
  inline CapabilityState GetGoogleSlidesAction() const { return m_googleSlidesAction; }
  inline bool GoogleSlidesActionHasBeenSet() const { return m_googleSlidesActionHasBeenSet; }
  inline void SetGoogleSlidesAction(CapabilityState value) {
    m_googleSlidesActionHasBeenSet = true;
    m_googleSlidesAction = value;
  }
  inline Capabilities& WithGoogleSlidesAction(CapabilityState value) {
    SetGoogleSlidesAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Google Slides actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateGoogleSlidesAction() const { return m_createAndUpdateGoogleSlidesAction; }
  inline bool CreateAndUpdateGoogleSlidesActionHasBeenSet() const { return m_createAndUpdateGoogleSlidesActionHasBeenSet; }
  inline void SetCreateAndUpdateGoogleSlidesAction(CapabilityState value) {
    m_createAndUpdateGoogleSlidesActionHasBeenSet = true;
    m_createAndUpdateGoogleSlidesAction = value;
  }
  inline Capabilities& WithCreateAndUpdateGoogleSlidesAction(CapabilityState value) {
    SetCreateAndUpdateGoogleSlidesAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Google Slides actions.</p>
   */
  inline CapabilityState GetShareGoogleSlidesAction() const { return m_shareGoogleSlidesAction; }
  inline bool ShareGoogleSlidesActionHasBeenSet() const { return m_shareGoogleSlidesActionHasBeenSet; }
  inline void SetShareGoogleSlidesAction(CapabilityState value) {
    m_shareGoogleSlidesActionHasBeenSet = true;
    m_shareGoogleSlidesAction = value;
  }
  inline Capabilities& WithShareGoogleSlidesAction(CapabilityState value) {
    SetShareGoogleSlidesAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Google Slides actions.</p>
   */
  inline CapabilityState GetUseGoogleSlidesAction() const { return m_useGoogleSlidesAction; }
  inline bool UseGoogleSlidesActionHasBeenSet() const { return m_useGoogleSlidesActionHasBeenSet; }
  inline void SetUseGoogleSlidesAction(CapabilityState value) {
    m_useGoogleSlidesActionHasBeenSet = true;
    m_useGoogleSlidesAction = value;
  }
  inline Capabilities& WithUseGoogleSlidesAction(CapabilityState value) {
    SetUseGoogleSlidesAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using QuickBooks connectors.</p>
   */
  inline CapabilityState GetQuickBooksAction() const { return m_quickBooksAction; }
  inline bool QuickBooksActionHasBeenSet() const { return m_quickBooksActionHasBeenSet; }
  inline void SetQuickBooksAction(CapabilityState value) {
    m_quickBooksActionHasBeenSet = true;
    m_quickBooksAction = value;
  }
  inline Capabilities& WithQuickBooksAction(CapabilityState value) {
    SetQuickBooksAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update QuickBooks actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateQuickBooksAction() const { return m_createAndUpdateQuickBooksAction; }
  inline bool CreateAndUpdateQuickBooksActionHasBeenSet() const { return m_createAndUpdateQuickBooksActionHasBeenSet; }
  inline void SetCreateAndUpdateQuickBooksAction(CapabilityState value) {
    m_createAndUpdateQuickBooksActionHasBeenSet = true;
    m_createAndUpdateQuickBooksAction = value;
  }
  inline Capabilities& WithCreateAndUpdateQuickBooksAction(CapabilityState value) {
    SetCreateAndUpdateQuickBooksAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share QuickBooks actions.</p>
   */
  inline CapabilityState GetShareQuickBooksAction() const { return m_shareQuickBooksAction; }
  inline bool ShareQuickBooksActionHasBeenSet() const { return m_shareQuickBooksActionHasBeenSet; }
  inline void SetShareQuickBooksAction(CapabilityState value) {
    m_shareQuickBooksActionHasBeenSet = true;
    m_shareQuickBooksAction = value;
  }
  inline Capabilities& WithShareQuickBooksAction(CapabilityState value) {
    SetShareQuickBooksAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use QuickBooks actions.</p>
   */
  inline CapabilityState GetUseQuickBooksAction() const { return m_useQuickBooksAction; }
  inline bool UseQuickBooksActionHasBeenSet() const { return m_useQuickBooksActionHasBeenSet; }
  inline void SetUseQuickBooksAction(CapabilityState value) {
    m_useQuickBooksActionHasBeenSet = true;
    m_useQuickBooksAction = value;
  }
  inline Capabilities& WithUseQuickBooksAction(CapabilityState value) {
    SetUseQuickBooksAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Figma connectors.</p>
   */
  inline CapabilityState GetFigmaAction() const { return m_figmaAction; }
  inline bool FigmaActionHasBeenSet() const { return m_figmaActionHasBeenSet; }
  inline void SetFigmaAction(CapabilityState value) {
    m_figmaActionHasBeenSet = true;
    m_figmaAction = value;
  }
  inline Capabilities& WithFigmaAction(CapabilityState value) {
    SetFigmaAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Figma actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateFigmaAction() const { return m_createAndUpdateFigmaAction; }
  inline bool CreateAndUpdateFigmaActionHasBeenSet() const { return m_createAndUpdateFigmaActionHasBeenSet; }
  inline void SetCreateAndUpdateFigmaAction(CapabilityState value) {
    m_createAndUpdateFigmaActionHasBeenSet = true;
    m_createAndUpdateFigmaAction = value;
  }
  inline Capabilities& WithCreateAndUpdateFigmaAction(CapabilityState value) {
    SetCreateAndUpdateFigmaAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Figma actions.</p>
   */
  inline CapabilityState GetShareFigmaAction() const { return m_shareFigmaAction; }
  inline bool ShareFigmaActionHasBeenSet() const { return m_shareFigmaActionHasBeenSet; }
  inline void SetShareFigmaAction(CapabilityState value) {
    m_shareFigmaActionHasBeenSet = true;
    m_shareFigmaAction = value;
  }
  inline Capabilities& WithShareFigmaAction(CapabilityState value) {
    SetShareFigmaAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Figma actions.</p>
   */
  inline CapabilityState GetUseFigmaAction() const { return m_useFigmaAction; }
  inline bool UseFigmaActionHasBeenSet() const { return m_useFigmaActionHasBeenSet; }
  inline void SetUseFigmaAction(CapabilityState value) {
    m_useFigmaActionHasBeenSet = true;
    m_useFigmaAction = value;
  }
  inline Capabilities& WithUseFigmaAction(CapabilityState value) {
    SetUseFigmaAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using WhatsApp connectors.</p>
   */
  inline CapabilityState GetWhatsAppAction() const { return m_whatsAppAction; }
  inline bool WhatsAppActionHasBeenSet() const { return m_whatsAppActionHasBeenSet; }
  inline void SetWhatsAppAction(CapabilityState value) {
    m_whatsAppActionHasBeenSet = true;
    m_whatsAppAction = value;
  }
  inline Capabilities& WithWhatsAppAction(CapabilityState value) {
    SetWhatsAppAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update WhatsApp actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateWhatsAppAction() const { return m_createAndUpdateWhatsAppAction; }
  inline bool CreateAndUpdateWhatsAppActionHasBeenSet() const { return m_createAndUpdateWhatsAppActionHasBeenSet; }
  inline void SetCreateAndUpdateWhatsAppAction(CapabilityState value) {
    m_createAndUpdateWhatsAppActionHasBeenSet = true;
    m_createAndUpdateWhatsAppAction = value;
  }
  inline Capabilities& WithCreateAndUpdateWhatsAppAction(CapabilityState value) {
    SetCreateAndUpdateWhatsAppAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share WhatsApp actions.</p>
   */
  inline CapabilityState GetShareWhatsAppAction() const { return m_shareWhatsAppAction; }
  inline bool ShareWhatsAppActionHasBeenSet() const { return m_shareWhatsAppActionHasBeenSet; }
  inline void SetShareWhatsAppAction(CapabilityState value) {
    m_shareWhatsAppActionHasBeenSet = true;
    m_shareWhatsAppAction = value;
  }
  inline Capabilities& WithShareWhatsAppAction(CapabilityState value) {
    SetShareWhatsAppAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use WhatsApp actions.</p>
   */
  inline CapabilityState GetUseWhatsAppAction() const { return m_useWhatsAppAction; }
  inline bool UseWhatsAppActionHasBeenSet() const { return m_useWhatsAppActionHasBeenSet; }
  inline void SetUseWhatsAppAction(CapabilityState value) {
    m_useWhatsAppActionHasBeenSet = true;
    m_useWhatsAppAction = value;
  }
  inline Capabilities& WithUseWhatsAppAction(CapabilityState value) {
    SetUseWhatsAppAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Google Chat connectors.</p>
   */
  inline CapabilityState GetGoogleChatAction() const { return m_googleChatAction; }
  inline bool GoogleChatActionHasBeenSet() const { return m_googleChatActionHasBeenSet; }
  inline void SetGoogleChatAction(CapabilityState value) {
    m_googleChatActionHasBeenSet = true;
    m_googleChatAction = value;
  }
  inline Capabilities& WithGoogleChatAction(CapabilityState value) {
    SetGoogleChatAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Google Chat actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateGoogleChatAction() const { return m_createAndUpdateGoogleChatAction; }
  inline bool CreateAndUpdateGoogleChatActionHasBeenSet() const { return m_createAndUpdateGoogleChatActionHasBeenSet; }
  inline void SetCreateAndUpdateGoogleChatAction(CapabilityState value) {
    m_createAndUpdateGoogleChatActionHasBeenSet = true;
    m_createAndUpdateGoogleChatAction = value;
  }
  inline Capabilities& WithCreateAndUpdateGoogleChatAction(CapabilityState value) {
    SetCreateAndUpdateGoogleChatAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Google Chat actions.</p>
   */
  inline CapabilityState GetShareGoogleChatAction() const { return m_shareGoogleChatAction; }
  inline bool ShareGoogleChatActionHasBeenSet() const { return m_shareGoogleChatActionHasBeenSet; }
  inline void SetShareGoogleChatAction(CapabilityState value) {
    m_shareGoogleChatActionHasBeenSet = true;
    m_shareGoogleChatAction = value;
  }
  inline Capabilities& WithShareGoogleChatAction(CapabilityState value) {
    SetShareGoogleChatAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Google Chat actions.</p>
   */
  inline CapabilityState GetUseGoogleChatAction() const { return m_useGoogleChatAction; }
  inline bool UseGoogleChatActionHasBeenSet() const { return m_useGoogleChatActionHasBeenSet; }
  inline void SetUseGoogleChatAction(CapabilityState value) {
    m_useGoogleChatActionHasBeenSet = true;
    m_useGoogleChatAction = value;
  }
  inline Capabilities& WithUseGoogleChatAction(CapabilityState value) {
    SetUseGoogleChatAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Microsoft OneNote connectors.</p>
   */
  inline CapabilityState GetOneNoteAction() const { return m_oneNoteAction; }
  inline bool OneNoteActionHasBeenSet() const { return m_oneNoteActionHasBeenSet; }
  inline void SetOneNoteAction(CapabilityState value) {
    m_oneNoteActionHasBeenSet = true;
    m_oneNoteAction = value;
  }
  inline Capabilities& WithOneNoteAction(CapabilityState value) {
    SetOneNoteAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Microsoft OneNote actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateOneNoteAction() const { return m_createAndUpdateOneNoteAction; }
  inline bool CreateAndUpdateOneNoteActionHasBeenSet() const { return m_createAndUpdateOneNoteActionHasBeenSet; }
  inline void SetCreateAndUpdateOneNoteAction(CapabilityState value) {
    m_createAndUpdateOneNoteActionHasBeenSet = true;
    m_createAndUpdateOneNoteAction = value;
  }
  inline Capabilities& WithCreateAndUpdateOneNoteAction(CapabilityState value) {
    SetCreateAndUpdateOneNoteAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Microsoft OneNote actions.</p>
   */
  inline CapabilityState GetShareOneNoteAction() const { return m_shareOneNoteAction; }
  inline bool ShareOneNoteActionHasBeenSet() const { return m_shareOneNoteActionHasBeenSet; }
  inline void SetShareOneNoteAction(CapabilityState value) {
    m_shareOneNoteActionHasBeenSet = true;
    m_shareOneNoteAction = value;
  }
  inline Capabilities& WithShareOneNoteAction(CapabilityState value) {
    SetShareOneNoteAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Microsoft OneNote actions.</p>
   */
  inline CapabilityState GetUseOneNoteAction() const { return m_useOneNoteAction; }
  inline bool UseOneNoteActionHasBeenSet() const { return m_useOneNoteActionHasBeenSet; }
  inline void SetUseOneNoteAction(CapabilityState value) {
    m_useOneNoteActionHasBeenSet = true;
    m_useOneNoteAction = value;
  }
  inline Capabilities& WithUseOneNoteAction(CapabilityState value) {
    SetUseOneNoteAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Shopify connectors.</p>
   */
  inline CapabilityState GetShopifyAction() const { return m_shopifyAction; }
  inline bool ShopifyActionHasBeenSet() const { return m_shopifyActionHasBeenSet; }
  inline void SetShopifyAction(CapabilityState value) {
    m_shopifyActionHasBeenSet = true;
    m_shopifyAction = value;
  }
  inline Capabilities& WithShopifyAction(CapabilityState value) {
    SetShopifyAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Shopify actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateShopifyAction() const { return m_createAndUpdateShopifyAction; }
  inline bool CreateAndUpdateShopifyActionHasBeenSet() const { return m_createAndUpdateShopifyActionHasBeenSet; }
  inline void SetCreateAndUpdateShopifyAction(CapabilityState value) {
    m_createAndUpdateShopifyActionHasBeenSet = true;
    m_createAndUpdateShopifyAction = value;
  }
  inline Capabilities& WithCreateAndUpdateShopifyAction(CapabilityState value) {
    SetCreateAndUpdateShopifyAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Shopify actions.</p>
   */
  inline CapabilityState GetShareShopifyAction() const { return m_shareShopifyAction; }
  inline bool ShareShopifyActionHasBeenSet() const { return m_shareShopifyActionHasBeenSet; }
  inline void SetShareShopifyAction(CapabilityState value) {
    m_shareShopifyActionHasBeenSet = true;
    m_shareShopifyAction = value;
  }
  inline Capabilities& WithShareShopifyAction(CapabilityState value) {
    SetShareShopifyAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Shopify actions.</p>
   */
  inline CapabilityState GetUseShopifyAction() const { return m_useShopifyAction; }
  inline bool UseShopifyActionHasBeenSet() const { return m_useShopifyActionHasBeenSet; }
  inline void SetUseShopifyAction(CapabilityState value) {
    m_useShopifyActionHasBeenSet = true;
    m_useShopifyAction = value;
  }
  inline Capabilities& WithUseShopifyAction(CapabilityState value) {
    SetUseShopifyAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Adobe Marketing Agent connectors.</p>
   */
  inline CapabilityState GetAdobeAction() const { return m_adobeAction; }
  inline bool AdobeActionHasBeenSet() const { return m_adobeActionHasBeenSet; }
  inline void SetAdobeAction(CapabilityState value) {
    m_adobeActionHasBeenSet = true;
    m_adobeAction = value;
  }
  inline Capabilities& WithAdobeAction(CapabilityState value) {
    SetAdobeAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Adobe Marketing Agent actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateAdobeAction() const { return m_createAndUpdateAdobeAction; }
  inline bool CreateAndUpdateAdobeActionHasBeenSet() const { return m_createAndUpdateAdobeActionHasBeenSet; }
  inline void SetCreateAndUpdateAdobeAction(CapabilityState value) {
    m_createAndUpdateAdobeActionHasBeenSet = true;
    m_createAndUpdateAdobeAction = value;
  }
  inline Capabilities& WithCreateAndUpdateAdobeAction(CapabilityState value) {
    SetCreateAndUpdateAdobeAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Adobe Marketing Agent actions.</p>
   */
  inline CapabilityState GetShareAdobeAction() const { return m_shareAdobeAction; }
  inline bool ShareAdobeActionHasBeenSet() const { return m_shareAdobeActionHasBeenSet; }
  inline void SetShareAdobeAction(CapabilityState value) {
    m_shareAdobeActionHasBeenSet = true;
    m_shareAdobeAction = value;
  }
  inline Capabilities& WithShareAdobeAction(CapabilityState value) {
    SetShareAdobeAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Adobe Marketing Agent actions.</p>
   */
  inline CapabilityState GetUseAdobeAction() const { return m_useAdobeAction; }
  inline bool UseAdobeActionHasBeenSet() const { return m_useAdobeActionHasBeenSet; }
  inline void SetUseAdobeAction(CapabilityState value) {
    m_useAdobeActionHasBeenSet = true;
    m_useAdobeAction = value;
  }
  inline Capabilities& WithUseAdobeAction(CapabilityState value) {
    SetUseAdobeAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Cisco Webex Video Messaging Agent
   * connectors.</p>
   */
  inline CapabilityState GetCiscoWebexVidcastAction() const { return m_ciscoWebexVidcastAction; }
  inline bool CiscoWebexVidcastActionHasBeenSet() const { return m_ciscoWebexVidcastActionHasBeenSet; }
  inline void SetCiscoWebexVidcastAction(CapabilityState value) {
    m_ciscoWebexVidcastActionHasBeenSet = true;
    m_ciscoWebexVidcastAction = value;
  }
  inline Capabilities& WithCiscoWebexVidcastAction(CapabilityState value) {
    SetCiscoWebexVidcastAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Cisco Webex Video Messaging Agent
   * actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateCiscoWebexVidcastAction() const { return m_createAndUpdateCiscoWebexVidcastAction; }
  inline bool CreateAndUpdateCiscoWebexVidcastActionHasBeenSet() const { return m_createAndUpdateCiscoWebexVidcastActionHasBeenSet; }
  inline void SetCreateAndUpdateCiscoWebexVidcastAction(CapabilityState value) {
    m_createAndUpdateCiscoWebexVidcastActionHasBeenSet = true;
    m_createAndUpdateCiscoWebexVidcastAction = value;
  }
  inline Capabilities& WithCreateAndUpdateCiscoWebexVidcastAction(CapabilityState value) {
    SetCreateAndUpdateCiscoWebexVidcastAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Cisco Webex Video Messaging Agent actions.</p>
   */
  inline CapabilityState GetShareCiscoWebexVidcastAction() const { return m_shareCiscoWebexVidcastAction; }
  inline bool ShareCiscoWebexVidcastActionHasBeenSet() const { return m_shareCiscoWebexVidcastActionHasBeenSet; }
  inline void SetShareCiscoWebexVidcastAction(CapabilityState value) {
    m_shareCiscoWebexVidcastActionHasBeenSet = true;
    m_shareCiscoWebexVidcastAction = value;
  }
  inline Capabilities& WithShareCiscoWebexVidcastAction(CapabilityState value) {
    SetShareCiscoWebexVidcastAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Cisco Webex Video Messaging Agent actions.</p>
   */
  inline CapabilityState GetUseCiscoWebexVidcastAction() const { return m_useCiscoWebexVidcastAction; }
  inline bool UseCiscoWebexVidcastActionHasBeenSet() const { return m_useCiscoWebexVidcastActionHasBeenSet; }
  inline void SetUseCiscoWebexVidcastAction(CapabilityState value) {
    m_useCiscoWebexVidcastActionHasBeenSet = true;
    m_useCiscoWebexVidcastAction = value;
  }
  inline Capabilities& WithUseCiscoWebexVidcastAction(CapabilityState value) {
    SetUseCiscoWebexVidcastAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Cisco Webex Meetings connectors.</p>
   */
  inline CapabilityState GetCiscoWebexMeetingsAction() const { return m_ciscoWebexMeetingsAction; }
  inline bool CiscoWebexMeetingsActionHasBeenSet() const { return m_ciscoWebexMeetingsActionHasBeenSet; }
  inline void SetCiscoWebexMeetingsAction(CapabilityState value) {
    m_ciscoWebexMeetingsActionHasBeenSet = true;
    m_ciscoWebexMeetingsAction = value;
  }
  inline Capabilities& WithCiscoWebexMeetingsAction(CapabilityState value) {
    SetCiscoWebexMeetingsAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Cisco Webex Meetings actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateCiscoWebexMeetingsAction() const { return m_createAndUpdateCiscoWebexMeetingsAction; }
  inline bool CreateAndUpdateCiscoWebexMeetingsActionHasBeenSet() const { return m_createAndUpdateCiscoWebexMeetingsActionHasBeenSet; }
  inline void SetCreateAndUpdateCiscoWebexMeetingsAction(CapabilityState value) {
    m_createAndUpdateCiscoWebexMeetingsActionHasBeenSet = true;
    m_createAndUpdateCiscoWebexMeetingsAction = value;
  }
  inline Capabilities& WithCreateAndUpdateCiscoWebexMeetingsAction(CapabilityState value) {
    SetCreateAndUpdateCiscoWebexMeetingsAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Cisco Webex Meetings actions.</p>
   */
  inline CapabilityState GetShareCiscoWebexMeetingsAction() const { return m_shareCiscoWebexMeetingsAction; }
  inline bool ShareCiscoWebexMeetingsActionHasBeenSet() const { return m_shareCiscoWebexMeetingsActionHasBeenSet; }
  inline void SetShareCiscoWebexMeetingsAction(CapabilityState value) {
    m_shareCiscoWebexMeetingsActionHasBeenSet = true;
    m_shareCiscoWebexMeetingsAction = value;
  }
  inline Capabilities& WithShareCiscoWebexMeetingsAction(CapabilityState value) {
    SetShareCiscoWebexMeetingsAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Cisco Webex Meetings actions.</p>
   */
  inline CapabilityState GetUseCiscoWebexMeetingsAction() const { return m_useCiscoWebexMeetingsAction; }
  inline bool UseCiscoWebexMeetingsActionHasBeenSet() const { return m_useCiscoWebexMeetingsActionHasBeenSet; }
  inline void SetUseCiscoWebexMeetingsAction(CapabilityState value) {
    m_useCiscoWebexMeetingsActionHasBeenSet = true;
    m_useCiscoWebexMeetingsAction = value;
  }
  inline Capabilities& WithUseCiscoWebexMeetingsAction(CapabilityState value) {
    SetUseCiscoWebexMeetingsAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Dun and Bradstreet connectors.</p>
   */
  inline CapabilityState GetDunAndBradstreetAction() const { return m_dunAndBradstreetAction; }
  inline bool DunAndBradstreetActionHasBeenSet() const { return m_dunAndBradstreetActionHasBeenSet; }
  inline void SetDunAndBradstreetAction(CapabilityState value) {
    m_dunAndBradstreetActionHasBeenSet = true;
    m_dunAndBradstreetAction = value;
  }
  inline Capabilities& WithDunAndBradstreetAction(CapabilityState value) {
    SetDunAndBradstreetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Dun and Bradstreet actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateDunAndBradstreetAction() const { return m_createAndUpdateDunAndBradstreetAction; }
  inline bool CreateAndUpdateDunAndBradstreetActionHasBeenSet() const { return m_createAndUpdateDunAndBradstreetActionHasBeenSet; }
  inline void SetCreateAndUpdateDunAndBradstreetAction(CapabilityState value) {
    m_createAndUpdateDunAndBradstreetActionHasBeenSet = true;
    m_createAndUpdateDunAndBradstreetAction = value;
  }
  inline Capabilities& WithCreateAndUpdateDunAndBradstreetAction(CapabilityState value) {
    SetCreateAndUpdateDunAndBradstreetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Dun and Bradstreet actions.</p>
   */
  inline CapabilityState GetShareDunAndBradstreetAction() const { return m_shareDunAndBradstreetAction; }
  inline bool ShareDunAndBradstreetActionHasBeenSet() const { return m_shareDunAndBradstreetActionHasBeenSet; }
  inline void SetShareDunAndBradstreetAction(CapabilityState value) {
    m_shareDunAndBradstreetActionHasBeenSet = true;
    m_shareDunAndBradstreetAction = value;
  }
  inline Capabilities& WithShareDunAndBradstreetAction(CapabilityState value) {
    SetShareDunAndBradstreetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Dun and Bradstreet actions.</p>
   */
  inline CapabilityState GetUseDunAndBradstreetAction() const { return m_useDunAndBradstreetAction; }
  inline bool UseDunAndBradstreetActionHasBeenSet() const { return m_useDunAndBradstreetActionHasBeenSet; }
  inline void SetUseDunAndBradstreetAction(CapabilityState value) {
    m_useDunAndBradstreetActionHasBeenSet = true;
    m_useDunAndBradstreetAction = value;
  }
  inline Capabilities& WithUseDunAndBradstreetAction(CapabilityState value) {
    SetUseDunAndBradstreetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using HG Insights Agent connectors.</p>
   */
  inline CapabilityState GetHGInsightsAction() const { return m_hGInsightsAction; }
  inline bool HGInsightsActionHasBeenSet() const { return m_hGInsightsActionHasBeenSet; }
  inline void SetHGInsightsAction(CapabilityState value) {
    m_hGInsightsActionHasBeenSet = true;
    m_hGInsightsAction = value;
  }
  inline Capabilities& WithHGInsightsAction(CapabilityState value) {
    SetHGInsightsAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update HG Insights Agent actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateHGInsightsAction() const { return m_createAndUpdateHGInsightsAction; }
  inline bool CreateAndUpdateHGInsightsActionHasBeenSet() const { return m_createAndUpdateHGInsightsActionHasBeenSet; }
  inline void SetCreateAndUpdateHGInsightsAction(CapabilityState value) {
    m_createAndUpdateHGInsightsActionHasBeenSet = true;
    m_createAndUpdateHGInsightsAction = value;
  }
  inline Capabilities& WithCreateAndUpdateHGInsightsAction(CapabilityState value) {
    SetCreateAndUpdateHGInsightsAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share HG Insights Agent actions.</p>
   */
  inline CapabilityState GetShareHGInsightsAction() const { return m_shareHGInsightsAction; }
  inline bool ShareHGInsightsActionHasBeenSet() const { return m_shareHGInsightsActionHasBeenSet; }
  inline void SetShareHGInsightsAction(CapabilityState value) {
    m_shareHGInsightsActionHasBeenSet = true;
    m_shareHGInsightsAction = value;
  }
  inline Capabilities& WithShareHGInsightsAction(CapabilityState value) {
    SetShareHGInsightsAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use HG Insights Agent actions.</p>
   */
  inline CapabilityState GetUseHGInsightsAction() const { return m_useHGInsightsAction; }
  inline bool UseHGInsightsActionHasBeenSet() const { return m_useHGInsightsActionHasBeenSet; }
  inline void SetUseHGInsightsAction(CapabilityState value) {
    m_useHGInsightsActionHasBeenSet = true;
    m_useHGInsightsAction = value;
  }
  inline Capabilities& WithUseHGInsightsAction(CapabilityState value) {
    SetUseHGInsightsAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using ZoomInfo Agent connectors.</p>
   */
  inline CapabilityState GetZoomInfoAction() const { return m_zoomInfoAction; }
  inline bool ZoomInfoActionHasBeenSet() const { return m_zoomInfoActionHasBeenSet; }
  inline void SetZoomInfoAction(CapabilityState value) {
    m_zoomInfoActionHasBeenSet = true;
    m_zoomInfoAction = value;
  }
  inline Capabilities& WithZoomInfoAction(CapabilityState value) {
    SetZoomInfoAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update ZoomInfo Agent actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateZoomInfoAction() const { return m_createAndUpdateZoomInfoAction; }
  inline bool CreateAndUpdateZoomInfoActionHasBeenSet() const { return m_createAndUpdateZoomInfoActionHasBeenSet; }
  inline void SetCreateAndUpdateZoomInfoAction(CapabilityState value) {
    m_createAndUpdateZoomInfoActionHasBeenSet = true;
    m_createAndUpdateZoomInfoAction = value;
  }
  inline Capabilities& WithCreateAndUpdateZoomInfoAction(CapabilityState value) {
    SetCreateAndUpdateZoomInfoAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share ZoomInfo Agent actions.</p>
   */
  inline CapabilityState GetShareZoomInfoAction() const { return m_shareZoomInfoAction; }
  inline bool ShareZoomInfoActionHasBeenSet() const { return m_shareZoomInfoActionHasBeenSet; }
  inline void SetShareZoomInfoAction(CapabilityState value) {
    m_shareZoomInfoActionHasBeenSet = true;
    m_shareZoomInfoAction = value;
  }
  inline Capabilities& WithShareZoomInfoAction(CapabilityState value) {
    SetShareZoomInfoAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use ZoomInfo Agent actions.</p>
   */
  inline CapabilityState GetUseZoomInfoAction() const { return m_useZoomInfoAction; }
  inline bool UseZoomInfoActionHasBeenSet() const { return m_useZoomInfoActionHasBeenSet; }
  inline void SetUseZoomInfoAction(CapabilityState value) {
    m_useZoomInfoActionHasBeenSet = true;
    m_useZoomInfoAction = value;
  }
  inline Capabilities& WithUseZoomInfoAction(CapabilityState value) {
    SetUseZoomInfoAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Moody's GenAI Ready Data connectors.</p>
   */
  inline CapabilityState GetMoodysAction() const { return m_moodysAction; }
  inline bool MoodysActionHasBeenSet() const { return m_moodysActionHasBeenSet; }
  inline void SetMoodysAction(CapabilityState value) {
    m_moodysActionHasBeenSet = true;
    m_moodysAction = value;
  }
  inline Capabilities& WithMoodysAction(CapabilityState value) {
    SetMoodysAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Moody's GenAI Ready Data actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateMoodysAction() const { return m_createAndUpdateMoodysAction; }
  inline bool CreateAndUpdateMoodysActionHasBeenSet() const { return m_createAndUpdateMoodysActionHasBeenSet; }
  inline void SetCreateAndUpdateMoodysAction(CapabilityState value) {
    m_createAndUpdateMoodysActionHasBeenSet = true;
    m_createAndUpdateMoodysAction = value;
  }
  inline Capabilities& WithCreateAndUpdateMoodysAction(CapabilityState value) {
    SetCreateAndUpdateMoodysAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Moody's GenAI Ready Data actions.</p>
   */
  inline CapabilityState GetShareMoodysAction() const { return m_shareMoodysAction; }
  inline bool ShareMoodysActionHasBeenSet() const { return m_shareMoodysActionHasBeenSet; }
  inline void SetShareMoodysAction(CapabilityState value) {
    m_shareMoodysActionHasBeenSet = true;
    m_shareMoodysAction = value;
  }
  inline Capabilities& WithShareMoodysAction(CapabilityState value) {
    SetShareMoodysAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Moody's GenAI Ready Data actions.</p>
   */
  inline CapabilityState GetUseMoodysAction() const { return m_useMoodysAction; }
  inline bool UseMoodysActionHasBeenSet() const { return m_useMoodysActionHasBeenSet; }
  inline void SetUseMoodysAction(CapabilityState value) {
    m_useMoodysActionHasBeenSet = true;
    m_useMoodysAction = value;
  }
  inline Capabilities& WithUseMoodysAction(CapabilityState value) {
    SetUseMoodysAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Bee connectors.</p>
   */
  inline CapabilityState GetBeeAction() const { return m_beeAction; }
  inline bool BeeActionHasBeenSet() const { return m_beeActionHasBeenSet; }
  inline void SetBeeAction(CapabilityState value) {
    m_beeActionHasBeenSet = true;
    m_beeAction = value;
  }
  inline Capabilities& WithBeeAction(CapabilityState value) {
    SetBeeAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Bee actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateBeeAction() const { return m_createAndUpdateBeeAction; }
  inline bool CreateAndUpdateBeeActionHasBeenSet() const { return m_createAndUpdateBeeActionHasBeenSet; }
  inline void SetCreateAndUpdateBeeAction(CapabilityState value) {
    m_createAndUpdateBeeActionHasBeenSet = true;
    m_createAndUpdateBeeAction = value;
  }
  inline Capabilities& WithCreateAndUpdateBeeAction(CapabilityState value) {
    SetCreateAndUpdateBeeAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Bee actions.</p>
   */
  inline CapabilityState GetShareBeeAction() const { return m_shareBeeAction; }
  inline bool ShareBeeActionHasBeenSet() const { return m_shareBeeActionHasBeenSet; }
  inline void SetShareBeeAction(CapabilityState value) {
    m_shareBeeActionHasBeenSet = true;
    m_shareBeeAction = value;
  }
  inline Capabilities& WithShareBeeAction(CapabilityState value) {
    SetShareBeeAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Bee actions.</p>
   */
  inline CapabilityState GetUseBeeAction() const { return m_useBeeAction; }
  inline bool UseBeeActionHasBeenSet() const { return m_useBeeActionHasBeenSet; }
  inline void SetUseBeeAction(CapabilityState value) {
    m_useBeeActionHasBeenSet = true;
    m_useBeeAction = value;
  }
  inline Capabilities& WithUseBeeAction(CapabilityState value) {
    SetUseBeeAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform actions using Gong connectors.</p>
   */
  inline CapabilityState GetGongAction() const { return m_gongAction; }
  inline bool GongActionHasBeenSet() const { return m_gongActionHasBeenSet; }
  inline void SetGongAction(CapabilityState value) {
    m_gongActionHasBeenSet = true;
    m_gongAction = value;
  }
  inline Capabilities& WithGongAction(CapabilityState value) {
    SetGongAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create and update Gong actions.</p>
   */
  inline CapabilityState GetCreateAndUpdateGongAction() const { return m_createAndUpdateGongAction; }
  inline bool CreateAndUpdateGongActionHasBeenSet() const { return m_createAndUpdateGongActionHasBeenSet; }
  inline void SetCreateAndUpdateGongAction(CapabilityState value) {
    m_createAndUpdateGongActionHasBeenSet = true;
    m_createAndUpdateGongAction = value;
  }
  inline Capabilities& WithCreateAndUpdateGongAction(CapabilityState value) {
    SetCreateAndUpdateGongAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Gong actions.</p>
   */
  inline CapabilityState GetShareGongAction() const { return m_shareGongAction; }
  inline bool ShareGongActionHasBeenSet() const { return m_shareGongActionHasBeenSet; }
  inline void SetShareGongAction(CapabilityState value) {
    m_shareGongActionHasBeenSet = true;
    m_shareGongAction = value;
  }
  inline Capabilities& WithShareGongAction(CapabilityState value) {
    SetShareGongAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Gong actions.</p>
   */
  inline CapabilityState GetUseGongAction() const { return m_useGongAction; }
  inline bool UseGongActionHasBeenSet() const { return m_useGongActionHasBeenSet; }
  inline void SetUseGongAction(CapabilityState value) {
    m_useGongActionHasBeenSet = true;
    m_useGongAction = value;
  }
  inline Capabilities& WithUseGongAction(CapabilityState value) {
    SetUseGongAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform Topic-related actions.</p>
   */
  inline CapabilityState GetTopic() const { return m_topic; }
  inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }
  inline void SetTopic(CapabilityState value) {
    m_topicHasBeenSet = true;
    m_topic = value;
  }
  inline Capabilities& WithTopic(CapabilityState value) {
    SetTopic(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to Edit Visual with AI</p>
   */
  inline CapabilityState GetEditVisualWithQ() const { return m_editVisualWithQ; }
  inline bool EditVisualWithQHasBeenSet() const { return m_editVisualWithQHasBeenSet; }
  inline void SetEditVisualWithQ(CapabilityState value) {
    m_editVisualWithQHasBeenSet = true;
    m_editVisualWithQ = value;
  }
  inline Capabilities& WithEditVisualWithQ(CapabilityState value) {
    SetEditVisualWithQ(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to Build Calculation with AI</p>
   */
  inline CapabilityState GetBuildCalculatedFieldWithQ() const { return m_buildCalculatedFieldWithQ; }
  inline bool BuildCalculatedFieldWithQHasBeenSet() const { return m_buildCalculatedFieldWithQHasBeenSet; }
  inline void SetBuildCalculatedFieldWithQ(CapabilityState value) {
    m_buildCalculatedFieldWithQHasBeenSet = true;
    m_buildCalculatedFieldWithQ = value;
  }
  inline Capabilities& WithBuildCalculatedFieldWithQ(CapabilityState value) {
    SetBuildCalculatedFieldWithQ(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to Create Executive Summary</p>
   */
  inline CapabilityState GetCreateDashboardExecutiveSummaryWithQ() const { return m_createDashboardExecutiveSummaryWithQ; }
  inline bool CreateDashboardExecutiveSummaryWithQHasBeenSet() const { return m_createDashboardExecutiveSummaryWithQHasBeenSet; }
  inline void SetCreateDashboardExecutiveSummaryWithQ(CapabilityState value) {
    m_createDashboardExecutiveSummaryWithQHasBeenSet = true;
    m_createDashboardExecutiveSummaryWithQ = value;
  }
  inline Capabilities& WithCreateDashboardExecutiveSummaryWithQ(CapabilityState value) {
    SetCreateDashboardExecutiveSummaryWithQ(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform space-related actions.</p>
   */
  inline CapabilityState GetSpace() const { return m_space; }
  inline bool SpaceHasBeenSet() const { return m_spaceHasBeenSet; }
  inline void SetSpace(CapabilityState value) {
    m_spaceHasBeenSet = true;
    m_space = value;
  }
  inline Capabilities& WithSpace(CapabilityState value) {
    SetSpace(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create spaces.</p>
   */
  inline CapabilityState GetCreateSpaces() const { return m_createSpaces; }
  inline bool CreateSpacesHasBeenSet() const { return m_createSpacesHasBeenSet; }
  inline void SetCreateSpaces(CapabilityState value) {
    m_createSpacesHasBeenSet = true;
    m_createSpaces = value;
  }
  inline Capabilities& WithCreateSpaces(CapabilityState value) {
    SetCreateSpaces(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share spaces with other users and groups.</p>
   */
  inline CapabilityState GetShareSpaces() const { return m_shareSpaces; }
  inline bool ShareSpacesHasBeenSet() const { return m_shareSpacesHasBeenSet; }
  inline void SetShareSpaces(CapabilityState value) {
    m_shareSpacesHasBeenSet = true;
    m_shareSpaces = value;
  }
  inline Capabilities& WithShareSpaces(CapabilityState value) {
    SetShareSpaces(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform chat-related actions.</p>
   */
  inline CapabilityState GetChatAgent() const { return m_chatAgent; }
  inline bool ChatAgentHasBeenSet() const { return m_chatAgentHasBeenSet; }
  inline void SetChatAgent(CapabilityState value) {
    m_chatAgentHasBeenSet = true;
    m_chatAgent = value;
  }
  inline Capabilities& WithChatAgent(CapabilityState value) {
    SetChatAgent(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create chat agents.</p>
   */
  inline CapabilityState GetCreateChatAgents() const { return m_createChatAgents; }
  inline bool CreateChatAgentsHasBeenSet() const { return m_createChatAgentsHasBeenSet; }
  inline void SetCreateChatAgents(CapabilityState value) {
    m_createChatAgentsHasBeenSet = true;
    m_createChatAgents = value;
  }
  inline Capabilities& WithCreateChatAgents(CapabilityState value) {
    SetCreateChatAgents(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share chat agents with other users and groups.</p>
   */
  inline CapabilityState GetShareChatAgents() const { return m_shareChatAgents; }
  inline bool ShareChatAgentsHasBeenSet() const { return m_shareChatAgentsHasBeenSet; }
  inline void SetShareChatAgents(CapabilityState value) {
    m_shareChatAgentsHasBeenSet = true;
    m_shareChatAgents = value;
  }
  inline Capabilities& WithShareChatAgents(CapabilityState value) {
    SetShareChatAgents(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform research-related actions.</p>
   */
  inline CapabilityState GetResearch() const { return m_research; }
  inline bool ResearchHasBeenSet() const { return m_researchHasBeenSet; }
  inline void SetResearch(CapabilityState value) {
    m_researchHasBeenSet = true;
    m_research = value;
  }
  inline Capabilities& WithResearch(CapabilityState value) {
    SetResearch(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to enable users to upgrade their user role.</p>
   */
  inline CapabilityState GetSelfUpgradeUserRole() const { return m_selfUpgradeUserRole; }
  inline bool SelfUpgradeUserRoleHasBeenSet() const { return m_selfUpgradeUserRoleHasBeenSet; }
  inline void SetSelfUpgradeUserRole(CapabilityState value) {
    m_selfUpgradeUserRoleHasBeenSet = true;
    m_selfUpgradeUserRole = value;
  }
  inline Capabilities& WithSelfUpgradeUserRole(CapabilityState value) {
    SetSelfUpgradeUserRole(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform Extension-related actions.</p>
   */
  inline CapabilityState GetExtension() const { return m_extension; }
  inline bool ExtensionHasBeenSet() const { return m_extensionHasBeenSet; }
  inline void SetExtension(CapabilityState value) {
    m_extensionHasBeenSet = true;
    m_extension = value;
  }
  inline Capabilities& WithExtension(CapabilityState value) {
    SetExtension(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Amazon Quick through the browser extension for Chrome,
   * Firefox, and Edge.</p>
   */
  inline CapabilityState GetUseBrowserExtension() const { return m_useBrowserExtension; }
  inline bool UseBrowserExtensionHasBeenSet() const { return m_useBrowserExtensionHasBeenSet; }
  inline void SetUseBrowserExtension(CapabilityState value) {
    m_useBrowserExtensionHasBeenSet = true;
    m_useBrowserExtension = value;
  }
  inline Capabilities& WithUseBrowserExtension(CapabilityState value) {
    SetUseBrowserExtension(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Amazon Quick through the Microsoft Word add-in.</p>
   */
  inline CapabilityState GetUseWordAddInExtension() const { return m_useWordAddInExtension; }
  inline bool UseWordAddInExtensionHasBeenSet() const { return m_useWordAddInExtensionHasBeenSet; }
  inline void SetUseWordAddInExtension(CapabilityState value) {
    m_useWordAddInExtensionHasBeenSet = true;
    m_useWordAddInExtension = value;
  }
  inline Capabilities& WithUseWordAddInExtension(CapabilityState value) {
    SetUseWordAddInExtension(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Amazon Quick through the Microsoft Outlook add-in.</p>
   */
  inline CapabilityState GetUseOutlookAddInExtension() const { return m_useOutlookAddInExtension; }
  inline bool UseOutlookAddInExtensionHasBeenSet() const { return m_useOutlookAddInExtensionHasBeenSet; }
  inline void SetUseOutlookAddInExtension(CapabilityState value) {
    m_useOutlookAddInExtensionHasBeenSet = true;
    m_useOutlookAddInExtension = value;
  }
  inline Capabilities& WithUseOutlookAddInExtension(CapabilityState value) {
    SetUseOutlookAddInExtension(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Amazon Quick through the Microsoft Excel add-in.</p>
   */
  inline CapabilityState GetUseExcelAddInExtension() const { return m_useExcelAddInExtension; }
  inline bool UseExcelAddInExtensionHasBeenSet() const { return m_useExcelAddInExtensionHasBeenSet; }
  inline void SetUseExcelAddInExtension(CapabilityState value) {
    m_useExcelAddInExtensionHasBeenSet = true;
    m_useExcelAddInExtension = value;
  }
  inline Capabilities& WithUseExcelAddInExtension(CapabilityState value) {
    SetUseExcelAddInExtension(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to use Amazon Quick through the Microsoft PowerPoint add-in.</p>
   */
  inline CapabilityState GetUsePowerpointAddInExtension() const { return m_usePowerpointAddInExtension; }
  inline bool UsePowerpointAddInExtensionHasBeenSet() const { return m_usePowerpointAddInExtensionHasBeenSet; }
  inline void SetUsePowerpointAddInExtension(CapabilityState value) {
    m_usePowerpointAddInExtensionHasBeenSet = true;
    m_usePowerpointAddInExtension = value;
  }
  inline Capabilities& WithUsePowerpointAddInExtension(CapabilityState value) {
    SetUsePowerpointAddInExtension(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, delete and view shared folders (both
   * restricted and unrestricted), ability to add any asset to shared folders, and
   * ability to share the folders.</p> <p> <b>Note:</b> This does <i>not</i> prevent
   * inheriting access to assets that others share with them through folder
   * membership.</p>
   */
  inline CapabilityState GetManageSharedFolders() const { return m_manageSharedFolders; }
  inline bool ManageSharedFoldersHasBeenSet() const { return m_manageSharedFoldersHasBeenSet; }
  inline void SetManageSharedFolders(CapabilityState value) {
    m_manageSharedFoldersHasBeenSet = true;
    m_manageSharedFolders = value;
  }
  inline Capabilities& WithManageSharedFolders(CapabilityState value) {
    SetManageSharedFolders(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to generate analysis using AI</p>
   */
  inline CapabilityState GetGenerateAnalyses() const { return m_generateAnalyses; }
  inline bool GenerateAnalysesHasBeenSet() const { return m_generateAnalysesHasBeenSet; }
  inline void SetGenerateAnalyses(CapabilityState value) {
    m_generateAnalysesHasBeenSet = true;
    m_generateAnalyses = value;
  }
  inline Capabilities& WithGenerateAnalyses(CapabilityState value) {
    SetGenerateAnalyses(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform Story-related actions.</p>
   */
  inline CapabilityState GetStory() const { return m_story; }
  inline bool StoryHasBeenSet() const { return m_storyHasBeenSet; }
  inline void SetStory(CapabilityState value) {
    m_storyHasBeenSet = true;
    m_story = value;
  }
  inline Capabilities& WithStory(CapabilityState value) {
    SetStory(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to perform Scenario-related actions.</p>
   */
  inline CapabilityState GetScenario() const { return m_scenario; }
  inline bool ScenarioHasBeenSet() const { return m_scenarioHasBeenSet; }
  inline void SetScenario(CapabilityState value) {
    m_scenarioHasBeenSet = true;
    m_scenario = value;
  }
  inline Capabilities& WithScenario(CapabilityState value) {
    SetScenario(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to manage trigger-related settings for flows and automations.</p>
   */
  inline CapabilityState GetTrigger() const { return m_trigger; }
  inline bool TriggerHasBeenSet() const { return m_triggerHasBeenSet; }
  inline void SetTrigger(CapabilityState value) {
    m_triggerHasBeenSet = true;
    m_trigger = value;
  }
  inline Capabilities& WithTrigger(CapabilityState value) {
    SetTrigger(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, view, edit, delete, and run schedule triggers for
   * flows and automations.</p>
   */
  inline CapabilityState GetScheduleTrigger() const { return m_scheduleTrigger; }
  inline bool ScheduleTriggerHasBeenSet() const { return m_scheduleTriggerHasBeenSet; }
  inline void SetScheduleTrigger(CapabilityState value) {
    m_scheduleTriggerHasBeenSet = true;
    m_scheduleTrigger = value;
  }
  inline Capabilities& WithScheduleTrigger(CapabilityState value) {
    SetScheduleTrigger(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, view, edit, delete, and run inbound email triggers for
   * flows and automations.</p>
   */
  inline CapabilityState GetInboundEmailTrigger() const { return m_inboundEmailTrigger; }
  inline bool InboundEmailTriggerHasBeenSet() const { return m_inboundEmailTriggerHasBeenSet; }
  inline void SetInboundEmailTrigger(CapabilityState value) {
    m_inboundEmailTriggerHasBeenSet = true;
    m_inboundEmailTrigger = value;
  }
  inline Capabilities& WithInboundEmailTrigger(CapabilityState value) {
    SetInboundEmailTrigger(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, view, edit, delete, and run Quick event triggers for
   * flows and automations.</p>
   */
  inline CapabilityState GetQuickEventTrigger() const { return m_quickEventTrigger; }
  inline bool QuickEventTriggerHasBeenSet() const { return m_quickEventTriggerHasBeenSet; }
  inline void SetQuickEventTrigger(CapabilityState value) {
    m_quickEventTriggerHasBeenSet = true;
    m_quickEventTrigger = value;
  }
  inline Capabilities& WithQuickEventTrigger(CapabilityState value) {
    SetQuickEventTrigger(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share file data sources.</p>
   */
  inline CapabilityState GetFileDataSource() const { return m_fileDataSource; }
  inline bool FileDataSourceHasBeenSet() const { return m_fileDataSourceHasBeenSet; }
  inline void SetFileDataSource(CapabilityState value) {
    m_fileDataSourceHasBeenSet = true;
    m_fileDataSource = value;
  }
  inline Capabilities& WithFileDataSource(CapabilityState value) {
    SetFileDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create file data sources.</p>
   */
  inline CapabilityState GetCreateFileDataSource() const { return m_createFileDataSource; }
  inline bool CreateFileDataSourceHasBeenSet() const { return m_createFileDataSourceHasBeenSet; }
  inline void SetCreateFileDataSource(CapabilityState value) {
    m_createFileDataSourceHasBeenSet = true;
    m_createFileDataSource = value;
  }
  inline Capabilities& WithCreateFileDataSource(CapabilityState value) {
    SetCreateFileDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update file data sources.</p>
   */
  inline CapabilityState GetUpdateFileDataSource() const { return m_updateFileDataSource; }
  inline bool UpdateFileDataSourceHasBeenSet() const { return m_updateFileDataSourceHasBeenSet; }
  inline void SetUpdateFileDataSource(CapabilityState value) {
    m_updateFileDataSourceHasBeenSet = true;
    m_updateFileDataSource = value;
  }
  inline Capabilities& WithUpdateFileDataSource(CapabilityState value) {
    SetUpdateFileDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share file data sources.</p>
   */
  inline CapabilityState GetShareFileDataSource() const { return m_shareFileDataSource; }
  inline bool ShareFileDataSourceHasBeenSet() const { return m_shareFileDataSourceHasBeenSet; }
  inline void SetShareFileDataSource(CapabilityState value) {
    m_shareFileDataSourceHasBeenSet = true;
    m_shareFileDataSource = value;
  }
  inline Capabilities& WithShareFileDataSource(CapabilityState value) {
    SetShareFileDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Amazon S3 data sources.</p>
   */
  inline CapabilityState GetS3DataSource() const { return m_s3DataSource; }
  inline bool S3DataSourceHasBeenSet() const { return m_s3DataSourceHasBeenSet; }
  inline void SetS3DataSource(CapabilityState value) {
    m_s3DataSourceHasBeenSet = true;
    m_s3DataSource = value;
  }
  inline Capabilities& WithS3DataSource(CapabilityState value) {
    SetS3DataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Amazon S3 data sources.</p>
   */
  inline CapabilityState GetCreateS3DataSource() const { return m_createS3DataSource; }
  inline bool CreateS3DataSourceHasBeenSet() const { return m_createS3DataSourceHasBeenSet; }
  inline void SetCreateS3DataSource(CapabilityState value) {
    m_createS3DataSourceHasBeenSet = true;
    m_createS3DataSource = value;
  }
  inline Capabilities& WithCreateS3DataSource(CapabilityState value) {
    SetCreateS3DataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Amazon S3 data sources.</p>
   */
  inline CapabilityState GetUpdateS3DataSource() const { return m_updateS3DataSource; }
  inline bool UpdateS3DataSourceHasBeenSet() const { return m_updateS3DataSourceHasBeenSet; }
  inline void SetUpdateS3DataSource(CapabilityState value) {
    m_updateS3DataSourceHasBeenSet = true;
    m_updateS3DataSource = value;
  }
  inline Capabilities& WithUpdateS3DataSource(CapabilityState value) {
    SetUpdateS3DataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Amazon S3 data sources.</p>
   */
  inline CapabilityState GetShareS3DataSource() const { return m_shareS3DataSource; }
  inline bool ShareS3DataSourceHasBeenSet() const { return m_shareS3DataSourceHasBeenSet; }
  inline void SetShareS3DataSource(CapabilityState value) {
    m_shareS3DataSourceHasBeenSet = true;
    m_shareS3DataSource = value;
  }
  inline Capabilities& WithShareS3DataSource(CapabilityState value) {
    SetShareS3DataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Amazon S3 Analytics data
   * sources.</p>
   */
  inline CapabilityState GetS3AnalyticsDataSource() const { return m_s3AnalyticsDataSource; }
  inline bool S3AnalyticsDataSourceHasBeenSet() const { return m_s3AnalyticsDataSourceHasBeenSet; }
  inline void SetS3AnalyticsDataSource(CapabilityState value) {
    m_s3AnalyticsDataSourceHasBeenSet = true;
    m_s3AnalyticsDataSource = value;
  }
  inline Capabilities& WithS3AnalyticsDataSource(CapabilityState value) {
    SetS3AnalyticsDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Amazon S3 Analytics data sources.</p>
   */
  inline CapabilityState GetCreateS3AnalyticsDataSource() const { return m_createS3AnalyticsDataSource; }
  inline bool CreateS3AnalyticsDataSourceHasBeenSet() const { return m_createS3AnalyticsDataSourceHasBeenSet; }
  inline void SetCreateS3AnalyticsDataSource(CapabilityState value) {
    m_createS3AnalyticsDataSourceHasBeenSet = true;
    m_createS3AnalyticsDataSource = value;
  }
  inline Capabilities& WithCreateS3AnalyticsDataSource(CapabilityState value) {
    SetCreateS3AnalyticsDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Amazon S3 Analytics data sources.</p>
   */
  inline CapabilityState GetUpdateS3AnalyticsDataSource() const { return m_updateS3AnalyticsDataSource; }
  inline bool UpdateS3AnalyticsDataSourceHasBeenSet() const { return m_updateS3AnalyticsDataSourceHasBeenSet; }
  inline void SetUpdateS3AnalyticsDataSource(CapabilityState value) {
    m_updateS3AnalyticsDataSourceHasBeenSet = true;
    m_updateS3AnalyticsDataSource = value;
  }
  inline Capabilities& WithUpdateS3AnalyticsDataSource(CapabilityState value) {
    SetUpdateS3AnalyticsDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Amazon S3 Analytics data sources.</p>
   */
  inline CapabilityState GetShareS3AnalyticsDataSource() const { return m_shareS3AnalyticsDataSource; }
  inline bool ShareS3AnalyticsDataSourceHasBeenSet() const { return m_shareS3AnalyticsDataSourceHasBeenSet; }
  inline void SetShareS3AnalyticsDataSource(CapabilityState value) {
    m_shareS3AnalyticsDataSourceHasBeenSet = true;
    m_shareS3AnalyticsDataSource = value;
  }
  inline Capabilities& WithShareS3AnalyticsDataSource(CapabilityState value) {
    SetShareS3AnalyticsDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Amazon S3 Tables data sources.</p>
   */
  inline CapabilityState GetS3TablesDataSource() const { return m_s3TablesDataSource; }
  inline bool S3TablesDataSourceHasBeenSet() const { return m_s3TablesDataSourceHasBeenSet; }
  inline void SetS3TablesDataSource(CapabilityState value) {
    m_s3TablesDataSourceHasBeenSet = true;
    m_s3TablesDataSource = value;
  }
  inline Capabilities& WithS3TablesDataSource(CapabilityState value) {
    SetS3TablesDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Amazon S3 Tables data sources.</p>
   */
  inline CapabilityState GetCreateS3TablesDataSource() const { return m_createS3TablesDataSource; }
  inline bool CreateS3TablesDataSourceHasBeenSet() const { return m_createS3TablesDataSourceHasBeenSet; }
  inline void SetCreateS3TablesDataSource(CapabilityState value) {
    m_createS3TablesDataSourceHasBeenSet = true;
    m_createS3TablesDataSource = value;
  }
  inline Capabilities& WithCreateS3TablesDataSource(CapabilityState value) {
    SetCreateS3TablesDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Amazon S3 Tables data sources.</p>
   */
  inline CapabilityState GetUpdateS3TablesDataSource() const { return m_updateS3TablesDataSource; }
  inline bool UpdateS3TablesDataSourceHasBeenSet() const { return m_updateS3TablesDataSourceHasBeenSet; }
  inline void SetUpdateS3TablesDataSource(CapabilityState value) {
    m_updateS3TablesDataSourceHasBeenSet = true;
    m_updateS3TablesDataSource = value;
  }
  inline Capabilities& WithUpdateS3TablesDataSource(CapabilityState value) {
    SetUpdateS3TablesDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Amazon S3 Tables data sources.</p>
   */
  inline CapabilityState GetShareS3TablesDataSource() const { return m_shareS3TablesDataSource; }
  inline bool ShareS3TablesDataSourceHasBeenSet() const { return m_shareS3TablesDataSourceHasBeenSet; }
  inline void SetShareS3TablesDataSource(CapabilityState value) {
    m_shareS3TablesDataSourceHasBeenSet = true;
    m_shareS3TablesDataSource = value;
  }
  inline Capabilities& WithShareS3TablesDataSource(CapabilityState value) {
    SetShareS3TablesDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Amazon Athena data sources.</p>
   */
  inline CapabilityState GetAthenaDataSource() const { return m_athenaDataSource; }
  inline bool AthenaDataSourceHasBeenSet() const { return m_athenaDataSourceHasBeenSet; }
  inline void SetAthenaDataSource(CapabilityState value) {
    m_athenaDataSourceHasBeenSet = true;
    m_athenaDataSource = value;
  }
  inline Capabilities& WithAthenaDataSource(CapabilityState value) {
    SetAthenaDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Amazon Athena data sources.</p>
   */
  inline CapabilityState GetCreateAthenaDataSource() const { return m_createAthenaDataSource; }
  inline bool CreateAthenaDataSourceHasBeenSet() const { return m_createAthenaDataSourceHasBeenSet; }
  inline void SetCreateAthenaDataSource(CapabilityState value) {
    m_createAthenaDataSourceHasBeenSet = true;
    m_createAthenaDataSource = value;
  }
  inline Capabilities& WithCreateAthenaDataSource(CapabilityState value) {
    SetCreateAthenaDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Amazon Athena data sources.</p>
   */
  inline CapabilityState GetUpdateAthenaDataSource() const { return m_updateAthenaDataSource; }
  inline bool UpdateAthenaDataSourceHasBeenSet() const { return m_updateAthenaDataSourceHasBeenSet; }
  inline void SetUpdateAthenaDataSource(CapabilityState value) {
    m_updateAthenaDataSourceHasBeenSet = true;
    m_updateAthenaDataSource = value;
  }
  inline Capabilities& WithUpdateAthenaDataSource(CapabilityState value) {
    SetUpdateAthenaDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Amazon Athena data sources.</p>
   */
  inline CapabilityState GetShareAthenaDataSource() const { return m_shareAthenaDataSource; }
  inline bool ShareAthenaDataSourceHasBeenSet() const { return m_shareAthenaDataSourceHasBeenSet; }
  inline void SetShareAthenaDataSource(CapabilityState value) {
    m_shareAthenaDataSourceHasBeenSet = true;
    m_shareAthenaDataSource = value;
  }
  inline Capabilities& WithShareAthenaDataSource(CapabilityState value) {
    SetShareAthenaDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share auto-discovered Amazon RDS data
   * sources.</p>
   */
  inline CapabilityState GetRdsDataSource() const { return m_rdsDataSource; }
  inline bool RdsDataSourceHasBeenSet() const { return m_rdsDataSourceHasBeenSet; }
  inline void SetRdsDataSource(CapabilityState value) {
    m_rdsDataSourceHasBeenSet = true;
    m_rdsDataSource = value;
  }
  inline Capabilities& WithRdsDataSource(CapabilityState value) {
    SetRdsDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create auto-discovered Amazon RDS data sources.</p>
   */
  inline CapabilityState GetCreateRdsDataSource() const { return m_createRdsDataSource; }
  inline bool CreateRdsDataSourceHasBeenSet() const { return m_createRdsDataSourceHasBeenSet; }
  inline void SetCreateRdsDataSource(CapabilityState value) {
    m_createRdsDataSourceHasBeenSet = true;
    m_createRdsDataSource = value;
  }
  inline Capabilities& WithCreateRdsDataSource(CapabilityState value) {
    SetCreateRdsDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update auto-discovered Amazon RDS data sources.</p>
   */
  inline CapabilityState GetUpdateRdsDataSource() const { return m_updateRdsDataSource; }
  inline bool UpdateRdsDataSourceHasBeenSet() const { return m_updateRdsDataSourceHasBeenSet; }
  inline void SetUpdateRdsDataSource(CapabilityState value) {
    m_updateRdsDataSourceHasBeenSet = true;
    m_updateRdsDataSource = value;
  }
  inline Capabilities& WithUpdateRdsDataSource(CapabilityState value) {
    SetUpdateRdsDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share auto-discovered Amazon RDS data sources.</p>
   */
  inline CapabilityState GetShareRdsDataSource() const { return m_shareRdsDataSource; }
  inline bool ShareRdsDataSourceHasBeenSet() const { return m_shareRdsDataSourceHasBeenSet; }
  inline void SetShareRdsDataSource(CapabilityState value) {
    m_shareRdsDataSourceHasBeenSet = true;
    m_shareRdsDataSource = value;
  }
  inline Capabilities& WithShareRdsDataSource(CapabilityState value) {
    SetShareRdsDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share auto-discovered Amazon Redshift data
   * sources.</p>
   */
  inline CapabilityState GetRedshiftAutoDiscoveredDataSource() const { return m_redshiftAutoDiscoveredDataSource; }
  inline bool RedshiftAutoDiscoveredDataSourceHasBeenSet() const { return m_redshiftAutoDiscoveredDataSourceHasBeenSet; }
  inline void SetRedshiftAutoDiscoveredDataSource(CapabilityState value) {
    m_redshiftAutoDiscoveredDataSourceHasBeenSet = true;
    m_redshiftAutoDiscoveredDataSource = value;
  }
  inline Capabilities& WithRedshiftAutoDiscoveredDataSource(CapabilityState value) {
    SetRedshiftAutoDiscoveredDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create auto-discovered Amazon Redshift data sources.</p>
   */
  inline CapabilityState GetCreateRedshiftAutoDiscoveredDataSource() const { return m_createRedshiftAutoDiscoveredDataSource; }
  inline bool CreateRedshiftAutoDiscoveredDataSourceHasBeenSet() const { return m_createRedshiftAutoDiscoveredDataSourceHasBeenSet; }
  inline void SetCreateRedshiftAutoDiscoveredDataSource(CapabilityState value) {
    m_createRedshiftAutoDiscoveredDataSourceHasBeenSet = true;
    m_createRedshiftAutoDiscoveredDataSource = value;
  }
  inline Capabilities& WithCreateRedshiftAutoDiscoveredDataSource(CapabilityState value) {
    SetCreateRedshiftAutoDiscoveredDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update auto-discovered Amazon Redshift data sources.</p>
   */
  inline CapabilityState GetUpdateRedshiftAutoDiscoveredDataSource() const { return m_updateRedshiftAutoDiscoveredDataSource; }
  inline bool UpdateRedshiftAutoDiscoveredDataSourceHasBeenSet() const { return m_updateRedshiftAutoDiscoveredDataSourceHasBeenSet; }
  inline void SetUpdateRedshiftAutoDiscoveredDataSource(CapabilityState value) {
    m_updateRedshiftAutoDiscoveredDataSourceHasBeenSet = true;
    m_updateRedshiftAutoDiscoveredDataSource = value;
  }
  inline Capabilities& WithUpdateRedshiftAutoDiscoveredDataSource(CapabilityState value) {
    SetUpdateRedshiftAutoDiscoveredDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share auto-discovered Amazon Redshift data sources.</p>
   */
  inline CapabilityState GetShareRedshiftAutoDiscoveredDataSource() const { return m_shareRedshiftAutoDiscoveredDataSource; }
  inline bool ShareRedshiftAutoDiscoveredDataSourceHasBeenSet() const { return m_shareRedshiftAutoDiscoveredDataSourceHasBeenSet; }
  inline void SetShareRedshiftAutoDiscoveredDataSource(CapabilityState value) {
    m_shareRedshiftAutoDiscoveredDataSourceHasBeenSet = true;
    m_shareRedshiftAutoDiscoveredDataSource = value;
  }
  inline Capabilities& WithShareRedshiftAutoDiscoveredDataSource(CapabilityState value) {
    SetShareRedshiftAutoDiscoveredDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share manually configured Amazon Redshift
   * data sources.</p>
   */
  inline CapabilityState GetRedshiftManualDataSource() const { return m_redshiftManualDataSource; }
  inline bool RedshiftManualDataSourceHasBeenSet() const { return m_redshiftManualDataSourceHasBeenSet; }
  inline void SetRedshiftManualDataSource(CapabilityState value) {
    m_redshiftManualDataSourceHasBeenSet = true;
    m_redshiftManualDataSource = value;
  }
  inline Capabilities& WithRedshiftManualDataSource(CapabilityState value) {
    SetRedshiftManualDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create manually configured Amazon Redshift data sources.</p>
   */
  inline CapabilityState GetCreateRedshiftManualDataSource() const { return m_createRedshiftManualDataSource; }
  inline bool CreateRedshiftManualDataSourceHasBeenSet() const { return m_createRedshiftManualDataSourceHasBeenSet; }
  inline void SetCreateRedshiftManualDataSource(CapabilityState value) {
    m_createRedshiftManualDataSourceHasBeenSet = true;
    m_createRedshiftManualDataSource = value;
  }
  inline Capabilities& WithCreateRedshiftManualDataSource(CapabilityState value) {
    SetCreateRedshiftManualDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update manually configured Amazon Redshift data sources.</p>
   */
  inline CapabilityState GetUpdateRedshiftManualDataSource() const { return m_updateRedshiftManualDataSource; }
  inline bool UpdateRedshiftManualDataSourceHasBeenSet() const { return m_updateRedshiftManualDataSourceHasBeenSet; }
  inline void SetUpdateRedshiftManualDataSource(CapabilityState value) {
    m_updateRedshiftManualDataSourceHasBeenSet = true;
    m_updateRedshiftManualDataSource = value;
  }
  inline Capabilities& WithUpdateRedshiftManualDataSource(CapabilityState value) {
    SetUpdateRedshiftManualDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share manually configured Amazon Redshift data sources.</p>
   */
  inline CapabilityState GetShareRedshiftManualDataSource() const { return m_shareRedshiftManualDataSource; }
  inline bool ShareRedshiftManualDataSourceHasBeenSet() const { return m_shareRedshiftManualDataSourceHasBeenSet; }
  inline void SetShareRedshiftManualDataSource(CapabilityState value) {
    m_shareRedshiftManualDataSourceHasBeenSet = true;
    m_shareRedshiftManualDataSource = value;
  }
  inline Capabilities& WithShareRedshiftManualDataSource(CapabilityState value) {
    SetShareRedshiftManualDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Amazon OpenSearch Service data
   * sources.</p>
   */
  inline CapabilityState GetOpenSearchDataSource() const { return m_openSearchDataSource; }
  inline bool OpenSearchDataSourceHasBeenSet() const { return m_openSearchDataSourceHasBeenSet; }
  inline void SetOpenSearchDataSource(CapabilityState value) {
    m_openSearchDataSourceHasBeenSet = true;
    m_openSearchDataSource = value;
  }
  inline Capabilities& WithOpenSearchDataSource(CapabilityState value) {
    SetOpenSearchDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Amazon OpenSearch Service data sources.</p>
   */
  inline CapabilityState GetCreateOpenSearchDataSource() const { return m_createOpenSearchDataSource; }
  inline bool CreateOpenSearchDataSourceHasBeenSet() const { return m_createOpenSearchDataSourceHasBeenSet; }
  inline void SetCreateOpenSearchDataSource(CapabilityState value) {
    m_createOpenSearchDataSourceHasBeenSet = true;
    m_createOpenSearchDataSource = value;
  }
  inline Capabilities& WithCreateOpenSearchDataSource(CapabilityState value) {
    SetCreateOpenSearchDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Amazon OpenSearch Service data sources.</p>
   */
  inline CapabilityState GetUpdateOpenSearchDataSource() const { return m_updateOpenSearchDataSource; }
  inline bool UpdateOpenSearchDataSourceHasBeenSet() const { return m_updateOpenSearchDataSourceHasBeenSet; }
  inline void SetUpdateOpenSearchDataSource(CapabilityState value) {
    m_updateOpenSearchDataSourceHasBeenSet = true;
    m_updateOpenSearchDataSource = value;
  }
  inline Capabilities& WithUpdateOpenSearchDataSource(CapabilityState value) {
    SetUpdateOpenSearchDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Amazon OpenSearch Service data sources.</p>
   */
  inline CapabilityState GetShareOpenSearchDataSource() const { return m_shareOpenSearchDataSource; }
  inline bool ShareOpenSearchDataSourceHasBeenSet() const { return m_shareOpenSearchDataSourceHasBeenSet; }
  inline void SetShareOpenSearchDataSource(CapabilityState value) {
    m_shareOpenSearchDataSourceHasBeenSet = true;
    m_shareOpenSearchDataSource = value;
  }
  inline Capabilities& WithShareOpenSearchDataSource(CapabilityState value) {
    SetShareOpenSearchDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Amazon Timestream data sources.</p>
   */
  inline CapabilityState GetTimestreamDataSource() const { return m_timestreamDataSource; }
  inline bool TimestreamDataSourceHasBeenSet() const { return m_timestreamDataSourceHasBeenSet; }
  inline void SetTimestreamDataSource(CapabilityState value) {
    m_timestreamDataSourceHasBeenSet = true;
    m_timestreamDataSource = value;
  }
  inline Capabilities& WithTimestreamDataSource(CapabilityState value) {
    SetTimestreamDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Amazon Timestream data sources.</p>
   */
  inline CapabilityState GetCreateTimestreamDataSource() const { return m_createTimestreamDataSource; }
  inline bool CreateTimestreamDataSourceHasBeenSet() const { return m_createTimestreamDataSourceHasBeenSet; }
  inline void SetCreateTimestreamDataSource(CapabilityState value) {
    m_createTimestreamDataSourceHasBeenSet = true;
    m_createTimestreamDataSource = value;
  }
  inline Capabilities& WithCreateTimestreamDataSource(CapabilityState value) {
    SetCreateTimestreamDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Amazon Timestream data sources.</p>
   */
  inline CapabilityState GetUpdateTimestreamDataSource() const { return m_updateTimestreamDataSource; }
  inline bool UpdateTimestreamDataSourceHasBeenSet() const { return m_updateTimestreamDataSourceHasBeenSet; }
  inline void SetUpdateTimestreamDataSource(CapabilityState value) {
    m_updateTimestreamDataSourceHasBeenSet = true;
    m_updateTimestreamDataSource = value;
  }
  inline Capabilities& WithUpdateTimestreamDataSource(CapabilityState value) {
    SetUpdateTimestreamDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Amazon Timestream data sources.</p>
   */
  inline CapabilityState GetShareTimestreamDataSource() const { return m_shareTimestreamDataSource; }
  inline bool ShareTimestreamDataSourceHasBeenSet() const { return m_shareTimestreamDataSourceHasBeenSet; }
  inline void SetShareTimestreamDataSource(CapabilityState value) {
    m_shareTimestreamDataSourceHasBeenSet = true;
    m_shareTimestreamDataSource = value;
  }
  inline Capabilities& WithShareTimestreamDataSource(CapabilityState value) {
    SetShareTimestreamDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Amazon Aurora data sources.</p>
   */
  inline CapabilityState GetAuroraDataSource() const { return m_auroraDataSource; }
  inline bool AuroraDataSourceHasBeenSet() const { return m_auroraDataSourceHasBeenSet; }
  inline void SetAuroraDataSource(CapabilityState value) {
    m_auroraDataSourceHasBeenSet = true;
    m_auroraDataSource = value;
  }
  inline Capabilities& WithAuroraDataSource(CapabilityState value) {
    SetAuroraDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Amazon Aurora data sources.</p>
   */
  inline CapabilityState GetCreateAuroraDataSource() const { return m_createAuroraDataSource; }
  inline bool CreateAuroraDataSourceHasBeenSet() const { return m_createAuroraDataSourceHasBeenSet; }
  inline void SetCreateAuroraDataSource(CapabilityState value) {
    m_createAuroraDataSourceHasBeenSet = true;
    m_createAuroraDataSource = value;
  }
  inline Capabilities& WithCreateAuroraDataSource(CapabilityState value) {
    SetCreateAuroraDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Amazon Aurora data sources.</p>
   */
  inline CapabilityState GetUpdateAuroraDataSource() const { return m_updateAuroraDataSource; }
  inline bool UpdateAuroraDataSourceHasBeenSet() const { return m_updateAuroraDataSourceHasBeenSet; }
  inline void SetUpdateAuroraDataSource(CapabilityState value) {
    m_updateAuroraDataSourceHasBeenSet = true;
    m_updateAuroraDataSource = value;
  }
  inline Capabilities& WithUpdateAuroraDataSource(CapabilityState value) {
    SetUpdateAuroraDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Amazon Aurora data sources.</p>
   */
  inline CapabilityState GetShareAuroraDataSource() const { return m_shareAuroraDataSource; }
  inline bool ShareAuroraDataSourceHasBeenSet() const { return m_shareAuroraDataSourceHasBeenSet; }
  inline void SetShareAuroraDataSource(CapabilityState value) {
    m_shareAuroraDataSourceHasBeenSet = true;
    m_shareAuroraDataSource = value;
  }
  inline Capabilities& WithShareAuroraDataSource(CapabilityState value) {
    SetShareAuroraDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share MySQL data sources.</p>
   */
  inline CapabilityState GetMySqlDataSource() const { return m_mySqlDataSource; }
  inline bool MySqlDataSourceHasBeenSet() const { return m_mySqlDataSourceHasBeenSet; }
  inline void SetMySqlDataSource(CapabilityState value) {
    m_mySqlDataSourceHasBeenSet = true;
    m_mySqlDataSource = value;
  }
  inline Capabilities& WithMySqlDataSource(CapabilityState value) {
    SetMySqlDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create MySQL data sources.</p>
   */
  inline CapabilityState GetCreateMySqlDataSource() const { return m_createMySqlDataSource; }
  inline bool CreateMySqlDataSourceHasBeenSet() const { return m_createMySqlDataSourceHasBeenSet; }
  inline void SetCreateMySqlDataSource(CapabilityState value) {
    m_createMySqlDataSourceHasBeenSet = true;
    m_createMySqlDataSource = value;
  }
  inline Capabilities& WithCreateMySqlDataSource(CapabilityState value) {
    SetCreateMySqlDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update MySQL data sources.</p>
   */
  inline CapabilityState GetUpdateMySqlDataSource() const { return m_updateMySqlDataSource; }
  inline bool UpdateMySqlDataSourceHasBeenSet() const { return m_updateMySqlDataSourceHasBeenSet; }
  inline void SetUpdateMySqlDataSource(CapabilityState value) {
    m_updateMySqlDataSourceHasBeenSet = true;
    m_updateMySqlDataSource = value;
  }
  inline Capabilities& WithUpdateMySqlDataSource(CapabilityState value) {
    SetUpdateMySqlDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share MySQL data sources.</p>
   */
  inline CapabilityState GetShareMySqlDataSource() const { return m_shareMySqlDataSource; }
  inline bool ShareMySqlDataSourceHasBeenSet() const { return m_shareMySqlDataSourceHasBeenSet; }
  inline void SetShareMySqlDataSource(CapabilityState value) {
    m_shareMySqlDataSourceHasBeenSet = true;
    m_shareMySqlDataSource = value;
  }
  inline Capabilities& WithShareMySqlDataSource(CapabilityState value) {
    SetShareMySqlDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share PostgreSQL data sources.</p>
   */
  inline CapabilityState GetPostgreSqlDataSource() const { return m_postgreSqlDataSource; }
  inline bool PostgreSqlDataSourceHasBeenSet() const { return m_postgreSqlDataSourceHasBeenSet; }
  inline void SetPostgreSqlDataSource(CapabilityState value) {
    m_postgreSqlDataSourceHasBeenSet = true;
    m_postgreSqlDataSource = value;
  }
  inline Capabilities& WithPostgreSqlDataSource(CapabilityState value) {
    SetPostgreSqlDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create PostgreSQL data sources.</p>
   */
  inline CapabilityState GetCreatePostgreSqlDataSource() const { return m_createPostgreSqlDataSource; }
  inline bool CreatePostgreSqlDataSourceHasBeenSet() const { return m_createPostgreSqlDataSourceHasBeenSet; }
  inline void SetCreatePostgreSqlDataSource(CapabilityState value) {
    m_createPostgreSqlDataSourceHasBeenSet = true;
    m_createPostgreSqlDataSource = value;
  }
  inline Capabilities& WithCreatePostgreSqlDataSource(CapabilityState value) {
    SetCreatePostgreSqlDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update PostgreSQL data sources.</p>
   */
  inline CapabilityState GetUpdatePostgreSqlDataSource() const { return m_updatePostgreSqlDataSource; }
  inline bool UpdatePostgreSqlDataSourceHasBeenSet() const { return m_updatePostgreSqlDataSourceHasBeenSet; }
  inline void SetUpdatePostgreSqlDataSource(CapabilityState value) {
    m_updatePostgreSqlDataSourceHasBeenSet = true;
    m_updatePostgreSqlDataSource = value;
  }
  inline Capabilities& WithUpdatePostgreSqlDataSource(CapabilityState value) {
    SetUpdatePostgreSqlDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share PostgreSQL data sources.</p>
   */
  inline CapabilityState GetSharePostgreSqlDataSource() const { return m_sharePostgreSqlDataSource; }
  inline bool SharePostgreSqlDataSourceHasBeenSet() const { return m_sharePostgreSqlDataSourceHasBeenSet; }
  inline void SetSharePostgreSqlDataSource(CapabilityState value) {
    m_sharePostgreSqlDataSourceHasBeenSet = true;
    m_sharePostgreSqlDataSource = value;
  }
  inline Capabilities& WithSharePostgreSqlDataSource(CapabilityState value) {
    SetSharePostgreSqlDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Oracle data sources.</p>
   */
  inline CapabilityState GetOracleDataSource() const { return m_oracleDataSource; }
  inline bool OracleDataSourceHasBeenSet() const { return m_oracleDataSourceHasBeenSet; }
  inline void SetOracleDataSource(CapabilityState value) {
    m_oracleDataSourceHasBeenSet = true;
    m_oracleDataSource = value;
  }
  inline Capabilities& WithOracleDataSource(CapabilityState value) {
    SetOracleDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Oracle data sources.</p>
   */
  inline CapabilityState GetCreateOracleDataSource() const { return m_createOracleDataSource; }
  inline bool CreateOracleDataSourceHasBeenSet() const { return m_createOracleDataSourceHasBeenSet; }
  inline void SetCreateOracleDataSource(CapabilityState value) {
    m_createOracleDataSourceHasBeenSet = true;
    m_createOracleDataSource = value;
  }
  inline Capabilities& WithCreateOracleDataSource(CapabilityState value) {
    SetCreateOracleDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Oracle data sources.</p>
   */
  inline CapabilityState GetUpdateOracleDataSource() const { return m_updateOracleDataSource; }
  inline bool UpdateOracleDataSourceHasBeenSet() const { return m_updateOracleDataSourceHasBeenSet; }
  inline void SetUpdateOracleDataSource(CapabilityState value) {
    m_updateOracleDataSourceHasBeenSet = true;
    m_updateOracleDataSource = value;
  }
  inline Capabilities& WithUpdateOracleDataSource(CapabilityState value) {
    SetUpdateOracleDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Oracle data sources.</p>
   */
  inline CapabilityState GetShareOracleDataSource() const { return m_shareOracleDataSource; }
  inline bool ShareOracleDataSourceHasBeenSet() const { return m_shareOracleDataSourceHasBeenSet; }
  inline void SetShareOracleDataSource(CapabilityState value) {
    m_shareOracleDataSourceHasBeenSet = true;
    m_shareOracleDataSource = value;
  }
  inline Capabilities& WithShareOracleDataSource(CapabilityState value) {
    SetShareOracleDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share SQL Server data sources.</p>
   */
  inline CapabilityState GetSqlServerDataSource() const { return m_sqlServerDataSource; }
  inline bool SqlServerDataSourceHasBeenSet() const { return m_sqlServerDataSourceHasBeenSet; }
  inline void SetSqlServerDataSource(CapabilityState value) {
    m_sqlServerDataSourceHasBeenSet = true;
    m_sqlServerDataSource = value;
  }
  inline Capabilities& WithSqlServerDataSource(CapabilityState value) {
    SetSqlServerDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create SQL Server data sources.</p>
   */
  inline CapabilityState GetCreateSqlServerDataSource() const { return m_createSqlServerDataSource; }
  inline bool CreateSqlServerDataSourceHasBeenSet() const { return m_createSqlServerDataSourceHasBeenSet; }
  inline void SetCreateSqlServerDataSource(CapabilityState value) {
    m_createSqlServerDataSourceHasBeenSet = true;
    m_createSqlServerDataSource = value;
  }
  inline Capabilities& WithCreateSqlServerDataSource(CapabilityState value) {
    SetCreateSqlServerDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update SQL Server data sources.</p>
   */
  inline CapabilityState GetUpdateSqlServerDataSource() const { return m_updateSqlServerDataSource; }
  inline bool UpdateSqlServerDataSourceHasBeenSet() const { return m_updateSqlServerDataSourceHasBeenSet; }
  inline void SetUpdateSqlServerDataSource(CapabilityState value) {
    m_updateSqlServerDataSourceHasBeenSet = true;
    m_updateSqlServerDataSource = value;
  }
  inline Capabilities& WithUpdateSqlServerDataSource(CapabilityState value) {
    SetUpdateSqlServerDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share SQL Server data sources.</p>
   */
  inline CapabilityState GetShareSqlServerDataSource() const { return m_shareSqlServerDataSource; }
  inline bool ShareSqlServerDataSourceHasBeenSet() const { return m_shareSqlServerDataSourceHasBeenSet; }
  inline void SetShareSqlServerDataSource(CapabilityState value) {
    m_shareSqlServerDataSourceHasBeenSet = true;
    m_shareSqlServerDataSource = value;
  }
  inline Capabilities& WithShareSqlServerDataSource(CapabilityState value) {
    SetShareSqlServerDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share MariaDB data sources.</p>
   */
  inline CapabilityState GetMariaDbDataSource() const { return m_mariaDbDataSource; }
  inline bool MariaDbDataSourceHasBeenSet() const { return m_mariaDbDataSourceHasBeenSet; }
  inline void SetMariaDbDataSource(CapabilityState value) {
    m_mariaDbDataSourceHasBeenSet = true;
    m_mariaDbDataSource = value;
  }
  inline Capabilities& WithMariaDbDataSource(CapabilityState value) {
    SetMariaDbDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create MariaDB data sources.</p>
   */
  inline CapabilityState GetCreateMariaDbDataSource() const { return m_createMariaDbDataSource; }
  inline bool CreateMariaDbDataSourceHasBeenSet() const { return m_createMariaDbDataSourceHasBeenSet; }
  inline void SetCreateMariaDbDataSource(CapabilityState value) {
    m_createMariaDbDataSourceHasBeenSet = true;
    m_createMariaDbDataSource = value;
  }
  inline Capabilities& WithCreateMariaDbDataSource(CapabilityState value) {
    SetCreateMariaDbDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update MariaDB data sources.</p>
   */
  inline CapabilityState GetUpdateMariaDbDataSource() const { return m_updateMariaDbDataSource; }
  inline bool UpdateMariaDbDataSourceHasBeenSet() const { return m_updateMariaDbDataSourceHasBeenSet; }
  inline void SetUpdateMariaDbDataSource(CapabilityState value) {
    m_updateMariaDbDataSourceHasBeenSet = true;
    m_updateMariaDbDataSource = value;
  }
  inline Capabilities& WithUpdateMariaDbDataSource(CapabilityState value) {
    SetUpdateMariaDbDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share MariaDB data sources.</p>
   */
  inline CapabilityState GetShareMariaDbDataSource() const { return m_shareMariaDbDataSource; }
  inline bool ShareMariaDbDataSourceHasBeenSet() const { return m_shareMariaDbDataSourceHasBeenSet; }
  inline void SetShareMariaDbDataSource(CapabilityState value) {
    m_shareMariaDbDataSourceHasBeenSet = true;
    m_shareMariaDbDataSource = value;
  }
  inline Capabilities& WithShareMariaDbDataSource(CapabilityState value) {
    SetShareMariaDbDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Snowflake data sources.</p>
   */
  inline CapabilityState GetSnowflakeDataSource() const { return m_snowflakeDataSource; }
  inline bool SnowflakeDataSourceHasBeenSet() const { return m_snowflakeDataSourceHasBeenSet; }
  inline void SetSnowflakeDataSource(CapabilityState value) {
    m_snowflakeDataSourceHasBeenSet = true;
    m_snowflakeDataSource = value;
  }
  inline Capabilities& WithSnowflakeDataSource(CapabilityState value) {
    SetSnowflakeDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Snowflake data sources.</p>
   */
  inline CapabilityState GetCreateSnowflakeDataSource() const { return m_createSnowflakeDataSource; }
  inline bool CreateSnowflakeDataSourceHasBeenSet() const { return m_createSnowflakeDataSourceHasBeenSet; }
  inline void SetCreateSnowflakeDataSource(CapabilityState value) {
    m_createSnowflakeDataSourceHasBeenSet = true;
    m_createSnowflakeDataSource = value;
  }
  inline Capabilities& WithCreateSnowflakeDataSource(CapabilityState value) {
    SetCreateSnowflakeDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Snowflake data sources.</p>
   */
  inline CapabilityState GetUpdateSnowflakeDataSource() const { return m_updateSnowflakeDataSource; }
  inline bool UpdateSnowflakeDataSourceHasBeenSet() const { return m_updateSnowflakeDataSourceHasBeenSet; }
  inline void SetUpdateSnowflakeDataSource(CapabilityState value) {
    m_updateSnowflakeDataSourceHasBeenSet = true;
    m_updateSnowflakeDataSource = value;
  }
  inline Capabilities& WithUpdateSnowflakeDataSource(CapabilityState value) {
    SetUpdateSnowflakeDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Snowflake data sources.</p>
   */
  inline CapabilityState GetShareSnowflakeDataSource() const { return m_shareSnowflakeDataSource; }
  inline bool ShareSnowflakeDataSourceHasBeenSet() const { return m_shareSnowflakeDataSourceHasBeenSet; }
  inline void SetShareSnowflakeDataSource(CapabilityState value) {
    m_shareSnowflakeDataSourceHasBeenSet = true;
    m_shareSnowflakeDataSource = value;
  }
  inline Capabilities& WithShareSnowflakeDataSource(CapabilityState value) {
    SetShareSnowflakeDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Google BigQuery data sources.</p>
   */
  inline CapabilityState GetGoogleBigQueryDataSource() const { return m_googleBigQueryDataSource; }
  inline bool GoogleBigQueryDataSourceHasBeenSet() const { return m_googleBigQueryDataSourceHasBeenSet; }
  inline void SetGoogleBigQueryDataSource(CapabilityState value) {
    m_googleBigQueryDataSourceHasBeenSet = true;
    m_googleBigQueryDataSource = value;
  }
  inline Capabilities& WithGoogleBigQueryDataSource(CapabilityState value) {
    SetGoogleBigQueryDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Google BigQuery data sources.</p>
   */
  inline CapabilityState GetCreateGoogleBigQueryDataSource() const { return m_createGoogleBigQueryDataSource; }
  inline bool CreateGoogleBigQueryDataSourceHasBeenSet() const { return m_createGoogleBigQueryDataSourceHasBeenSet; }
  inline void SetCreateGoogleBigQueryDataSource(CapabilityState value) {
    m_createGoogleBigQueryDataSourceHasBeenSet = true;
    m_createGoogleBigQueryDataSource = value;
  }
  inline Capabilities& WithCreateGoogleBigQueryDataSource(CapabilityState value) {
    SetCreateGoogleBigQueryDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Google BigQuery data sources.</p>
   */
  inline CapabilityState GetUpdateGoogleBigQueryDataSource() const { return m_updateGoogleBigQueryDataSource; }
  inline bool UpdateGoogleBigQueryDataSourceHasBeenSet() const { return m_updateGoogleBigQueryDataSourceHasBeenSet; }
  inline void SetUpdateGoogleBigQueryDataSource(CapabilityState value) {
    m_updateGoogleBigQueryDataSourceHasBeenSet = true;
    m_updateGoogleBigQueryDataSource = value;
  }
  inline Capabilities& WithUpdateGoogleBigQueryDataSource(CapabilityState value) {
    SetUpdateGoogleBigQueryDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Google BigQuery data sources.</p>
   */
  inline CapabilityState GetShareGoogleBigQueryDataSource() const { return m_shareGoogleBigQueryDataSource; }
  inline bool ShareGoogleBigQueryDataSourceHasBeenSet() const { return m_shareGoogleBigQueryDataSourceHasBeenSet; }
  inline void SetShareGoogleBigQueryDataSource(CapabilityState value) {
    m_shareGoogleBigQueryDataSourceHasBeenSet = true;
    m_shareGoogleBigQueryDataSource = value;
  }
  inline Capabilities& WithShareGoogleBigQueryDataSource(CapabilityState value) {
    SetShareGoogleBigQueryDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Databricks data sources.</p>
   */
  inline CapabilityState GetDatabricksDataSource() const { return m_databricksDataSource; }
  inline bool DatabricksDataSourceHasBeenSet() const { return m_databricksDataSourceHasBeenSet; }
  inline void SetDatabricksDataSource(CapabilityState value) {
    m_databricksDataSourceHasBeenSet = true;
    m_databricksDataSource = value;
  }
  inline Capabilities& WithDatabricksDataSource(CapabilityState value) {
    SetDatabricksDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Databricks data sources.</p>
   */
  inline CapabilityState GetCreateDatabricksDataSource() const { return m_createDatabricksDataSource; }
  inline bool CreateDatabricksDataSourceHasBeenSet() const { return m_createDatabricksDataSourceHasBeenSet; }
  inline void SetCreateDatabricksDataSource(CapabilityState value) {
    m_createDatabricksDataSourceHasBeenSet = true;
    m_createDatabricksDataSource = value;
  }
  inline Capabilities& WithCreateDatabricksDataSource(CapabilityState value) {
    SetCreateDatabricksDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Databricks data sources.</p>
   */
  inline CapabilityState GetUpdateDatabricksDataSource() const { return m_updateDatabricksDataSource; }
  inline bool UpdateDatabricksDataSourceHasBeenSet() const { return m_updateDatabricksDataSourceHasBeenSet; }
  inline void SetUpdateDatabricksDataSource(CapabilityState value) {
    m_updateDatabricksDataSourceHasBeenSet = true;
    m_updateDatabricksDataSource = value;
  }
  inline Capabilities& WithUpdateDatabricksDataSource(CapabilityState value) {
    SetUpdateDatabricksDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Databricks data sources.</p>
   */
  inline CapabilityState GetShareDatabricksDataSource() const { return m_shareDatabricksDataSource; }
  inline bool ShareDatabricksDataSourceHasBeenSet() const { return m_shareDatabricksDataSourceHasBeenSet; }
  inline void SetShareDatabricksDataSource(CapabilityState value) {
    m_shareDatabricksDataSourceHasBeenSet = true;
    m_shareDatabricksDataSource = value;
  }
  inline Capabilities& WithShareDatabricksDataSource(CapabilityState value) {
    SetShareDatabricksDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Starburst data sources.</p>
   */
  inline CapabilityState GetStarburstDataSource() const { return m_starburstDataSource; }
  inline bool StarburstDataSourceHasBeenSet() const { return m_starburstDataSourceHasBeenSet; }
  inline void SetStarburstDataSource(CapabilityState value) {
    m_starburstDataSourceHasBeenSet = true;
    m_starburstDataSource = value;
  }
  inline Capabilities& WithStarburstDataSource(CapabilityState value) {
    SetStarburstDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Starburst data sources.</p>
   */
  inline CapabilityState GetCreateStarburstDataSource() const { return m_createStarburstDataSource; }
  inline bool CreateStarburstDataSourceHasBeenSet() const { return m_createStarburstDataSourceHasBeenSet; }
  inline void SetCreateStarburstDataSource(CapabilityState value) {
    m_createStarburstDataSourceHasBeenSet = true;
    m_createStarburstDataSource = value;
  }
  inline Capabilities& WithCreateStarburstDataSource(CapabilityState value) {
    SetCreateStarburstDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Starburst data sources.</p>
   */
  inline CapabilityState GetUpdateStarburstDataSource() const { return m_updateStarburstDataSource; }
  inline bool UpdateStarburstDataSourceHasBeenSet() const { return m_updateStarburstDataSourceHasBeenSet; }
  inline void SetUpdateStarburstDataSource(CapabilityState value) {
    m_updateStarburstDataSourceHasBeenSet = true;
    m_updateStarburstDataSource = value;
  }
  inline Capabilities& WithUpdateStarburstDataSource(CapabilityState value) {
    SetUpdateStarburstDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Starburst data sources.</p>
   */
  inline CapabilityState GetShareStarburstDataSource() const { return m_shareStarburstDataSource; }
  inline bool ShareStarburstDataSourceHasBeenSet() const { return m_shareStarburstDataSourceHasBeenSet; }
  inline void SetShareStarburstDataSource(CapabilityState value) {
    m_shareStarburstDataSourceHasBeenSet = true;
    m_shareStarburstDataSource = value;
  }
  inline Capabilities& WithShareStarburstDataSource(CapabilityState value) {
    SetShareStarburstDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Trino data sources.</p>
   */
  inline CapabilityState GetTrinoDataSource() const { return m_trinoDataSource; }
  inline bool TrinoDataSourceHasBeenSet() const { return m_trinoDataSourceHasBeenSet; }
  inline void SetTrinoDataSource(CapabilityState value) {
    m_trinoDataSourceHasBeenSet = true;
    m_trinoDataSource = value;
  }
  inline Capabilities& WithTrinoDataSource(CapabilityState value) {
    SetTrinoDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Trino data sources.</p>
   */
  inline CapabilityState GetCreateTrinoDataSource() const { return m_createTrinoDataSource; }
  inline bool CreateTrinoDataSourceHasBeenSet() const { return m_createTrinoDataSourceHasBeenSet; }
  inline void SetCreateTrinoDataSource(CapabilityState value) {
    m_createTrinoDataSourceHasBeenSet = true;
    m_createTrinoDataSource = value;
  }
  inline Capabilities& WithCreateTrinoDataSource(CapabilityState value) {
    SetCreateTrinoDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Trino data sources.</p>
   */
  inline CapabilityState GetUpdateTrinoDataSource() const { return m_updateTrinoDataSource; }
  inline bool UpdateTrinoDataSourceHasBeenSet() const { return m_updateTrinoDataSourceHasBeenSet; }
  inline void SetUpdateTrinoDataSource(CapabilityState value) {
    m_updateTrinoDataSourceHasBeenSet = true;
    m_updateTrinoDataSource = value;
  }
  inline Capabilities& WithUpdateTrinoDataSource(CapabilityState value) {
    SetUpdateTrinoDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Trino data sources.</p>
   */
  inline CapabilityState GetShareTrinoDataSource() const { return m_shareTrinoDataSource; }
  inline bool ShareTrinoDataSourceHasBeenSet() const { return m_shareTrinoDataSourceHasBeenSet; }
  inline void SetShareTrinoDataSource(CapabilityState value) {
    m_shareTrinoDataSourceHasBeenSet = true;
    m_shareTrinoDataSource = value;
  }
  inline Capabilities& WithShareTrinoDataSource(CapabilityState value) {
    SetShareTrinoDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Impala data sources.</p>
   */
  inline CapabilityState GetImpalaDataSource() const { return m_impalaDataSource; }
  inline bool ImpalaDataSourceHasBeenSet() const { return m_impalaDataSourceHasBeenSet; }
  inline void SetImpalaDataSource(CapabilityState value) {
    m_impalaDataSourceHasBeenSet = true;
    m_impalaDataSource = value;
  }
  inline Capabilities& WithImpalaDataSource(CapabilityState value) {
    SetImpalaDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Impala data sources.</p>
   */
  inline CapabilityState GetCreateImpalaDataSource() const { return m_createImpalaDataSource; }
  inline bool CreateImpalaDataSourceHasBeenSet() const { return m_createImpalaDataSourceHasBeenSet; }
  inline void SetCreateImpalaDataSource(CapabilityState value) {
    m_createImpalaDataSourceHasBeenSet = true;
    m_createImpalaDataSource = value;
  }
  inline Capabilities& WithCreateImpalaDataSource(CapabilityState value) {
    SetCreateImpalaDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Impala data sources.</p>
   */
  inline CapabilityState GetUpdateImpalaDataSource() const { return m_updateImpalaDataSource; }
  inline bool UpdateImpalaDataSourceHasBeenSet() const { return m_updateImpalaDataSourceHasBeenSet; }
  inline void SetUpdateImpalaDataSource(CapabilityState value) {
    m_updateImpalaDataSourceHasBeenSet = true;
    m_updateImpalaDataSource = value;
  }
  inline Capabilities& WithUpdateImpalaDataSource(CapabilityState value) {
    SetUpdateImpalaDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Impala data sources.</p>
   */
  inline CapabilityState GetShareImpalaDataSource() const { return m_shareImpalaDataSource; }
  inline bool ShareImpalaDataSourceHasBeenSet() const { return m_shareImpalaDataSourceHasBeenSet; }
  inline void SetShareImpalaDataSource(CapabilityState value) {
    m_shareImpalaDataSourceHasBeenSet = true;
    m_shareImpalaDataSource = value;
  }
  inline Capabilities& WithShareImpalaDataSource(CapabilityState value) {
    SetShareImpalaDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Teradata data sources.</p>
   */
  inline CapabilityState GetTeradataDataSource() const { return m_teradataDataSource; }
  inline bool TeradataDataSourceHasBeenSet() const { return m_teradataDataSourceHasBeenSet; }
  inline void SetTeradataDataSource(CapabilityState value) {
    m_teradataDataSourceHasBeenSet = true;
    m_teradataDataSource = value;
  }
  inline Capabilities& WithTeradataDataSource(CapabilityState value) {
    SetTeradataDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Teradata data sources.</p>
   */
  inline CapabilityState GetCreateTeradataDataSource() const { return m_createTeradataDataSource; }
  inline bool CreateTeradataDataSourceHasBeenSet() const { return m_createTeradataDataSourceHasBeenSet; }
  inline void SetCreateTeradataDataSource(CapabilityState value) {
    m_createTeradataDataSourceHasBeenSet = true;
    m_createTeradataDataSource = value;
  }
  inline Capabilities& WithCreateTeradataDataSource(CapabilityState value) {
    SetCreateTeradataDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Teradata data sources.</p>
   */
  inline CapabilityState GetUpdateTeradataDataSource() const { return m_updateTeradataDataSource; }
  inline bool UpdateTeradataDataSourceHasBeenSet() const { return m_updateTeradataDataSourceHasBeenSet; }
  inline void SetUpdateTeradataDataSource(CapabilityState value) {
    m_updateTeradataDataSourceHasBeenSet = true;
    m_updateTeradataDataSource = value;
  }
  inline Capabilities& WithUpdateTeradataDataSource(CapabilityState value) {
    SetUpdateTeradataDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Teradata data sources.</p>
   */
  inline CapabilityState GetShareTeradataDataSource() const { return m_shareTeradataDataSource; }
  inline bool ShareTeradataDataSourceHasBeenSet() const { return m_shareTeradataDataSourceHasBeenSet; }
  inline void SetShareTeradataDataSource(CapabilityState value) {
    m_shareTeradataDataSourceHasBeenSet = true;
    m_shareTeradataDataSource = value;
  }
  inline Capabilities& WithShareTeradataDataSource(CapabilityState value) {
    SetShareTeradataDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Presto data sources.</p>
   */
  inline CapabilityState GetPrestoDataSource() const { return m_prestoDataSource; }
  inline bool PrestoDataSourceHasBeenSet() const { return m_prestoDataSourceHasBeenSet; }
  inline void SetPrestoDataSource(CapabilityState value) {
    m_prestoDataSourceHasBeenSet = true;
    m_prestoDataSource = value;
  }
  inline Capabilities& WithPrestoDataSource(CapabilityState value) {
    SetPrestoDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Presto data sources.</p>
   */
  inline CapabilityState GetCreatePrestoDataSource() const { return m_createPrestoDataSource; }
  inline bool CreatePrestoDataSourceHasBeenSet() const { return m_createPrestoDataSourceHasBeenSet; }
  inline void SetCreatePrestoDataSource(CapabilityState value) {
    m_createPrestoDataSourceHasBeenSet = true;
    m_createPrestoDataSource = value;
  }
  inline Capabilities& WithCreatePrestoDataSource(CapabilityState value) {
    SetCreatePrestoDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Presto data sources.</p>
   */
  inline CapabilityState GetUpdatePrestoDataSource() const { return m_updatePrestoDataSource; }
  inline bool UpdatePrestoDataSourceHasBeenSet() const { return m_updatePrestoDataSourceHasBeenSet; }
  inline void SetUpdatePrestoDataSource(CapabilityState value) {
    m_updatePrestoDataSourceHasBeenSet = true;
    m_updatePrestoDataSource = value;
  }
  inline Capabilities& WithUpdatePrestoDataSource(CapabilityState value) {
    SetUpdatePrestoDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Presto data sources.</p>
   */
  inline CapabilityState GetSharePrestoDataSource() const { return m_sharePrestoDataSource; }
  inline bool SharePrestoDataSourceHasBeenSet() const { return m_sharePrestoDataSourceHasBeenSet; }
  inline void SetSharePrestoDataSource(CapabilityState value) {
    m_sharePrestoDataSourceHasBeenSet = true;
    m_sharePrestoDataSource = value;
  }
  inline Capabilities& WithSharePrestoDataSource(CapabilityState value) {
    SetSharePrestoDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Spark data sources.</p>
   */
  inline CapabilityState GetSparkDataSource() const { return m_sparkDataSource; }
  inline bool SparkDataSourceHasBeenSet() const { return m_sparkDataSourceHasBeenSet; }
  inline void SetSparkDataSource(CapabilityState value) {
    m_sparkDataSourceHasBeenSet = true;
    m_sparkDataSource = value;
  }
  inline Capabilities& WithSparkDataSource(CapabilityState value) {
    SetSparkDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Spark data sources.</p>
   */
  inline CapabilityState GetCreateSparkDataSource() const { return m_createSparkDataSource; }
  inline bool CreateSparkDataSourceHasBeenSet() const { return m_createSparkDataSourceHasBeenSet; }
  inline void SetCreateSparkDataSource(CapabilityState value) {
    m_createSparkDataSourceHasBeenSet = true;
    m_createSparkDataSource = value;
  }
  inline Capabilities& WithCreateSparkDataSource(CapabilityState value) {
    SetCreateSparkDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Spark data sources.</p>
   */
  inline CapabilityState GetUpdateSparkDataSource() const { return m_updateSparkDataSource; }
  inline bool UpdateSparkDataSourceHasBeenSet() const { return m_updateSparkDataSourceHasBeenSet; }
  inline void SetUpdateSparkDataSource(CapabilityState value) {
    m_updateSparkDataSourceHasBeenSet = true;
    m_updateSparkDataSource = value;
  }
  inline Capabilities& WithUpdateSparkDataSource(CapabilityState value) {
    SetUpdateSparkDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Spark data sources.</p>
   */
  inline CapabilityState GetShareSparkDataSource() const { return m_shareSparkDataSource; }
  inline bool ShareSparkDataSourceHasBeenSet() const { return m_shareSparkDataSourceHasBeenSet; }
  inline void SetShareSparkDataSource(CapabilityState value) {
    m_shareSparkDataSourceHasBeenSet = true;
    m_shareSparkDataSource = value;
  }
  inline Capabilities& WithShareSparkDataSource(CapabilityState value) {
    SetShareSparkDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Exasol data sources.</p>
   */
  inline CapabilityState GetExasolDataSource() const { return m_exasolDataSource; }
  inline bool ExasolDataSourceHasBeenSet() const { return m_exasolDataSourceHasBeenSet; }
  inline void SetExasolDataSource(CapabilityState value) {
    m_exasolDataSourceHasBeenSet = true;
    m_exasolDataSource = value;
  }
  inline Capabilities& WithExasolDataSource(CapabilityState value) {
    SetExasolDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Exasol data sources.</p>
   */
  inline CapabilityState GetCreateExasolDataSource() const { return m_createExasolDataSource; }
  inline bool CreateExasolDataSourceHasBeenSet() const { return m_createExasolDataSourceHasBeenSet; }
  inline void SetCreateExasolDataSource(CapabilityState value) {
    m_createExasolDataSourceHasBeenSet = true;
    m_createExasolDataSource = value;
  }
  inline Capabilities& WithCreateExasolDataSource(CapabilityState value) {
    SetCreateExasolDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Exasol data sources.</p>
   */
  inline CapabilityState GetUpdateExasolDataSource() const { return m_updateExasolDataSource; }
  inline bool UpdateExasolDataSourceHasBeenSet() const { return m_updateExasolDataSourceHasBeenSet; }
  inline void SetUpdateExasolDataSource(CapabilityState value) {
    m_updateExasolDataSourceHasBeenSet = true;
    m_updateExasolDataSource = value;
  }
  inline Capabilities& WithUpdateExasolDataSource(CapabilityState value) {
    SetUpdateExasolDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Exasol data sources.</p>
   */
  inline CapabilityState GetShareExasolDataSource() const { return m_shareExasolDataSource; }
  inline bool ShareExasolDataSourceHasBeenSet() const { return m_shareExasolDataSourceHasBeenSet; }
  inline void SetShareExasolDataSource(CapabilityState value) {
    m_shareExasolDataSourceHasBeenSet = true;
    m_shareExasolDataSource = value;
  }
  inline Capabilities& WithShareExasolDataSource(CapabilityState value) {
    SetShareExasolDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Db2 data sources.</p>
   */
  inline CapabilityState GetDb2DataSource() const { return m_db2DataSource; }
  inline bool Db2DataSourceHasBeenSet() const { return m_db2DataSourceHasBeenSet; }
  inline void SetDb2DataSource(CapabilityState value) {
    m_db2DataSourceHasBeenSet = true;
    m_db2DataSource = value;
  }
  inline Capabilities& WithDb2DataSource(CapabilityState value) {
    SetDb2DataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Db2 data sources.</p>
   */
  inline CapabilityState GetCreateDb2DataSource() const { return m_createDb2DataSource; }
  inline bool CreateDb2DataSourceHasBeenSet() const { return m_createDb2DataSourceHasBeenSet; }
  inline void SetCreateDb2DataSource(CapabilityState value) {
    m_createDb2DataSourceHasBeenSet = true;
    m_createDb2DataSource = value;
  }
  inline Capabilities& WithCreateDb2DataSource(CapabilityState value) {
    SetCreateDb2DataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Db2 data sources.</p>
   */
  inline CapabilityState GetUpdateDb2DataSource() const { return m_updateDb2DataSource; }
  inline bool UpdateDb2DataSourceHasBeenSet() const { return m_updateDb2DataSourceHasBeenSet; }
  inline void SetUpdateDb2DataSource(CapabilityState value) {
    m_updateDb2DataSourceHasBeenSet = true;
    m_updateDb2DataSource = value;
  }
  inline Capabilities& WithUpdateDb2DataSource(CapabilityState value) {
    SetUpdateDb2DataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Db2 data sources.</p>
   */
  inline CapabilityState GetShareDb2DataSource() const { return m_shareDb2DataSource; }
  inline bool ShareDb2DataSourceHasBeenSet() const { return m_shareDb2DataSourceHasBeenSet; }
  inline void SetShareDb2DataSource(CapabilityState value) {
    m_shareDb2DataSourceHasBeenSet = true;
    m_shareDb2DataSource = value;
  }
  inline Capabilities& WithShareDb2DataSource(CapabilityState value) {
    SetShareDb2DataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share SAP HANA data sources.</p>
   */
  inline CapabilityState GetSapHanaDataSource() const { return m_sapHanaDataSource; }
  inline bool SapHanaDataSourceHasBeenSet() const { return m_sapHanaDataSourceHasBeenSet; }
  inline void SetSapHanaDataSource(CapabilityState value) {
    m_sapHanaDataSourceHasBeenSet = true;
    m_sapHanaDataSource = value;
  }
  inline Capabilities& WithSapHanaDataSource(CapabilityState value) {
    SetSapHanaDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create SAP HANA data sources.</p>
   */
  inline CapabilityState GetCreateSapHanaDataSource() const { return m_createSapHanaDataSource; }
  inline bool CreateSapHanaDataSourceHasBeenSet() const { return m_createSapHanaDataSourceHasBeenSet; }
  inline void SetCreateSapHanaDataSource(CapabilityState value) {
    m_createSapHanaDataSourceHasBeenSet = true;
    m_createSapHanaDataSource = value;
  }
  inline Capabilities& WithCreateSapHanaDataSource(CapabilityState value) {
    SetCreateSapHanaDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update SAP HANA data sources.</p>
   */
  inline CapabilityState GetUpdateSapHanaDataSource() const { return m_updateSapHanaDataSource; }
  inline bool UpdateSapHanaDataSourceHasBeenSet() const { return m_updateSapHanaDataSourceHasBeenSet; }
  inline void SetUpdateSapHanaDataSource(CapabilityState value) {
    m_updateSapHanaDataSourceHasBeenSet = true;
    m_updateSapHanaDataSource = value;
  }
  inline Capabilities& WithUpdateSapHanaDataSource(CapabilityState value) {
    SetUpdateSapHanaDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share SAP HANA data sources.</p>
   */
  inline CapabilityState GetShareSapHanaDataSource() const { return m_shareSapHanaDataSource; }
  inline bool ShareSapHanaDataSourceHasBeenSet() const { return m_shareSapHanaDataSourceHasBeenSet; }
  inline void SetShareSapHanaDataSource(CapabilityState value) {
    m_shareSapHanaDataSourceHasBeenSet = true;
    m_shareSapHanaDataSource = value;
  }
  inline Capabilities& WithShareSapHanaDataSource(CapabilityState value) {
    SetShareSapHanaDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Denodo data sources.</p>
   */
  inline CapabilityState GetDenodoDataSource() const { return m_denodoDataSource; }
  inline bool DenodoDataSourceHasBeenSet() const { return m_denodoDataSourceHasBeenSet; }
  inline void SetDenodoDataSource(CapabilityState value) {
    m_denodoDataSourceHasBeenSet = true;
    m_denodoDataSource = value;
  }
  inline Capabilities& WithDenodoDataSource(CapabilityState value) {
    SetDenodoDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Denodo data sources.</p>
   */
  inline CapabilityState GetCreateDenodoDataSource() const { return m_createDenodoDataSource; }
  inline bool CreateDenodoDataSourceHasBeenSet() const { return m_createDenodoDataSourceHasBeenSet; }
  inline void SetCreateDenodoDataSource(CapabilityState value) {
    m_createDenodoDataSourceHasBeenSet = true;
    m_createDenodoDataSource = value;
  }
  inline Capabilities& WithCreateDenodoDataSource(CapabilityState value) {
    SetCreateDenodoDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Denodo data sources.</p>
   */
  inline CapabilityState GetUpdateDenodoDataSource() const { return m_updateDenodoDataSource; }
  inline bool UpdateDenodoDataSourceHasBeenSet() const { return m_updateDenodoDataSourceHasBeenSet; }
  inline void SetUpdateDenodoDataSource(CapabilityState value) {
    m_updateDenodoDataSourceHasBeenSet = true;
    m_updateDenodoDataSource = value;
  }
  inline Capabilities& WithUpdateDenodoDataSource(CapabilityState value) {
    SetUpdateDenodoDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Denodo data sources.</p>
   */
  inline CapabilityState GetShareDenodoDataSource() const { return m_shareDenodoDataSource; }
  inline bool ShareDenodoDataSourceHasBeenSet() const { return m_shareDenodoDataSourceHasBeenSet; }
  inline void SetShareDenodoDataSource(CapabilityState value) {
    m_shareDenodoDataSourceHasBeenSet = true;
    m_shareDenodoDataSource = value;
  }
  inline Capabilities& WithShareDenodoDataSource(CapabilityState value) {
    SetShareDenodoDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Dremio data sources.</p>
   */
  inline CapabilityState GetDremioDataSource() const { return m_dremioDataSource; }
  inline bool DremioDataSourceHasBeenSet() const { return m_dremioDataSourceHasBeenSet; }
  inline void SetDremioDataSource(CapabilityState value) {
    m_dremioDataSourceHasBeenSet = true;
    m_dremioDataSource = value;
  }
  inline Capabilities& WithDremioDataSource(CapabilityState value) {
    SetDremioDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Dremio data sources.</p>
   */
  inline CapabilityState GetCreateDremioDataSource() const { return m_createDremioDataSource; }
  inline bool CreateDremioDataSourceHasBeenSet() const { return m_createDremioDataSourceHasBeenSet; }
  inline void SetCreateDremioDataSource(CapabilityState value) {
    m_createDremioDataSourceHasBeenSet = true;
    m_createDremioDataSource = value;
  }
  inline Capabilities& WithCreateDremioDataSource(CapabilityState value) {
    SetCreateDremioDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Dremio data sources.</p>
   */
  inline CapabilityState GetUpdateDremioDataSource() const { return m_updateDremioDataSource; }
  inline bool UpdateDremioDataSourceHasBeenSet() const { return m_updateDremioDataSourceHasBeenSet; }
  inline void SetUpdateDremioDataSource(CapabilityState value) {
    m_updateDremioDataSourceHasBeenSet = true;
    m_updateDremioDataSource = value;
  }
  inline Capabilities& WithUpdateDremioDataSource(CapabilityState value) {
    SetUpdateDremioDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Dremio data sources.</p>
   */
  inline CapabilityState GetShareDremioDataSource() const { return m_shareDremioDataSource; }
  inline bool ShareDremioDataSourceHasBeenSet() const { return m_shareDremioDataSourceHasBeenSet; }
  inline void SetShareDremioDataSource(CapabilityState value) {
    m_shareDremioDataSourceHasBeenSet = true;
    m_shareDremioDataSource = value;
  }
  inline Capabilities& WithShareDremioDataSource(CapabilityState value) {
    SetShareDremioDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Salesforce data sources.</p>
   */
  inline CapabilityState GetSalesforceDataSource() const { return m_salesforceDataSource; }
  inline bool SalesforceDataSourceHasBeenSet() const { return m_salesforceDataSourceHasBeenSet; }
  inline void SetSalesforceDataSource(CapabilityState value) {
    m_salesforceDataSourceHasBeenSet = true;
    m_salesforceDataSource = value;
  }
  inline Capabilities& WithSalesforceDataSource(CapabilityState value) {
    SetSalesforceDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Salesforce data sources.</p>
   */
  inline CapabilityState GetCreateSalesforceDataSource() const { return m_createSalesforceDataSource; }
  inline bool CreateSalesforceDataSourceHasBeenSet() const { return m_createSalesforceDataSourceHasBeenSet; }
  inline void SetCreateSalesforceDataSource(CapabilityState value) {
    m_createSalesforceDataSourceHasBeenSet = true;
    m_createSalesforceDataSource = value;
  }
  inline Capabilities& WithCreateSalesforceDataSource(CapabilityState value) {
    SetCreateSalesforceDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Salesforce data sources.</p>
   */
  inline CapabilityState GetUpdateSalesforceDataSource() const { return m_updateSalesforceDataSource; }
  inline bool UpdateSalesforceDataSourceHasBeenSet() const { return m_updateSalesforceDataSourceHasBeenSet; }
  inline void SetUpdateSalesforceDataSource(CapabilityState value) {
    m_updateSalesforceDataSourceHasBeenSet = true;
    m_updateSalesforceDataSource = value;
  }
  inline Capabilities& WithUpdateSalesforceDataSource(CapabilityState value) {
    SetUpdateSalesforceDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Salesforce data sources.</p>
   */
  inline CapabilityState GetShareSalesforceDataSource() const { return m_shareSalesforceDataSource; }
  inline bool ShareSalesforceDataSourceHasBeenSet() const { return m_shareSalesforceDataSourceHasBeenSet; }
  inline void SetShareSalesforceDataSource(CapabilityState value) {
    m_shareSalesforceDataSourceHasBeenSet = true;
    m_shareSalesforceDataSource = value;
  }
  inline Capabilities& WithShareSalesforceDataSource(CapabilityState value) {
    SetShareSalesforceDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Amazon QuickSight data sources.</p>
   */
  inline CapabilityState GetRadiantDataSource() const { return m_radiantDataSource; }
  inline bool RadiantDataSourceHasBeenSet() const { return m_radiantDataSourceHasBeenSet; }
  inline void SetRadiantDataSource(CapabilityState value) {
    m_radiantDataSourceHasBeenSet = true;
    m_radiantDataSource = value;
  }
  inline Capabilities& WithRadiantDataSource(CapabilityState value) {
    SetRadiantDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Amazon QuickSight data sources.</p>
   */
  inline CapabilityState GetCreateRadiantDataSource() const { return m_createRadiantDataSource; }
  inline bool CreateRadiantDataSourceHasBeenSet() const { return m_createRadiantDataSourceHasBeenSet; }
  inline void SetCreateRadiantDataSource(CapabilityState value) {
    m_createRadiantDataSourceHasBeenSet = true;
    m_createRadiantDataSource = value;
  }
  inline Capabilities& WithCreateRadiantDataSource(CapabilityState value) {
    SetCreateRadiantDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Amazon QuickSight data sources.</p>
   */
  inline CapabilityState GetUpdateRadiantDataSource() const { return m_updateRadiantDataSource; }
  inline bool UpdateRadiantDataSourceHasBeenSet() const { return m_updateRadiantDataSourceHasBeenSet; }
  inline void SetUpdateRadiantDataSource(CapabilityState value) {
    m_updateRadiantDataSourceHasBeenSet = true;
    m_updateRadiantDataSource = value;
  }
  inline Capabilities& WithUpdateRadiantDataSource(CapabilityState value) {
    SetUpdateRadiantDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Amazon QuickSight data sources.</p>
   */
  inline CapabilityState GetShareRadiantDataSource() const { return m_shareRadiantDataSource; }
  inline bool ShareRadiantDataSourceHasBeenSet() const { return m_shareRadiantDataSourceHasBeenSet; }
  inline void SetShareRadiantDataSource(CapabilityState value) {
    m_shareRadiantDataSourceHasBeenSet = true;
    m_shareRadiantDataSource = value;
  }
  inline Capabilities& WithShareRadiantDataSource(CapabilityState value) {
    SetShareRadiantDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share PayPal data sources.</p>
   */
  inline CapabilityState GetPayPalDataSource() const { return m_payPalDataSource; }
  inline bool PayPalDataSourceHasBeenSet() const { return m_payPalDataSourceHasBeenSet; }
  inline void SetPayPalDataSource(CapabilityState value) {
    m_payPalDataSourceHasBeenSet = true;
    m_payPalDataSource = value;
  }
  inline Capabilities& WithPayPalDataSource(CapabilityState value) {
    SetPayPalDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create PayPal data sources.</p>
   */
  inline CapabilityState GetCreatePayPalDataSource() const { return m_createPayPalDataSource; }
  inline bool CreatePayPalDataSourceHasBeenSet() const { return m_createPayPalDataSourceHasBeenSet; }
  inline void SetCreatePayPalDataSource(CapabilityState value) {
    m_createPayPalDataSourceHasBeenSet = true;
    m_createPayPalDataSource = value;
  }
  inline Capabilities& WithCreatePayPalDataSource(CapabilityState value) {
    SetCreatePayPalDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update PayPal data sources.</p>
   */
  inline CapabilityState GetUpdatePayPalDataSource() const { return m_updatePayPalDataSource; }
  inline bool UpdatePayPalDataSourceHasBeenSet() const { return m_updatePayPalDataSourceHasBeenSet; }
  inline void SetUpdatePayPalDataSource(CapabilityState value) {
    m_updatePayPalDataSourceHasBeenSet = true;
    m_updatePayPalDataSource = value;
  }
  inline Capabilities& WithUpdatePayPalDataSource(CapabilityState value) {
    SetUpdatePayPalDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share PayPal data sources.</p>
   */
  inline CapabilityState GetSharePayPalDataSource() const { return m_sharePayPalDataSource; }
  inline bool SharePayPalDataSourceHasBeenSet() const { return m_sharePayPalDataSourceHasBeenSet; }
  inline void SetSharePayPalDataSource(CapabilityState value) {
    m_sharePayPalDataSourceHasBeenSet = true;
    m_sharePayPalDataSource = value;
  }
  inline Capabilities& WithSharePayPalDataSource(CapabilityState value) {
    SetSharePayPalDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Square data sources.</p>
   */
  inline CapabilityState GetSquareDataSource() const { return m_squareDataSource; }
  inline bool SquareDataSourceHasBeenSet() const { return m_squareDataSourceHasBeenSet; }
  inline void SetSquareDataSource(CapabilityState value) {
    m_squareDataSourceHasBeenSet = true;
    m_squareDataSource = value;
  }
  inline Capabilities& WithSquareDataSource(CapabilityState value) {
    SetSquareDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Square data sources.</p>
   */
  inline CapabilityState GetCreateSquareDataSource() const { return m_createSquareDataSource; }
  inline bool CreateSquareDataSourceHasBeenSet() const { return m_createSquareDataSourceHasBeenSet; }
  inline void SetCreateSquareDataSource(CapabilityState value) {
    m_createSquareDataSourceHasBeenSet = true;
    m_createSquareDataSource = value;
  }
  inline Capabilities& WithCreateSquareDataSource(CapabilityState value) {
    SetCreateSquareDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Square data sources.</p>
   */
  inline CapabilityState GetUpdateSquareDataSource() const { return m_updateSquareDataSource; }
  inline bool UpdateSquareDataSourceHasBeenSet() const { return m_updateSquareDataSourceHasBeenSet; }
  inline void SetUpdateSquareDataSource(CapabilityState value) {
    m_updateSquareDataSourceHasBeenSet = true;
    m_updateSquareDataSource = value;
  }
  inline Capabilities& WithUpdateSquareDataSource(CapabilityState value) {
    SetUpdateSquareDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Square data sources.</p>
   */
  inline CapabilityState GetShareSquareDataSource() const { return m_shareSquareDataSource; }
  inline bool ShareSquareDataSourceHasBeenSet() const { return m_shareSquareDataSourceHasBeenSet; }
  inline void SetShareSquareDataSource(CapabilityState value) {
    m_shareSquareDataSourceHasBeenSet = true;
    m_shareSquareDataSource = value;
  }
  inline Capabilities& WithShareSquareDataSource(CapabilityState value) {
    SetShareSquareDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share GitHub data sources.</p>
   */
  inline CapabilityState GetGitHubDataSource() const { return m_gitHubDataSource; }
  inline bool GitHubDataSourceHasBeenSet() const { return m_gitHubDataSourceHasBeenSet; }
  inline void SetGitHubDataSource(CapabilityState value) {
    m_gitHubDataSourceHasBeenSet = true;
    m_gitHubDataSource = value;
  }
  inline Capabilities& WithGitHubDataSource(CapabilityState value) {
    SetGitHubDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create GitHub data sources.</p>
   */
  inline CapabilityState GetCreateGitHubDataSource() const { return m_createGitHubDataSource; }
  inline bool CreateGitHubDataSourceHasBeenSet() const { return m_createGitHubDataSourceHasBeenSet; }
  inline void SetCreateGitHubDataSource(CapabilityState value) {
    m_createGitHubDataSourceHasBeenSet = true;
    m_createGitHubDataSource = value;
  }
  inline Capabilities& WithCreateGitHubDataSource(CapabilityState value) {
    SetCreateGitHubDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update GitHub data sources.</p>
   */
  inline CapabilityState GetUpdateGitHubDataSource() const { return m_updateGitHubDataSource; }
  inline bool UpdateGitHubDataSourceHasBeenSet() const { return m_updateGitHubDataSourceHasBeenSet; }
  inline void SetUpdateGitHubDataSource(CapabilityState value) {
    m_updateGitHubDataSourceHasBeenSet = true;
    m_updateGitHubDataSource = value;
  }
  inline Capabilities& WithUpdateGitHubDataSource(CapabilityState value) {
    SetUpdateGitHubDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share GitHub data sources.</p>
   */
  inline CapabilityState GetShareGitHubDataSource() const { return m_shareGitHubDataSource; }
  inline bool ShareGitHubDataSourceHasBeenSet() const { return m_shareGitHubDataSourceHasBeenSet; }
  inline void SetShareGitHubDataSource(CapabilityState value) {
    m_shareGitHubDataSourceHasBeenSet = true;
    m_shareGitHubDataSource = value;
  }
  inline Capabilities& WithShareGitHubDataSource(CapabilityState value) {
    SetShareGitHubDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Twitter data sources.</p>
   */
  inline CapabilityState GetTwitterDataSource() const { return m_twitterDataSource; }
  inline bool TwitterDataSourceHasBeenSet() const { return m_twitterDataSourceHasBeenSet; }
  inline void SetTwitterDataSource(CapabilityState value) {
    m_twitterDataSourceHasBeenSet = true;
    m_twitterDataSource = value;
  }
  inline Capabilities& WithTwitterDataSource(CapabilityState value) {
    SetTwitterDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Twitter data sources.</p>
   */
  inline CapabilityState GetCreateTwitterDataSource() const { return m_createTwitterDataSource; }
  inline bool CreateTwitterDataSourceHasBeenSet() const { return m_createTwitterDataSourceHasBeenSet; }
  inline void SetCreateTwitterDataSource(CapabilityState value) {
    m_createTwitterDataSourceHasBeenSet = true;
    m_createTwitterDataSource = value;
  }
  inline Capabilities& WithCreateTwitterDataSource(CapabilityState value) {
    SetCreateTwitterDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Twitter data sources.</p>
   */
  inline CapabilityState GetUpdateTwitterDataSource() const { return m_updateTwitterDataSource; }
  inline bool UpdateTwitterDataSourceHasBeenSet() const { return m_updateTwitterDataSourceHasBeenSet; }
  inline void SetUpdateTwitterDataSource(CapabilityState value) {
    m_updateTwitterDataSourceHasBeenSet = true;
    m_updateTwitterDataSource = value;
  }
  inline Capabilities& WithUpdateTwitterDataSource(CapabilityState value) {
    SetUpdateTwitterDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Twitter data sources.</p>
   */
  inline CapabilityState GetShareTwitterDataSource() const { return m_shareTwitterDataSource; }
  inline bool ShareTwitterDataSourceHasBeenSet() const { return m_shareTwitterDataSourceHasBeenSet; }
  inline void SetShareTwitterDataSource(CapabilityState value) {
    m_shareTwitterDataSourceHasBeenSet = true;
    m_shareTwitterDataSource = value;
  }
  inline Capabilities& WithShareTwitterDataSource(CapabilityState value) {
    SetShareTwitterDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Jira data sources.</p>
   */
  inline CapabilityState GetJiraDataSource() const { return m_jiraDataSource; }
  inline bool JiraDataSourceHasBeenSet() const { return m_jiraDataSourceHasBeenSet; }
  inline void SetJiraDataSource(CapabilityState value) {
    m_jiraDataSourceHasBeenSet = true;
    m_jiraDataSource = value;
  }
  inline Capabilities& WithJiraDataSource(CapabilityState value) {
    SetJiraDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Jira data sources.</p>
   */
  inline CapabilityState GetCreateJiraDataSource() const { return m_createJiraDataSource; }
  inline bool CreateJiraDataSourceHasBeenSet() const { return m_createJiraDataSourceHasBeenSet; }
  inline void SetCreateJiraDataSource(CapabilityState value) {
    m_createJiraDataSourceHasBeenSet = true;
    m_createJiraDataSource = value;
  }
  inline Capabilities& WithCreateJiraDataSource(CapabilityState value) {
    SetCreateJiraDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Jira data sources.</p>
   */
  inline CapabilityState GetUpdateJiraDataSource() const { return m_updateJiraDataSource; }
  inline bool UpdateJiraDataSourceHasBeenSet() const { return m_updateJiraDataSourceHasBeenSet; }
  inline void SetUpdateJiraDataSource(CapabilityState value) {
    m_updateJiraDataSourceHasBeenSet = true;
    m_updateJiraDataSource = value;
  }
  inline Capabilities& WithUpdateJiraDataSource(CapabilityState value) {
    SetUpdateJiraDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Jira data sources.</p>
   */
  inline CapabilityState GetShareJiraDataSource() const { return m_shareJiraDataSource; }
  inline bool ShareJiraDataSourceHasBeenSet() const { return m_shareJiraDataSourceHasBeenSet; }
  inline void SetShareJiraDataSource(CapabilityState value) {
    m_shareJiraDataSourceHasBeenSet = true;
    m_shareJiraDataSource = value;
  }
  inline Capabilities& WithShareJiraDataSource(CapabilityState value) {
    SetShareJiraDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share ServiceNow data sources.</p>
   */
  inline CapabilityState GetServiceNowDataSource() const { return m_serviceNowDataSource; }
  inline bool ServiceNowDataSourceHasBeenSet() const { return m_serviceNowDataSourceHasBeenSet; }
  inline void SetServiceNowDataSource(CapabilityState value) {
    m_serviceNowDataSourceHasBeenSet = true;
    m_serviceNowDataSource = value;
  }
  inline Capabilities& WithServiceNowDataSource(CapabilityState value) {
    SetServiceNowDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create ServiceNow data sources.</p>
   */
  inline CapabilityState GetCreateServiceNowDataSource() const { return m_createServiceNowDataSource; }
  inline bool CreateServiceNowDataSourceHasBeenSet() const { return m_createServiceNowDataSourceHasBeenSet; }
  inline void SetCreateServiceNowDataSource(CapabilityState value) {
    m_createServiceNowDataSourceHasBeenSet = true;
    m_createServiceNowDataSource = value;
  }
  inline Capabilities& WithCreateServiceNowDataSource(CapabilityState value) {
    SetCreateServiceNowDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update ServiceNow data sources.</p>
   */
  inline CapabilityState GetUpdateServiceNowDataSource() const { return m_updateServiceNowDataSource; }
  inline bool UpdateServiceNowDataSourceHasBeenSet() const { return m_updateServiceNowDataSourceHasBeenSet; }
  inline void SetUpdateServiceNowDataSource(CapabilityState value) {
    m_updateServiceNowDataSourceHasBeenSet = true;
    m_updateServiceNowDataSource = value;
  }
  inline Capabilities& WithUpdateServiceNowDataSource(CapabilityState value) {
    SetUpdateServiceNowDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share ServiceNow data sources.</p>
   */
  inline CapabilityState GetShareServiceNowDataSource() const { return m_shareServiceNowDataSource; }
  inline bool ShareServiceNowDataSourceHasBeenSet() const { return m_shareServiceNowDataSourceHasBeenSet; }
  inline void SetShareServiceNowDataSource(CapabilityState value) {
    m_shareServiceNowDataSourceHasBeenSet = true;
    m_shareServiceNowDataSource = value;
  }
  inline Capabilities& WithShareServiceNowDataSource(CapabilityState value) {
    SetShareServiceNowDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Adobe Analytics data sources.</p>
   */
  inline CapabilityState GetAdobeAnalyticsDataSource() const { return m_adobeAnalyticsDataSource; }
  inline bool AdobeAnalyticsDataSourceHasBeenSet() const { return m_adobeAnalyticsDataSourceHasBeenSet; }
  inline void SetAdobeAnalyticsDataSource(CapabilityState value) {
    m_adobeAnalyticsDataSourceHasBeenSet = true;
    m_adobeAnalyticsDataSource = value;
  }
  inline Capabilities& WithAdobeAnalyticsDataSource(CapabilityState value) {
    SetAdobeAnalyticsDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Adobe Analytics data sources.</p>
   */
  inline CapabilityState GetCreateAdobeAnalyticsDataSource() const { return m_createAdobeAnalyticsDataSource; }
  inline bool CreateAdobeAnalyticsDataSourceHasBeenSet() const { return m_createAdobeAnalyticsDataSourceHasBeenSet; }
  inline void SetCreateAdobeAnalyticsDataSource(CapabilityState value) {
    m_createAdobeAnalyticsDataSourceHasBeenSet = true;
    m_createAdobeAnalyticsDataSource = value;
  }
  inline Capabilities& WithCreateAdobeAnalyticsDataSource(CapabilityState value) {
    SetCreateAdobeAnalyticsDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Adobe Analytics data sources.</p>
   */
  inline CapabilityState GetUpdateAdobeAnalyticsDataSource() const { return m_updateAdobeAnalyticsDataSource; }
  inline bool UpdateAdobeAnalyticsDataSourceHasBeenSet() const { return m_updateAdobeAnalyticsDataSourceHasBeenSet; }
  inline void SetUpdateAdobeAnalyticsDataSource(CapabilityState value) {
    m_updateAdobeAnalyticsDataSourceHasBeenSet = true;
    m_updateAdobeAnalyticsDataSource = value;
  }
  inline Capabilities& WithUpdateAdobeAnalyticsDataSource(CapabilityState value) {
    SetUpdateAdobeAnalyticsDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Adobe Analytics data sources.</p>
   */
  inline CapabilityState GetShareAdobeAnalyticsDataSource() const { return m_shareAdobeAnalyticsDataSource; }
  inline bool ShareAdobeAnalyticsDataSourceHasBeenSet() const { return m_shareAdobeAnalyticsDataSourceHasBeenSet; }
  inline void SetShareAdobeAnalyticsDataSource(CapabilityState value) {
    m_shareAdobeAnalyticsDataSourceHasBeenSet = true;
    m_shareAdobeAnalyticsDataSource = value;
  }
  inline Capabilities& WithShareAdobeAnalyticsDataSource(CapabilityState value) {
    SetShareAdobeAnalyticsDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Google Analytics data sources.</p>
   */
  inline CapabilityState GetGoogleAnalyticsDataSource() const { return m_googleAnalyticsDataSource; }
  inline bool GoogleAnalyticsDataSourceHasBeenSet() const { return m_googleAnalyticsDataSourceHasBeenSet; }
  inline void SetGoogleAnalyticsDataSource(CapabilityState value) {
    m_googleAnalyticsDataSourceHasBeenSet = true;
    m_googleAnalyticsDataSource = value;
  }
  inline Capabilities& WithGoogleAnalyticsDataSource(CapabilityState value) {
    SetGoogleAnalyticsDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Google Analytics data sources.</p>
   */
  inline CapabilityState GetCreateGoogleAnalyticsDataSource() const { return m_createGoogleAnalyticsDataSource; }
  inline bool CreateGoogleAnalyticsDataSourceHasBeenSet() const { return m_createGoogleAnalyticsDataSourceHasBeenSet; }
  inline void SetCreateGoogleAnalyticsDataSource(CapabilityState value) {
    m_createGoogleAnalyticsDataSourceHasBeenSet = true;
    m_createGoogleAnalyticsDataSource = value;
  }
  inline Capabilities& WithCreateGoogleAnalyticsDataSource(CapabilityState value) {
    SetCreateGoogleAnalyticsDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Google Analytics data sources.</p>
   */
  inline CapabilityState GetUpdateGoogleAnalyticsDataSource() const { return m_updateGoogleAnalyticsDataSource; }
  inline bool UpdateGoogleAnalyticsDataSourceHasBeenSet() const { return m_updateGoogleAnalyticsDataSourceHasBeenSet; }
  inline void SetUpdateGoogleAnalyticsDataSource(CapabilityState value) {
    m_updateGoogleAnalyticsDataSourceHasBeenSet = true;
    m_updateGoogleAnalyticsDataSource = value;
  }
  inline Capabilities& WithUpdateGoogleAnalyticsDataSource(CapabilityState value) {
    SetUpdateGoogleAnalyticsDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Google Analytics data sources.</p>
   */
  inline CapabilityState GetShareGoogleAnalyticsDataSource() const { return m_shareGoogleAnalyticsDataSource; }
  inline bool ShareGoogleAnalyticsDataSourceHasBeenSet() const { return m_shareGoogleAnalyticsDataSourceHasBeenSet; }
  inline void SetShareGoogleAnalyticsDataSource(CapabilityState value) {
    m_shareGoogleAnalyticsDataSourceHasBeenSet = true;
    m_shareGoogleAnalyticsDataSource = value;
  }
  inline Capabilities& WithShareGoogleAnalyticsDataSource(CapabilityState value) {
    SetShareGoogleAnalyticsDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Google Sheets data sources.</p>
   */
  inline CapabilityState GetGoogleSheetsDataSource() const { return m_googleSheetsDataSource; }
  inline bool GoogleSheetsDataSourceHasBeenSet() const { return m_googleSheetsDataSourceHasBeenSet; }
  inline void SetGoogleSheetsDataSource(CapabilityState value) {
    m_googleSheetsDataSourceHasBeenSet = true;
    m_googleSheetsDataSource = value;
  }
  inline Capabilities& WithGoogleSheetsDataSource(CapabilityState value) {
    SetGoogleSheetsDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Google Sheets data sources.</p>
   */
  inline CapabilityState GetCreateGoogleSheetsDataSource() const { return m_createGoogleSheetsDataSource; }
  inline bool CreateGoogleSheetsDataSourceHasBeenSet() const { return m_createGoogleSheetsDataSourceHasBeenSet; }
  inline void SetCreateGoogleSheetsDataSource(CapabilityState value) {
    m_createGoogleSheetsDataSourceHasBeenSet = true;
    m_createGoogleSheetsDataSource = value;
  }
  inline Capabilities& WithCreateGoogleSheetsDataSource(CapabilityState value) {
    SetCreateGoogleSheetsDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Google Sheets data sources.</p>
   */
  inline CapabilityState GetUpdateGoogleSheetsDataSource() const { return m_updateGoogleSheetsDataSource; }
  inline bool UpdateGoogleSheetsDataSourceHasBeenSet() const { return m_updateGoogleSheetsDataSourceHasBeenSet; }
  inline void SetUpdateGoogleSheetsDataSource(CapabilityState value) {
    m_updateGoogleSheetsDataSourceHasBeenSet = true;
    m_updateGoogleSheetsDataSource = value;
  }
  inline Capabilities& WithUpdateGoogleSheetsDataSource(CapabilityState value) {
    SetUpdateGoogleSheetsDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Google Sheets data sources.</p>
   */
  inline CapabilityState GetShareGoogleSheetsDataSource() const { return m_shareGoogleSheetsDataSource; }
  inline bool ShareGoogleSheetsDataSourceHasBeenSet() const { return m_shareGoogleSheetsDataSourceHasBeenSet; }
  inline void SetShareGoogleSheetsDataSource(CapabilityState value) {
    m_shareGoogleSheetsDataSourceHasBeenSet = true;
    m_shareGoogleSheetsDataSource = value;
  }
  inline Capabilities& WithShareGoogleSheetsDataSource(CapabilityState value) {
    SetShareGoogleSheetsDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Amazon DocumentDB data sources.</p>
   */
  inline CapabilityState GetDocumentDbDataSource() const { return m_documentDbDataSource; }
  inline bool DocumentDbDataSourceHasBeenSet() const { return m_documentDbDataSourceHasBeenSet; }
  inline void SetDocumentDbDataSource(CapabilityState value) {
    m_documentDbDataSourceHasBeenSet = true;
    m_documentDbDataSource = value;
  }
  inline Capabilities& WithDocumentDbDataSource(CapabilityState value) {
    SetDocumentDbDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Amazon DocumentDB data sources.</p>
   */
  inline CapabilityState GetCreateDocumentDbDataSource() const { return m_createDocumentDbDataSource; }
  inline bool CreateDocumentDbDataSourceHasBeenSet() const { return m_createDocumentDbDataSourceHasBeenSet; }
  inline void SetCreateDocumentDbDataSource(CapabilityState value) {
    m_createDocumentDbDataSourceHasBeenSet = true;
    m_createDocumentDbDataSource = value;
  }
  inline Capabilities& WithCreateDocumentDbDataSource(CapabilityState value) {
    SetCreateDocumentDbDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Amazon DocumentDB data sources.</p>
   */
  inline CapabilityState GetUpdateDocumentDbDataSource() const { return m_updateDocumentDbDataSource; }
  inline bool UpdateDocumentDbDataSourceHasBeenSet() const { return m_updateDocumentDbDataSourceHasBeenSet; }
  inline void SetUpdateDocumentDbDataSource(CapabilityState value) {
    m_updateDocumentDbDataSourceHasBeenSet = true;
    m_updateDocumentDbDataSource = value;
  }
  inline Capabilities& WithUpdateDocumentDbDataSource(CapabilityState value) {
    SetUpdateDocumentDbDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Amazon DocumentDB data sources.</p>
   */
  inline CapabilityState GetShareDocumentDbDataSource() const { return m_shareDocumentDbDataSource; }
  inline bool ShareDocumentDbDataSourceHasBeenSet() const { return m_shareDocumentDbDataSourceHasBeenSet; }
  inline void SetShareDocumentDbDataSource(CapabilityState value) {
    m_shareDocumentDbDataSourceHasBeenSet = true;
    m_shareDocumentDbDataSource = value;
  }
  inline Capabilities& WithShareDocumentDbDataSource(CapabilityState value) {
    SetShareDocumentDbDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share MongoDB data sources.</p>
   */
  inline CapabilityState GetMongoDbDataSource() const { return m_mongoDbDataSource; }
  inline bool MongoDbDataSourceHasBeenSet() const { return m_mongoDbDataSourceHasBeenSet; }
  inline void SetMongoDbDataSource(CapabilityState value) {
    m_mongoDbDataSourceHasBeenSet = true;
    m_mongoDbDataSource = value;
  }
  inline Capabilities& WithMongoDbDataSource(CapabilityState value) {
    SetMongoDbDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create MongoDB data sources.</p>
   */
  inline CapabilityState GetCreateMongoDbDataSource() const { return m_createMongoDbDataSource; }
  inline bool CreateMongoDbDataSourceHasBeenSet() const { return m_createMongoDbDataSourceHasBeenSet; }
  inline void SetCreateMongoDbDataSource(CapabilityState value) {
    m_createMongoDbDataSourceHasBeenSet = true;
    m_createMongoDbDataSource = value;
  }
  inline Capabilities& WithCreateMongoDbDataSource(CapabilityState value) {
    SetCreateMongoDbDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update MongoDB data sources.</p>
   */
  inline CapabilityState GetUpdateMongoDbDataSource() const { return m_updateMongoDbDataSource; }
  inline bool UpdateMongoDbDataSourceHasBeenSet() const { return m_updateMongoDbDataSourceHasBeenSet; }
  inline void SetUpdateMongoDbDataSource(CapabilityState value) {
    m_updateMongoDbDataSourceHasBeenSet = true;
    m_updateMongoDbDataSource = value;
  }
  inline Capabilities& WithUpdateMongoDbDataSource(CapabilityState value) {
    SetUpdateMongoDbDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share MongoDB data sources.</p>
   */
  inline CapabilityState GetShareMongoDbDataSource() const { return m_shareMongoDbDataSource; }
  inline bool ShareMongoDbDataSourceHasBeenSet() const { return m_shareMongoDbDataSourceHasBeenSet; }
  inline void SetShareMongoDbDataSource(CapabilityState value) {
    m_shareMongoDbDataSourceHasBeenSet = true;
    m_shareMongoDbDataSource = value;
  }
  inline Capabilities& WithShareMongoDbDataSource(CapabilityState value) {
    SetShareMongoDbDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share MongoDB Atlas data sources.</p>
   */
  inline CapabilityState GetMongoAtlasDataSource() const { return m_mongoAtlasDataSource; }
  inline bool MongoAtlasDataSourceHasBeenSet() const { return m_mongoAtlasDataSourceHasBeenSet; }
  inline void SetMongoAtlasDataSource(CapabilityState value) {
    m_mongoAtlasDataSourceHasBeenSet = true;
    m_mongoAtlasDataSource = value;
  }
  inline Capabilities& WithMongoAtlasDataSource(CapabilityState value) {
    SetMongoAtlasDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create MongoDB Atlas data sources.</p>
   */
  inline CapabilityState GetCreateMongoAtlasDataSource() const { return m_createMongoAtlasDataSource; }
  inline bool CreateMongoAtlasDataSourceHasBeenSet() const { return m_createMongoAtlasDataSourceHasBeenSet; }
  inline void SetCreateMongoAtlasDataSource(CapabilityState value) {
    m_createMongoAtlasDataSourceHasBeenSet = true;
    m_createMongoAtlasDataSource = value;
  }
  inline Capabilities& WithCreateMongoAtlasDataSource(CapabilityState value) {
    SetCreateMongoAtlasDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update MongoDB Atlas data sources.</p>
   */
  inline CapabilityState GetUpdateMongoAtlasDataSource() const { return m_updateMongoAtlasDataSource; }
  inline bool UpdateMongoAtlasDataSourceHasBeenSet() const { return m_updateMongoAtlasDataSourceHasBeenSet; }
  inline void SetUpdateMongoAtlasDataSource(CapabilityState value) {
    m_updateMongoAtlasDataSourceHasBeenSet = true;
    m_updateMongoAtlasDataSource = value;
  }
  inline Capabilities& WithUpdateMongoAtlasDataSource(CapabilityState value) {
    SetUpdateMongoAtlasDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share MongoDB Atlas data sources.</p>
   */
  inline CapabilityState GetShareMongoAtlasDataSource() const { return m_shareMongoAtlasDataSource; }
  inline bool ShareMongoAtlasDataSourceHasBeenSet() const { return m_shareMongoAtlasDataSourceHasBeenSet; }
  inline void SetShareMongoAtlasDataSource(CapabilityState value) {
    m_shareMongoAtlasDataSourceHasBeenSet = true;
    m_shareMongoAtlasDataSource = value;
  }
  inline Capabilities& WithShareMongoAtlasDataSource(CapabilityState value) {
    SetShareMongoAtlasDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create, update, and share Amazon DynamoDB data sources.</p>
   */
  inline CapabilityState GetDynamoDbDataSource() const { return m_dynamoDbDataSource; }
  inline bool DynamoDbDataSourceHasBeenSet() const { return m_dynamoDbDataSourceHasBeenSet; }
  inline void SetDynamoDbDataSource(CapabilityState value) {
    m_dynamoDbDataSourceHasBeenSet = true;
    m_dynamoDbDataSource = value;
  }
  inline Capabilities& WithDynamoDbDataSource(CapabilityState value) {
    SetDynamoDbDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to create Amazon DynamoDB data sources.</p>
   */
  inline CapabilityState GetCreateDynamoDbDataSource() const { return m_createDynamoDbDataSource; }
  inline bool CreateDynamoDbDataSourceHasBeenSet() const { return m_createDynamoDbDataSourceHasBeenSet; }
  inline void SetCreateDynamoDbDataSource(CapabilityState value) {
    m_createDynamoDbDataSourceHasBeenSet = true;
    m_createDynamoDbDataSource = value;
  }
  inline Capabilities& WithCreateDynamoDbDataSource(CapabilityState value) {
    SetCreateDynamoDbDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to update Amazon DynamoDB data sources.</p>
   */
  inline CapabilityState GetUpdateDynamoDbDataSource() const { return m_updateDynamoDbDataSource; }
  inline bool UpdateDynamoDbDataSourceHasBeenSet() const { return m_updateDynamoDbDataSourceHasBeenSet; }
  inline void SetUpdateDynamoDbDataSource(CapabilityState value) {
    m_updateDynamoDbDataSourceHasBeenSet = true;
    m_updateDynamoDbDataSource = value;
  }
  inline Capabilities& WithUpdateDynamoDbDataSource(CapabilityState value) {
    SetUpdateDynamoDbDataSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ability to share Amazon DynamoDB data sources.</p>
   */
  inline CapabilityState GetShareDynamoDbDataSource() const { return m_shareDynamoDbDataSource; }
  inline bool ShareDynamoDbDataSourceHasBeenSet() const { return m_shareDynamoDbDataSourceHasBeenSet; }
  inline void SetShareDynamoDbDataSource(CapabilityState value) {
    m_shareDynamoDbDataSourceHasBeenSet = true;
    m_shareDynamoDbDataSource = value;
  }
  inline Capabilities& WithShareDynamoDbDataSource(CapabilityState value) {
    SetShareDynamoDbDataSource(value);
    return *this;
  }
  ///@}
 private:
  CapabilityState m_exportToCsv{CapabilityState::NOT_SET};

  CapabilityState m_exportToExcel{CapabilityState::NOT_SET};

  CapabilityState m_exportToPdf{CapabilityState::NOT_SET};

  CapabilityState m_printReports{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateThemes{CapabilityState::NOT_SET};

  CapabilityState m_addOrRunAnomalyDetectionForAnalyses{CapabilityState::NOT_SET};

  CapabilityState m_shareAnalyses{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateDatasets{CapabilityState::NOT_SET};

  CapabilityState m_shareDatasets{CapabilityState::NOT_SET};

  CapabilityState m_subscribeDashboardEmailReports{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateDashboardEmailReports{CapabilityState::NOT_SET};

  CapabilityState m_shareDashboards{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateThresholdAlerts{CapabilityState::NOT_SET};

  CapabilityState m_renameSharedFolders{CapabilityState::NOT_SET};

  CapabilityState m_createSharedFolders{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateDataSources{CapabilityState::NOT_SET};

  CapabilityState m_shareDataSources{CapabilityState::NOT_SET};

  CapabilityState m_viewAccountSPICECapacity{CapabilityState::NOT_SET};

  CapabilityState m_createSPICEDataset{CapabilityState::NOT_SET};

  CapabilityState m_exportToPdfInScheduledReports{CapabilityState::NOT_SET};

  CapabilityState m_exportToCsvInScheduledReports{CapabilityState::NOT_SET};

  CapabilityState m_exportToExcelInScheduledReports{CapabilityState::NOT_SET};

  CapabilityState m_includeContentInScheduledReportsEmail{CapabilityState::NOT_SET};

  CapabilityState m_dashboard{CapabilityState::NOT_SET};

  CapabilityState m_analysis{CapabilityState::NOT_SET};

  CapabilityState m_automate{CapabilityState::NOT_SET};

  CapabilityState m_flow{CapabilityState::NOT_SET};

  CapabilityState m_apps{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateApps{CapabilityState::NOT_SET};

  CapabilityState m_shareApps{CapabilityState::NOT_SET};

  CapabilityState m_invokeAppsAIInference{CapabilityState::NOT_SET};

  CapabilityState m_accessAppsNativeDataStore{CapabilityState::NOT_SET};

  CapabilityState m_publishWithoutApproval{CapabilityState::NOT_SET};

  CapabilityState m_useBedrockModels{CapabilityState::NOT_SET};

  CapabilityState m_performFlowUiTask{CapabilityState::NOT_SET};

  CapabilityState m_approveFlowShareRequests{CapabilityState::NOT_SET};

  CapabilityState m_useAgentWebSearch{CapabilityState::NOT_SET};

  CapabilityState m_knowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateKnowledgeBases{CapabilityState::NOT_SET};

  CapabilityState m_shareKnowledgeBases{CapabilityState::NOT_SET};

  CapabilityState m_sharePointKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateSharePointKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_shareSharePointKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_useSharePointKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_googleDriveKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateGoogleDriveKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_shareGoogleDriveKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_useGoogleDriveKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_webCrawlerKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateWebCrawlerKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_shareWebCrawlerKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_useWebCrawlerKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_s3KnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateS3KnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_shareS3KnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_useS3KnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_confluenceKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateConfluenceKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_shareConfluenceKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_useConfluenceKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_oneDriveKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateOneDriveKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_shareOneDriveKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_useOneDriveKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_qBusinessKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateQBusinessKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_shareQBusinessKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_useQBusinessKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_bedrockManagedKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateBedrockManagedKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_shareBedrockManagedKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_useBedrockManagedKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_boxKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateBoxKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_shareBoxKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_useBoxKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_iDCKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateIDCKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_shareIDCKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_useIDCKnowledgeBase{CapabilityState::NOT_SET};

  CapabilityState m_action{CapabilityState::NOT_SET};

  CapabilityState m_genericHTTPAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateGenericHTTPAction{CapabilityState::NOT_SET};

  CapabilityState m_shareGenericHTTPAction{CapabilityState::NOT_SET};

  CapabilityState m_useGenericHTTPAction{CapabilityState::NOT_SET};

  CapabilityState m_asanaAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateAsanaAction{CapabilityState::NOT_SET};

  CapabilityState m_shareAsanaAction{CapabilityState::NOT_SET};

  CapabilityState m_useAsanaAction{CapabilityState::NOT_SET};

  CapabilityState m_slackAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateSlackAction{CapabilityState::NOT_SET};

  CapabilityState m_shareSlackAction{CapabilityState::NOT_SET};

  CapabilityState m_useSlackAction{CapabilityState::NOT_SET};

  CapabilityState m_serviceNowAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateServiceNowAction{CapabilityState::NOT_SET};

  CapabilityState m_shareServiceNowAction{CapabilityState::NOT_SET};

  CapabilityState m_useServiceNowAction{CapabilityState::NOT_SET};

  CapabilityState m_salesforceAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateSalesforceAction{CapabilityState::NOT_SET};

  CapabilityState m_shareSalesforceAction{CapabilityState::NOT_SET};

  CapabilityState m_useSalesforceAction{CapabilityState::NOT_SET};

  CapabilityState m_mSExchangeAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateMSExchangeAction{CapabilityState::NOT_SET};

  CapabilityState m_shareMSExchangeAction{CapabilityState::NOT_SET};

  CapabilityState m_useMSExchangeAction{CapabilityState::NOT_SET};

  CapabilityState m_pagerDutyAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdatePagerDutyAction{CapabilityState::NOT_SET};

  CapabilityState m_sharePagerDutyAction{CapabilityState::NOT_SET};

  CapabilityState m_usePagerDutyAction{CapabilityState::NOT_SET};

  CapabilityState m_jiraAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateJiraAction{CapabilityState::NOT_SET};

  CapabilityState m_shareJiraAction{CapabilityState::NOT_SET};

  CapabilityState m_useJiraAction{CapabilityState::NOT_SET};

  CapabilityState m_confluenceAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateConfluenceAction{CapabilityState::NOT_SET};

  CapabilityState m_shareConfluenceAction{CapabilityState::NOT_SET};

  CapabilityState m_useConfluenceAction{CapabilityState::NOT_SET};

  CapabilityState m_oneDriveAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateOneDriveAction{CapabilityState::NOT_SET};

  CapabilityState m_shareOneDriveAction{CapabilityState::NOT_SET};

  CapabilityState m_useOneDriveAction{CapabilityState::NOT_SET};

  CapabilityState m_sharePointAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateSharePointAction{CapabilityState::NOT_SET};

  CapabilityState m_shareSharePointAction{CapabilityState::NOT_SET};

  CapabilityState m_useSharePointAction{CapabilityState::NOT_SET};

  CapabilityState m_mSTeamsAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateMSTeamsAction{CapabilityState::NOT_SET};

  CapabilityState m_shareMSTeamsAction{CapabilityState::NOT_SET};

  CapabilityState m_useMSTeamsAction{CapabilityState::NOT_SET};

  CapabilityState m_googleCalendarAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateGoogleCalendarAction{CapabilityState::NOT_SET};

  CapabilityState m_shareGoogleCalendarAction{CapabilityState::NOT_SET};

  CapabilityState m_useGoogleCalendarAction{CapabilityState::NOT_SET};

  CapabilityState m_zendeskAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateZendeskAction{CapabilityState::NOT_SET};

  CapabilityState m_shareZendeskAction{CapabilityState::NOT_SET};

  CapabilityState m_useZendeskAction{CapabilityState::NOT_SET};

  CapabilityState m_smartsheetAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateSmartsheetAction{CapabilityState::NOT_SET};

  CapabilityState m_shareSmartsheetAction{CapabilityState::NOT_SET};

  CapabilityState m_useSmartsheetAction{CapabilityState::NOT_SET};

  CapabilityState m_sAPBusinessPartnerAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateSAPBusinessPartnerAction{CapabilityState::NOT_SET};

  CapabilityState m_shareSAPBusinessPartnerAction{CapabilityState::NOT_SET};

  CapabilityState m_useSAPBusinessPartnerAction{CapabilityState::NOT_SET};

  CapabilityState m_sAPProductMasterDataAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateSAPProductMasterDataAction{CapabilityState::NOT_SET};

  CapabilityState m_shareSAPProductMasterDataAction{CapabilityState::NOT_SET};

  CapabilityState m_useSAPProductMasterDataAction{CapabilityState::NOT_SET};

  CapabilityState m_sAPPhysicalInventoryAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateSAPPhysicalInventoryAction{CapabilityState::NOT_SET};

  CapabilityState m_shareSAPPhysicalInventoryAction{CapabilityState::NOT_SET};

  CapabilityState m_useSAPPhysicalInventoryAction{CapabilityState::NOT_SET};

  CapabilityState m_sAPBillOfMaterialAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateSAPBillOfMaterialAction{CapabilityState::NOT_SET};

  CapabilityState m_shareSAPBillOfMaterialAction{CapabilityState::NOT_SET};

  CapabilityState m_useSAPBillOfMaterialAction{CapabilityState::NOT_SET};

  CapabilityState m_sAPMaterialStockAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateSAPMaterialStockAction{CapabilityState::NOT_SET};

  CapabilityState m_shareSAPMaterialStockAction{CapabilityState::NOT_SET};

  CapabilityState m_useSAPMaterialStockAction{CapabilityState::NOT_SET};

  CapabilityState m_factSetAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateFactSetAction{CapabilityState::NOT_SET};

  CapabilityState m_shareFactSetAction{CapabilityState::NOT_SET};

  CapabilityState m_useFactSetAction{CapabilityState::NOT_SET};

  CapabilityState m_amazonSThreeAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateAmazonSThreeAction{CapabilityState::NOT_SET};

  CapabilityState m_shareAmazonSThreeAction{CapabilityState::NOT_SET};

  CapabilityState m_useAmazonSThreeAction{CapabilityState::NOT_SET};

  CapabilityState m_textractAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateTextractAction{CapabilityState::NOT_SET};

  CapabilityState m_shareTextractAction{CapabilityState::NOT_SET};

  CapabilityState m_useTextractAction{CapabilityState::NOT_SET};

  CapabilityState m_comprehendAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateComprehendAction{CapabilityState::NOT_SET};

  CapabilityState m_shareComprehendAction{CapabilityState::NOT_SET};

  CapabilityState m_useComprehendAction{CapabilityState::NOT_SET};

  CapabilityState m_comprehendMedicalAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateComprehendMedicalAction{CapabilityState::NOT_SET};

  CapabilityState m_shareComprehendMedicalAction{CapabilityState::NOT_SET};

  CapabilityState m_useComprehendMedicalAction{CapabilityState::NOT_SET};

  CapabilityState m_amazonBedrockARSAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateAmazonBedrockARSAction{CapabilityState::NOT_SET};

  CapabilityState m_shareAmazonBedrockARSAction{CapabilityState::NOT_SET};

  CapabilityState m_useAmazonBedrockARSAction{CapabilityState::NOT_SET};

  CapabilityState m_amazonBedrockFSAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateAmazonBedrockFSAction{CapabilityState::NOT_SET};

  CapabilityState m_shareAmazonBedrockFSAction{CapabilityState::NOT_SET};

  CapabilityState m_useAmazonBedrockFSAction{CapabilityState::NOT_SET};

  CapabilityState m_amazonBedrockKRSAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateAmazonBedrockKRSAction{CapabilityState::NOT_SET};

  CapabilityState m_shareAmazonBedrockKRSAction{CapabilityState::NOT_SET};

  CapabilityState m_useAmazonBedrockKRSAction{CapabilityState::NOT_SET};

  CapabilityState m_mCPAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateMCPAction{CapabilityState::NOT_SET};

  CapabilityState m_shareMCPAction{CapabilityState::NOT_SET};

  CapabilityState m_useMCPAction{CapabilityState::NOT_SET};

  CapabilityState m_openAPIAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateOpenAPIAction{CapabilityState::NOT_SET};

  CapabilityState m_shareOpenAPIAction{CapabilityState::NOT_SET};

  CapabilityState m_useOpenAPIAction{CapabilityState::NOT_SET};

  CapabilityState m_sandPGMIAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateSandPGMIAction{CapabilityState::NOT_SET};

  CapabilityState m_shareSandPGMIAction{CapabilityState::NOT_SET};

  CapabilityState m_useSandPGMIAction{CapabilityState::NOT_SET};

  CapabilityState m_sandPGlobalEnergyAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateSandPGlobalEnergyAction{CapabilityState::NOT_SET};

  CapabilityState m_shareSandPGlobalEnergyAction{CapabilityState::NOT_SET};

  CapabilityState m_useSandPGlobalEnergyAction{CapabilityState::NOT_SET};

  CapabilityState m_bambooHRAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateBambooHRAction{CapabilityState::NOT_SET};

  CapabilityState m_shareBambooHRAction{CapabilityState::NOT_SET};

  CapabilityState m_useBambooHRAction{CapabilityState::NOT_SET};

  CapabilityState m_boxAgentAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateBoxAgentAction{CapabilityState::NOT_SET};

  CapabilityState m_shareBoxAgentAction{CapabilityState::NOT_SET};

  CapabilityState m_useBoxAgentAction{CapabilityState::NOT_SET};

  CapabilityState m_canvaAgentAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateCanvaAgentAction{CapabilityState::NOT_SET};

  CapabilityState m_shareCanvaAgentAction{CapabilityState::NOT_SET};

  CapabilityState m_useCanvaAgentAction{CapabilityState::NOT_SET};

  CapabilityState m_githubAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateGithubAction{CapabilityState::NOT_SET};

  CapabilityState m_shareGithubAction{CapabilityState::NOT_SET};

  CapabilityState m_useGithubAction{CapabilityState::NOT_SET};

  CapabilityState m_notionAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateNotionAction{CapabilityState::NOT_SET};

  CapabilityState m_shareNotionAction{CapabilityState::NOT_SET};

  CapabilityState m_useNotionAction{CapabilityState::NOT_SET};

  CapabilityState m_linearAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateLinearAction{CapabilityState::NOT_SET};

  CapabilityState m_shareLinearAction{CapabilityState::NOT_SET};

  CapabilityState m_useLinearAction{CapabilityState::NOT_SET};

  CapabilityState m_huggingFaceAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateHuggingFaceAction{CapabilityState::NOT_SET};

  CapabilityState m_shareHuggingFaceAction{CapabilityState::NOT_SET};

  CapabilityState m_useHuggingFaceAction{CapabilityState::NOT_SET};

  CapabilityState m_mondayAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateMondayAction{CapabilityState::NOT_SET};

  CapabilityState m_shareMondayAction{CapabilityState::NOT_SET};

  CapabilityState m_useMondayAction{CapabilityState::NOT_SET};

  CapabilityState m_hubspotAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateHubspotAction{CapabilityState::NOT_SET};

  CapabilityState m_shareHubspotAction{CapabilityState::NOT_SET};

  CapabilityState m_useHubspotAction{CapabilityState::NOT_SET};

  CapabilityState m_intercomAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateIntercomAction{CapabilityState::NOT_SET};

  CapabilityState m_shareIntercomAction{CapabilityState::NOT_SET};

  CapabilityState m_useIntercomAction{CapabilityState::NOT_SET};

  CapabilityState m_newRelicAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateNewRelicAction{CapabilityState::NOT_SET};

  CapabilityState m_shareNewRelicAction{CapabilityState::NOT_SET};

  CapabilityState m_useNewRelicAction{CapabilityState::NOT_SET};

  CapabilityState m_pagerDutyAgentAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdatePagerDutyAgentAction{CapabilityState::NOT_SET};

  CapabilityState m_sharePagerDutyAgentAction{CapabilityState::NOT_SET};

  CapabilityState m_usePagerDutyAgentAction{CapabilityState::NOT_SET};

  CapabilityState m_visierAgentAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateVisierAgentAction{CapabilityState::NOT_SET};

  CapabilityState m_shareVisierAgentAction{CapabilityState::NOT_SET};

  CapabilityState m_useVisierAgentAction{CapabilityState::NOT_SET};

  CapabilityState m_zoomAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateZoomAction{CapabilityState::NOT_SET};

  CapabilityState m_shareZoomAction{CapabilityState::NOT_SET};

  CapabilityState m_useZoomAction{CapabilityState::NOT_SET};

  CapabilityState m_snowFlakeAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateSnowFlakeAction{CapabilityState::NOT_SET};

  CapabilityState m_shareSnowFlakeAction{CapabilityState::NOT_SET};

  CapabilityState m_useSnowFlakeAction{CapabilityState::NOT_SET};

  CapabilityState m_zapierAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateZapierAction{CapabilityState::NOT_SET};

  CapabilityState m_shareZapierAction{CapabilityState::NOT_SET};

  CapabilityState m_useZapierAction{CapabilityState::NOT_SET};

  CapabilityState m_airtableAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateAirtableAction{CapabilityState::NOT_SET};

  CapabilityState m_shareAirtableAction{CapabilityState::NOT_SET};

  CapabilityState m_useAirtableAction{CapabilityState::NOT_SET};

  CapabilityState m_dropboxAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateDropboxAction{CapabilityState::NOT_SET};

  CapabilityState m_shareDropboxAction{CapabilityState::NOT_SET};

  CapabilityState m_useDropboxAction{CapabilityState::NOT_SET};

  CapabilityState m_gmailAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateGmailAction{CapabilityState::NOT_SET};

  CapabilityState m_shareGmailAction{CapabilityState::NOT_SET};

  CapabilityState m_useGmailAction{CapabilityState::NOT_SET};

  CapabilityState m_googleAnalyticsAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateGoogleAnalyticsAction{CapabilityState::NOT_SET};

  CapabilityState m_shareGoogleAnalyticsAction{CapabilityState::NOT_SET};

  CapabilityState m_useGoogleAnalyticsAction{CapabilityState::NOT_SET};

  CapabilityState m_googleDocsAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateGoogleDocsAction{CapabilityState::NOT_SET};

  CapabilityState m_shareGoogleDocsAction{CapabilityState::NOT_SET};

  CapabilityState m_useGoogleDocsAction{CapabilityState::NOT_SET};

  CapabilityState m_googleDriveAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateGoogleDriveAction{CapabilityState::NOT_SET};

  CapabilityState m_shareGoogleDriveAction{CapabilityState::NOT_SET};

  CapabilityState m_useGoogleDriveAction{CapabilityState::NOT_SET};

  CapabilityState m_googleMeetAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateGoogleMeetAction{CapabilityState::NOT_SET};

  CapabilityState m_shareGoogleMeetAction{CapabilityState::NOT_SET};

  CapabilityState m_useGoogleMeetAction{CapabilityState::NOT_SET};

  CapabilityState m_googleSheetsAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateGoogleSheetsAction{CapabilityState::NOT_SET};

  CapabilityState m_shareGoogleSheetsAction{CapabilityState::NOT_SET};

  CapabilityState m_useGoogleSheetsAction{CapabilityState::NOT_SET};

  CapabilityState m_googleSlidesAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateGoogleSlidesAction{CapabilityState::NOT_SET};

  CapabilityState m_shareGoogleSlidesAction{CapabilityState::NOT_SET};

  CapabilityState m_useGoogleSlidesAction{CapabilityState::NOT_SET};

  CapabilityState m_quickBooksAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateQuickBooksAction{CapabilityState::NOT_SET};

  CapabilityState m_shareQuickBooksAction{CapabilityState::NOT_SET};

  CapabilityState m_useQuickBooksAction{CapabilityState::NOT_SET};

  CapabilityState m_figmaAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateFigmaAction{CapabilityState::NOT_SET};

  CapabilityState m_shareFigmaAction{CapabilityState::NOT_SET};

  CapabilityState m_useFigmaAction{CapabilityState::NOT_SET};

  CapabilityState m_whatsAppAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateWhatsAppAction{CapabilityState::NOT_SET};

  CapabilityState m_shareWhatsAppAction{CapabilityState::NOT_SET};

  CapabilityState m_useWhatsAppAction{CapabilityState::NOT_SET};

  CapabilityState m_googleChatAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateGoogleChatAction{CapabilityState::NOT_SET};

  CapabilityState m_shareGoogleChatAction{CapabilityState::NOT_SET};

  CapabilityState m_useGoogleChatAction{CapabilityState::NOT_SET};

  CapabilityState m_oneNoteAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateOneNoteAction{CapabilityState::NOT_SET};

  CapabilityState m_shareOneNoteAction{CapabilityState::NOT_SET};

  CapabilityState m_useOneNoteAction{CapabilityState::NOT_SET};

  CapabilityState m_shopifyAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateShopifyAction{CapabilityState::NOT_SET};

  CapabilityState m_shareShopifyAction{CapabilityState::NOT_SET};

  CapabilityState m_useShopifyAction{CapabilityState::NOT_SET};

  CapabilityState m_adobeAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateAdobeAction{CapabilityState::NOT_SET};

  CapabilityState m_shareAdobeAction{CapabilityState::NOT_SET};

  CapabilityState m_useAdobeAction{CapabilityState::NOT_SET};

  CapabilityState m_ciscoWebexVidcastAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateCiscoWebexVidcastAction{CapabilityState::NOT_SET};

  CapabilityState m_shareCiscoWebexVidcastAction{CapabilityState::NOT_SET};

  CapabilityState m_useCiscoWebexVidcastAction{CapabilityState::NOT_SET};

  CapabilityState m_ciscoWebexMeetingsAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateCiscoWebexMeetingsAction{CapabilityState::NOT_SET};

  CapabilityState m_shareCiscoWebexMeetingsAction{CapabilityState::NOT_SET};

  CapabilityState m_useCiscoWebexMeetingsAction{CapabilityState::NOT_SET};

  CapabilityState m_dunAndBradstreetAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateDunAndBradstreetAction{CapabilityState::NOT_SET};

  CapabilityState m_shareDunAndBradstreetAction{CapabilityState::NOT_SET};

  CapabilityState m_useDunAndBradstreetAction{CapabilityState::NOT_SET};

  CapabilityState m_hGInsightsAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateHGInsightsAction{CapabilityState::NOT_SET};

  CapabilityState m_shareHGInsightsAction{CapabilityState::NOT_SET};

  CapabilityState m_useHGInsightsAction{CapabilityState::NOT_SET};

  CapabilityState m_zoomInfoAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateZoomInfoAction{CapabilityState::NOT_SET};

  CapabilityState m_shareZoomInfoAction{CapabilityState::NOT_SET};

  CapabilityState m_useZoomInfoAction{CapabilityState::NOT_SET};

  CapabilityState m_moodysAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateMoodysAction{CapabilityState::NOT_SET};

  CapabilityState m_shareMoodysAction{CapabilityState::NOT_SET};

  CapabilityState m_useMoodysAction{CapabilityState::NOT_SET};

  CapabilityState m_beeAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateBeeAction{CapabilityState::NOT_SET};

  CapabilityState m_shareBeeAction{CapabilityState::NOT_SET};

  CapabilityState m_useBeeAction{CapabilityState::NOT_SET};

  CapabilityState m_gongAction{CapabilityState::NOT_SET};

  CapabilityState m_createAndUpdateGongAction{CapabilityState::NOT_SET};

  CapabilityState m_shareGongAction{CapabilityState::NOT_SET};

  CapabilityState m_useGongAction{CapabilityState::NOT_SET};

  CapabilityState m_topic{CapabilityState::NOT_SET};

  CapabilityState m_editVisualWithQ{CapabilityState::NOT_SET};

  CapabilityState m_buildCalculatedFieldWithQ{CapabilityState::NOT_SET};

  CapabilityState m_createDashboardExecutiveSummaryWithQ{CapabilityState::NOT_SET};

  CapabilityState m_space{CapabilityState::NOT_SET};

  CapabilityState m_createSpaces{CapabilityState::NOT_SET};

  CapabilityState m_shareSpaces{CapabilityState::NOT_SET};

  CapabilityState m_chatAgent{CapabilityState::NOT_SET};

  CapabilityState m_createChatAgents{CapabilityState::NOT_SET};

  CapabilityState m_shareChatAgents{CapabilityState::NOT_SET};

  CapabilityState m_research{CapabilityState::NOT_SET};

  CapabilityState m_selfUpgradeUserRole{CapabilityState::NOT_SET};

  CapabilityState m_extension{CapabilityState::NOT_SET};

  CapabilityState m_useBrowserExtension{CapabilityState::NOT_SET};

  CapabilityState m_useWordAddInExtension{CapabilityState::NOT_SET};

  CapabilityState m_useOutlookAddInExtension{CapabilityState::NOT_SET};

  CapabilityState m_useExcelAddInExtension{CapabilityState::NOT_SET};

  CapabilityState m_usePowerpointAddInExtension{CapabilityState::NOT_SET};

  CapabilityState m_manageSharedFolders{CapabilityState::NOT_SET};

  CapabilityState m_generateAnalyses{CapabilityState::NOT_SET};

  CapabilityState m_story{CapabilityState::NOT_SET};

  CapabilityState m_scenario{CapabilityState::NOT_SET};

  CapabilityState m_trigger{CapabilityState::NOT_SET};

  CapabilityState m_scheduleTrigger{CapabilityState::NOT_SET};

  CapabilityState m_inboundEmailTrigger{CapabilityState::NOT_SET};

  CapabilityState m_quickEventTrigger{CapabilityState::NOT_SET};

  CapabilityState m_fileDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createFileDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateFileDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareFileDataSource{CapabilityState::NOT_SET};

  CapabilityState m_s3DataSource{CapabilityState::NOT_SET};

  CapabilityState m_createS3DataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateS3DataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareS3DataSource{CapabilityState::NOT_SET};

  CapabilityState m_s3AnalyticsDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createS3AnalyticsDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateS3AnalyticsDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareS3AnalyticsDataSource{CapabilityState::NOT_SET};

  CapabilityState m_s3TablesDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createS3TablesDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateS3TablesDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareS3TablesDataSource{CapabilityState::NOT_SET};

  CapabilityState m_athenaDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createAthenaDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateAthenaDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareAthenaDataSource{CapabilityState::NOT_SET};

  CapabilityState m_rdsDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createRdsDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateRdsDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareRdsDataSource{CapabilityState::NOT_SET};

  CapabilityState m_redshiftAutoDiscoveredDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createRedshiftAutoDiscoveredDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateRedshiftAutoDiscoveredDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareRedshiftAutoDiscoveredDataSource{CapabilityState::NOT_SET};

  CapabilityState m_redshiftManualDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createRedshiftManualDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateRedshiftManualDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareRedshiftManualDataSource{CapabilityState::NOT_SET};

  CapabilityState m_openSearchDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createOpenSearchDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateOpenSearchDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareOpenSearchDataSource{CapabilityState::NOT_SET};

  CapabilityState m_timestreamDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createTimestreamDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateTimestreamDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareTimestreamDataSource{CapabilityState::NOT_SET};

  CapabilityState m_auroraDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createAuroraDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateAuroraDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareAuroraDataSource{CapabilityState::NOT_SET};

  CapabilityState m_mySqlDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createMySqlDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateMySqlDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareMySqlDataSource{CapabilityState::NOT_SET};

  CapabilityState m_postgreSqlDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createPostgreSqlDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updatePostgreSqlDataSource{CapabilityState::NOT_SET};

  CapabilityState m_sharePostgreSqlDataSource{CapabilityState::NOT_SET};

  CapabilityState m_oracleDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createOracleDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateOracleDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareOracleDataSource{CapabilityState::NOT_SET};

  CapabilityState m_sqlServerDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createSqlServerDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateSqlServerDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareSqlServerDataSource{CapabilityState::NOT_SET};

  CapabilityState m_mariaDbDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createMariaDbDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateMariaDbDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareMariaDbDataSource{CapabilityState::NOT_SET};

  CapabilityState m_snowflakeDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createSnowflakeDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateSnowflakeDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareSnowflakeDataSource{CapabilityState::NOT_SET};

  CapabilityState m_googleBigQueryDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createGoogleBigQueryDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateGoogleBigQueryDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareGoogleBigQueryDataSource{CapabilityState::NOT_SET};

  CapabilityState m_databricksDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createDatabricksDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateDatabricksDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareDatabricksDataSource{CapabilityState::NOT_SET};

  CapabilityState m_starburstDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createStarburstDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateStarburstDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareStarburstDataSource{CapabilityState::NOT_SET};

  CapabilityState m_trinoDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createTrinoDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateTrinoDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareTrinoDataSource{CapabilityState::NOT_SET};

  CapabilityState m_impalaDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createImpalaDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateImpalaDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareImpalaDataSource{CapabilityState::NOT_SET};

  CapabilityState m_teradataDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createTeradataDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateTeradataDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareTeradataDataSource{CapabilityState::NOT_SET};

  CapabilityState m_prestoDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createPrestoDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updatePrestoDataSource{CapabilityState::NOT_SET};

  CapabilityState m_sharePrestoDataSource{CapabilityState::NOT_SET};

  CapabilityState m_sparkDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createSparkDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateSparkDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareSparkDataSource{CapabilityState::NOT_SET};

  CapabilityState m_exasolDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createExasolDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateExasolDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareExasolDataSource{CapabilityState::NOT_SET};

  CapabilityState m_db2DataSource{CapabilityState::NOT_SET};

  CapabilityState m_createDb2DataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateDb2DataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareDb2DataSource{CapabilityState::NOT_SET};

  CapabilityState m_sapHanaDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createSapHanaDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateSapHanaDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareSapHanaDataSource{CapabilityState::NOT_SET};

  CapabilityState m_denodoDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createDenodoDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateDenodoDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareDenodoDataSource{CapabilityState::NOT_SET};

  CapabilityState m_dremioDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createDremioDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateDremioDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareDremioDataSource{CapabilityState::NOT_SET};

  CapabilityState m_salesforceDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createSalesforceDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateSalesforceDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareSalesforceDataSource{CapabilityState::NOT_SET};

  CapabilityState m_radiantDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createRadiantDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateRadiantDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareRadiantDataSource{CapabilityState::NOT_SET};

  CapabilityState m_payPalDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createPayPalDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updatePayPalDataSource{CapabilityState::NOT_SET};

  CapabilityState m_sharePayPalDataSource{CapabilityState::NOT_SET};

  CapabilityState m_squareDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createSquareDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateSquareDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareSquareDataSource{CapabilityState::NOT_SET};

  CapabilityState m_gitHubDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createGitHubDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateGitHubDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareGitHubDataSource{CapabilityState::NOT_SET};

  CapabilityState m_twitterDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createTwitterDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateTwitterDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareTwitterDataSource{CapabilityState::NOT_SET};

  CapabilityState m_jiraDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createJiraDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateJiraDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareJiraDataSource{CapabilityState::NOT_SET};

  CapabilityState m_serviceNowDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createServiceNowDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateServiceNowDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareServiceNowDataSource{CapabilityState::NOT_SET};

  CapabilityState m_adobeAnalyticsDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createAdobeAnalyticsDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateAdobeAnalyticsDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareAdobeAnalyticsDataSource{CapabilityState::NOT_SET};

  CapabilityState m_googleAnalyticsDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createGoogleAnalyticsDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateGoogleAnalyticsDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareGoogleAnalyticsDataSource{CapabilityState::NOT_SET};

  CapabilityState m_googleSheetsDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createGoogleSheetsDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateGoogleSheetsDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareGoogleSheetsDataSource{CapabilityState::NOT_SET};

  CapabilityState m_documentDbDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createDocumentDbDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateDocumentDbDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareDocumentDbDataSource{CapabilityState::NOT_SET};

  CapabilityState m_mongoDbDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createMongoDbDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateMongoDbDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareMongoDbDataSource{CapabilityState::NOT_SET};

  CapabilityState m_mongoAtlasDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createMongoAtlasDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateMongoAtlasDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareMongoAtlasDataSource{CapabilityState::NOT_SET};

  CapabilityState m_dynamoDbDataSource{CapabilityState::NOT_SET};

  CapabilityState m_createDynamoDbDataSource{CapabilityState::NOT_SET};

  CapabilityState m_updateDynamoDbDataSource{CapabilityState::NOT_SET};

  CapabilityState m_shareDynamoDbDataSource{CapabilityState::NOT_SET};
  bool m_exportToCsvHasBeenSet = false;
  bool m_exportToExcelHasBeenSet = false;
  bool m_exportToPdfHasBeenSet = false;
  bool m_printReportsHasBeenSet = false;
  bool m_createAndUpdateThemesHasBeenSet = false;
  bool m_addOrRunAnomalyDetectionForAnalysesHasBeenSet = false;
  bool m_shareAnalysesHasBeenSet = false;
  bool m_createAndUpdateDatasetsHasBeenSet = false;
  bool m_shareDatasetsHasBeenSet = false;
  bool m_subscribeDashboardEmailReportsHasBeenSet = false;
  bool m_createAndUpdateDashboardEmailReportsHasBeenSet = false;
  bool m_shareDashboardsHasBeenSet = false;
  bool m_createAndUpdateThresholdAlertsHasBeenSet = false;
  bool m_renameSharedFoldersHasBeenSet = false;
  bool m_createSharedFoldersHasBeenSet = false;
  bool m_createAndUpdateDataSourcesHasBeenSet = false;
  bool m_shareDataSourcesHasBeenSet = false;
  bool m_viewAccountSPICECapacityHasBeenSet = false;
  bool m_createSPICEDatasetHasBeenSet = false;
  bool m_exportToPdfInScheduledReportsHasBeenSet = false;
  bool m_exportToCsvInScheduledReportsHasBeenSet = false;
  bool m_exportToExcelInScheduledReportsHasBeenSet = false;
  bool m_includeContentInScheduledReportsEmailHasBeenSet = false;
  bool m_dashboardHasBeenSet = false;
  bool m_analysisHasBeenSet = false;
  bool m_automateHasBeenSet = false;
  bool m_flowHasBeenSet = false;
  bool m_appsHasBeenSet = false;
  bool m_createAndUpdateAppsHasBeenSet = false;
  bool m_shareAppsHasBeenSet = false;
  bool m_invokeAppsAIInferenceHasBeenSet = false;
  bool m_accessAppsNativeDataStoreHasBeenSet = false;
  bool m_publishWithoutApprovalHasBeenSet = false;
  bool m_useBedrockModelsHasBeenSet = false;
  bool m_performFlowUiTaskHasBeenSet = false;
  bool m_approveFlowShareRequestsHasBeenSet = false;
  bool m_useAgentWebSearchHasBeenSet = false;
  bool m_knowledgeBaseHasBeenSet = false;
  bool m_createAndUpdateKnowledgeBasesHasBeenSet = false;
  bool m_shareKnowledgeBasesHasBeenSet = false;
  bool m_sharePointKnowledgeBaseHasBeenSet = false;
  bool m_createAndUpdateSharePointKnowledgeBaseHasBeenSet = false;
  bool m_shareSharePointKnowledgeBaseHasBeenSet = false;
  bool m_useSharePointKnowledgeBaseHasBeenSet = false;
  bool m_googleDriveKnowledgeBaseHasBeenSet = false;
  bool m_createAndUpdateGoogleDriveKnowledgeBaseHasBeenSet = false;
  bool m_shareGoogleDriveKnowledgeBaseHasBeenSet = false;
  bool m_useGoogleDriveKnowledgeBaseHasBeenSet = false;
  bool m_webCrawlerKnowledgeBaseHasBeenSet = false;
  bool m_createAndUpdateWebCrawlerKnowledgeBaseHasBeenSet = false;
  bool m_shareWebCrawlerKnowledgeBaseHasBeenSet = false;
  bool m_useWebCrawlerKnowledgeBaseHasBeenSet = false;
  bool m_s3KnowledgeBaseHasBeenSet = false;
  bool m_createAndUpdateS3KnowledgeBaseHasBeenSet = false;
  bool m_shareS3KnowledgeBaseHasBeenSet = false;
  bool m_useS3KnowledgeBaseHasBeenSet = false;
  bool m_confluenceKnowledgeBaseHasBeenSet = false;
  bool m_createAndUpdateConfluenceKnowledgeBaseHasBeenSet = false;
  bool m_shareConfluenceKnowledgeBaseHasBeenSet = false;
  bool m_useConfluenceKnowledgeBaseHasBeenSet = false;
  bool m_oneDriveKnowledgeBaseHasBeenSet = false;
  bool m_createAndUpdateOneDriveKnowledgeBaseHasBeenSet = false;
  bool m_shareOneDriveKnowledgeBaseHasBeenSet = false;
  bool m_useOneDriveKnowledgeBaseHasBeenSet = false;
  bool m_qBusinessKnowledgeBaseHasBeenSet = false;
  bool m_createAndUpdateQBusinessKnowledgeBaseHasBeenSet = false;
  bool m_shareQBusinessKnowledgeBaseHasBeenSet = false;
  bool m_useQBusinessKnowledgeBaseHasBeenSet = false;
  bool m_bedrockManagedKnowledgeBaseHasBeenSet = false;
  bool m_createAndUpdateBedrockManagedKnowledgeBaseHasBeenSet = false;
  bool m_shareBedrockManagedKnowledgeBaseHasBeenSet = false;
  bool m_useBedrockManagedKnowledgeBaseHasBeenSet = false;
  bool m_boxKnowledgeBaseHasBeenSet = false;
  bool m_createAndUpdateBoxKnowledgeBaseHasBeenSet = false;
  bool m_shareBoxKnowledgeBaseHasBeenSet = false;
  bool m_useBoxKnowledgeBaseHasBeenSet = false;
  bool m_iDCKnowledgeBaseHasBeenSet = false;
  bool m_createAndUpdateIDCKnowledgeBaseHasBeenSet = false;
  bool m_shareIDCKnowledgeBaseHasBeenSet = false;
  bool m_useIDCKnowledgeBaseHasBeenSet = false;
  bool m_actionHasBeenSet = false;
  bool m_genericHTTPActionHasBeenSet = false;
  bool m_createAndUpdateGenericHTTPActionHasBeenSet = false;
  bool m_shareGenericHTTPActionHasBeenSet = false;
  bool m_useGenericHTTPActionHasBeenSet = false;
  bool m_asanaActionHasBeenSet = false;
  bool m_createAndUpdateAsanaActionHasBeenSet = false;
  bool m_shareAsanaActionHasBeenSet = false;
  bool m_useAsanaActionHasBeenSet = false;
  bool m_slackActionHasBeenSet = false;
  bool m_createAndUpdateSlackActionHasBeenSet = false;
  bool m_shareSlackActionHasBeenSet = false;
  bool m_useSlackActionHasBeenSet = false;
  bool m_serviceNowActionHasBeenSet = false;
  bool m_createAndUpdateServiceNowActionHasBeenSet = false;
  bool m_shareServiceNowActionHasBeenSet = false;
  bool m_useServiceNowActionHasBeenSet = false;
  bool m_salesforceActionHasBeenSet = false;
  bool m_createAndUpdateSalesforceActionHasBeenSet = false;
  bool m_shareSalesforceActionHasBeenSet = false;
  bool m_useSalesforceActionHasBeenSet = false;
  bool m_mSExchangeActionHasBeenSet = false;
  bool m_createAndUpdateMSExchangeActionHasBeenSet = false;
  bool m_shareMSExchangeActionHasBeenSet = false;
  bool m_useMSExchangeActionHasBeenSet = false;
  bool m_pagerDutyActionHasBeenSet = false;
  bool m_createAndUpdatePagerDutyActionHasBeenSet = false;
  bool m_sharePagerDutyActionHasBeenSet = false;
  bool m_usePagerDutyActionHasBeenSet = false;
  bool m_jiraActionHasBeenSet = false;
  bool m_createAndUpdateJiraActionHasBeenSet = false;
  bool m_shareJiraActionHasBeenSet = false;
  bool m_useJiraActionHasBeenSet = false;
  bool m_confluenceActionHasBeenSet = false;
  bool m_createAndUpdateConfluenceActionHasBeenSet = false;
  bool m_shareConfluenceActionHasBeenSet = false;
  bool m_useConfluenceActionHasBeenSet = false;
  bool m_oneDriveActionHasBeenSet = false;
  bool m_createAndUpdateOneDriveActionHasBeenSet = false;
  bool m_shareOneDriveActionHasBeenSet = false;
  bool m_useOneDriveActionHasBeenSet = false;
  bool m_sharePointActionHasBeenSet = false;
  bool m_createAndUpdateSharePointActionHasBeenSet = false;
  bool m_shareSharePointActionHasBeenSet = false;
  bool m_useSharePointActionHasBeenSet = false;
  bool m_mSTeamsActionHasBeenSet = false;
  bool m_createAndUpdateMSTeamsActionHasBeenSet = false;
  bool m_shareMSTeamsActionHasBeenSet = false;
  bool m_useMSTeamsActionHasBeenSet = false;
  bool m_googleCalendarActionHasBeenSet = false;
  bool m_createAndUpdateGoogleCalendarActionHasBeenSet = false;
  bool m_shareGoogleCalendarActionHasBeenSet = false;
  bool m_useGoogleCalendarActionHasBeenSet = false;
  bool m_zendeskActionHasBeenSet = false;
  bool m_createAndUpdateZendeskActionHasBeenSet = false;
  bool m_shareZendeskActionHasBeenSet = false;
  bool m_useZendeskActionHasBeenSet = false;
  bool m_smartsheetActionHasBeenSet = false;
  bool m_createAndUpdateSmartsheetActionHasBeenSet = false;
  bool m_shareSmartsheetActionHasBeenSet = false;
  bool m_useSmartsheetActionHasBeenSet = false;
  bool m_sAPBusinessPartnerActionHasBeenSet = false;
  bool m_createAndUpdateSAPBusinessPartnerActionHasBeenSet = false;
  bool m_shareSAPBusinessPartnerActionHasBeenSet = false;
  bool m_useSAPBusinessPartnerActionHasBeenSet = false;
  bool m_sAPProductMasterDataActionHasBeenSet = false;
  bool m_createAndUpdateSAPProductMasterDataActionHasBeenSet = false;
  bool m_shareSAPProductMasterDataActionHasBeenSet = false;
  bool m_useSAPProductMasterDataActionHasBeenSet = false;
  bool m_sAPPhysicalInventoryActionHasBeenSet = false;
  bool m_createAndUpdateSAPPhysicalInventoryActionHasBeenSet = false;
  bool m_shareSAPPhysicalInventoryActionHasBeenSet = false;
  bool m_useSAPPhysicalInventoryActionHasBeenSet = false;
  bool m_sAPBillOfMaterialActionHasBeenSet = false;
  bool m_createAndUpdateSAPBillOfMaterialActionHasBeenSet = false;
  bool m_shareSAPBillOfMaterialActionHasBeenSet = false;
  bool m_useSAPBillOfMaterialActionHasBeenSet = false;
  bool m_sAPMaterialStockActionHasBeenSet = false;
  bool m_createAndUpdateSAPMaterialStockActionHasBeenSet = false;
  bool m_shareSAPMaterialStockActionHasBeenSet = false;
  bool m_useSAPMaterialStockActionHasBeenSet = false;
  bool m_factSetActionHasBeenSet = false;
  bool m_createAndUpdateFactSetActionHasBeenSet = false;
  bool m_shareFactSetActionHasBeenSet = false;
  bool m_useFactSetActionHasBeenSet = false;
  bool m_amazonSThreeActionHasBeenSet = false;
  bool m_createAndUpdateAmazonSThreeActionHasBeenSet = false;
  bool m_shareAmazonSThreeActionHasBeenSet = false;
  bool m_useAmazonSThreeActionHasBeenSet = false;
  bool m_textractActionHasBeenSet = false;
  bool m_createAndUpdateTextractActionHasBeenSet = false;
  bool m_shareTextractActionHasBeenSet = false;
  bool m_useTextractActionHasBeenSet = false;
  bool m_comprehendActionHasBeenSet = false;
  bool m_createAndUpdateComprehendActionHasBeenSet = false;
  bool m_shareComprehendActionHasBeenSet = false;
  bool m_useComprehendActionHasBeenSet = false;
  bool m_comprehendMedicalActionHasBeenSet = false;
  bool m_createAndUpdateComprehendMedicalActionHasBeenSet = false;
  bool m_shareComprehendMedicalActionHasBeenSet = false;
  bool m_useComprehendMedicalActionHasBeenSet = false;
  bool m_amazonBedrockARSActionHasBeenSet = false;
  bool m_createAndUpdateAmazonBedrockARSActionHasBeenSet = false;
  bool m_shareAmazonBedrockARSActionHasBeenSet = false;
  bool m_useAmazonBedrockARSActionHasBeenSet = false;
  bool m_amazonBedrockFSActionHasBeenSet = false;
  bool m_createAndUpdateAmazonBedrockFSActionHasBeenSet = false;
  bool m_shareAmazonBedrockFSActionHasBeenSet = false;
  bool m_useAmazonBedrockFSActionHasBeenSet = false;
  bool m_amazonBedrockKRSActionHasBeenSet = false;
  bool m_createAndUpdateAmazonBedrockKRSActionHasBeenSet = false;
  bool m_shareAmazonBedrockKRSActionHasBeenSet = false;
  bool m_useAmazonBedrockKRSActionHasBeenSet = false;
  bool m_mCPActionHasBeenSet = false;
  bool m_createAndUpdateMCPActionHasBeenSet = false;
  bool m_shareMCPActionHasBeenSet = false;
  bool m_useMCPActionHasBeenSet = false;
  bool m_openAPIActionHasBeenSet = false;
  bool m_createAndUpdateOpenAPIActionHasBeenSet = false;
  bool m_shareOpenAPIActionHasBeenSet = false;
  bool m_useOpenAPIActionHasBeenSet = false;
  bool m_sandPGMIActionHasBeenSet = false;
  bool m_createAndUpdateSandPGMIActionHasBeenSet = false;
  bool m_shareSandPGMIActionHasBeenSet = false;
  bool m_useSandPGMIActionHasBeenSet = false;
  bool m_sandPGlobalEnergyActionHasBeenSet = false;
  bool m_createAndUpdateSandPGlobalEnergyActionHasBeenSet = false;
  bool m_shareSandPGlobalEnergyActionHasBeenSet = false;
  bool m_useSandPGlobalEnergyActionHasBeenSet = false;
  bool m_bambooHRActionHasBeenSet = false;
  bool m_createAndUpdateBambooHRActionHasBeenSet = false;
  bool m_shareBambooHRActionHasBeenSet = false;
  bool m_useBambooHRActionHasBeenSet = false;
  bool m_boxAgentActionHasBeenSet = false;
  bool m_createAndUpdateBoxAgentActionHasBeenSet = false;
  bool m_shareBoxAgentActionHasBeenSet = false;
  bool m_useBoxAgentActionHasBeenSet = false;
  bool m_canvaAgentActionHasBeenSet = false;
  bool m_createAndUpdateCanvaAgentActionHasBeenSet = false;
  bool m_shareCanvaAgentActionHasBeenSet = false;
  bool m_useCanvaAgentActionHasBeenSet = false;
  bool m_githubActionHasBeenSet = false;
  bool m_createAndUpdateGithubActionHasBeenSet = false;
  bool m_shareGithubActionHasBeenSet = false;
  bool m_useGithubActionHasBeenSet = false;
  bool m_notionActionHasBeenSet = false;
  bool m_createAndUpdateNotionActionHasBeenSet = false;
  bool m_shareNotionActionHasBeenSet = false;
  bool m_useNotionActionHasBeenSet = false;
  bool m_linearActionHasBeenSet = false;
  bool m_createAndUpdateLinearActionHasBeenSet = false;
  bool m_shareLinearActionHasBeenSet = false;
  bool m_useLinearActionHasBeenSet = false;
  bool m_huggingFaceActionHasBeenSet = false;
  bool m_createAndUpdateHuggingFaceActionHasBeenSet = false;
  bool m_shareHuggingFaceActionHasBeenSet = false;
  bool m_useHuggingFaceActionHasBeenSet = false;
  bool m_mondayActionHasBeenSet = false;
  bool m_createAndUpdateMondayActionHasBeenSet = false;
  bool m_shareMondayActionHasBeenSet = false;
  bool m_useMondayActionHasBeenSet = false;
  bool m_hubspotActionHasBeenSet = false;
  bool m_createAndUpdateHubspotActionHasBeenSet = false;
  bool m_shareHubspotActionHasBeenSet = false;
  bool m_useHubspotActionHasBeenSet = false;
  bool m_intercomActionHasBeenSet = false;
  bool m_createAndUpdateIntercomActionHasBeenSet = false;
  bool m_shareIntercomActionHasBeenSet = false;
  bool m_useIntercomActionHasBeenSet = false;
  bool m_newRelicActionHasBeenSet = false;
  bool m_createAndUpdateNewRelicActionHasBeenSet = false;
  bool m_shareNewRelicActionHasBeenSet = false;
  bool m_useNewRelicActionHasBeenSet = false;
  bool m_pagerDutyAgentActionHasBeenSet = false;
  bool m_createAndUpdatePagerDutyAgentActionHasBeenSet = false;
  bool m_sharePagerDutyAgentActionHasBeenSet = false;
  bool m_usePagerDutyAgentActionHasBeenSet = false;
  bool m_visierAgentActionHasBeenSet = false;
  bool m_createAndUpdateVisierAgentActionHasBeenSet = false;
  bool m_shareVisierAgentActionHasBeenSet = false;
  bool m_useVisierAgentActionHasBeenSet = false;
  bool m_zoomActionHasBeenSet = false;
  bool m_createAndUpdateZoomActionHasBeenSet = false;
  bool m_shareZoomActionHasBeenSet = false;
  bool m_useZoomActionHasBeenSet = false;
  bool m_snowFlakeActionHasBeenSet = false;
  bool m_createAndUpdateSnowFlakeActionHasBeenSet = false;
  bool m_shareSnowFlakeActionHasBeenSet = false;
  bool m_useSnowFlakeActionHasBeenSet = false;
  bool m_zapierActionHasBeenSet = false;
  bool m_createAndUpdateZapierActionHasBeenSet = false;
  bool m_shareZapierActionHasBeenSet = false;
  bool m_useZapierActionHasBeenSet = false;
  bool m_airtableActionHasBeenSet = false;
  bool m_createAndUpdateAirtableActionHasBeenSet = false;
  bool m_shareAirtableActionHasBeenSet = false;
  bool m_useAirtableActionHasBeenSet = false;
  bool m_dropboxActionHasBeenSet = false;
  bool m_createAndUpdateDropboxActionHasBeenSet = false;
  bool m_shareDropboxActionHasBeenSet = false;
  bool m_useDropboxActionHasBeenSet = false;
  bool m_gmailActionHasBeenSet = false;
  bool m_createAndUpdateGmailActionHasBeenSet = false;
  bool m_shareGmailActionHasBeenSet = false;
  bool m_useGmailActionHasBeenSet = false;
  bool m_googleAnalyticsActionHasBeenSet = false;
  bool m_createAndUpdateGoogleAnalyticsActionHasBeenSet = false;
  bool m_shareGoogleAnalyticsActionHasBeenSet = false;
  bool m_useGoogleAnalyticsActionHasBeenSet = false;
  bool m_googleDocsActionHasBeenSet = false;
  bool m_createAndUpdateGoogleDocsActionHasBeenSet = false;
  bool m_shareGoogleDocsActionHasBeenSet = false;
  bool m_useGoogleDocsActionHasBeenSet = false;
  bool m_googleDriveActionHasBeenSet = false;
  bool m_createAndUpdateGoogleDriveActionHasBeenSet = false;
  bool m_shareGoogleDriveActionHasBeenSet = false;
  bool m_useGoogleDriveActionHasBeenSet = false;
  bool m_googleMeetActionHasBeenSet = false;
  bool m_createAndUpdateGoogleMeetActionHasBeenSet = false;
  bool m_shareGoogleMeetActionHasBeenSet = false;
  bool m_useGoogleMeetActionHasBeenSet = false;
  bool m_googleSheetsActionHasBeenSet = false;
  bool m_createAndUpdateGoogleSheetsActionHasBeenSet = false;
  bool m_shareGoogleSheetsActionHasBeenSet = false;
  bool m_useGoogleSheetsActionHasBeenSet = false;
  bool m_googleSlidesActionHasBeenSet = false;
  bool m_createAndUpdateGoogleSlidesActionHasBeenSet = false;
  bool m_shareGoogleSlidesActionHasBeenSet = false;
  bool m_useGoogleSlidesActionHasBeenSet = false;
  bool m_quickBooksActionHasBeenSet = false;
  bool m_createAndUpdateQuickBooksActionHasBeenSet = false;
  bool m_shareQuickBooksActionHasBeenSet = false;
  bool m_useQuickBooksActionHasBeenSet = false;
  bool m_figmaActionHasBeenSet = false;
  bool m_createAndUpdateFigmaActionHasBeenSet = false;
  bool m_shareFigmaActionHasBeenSet = false;
  bool m_useFigmaActionHasBeenSet = false;
  bool m_whatsAppActionHasBeenSet = false;
  bool m_createAndUpdateWhatsAppActionHasBeenSet = false;
  bool m_shareWhatsAppActionHasBeenSet = false;
  bool m_useWhatsAppActionHasBeenSet = false;
  bool m_googleChatActionHasBeenSet = false;
  bool m_createAndUpdateGoogleChatActionHasBeenSet = false;
  bool m_shareGoogleChatActionHasBeenSet = false;
  bool m_useGoogleChatActionHasBeenSet = false;
  bool m_oneNoteActionHasBeenSet = false;
  bool m_createAndUpdateOneNoteActionHasBeenSet = false;
  bool m_shareOneNoteActionHasBeenSet = false;
  bool m_useOneNoteActionHasBeenSet = false;
  bool m_shopifyActionHasBeenSet = false;
  bool m_createAndUpdateShopifyActionHasBeenSet = false;
  bool m_shareShopifyActionHasBeenSet = false;
  bool m_useShopifyActionHasBeenSet = false;
  bool m_adobeActionHasBeenSet = false;
  bool m_createAndUpdateAdobeActionHasBeenSet = false;
  bool m_shareAdobeActionHasBeenSet = false;
  bool m_useAdobeActionHasBeenSet = false;
  bool m_ciscoWebexVidcastActionHasBeenSet = false;
  bool m_createAndUpdateCiscoWebexVidcastActionHasBeenSet = false;
  bool m_shareCiscoWebexVidcastActionHasBeenSet = false;
  bool m_useCiscoWebexVidcastActionHasBeenSet = false;
  bool m_ciscoWebexMeetingsActionHasBeenSet = false;
  bool m_createAndUpdateCiscoWebexMeetingsActionHasBeenSet = false;
  bool m_shareCiscoWebexMeetingsActionHasBeenSet = false;
  bool m_useCiscoWebexMeetingsActionHasBeenSet = false;
  bool m_dunAndBradstreetActionHasBeenSet = false;
  bool m_createAndUpdateDunAndBradstreetActionHasBeenSet = false;
  bool m_shareDunAndBradstreetActionHasBeenSet = false;
  bool m_useDunAndBradstreetActionHasBeenSet = false;
  bool m_hGInsightsActionHasBeenSet = false;
  bool m_createAndUpdateHGInsightsActionHasBeenSet = false;
  bool m_shareHGInsightsActionHasBeenSet = false;
  bool m_useHGInsightsActionHasBeenSet = false;
  bool m_zoomInfoActionHasBeenSet = false;
  bool m_createAndUpdateZoomInfoActionHasBeenSet = false;
  bool m_shareZoomInfoActionHasBeenSet = false;
  bool m_useZoomInfoActionHasBeenSet = false;
  bool m_moodysActionHasBeenSet = false;
  bool m_createAndUpdateMoodysActionHasBeenSet = false;
  bool m_shareMoodysActionHasBeenSet = false;
  bool m_useMoodysActionHasBeenSet = false;
  bool m_beeActionHasBeenSet = false;
  bool m_createAndUpdateBeeActionHasBeenSet = false;
  bool m_shareBeeActionHasBeenSet = false;
  bool m_useBeeActionHasBeenSet = false;
  bool m_gongActionHasBeenSet = false;
  bool m_createAndUpdateGongActionHasBeenSet = false;
  bool m_shareGongActionHasBeenSet = false;
  bool m_useGongActionHasBeenSet = false;
  bool m_topicHasBeenSet = false;
  bool m_editVisualWithQHasBeenSet = false;
  bool m_buildCalculatedFieldWithQHasBeenSet = false;
  bool m_createDashboardExecutiveSummaryWithQHasBeenSet = false;
  bool m_spaceHasBeenSet = false;
  bool m_createSpacesHasBeenSet = false;
  bool m_shareSpacesHasBeenSet = false;
  bool m_chatAgentHasBeenSet = false;
  bool m_createChatAgentsHasBeenSet = false;
  bool m_shareChatAgentsHasBeenSet = false;
  bool m_researchHasBeenSet = false;
  bool m_selfUpgradeUserRoleHasBeenSet = false;
  bool m_extensionHasBeenSet = false;
  bool m_useBrowserExtensionHasBeenSet = false;
  bool m_useWordAddInExtensionHasBeenSet = false;
  bool m_useOutlookAddInExtensionHasBeenSet = false;
  bool m_useExcelAddInExtensionHasBeenSet = false;
  bool m_usePowerpointAddInExtensionHasBeenSet = false;
  bool m_manageSharedFoldersHasBeenSet = false;
  bool m_generateAnalysesHasBeenSet = false;
  bool m_storyHasBeenSet = false;
  bool m_scenarioHasBeenSet = false;
  bool m_triggerHasBeenSet = false;
  bool m_scheduleTriggerHasBeenSet = false;
  bool m_inboundEmailTriggerHasBeenSet = false;
  bool m_quickEventTriggerHasBeenSet = false;
  bool m_fileDataSourceHasBeenSet = false;
  bool m_createFileDataSourceHasBeenSet = false;
  bool m_updateFileDataSourceHasBeenSet = false;
  bool m_shareFileDataSourceHasBeenSet = false;
  bool m_s3DataSourceHasBeenSet = false;
  bool m_createS3DataSourceHasBeenSet = false;
  bool m_updateS3DataSourceHasBeenSet = false;
  bool m_shareS3DataSourceHasBeenSet = false;
  bool m_s3AnalyticsDataSourceHasBeenSet = false;
  bool m_createS3AnalyticsDataSourceHasBeenSet = false;
  bool m_updateS3AnalyticsDataSourceHasBeenSet = false;
  bool m_shareS3AnalyticsDataSourceHasBeenSet = false;
  bool m_s3TablesDataSourceHasBeenSet = false;
  bool m_createS3TablesDataSourceHasBeenSet = false;
  bool m_updateS3TablesDataSourceHasBeenSet = false;
  bool m_shareS3TablesDataSourceHasBeenSet = false;
  bool m_athenaDataSourceHasBeenSet = false;
  bool m_createAthenaDataSourceHasBeenSet = false;
  bool m_updateAthenaDataSourceHasBeenSet = false;
  bool m_shareAthenaDataSourceHasBeenSet = false;
  bool m_rdsDataSourceHasBeenSet = false;
  bool m_createRdsDataSourceHasBeenSet = false;
  bool m_updateRdsDataSourceHasBeenSet = false;
  bool m_shareRdsDataSourceHasBeenSet = false;
  bool m_redshiftAutoDiscoveredDataSourceHasBeenSet = false;
  bool m_createRedshiftAutoDiscoveredDataSourceHasBeenSet = false;
  bool m_updateRedshiftAutoDiscoveredDataSourceHasBeenSet = false;
  bool m_shareRedshiftAutoDiscoveredDataSourceHasBeenSet = false;
  bool m_redshiftManualDataSourceHasBeenSet = false;
  bool m_createRedshiftManualDataSourceHasBeenSet = false;
  bool m_updateRedshiftManualDataSourceHasBeenSet = false;
  bool m_shareRedshiftManualDataSourceHasBeenSet = false;
  bool m_openSearchDataSourceHasBeenSet = false;
  bool m_createOpenSearchDataSourceHasBeenSet = false;
  bool m_updateOpenSearchDataSourceHasBeenSet = false;
  bool m_shareOpenSearchDataSourceHasBeenSet = false;
  bool m_timestreamDataSourceHasBeenSet = false;
  bool m_createTimestreamDataSourceHasBeenSet = false;
  bool m_updateTimestreamDataSourceHasBeenSet = false;
  bool m_shareTimestreamDataSourceHasBeenSet = false;
  bool m_auroraDataSourceHasBeenSet = false;
  bool m_createAuroraDataSourceHasBeenSet = false;
  bool m_updateAuroraDataSourceHasBeenSet = false;
  bool m_shareAuroraDataSourceHasBeenSet = false;
  bool m_mySqlDataSourceHasBeenSet = false;
  bool m_createMySqlDataSourceHasBeenSet = false;
  bool m_updateMySqlDataSourceHasBeenSet = false;
  bool m_shareMySqlDataSourceHasBeenSet = false;
  bool m_postgreSqlDataSourceHasBeenSet = false;
  bool m_createPostgreSqlDataSourceHasBeenSet = false;
  bool m_updatePostgreSqlDataSourceHasBeenSet = false;
  bool m_sharePostgreSqlDataSourceHasBeenSet = false;
  bool m_oracleDataSourceHasBeenSet = false;
  bool m_createOracleDataSourceHasBeenSet = false;
  bool m_updateOracleDataSourceHasBeenSet = false;
  bool m_shareOracleDataSourceHasBeenSet = false;
  bool m_sqlServerDataSourceHasBeenSet = false;
  bool m_createSqlServerDataSourceHasBeenSet = false;
  bool m_updateSqlServerDataSourceHasBeenSet = false;
  bool m_shareSqlServerDataSourceHasBeenSet = false;
  bool m_mariaDbDataSourceHasBeenSet = false;
  bool m_createMariaDbDataSourceHasBeenSet = false;
  bool m_updateMariaDbDataSourceHasBeenSet = false;
  bool m_shareMariaDbDataSourceHasBeenSet = false;
  bool m_snowflakeDataSourceHasBeenSet = false;
  bool m_createSnowflakeDataSourceHasBeenSet = false;
  bool m_updateSnowflakeDataSourceHasBeenSet = false;
  bool m_shareSnowflakeDataSourceHasBeenSet = false;
  bool m_googleBigQueryDataSourceHasBeenSet = false;
  bool m_createGoogleBigQueryDataSourceHasBeenSet = false;
  bool m_updateGoogleBigQueryDataSourceHasBeenSet = false;
  bool m_shareGoogleBigQueryDataSourceHasBeenSet = false;
  bool m_databricksDataSourceHasBeenSet = false;
  bool m_createDatabricksDataSourceHasBeenSet = false;
  bool m_updateDatabricksDataSourceHasBeenSet = false;
  bool m_shareDatabricksDataSourceHasBeenSet = false;
  bool m_starburstDataSourceHasBeenSet = false;
  bool m_createStarburstDataSourceHasBeenSet = false;
  bool m_updateStarburstDataSourceHasBeenSet = false;
  bool m_shareStarburstDataSourceHasBeenSet = false;
  bool m_trinoDataSourceHasBeenSet = false;
  bool m_createTrinoDataSourceHasBeenSet = false;
  bool m_updateTrinoDataSourceHasBeenSet = false;
  bool m_shareTrinoDataSourceHasBeenSet = false;
  bool m_impalaDataSourceHasBeenSet = false;
  bool m_createImpalaDataSourceHasBeenSet = false;
  bool m_updateImpalaDataSourceHasBeenSet = false;
  bool m_shareImpalaDataSourceHasBeenSet = false;
  bool m_teradataDataSourceHasBeenSet = false;
  bool m_createTeradataDataSourceHasBeenSet = false;
  bool m_updateTeradataDataSourceHasBeenSet = false;
  bool m_shareTeradataDataSourceHasBeenSet = false;
  bool m_prestoDataSourceHasBeenSet = false;
  bool m_createPrestoDataSourceHasBeenSet = false;
  bool m_updatePrestoDataSourceHasBeenSet = false;
  bool m_sharePrestoDataSourceHasBeenSet = false;
  bool m_sparkDataSourceHasBeenSet = false;
  bool m_createSparkDataSourceHasBeenSet = false;
  bool m_updateSparkDataSourceHasBeenSet = false;
  bool m_shareSparkDataSourceHasBeenSet = false;
  bool m_exasolDataSourceHasBeenSet = false;
  bool m_createExasolDataSourceHasBeenSet = false;
  bool m_updateExasolDataSourceHasBeenSet = false;
  bool m_shareExasolDataSourceHasBeenSet = false;
  bool m_db2DataSourceHasBeenSet = false;
  bool m_createDb2DataSourceHasBeenSet = false;
  bool m_updateDb2DataSourceHasBeenSet = false;
  bool m_shareDb2DataSourceHasBeenSet = false;
  bool m_sapHanaDataSourceHasBeenSet = false;
  bool m_createSapHanaDataSourceHasBeenSet = false;
  bool m_updateSapHanaDataSourceHasBeenSet = false;
  bool m_shareSapHanaDataSourceHasBeenSet = false;
  bool m_denodoDataSourceHasBeenSet = false;
  bool m_createDenodoDataSourceHasBeenSet = false;
  bool m_updateDenodoDataSourceHasBeenSet = false;
  bool m_shareDenodoDataSourceHasBeenSet = false;
  bool m_dremioDataSourceHasBeenSet = false;
  bool m_createDremioDataSourceHasBeenSet = false;
  bool m_updateDremioDataSourceHasBeenSet = false;
  bool m_shareDremioDataSourceHasBeenSet = false;
  bool m_salesforceDataSourceHasBeenSet = false;
  bool m_createSalesforceDataSourceHasBeenSet = false;
  bool m_updateSalesforceDataSourceHasBeenSet = false;
  bool m_shareSalesforceDataSourceHasBeenSet = false;
  bool m_radiantDataSourceHasBeenSet = false;
  bool m_createRadiantDataSourceHasBeenSet = false;
  bool m_updateRadiantDataSourceHasBeenSet = false;
  bool m_shareRadiantDataSourceHasBeenSet = false;
  bool m_payPalDataSourceHasBeenSet = false;
  bool m_createPayPalDataSourceHasBeenSet = false;
  bool m_updatePayPalDataSourceHasBeenSet = false;
  bool m_sharePayPalDataSourceHasBeenSet = false;
  bool m_squareDataSourceHasBeenSet = false;
  bool m_createSquareDataSourceHasBeenSet = false;
  bool m_updateSquareDataSourceHasBeenSet = false;
  bool m_shareSquareDataSourceHasBeenSet = false;
  bool m_gitHubDataSourceHasBeenSet = false;
  bool m_createGitHubDataSourceHasBeenSet = false;
  bool m_updateGitHubDataSourceHasBeenSet = false;
  bool m_shareGitHubDataSourceHasBeenSet = false;
  bool m_twitterDataSourceHasBeenSet = false;
  bool m_createTwitterDataSourceHasBeenSet = false;
  bool m_updateTwitterDataSourceHasBeenSet = false;
  bool m_shareTwitterDataSourceHasBeenSet = false;
  bool m_jiraDataSourceHasBeenSet = false;
  bool m_createJiraDataSourceHasBeenSet = false;
  bool m_updateJiraDataSourceHasBeenSet = false;
  bool m_shareJiraDataSourceHasBeenSet = false;
  bool m_serviceNowDataSourceHasBeenSet = false;
  bool m_createServiceNowDataSourceHasBeenSet = false;
  bool m_updateServiceNowDataSourceHasBeenSet = false;
  bool m_shareServiceNowDataSourceHasBeenSet = false;
  bool m_adobeAnalyticsDataSourceHasBeenSet = false;
  bool m_createAdobeAnalyticsDataSourceHasBeenSet = false;
  bool m_updateAdobeAnalyticsDataSourceHasBeenSet = false;
  bool m_shareAdobeAnalyticsDataSourceHasBeenSet = false;
  bool m_googleAnalyticsDataSourceHasBeenSet = false;
  bool m_createGoogleAnalyticsDataSourceHasBeenSet = false;
  bool m_updateGoogleAnalyticsDataSourceHasBeenSet = false;
  bool m_shareGoogleAnalyticsDataSourceHasBeenSet = false;
  bool m_googleSheetsDataSourceHasBeenSet = false;
  bool m_createGoogleSheetsDataSourceHasBeenSet = false;
  bool m_updateGoogleSheetsDataSourceHasBeenSet = false;
  bool m_shareGoogleSheetsDataSourceHasBeenSet = false;
  bool m_documentDbDataSourceHasBeenSet = false;
  bool m_createDocumentDbDataSourceHasBeenSet = false;
  bool m_updateDocumentDbDataSourceHasBeenSet = false;
  bool m_shareDocumentDbDataSourceHasBeenSet = false;
  bool m_mongoDbDataSourceHasBeenSet = false;
  bool m_createMongoDbDataSourceHasBeenSet = false;
  bool m_updateMongoDbDataSourceHasBeenSet = false;
  bool m_shareMongoDbDataSourceHasBeenSet = false;
  bool m_mongoAtlasDataSourceHasBeenSet = false;
  bool m_createMongoAtlasDataSourceHasBeenSet = false;
  bool m_updateMongoAtlasDataSourceHasBeenSet = false;
  bool m_shareMongoAtlasDataSourceHasBeenSet = false;
  bool m_dynamoDbDataSourceHasBeenSet = false;
  bool m_createDynamoDbDataSourceHasBeenSet = false;
  bool m_updateDynamoDbDataSourceHasBeenSet = false;
  bool m_shareDynamoDbDataSourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
