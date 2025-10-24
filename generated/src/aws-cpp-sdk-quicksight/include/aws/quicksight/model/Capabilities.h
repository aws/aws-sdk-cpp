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
 private:
  CapabilityState m_exportToCsv{CapabilityState::NOT_SET};
  bool m_exportToCsvHasBeenSet = false;

  CapabilityState m_exportToExcel{CapabilityState::NOT_SET};
  bool m_exportToExcelHasBeenSet = false;

  CapabilityState m_exportToPdf{CapabilityState::NOT_SET};
  bool m_exportToPdfHasBeenSet = false;

  CapabilityState m_printReports{CapabilityState::NOT_SET};
  bool m_printReportsHasBeenSet = false;

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

  CapabilityState m_exportToPdfInScheduledReports{CapabilityState::NOT_SET};
  bool m_exportToPdfInScheduledReportsHasBeenSet = false;

  CapabilityState m_exportToCsvInScheduledReports{CapabilityState::NOT_SET};
  bool m_exportToCsvInScheduledReportsHasBeenSet = false;

  CapabilityState m_exportToExcelInScheduledReports{CapabilityState::NOT_SET};
  bool m_exportToExcelInScheduledReportsHasBeenSet = false;

  CapabilityState m_includeContentInScheduledReportsEmail{CapabilityState::NOT_SET};
  bool m_includeContentInScheduledReportsEmailHasBeenSet = false;

  CapabilityState m_dashboard{CapabilityState::NOT_SET};
  bool m_dashboardHasBeenSet = false;

  CapabilityState m_analysis{CapabilityState::NOT_SET};
  bool m_analysisHasBeenSet = false;

  CapabilityState m_automate{CapabilityState::NOT_SET};
  bool m_automateHasBeenSet = false;

  CapabilityState m_flow{CapabilityState::NOT_SET};
  bool m_flowHasBeenSet = false;

  CapabilityState m_publishWithoutApproval{CapabilityState::NOT_SET};
  bool m_publishWithoutApprovalHasBeenSet = false;

  CapabilityState m_useBedrockModels{CapabilityState::NOT_SET};
  bool m_useBedrockModelsHasBeenSet = false;

  CapabilityState m_performFlowUiTask{CapabilityState::NOT_SET};
  bool m_performFlowUiTaskHasBeenSet = false;

  CapabilityState m_useAgentWebSearch{CapabilityState::NOT_SET};
  bool m_useAgentWebSearchHasBeenSet = false;

  CapabilityState m_knowledgeBase{CapabilityState::NOT_SET};
  bool m_knowledgeBaseHasBeenSet = false;

  CapabilityState m_action{CapabilityState::NOT_SET};
  bool m_actionHasBeenSet = false;

  CapabilityState m_space{CapabilityState::NOT_SET};
  bool m_spaceHasBeenSet = false;

  CapabilityState m_chatAgent{CapabilityState::NOT_SET};
  bool m_chatAgentHasBeenSet = false;

  CapabilityState m_createChatAgents{CapabilityState::NOT_SET};
  bool m_createChatAgentsHasBeenSet = false;

  CapabilityState m_research{CapabilityState::NOT_SET};
  bool m_researchHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
