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

  CapabilityState m_publishWithoutApproval{CapabilityState::NOT_SET};

  CapabilityState m_useBedrockModels{CapabilityState::NOT_SET};

  CapabilityState m_performFlowUiTask{CapabilityState::NOT_SET};

  CapabilityState m_useAgentWebSearch{CapabilityState::NOT_SET};

  CapabilityState m_knowledgeBase{CapabilityState::NOT_SET};

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

  CapabilityState m_space{CapabilityState::NOT_SET};

  CapabilityState m_chatAgent{CapabilityState::NOT_SET};

  CapabilityState m_createChatAgents{CapabilityState::NOT_SET};

  CapabilityState m_research{CapabilityState::NOT_SET};

  CapabilityState m_selfUpgradeUserRole{CapabilityState::NOT_SET};
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
  bool m_publishWithoutApprovalHasBeenSet = false;
  bool m_useBedrockModelsHasBeenSet = false;
  bool m_performFlowUiTaskHasBeenSet = false;
  bool m_useAgentWebSearchHasBeenSet = false;
  bool m_knowledgeBaseHasBeenSet = false;
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
  bool m_spaceHasBeenSet = false;
  bool m_chatAgentHasBeenSet = false;
  bool m_createChatAgentsHasBeenSet = false;
  bool m_researchHasBeenSet = false;
  bool m_selfUpgradeUserRoleHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
