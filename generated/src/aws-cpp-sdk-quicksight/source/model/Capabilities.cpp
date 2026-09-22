/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/Capabilities.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

Capabilities::Capabilities(JsonView jsonValue) { *this = jsonValue; }

Capabilities& Capabilities::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ExportToCsv")) {
    m_exportToCsv = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ExportToCsv"));
    m_exportToCsvHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExportToExcel")) {
    m_exportToExcel = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ExportToExcel"));
    m_exportToExcelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExportToPdf")) {
    m_exportToPdf = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ExportToPdf"));
    m_exportToPdfHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrintReports")) {
    m_printReports = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("PrintReports"));
    m_printReportsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateThemes")) {
    m_createAndUpdateThemes = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateThemes"));
    m_createAndUpdateThemesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AddOrRunAnomalyDetectionForAnalyses")) {
    m_addOrRunAnomalyDetectionForAnalyses =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("AddOrRunAnomalyDetectionForAnalyses"));
    m_addOrRunAnomalyDetectionForAnalysesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareAnalyses")) {
    m_shareAnalyses = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareAnalyses"));
    m_shareAnalysesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateDatasets")) {
    m_createAndUpdateDatasets = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateDatasets"));
    m_createAndUpdateDatasetsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareDatasets")) {
    m_shareDatasets = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareDatasets"));
    m_shareDatasetsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SubscribeDashboardEmailReports")) {
    m_subscribeDashboardEmailReports =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("SubscribeDashboardEmailReports"));
    m_subscribeDashboardEmailReportsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateDashboardEmailReports")) {
    m_createAndUpdateDashboardEmailReports =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateDashboardEmailReports"));
    m_createAndUpdateDashboardEmailReportsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareDashboards")) {
    m_shareDashboards = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareDashboards"));
    m_shareDashboardsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateThresholdAlerts")) {
    m_createAndUpdateThresholdAlerts =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateThresholdAlerts"));
    m_createAndUpdateThresholdAlertsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RenameSharedFolders")) {
    m_renameSharedFolders = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("RenameSharedFolders"));
    m_renameSharedFoldersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateSharedFolders")) {
    m_createSharedFolders = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateSharedFolders"));
    m_createSharedFoldersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateDataSources")) {
    m_createAndUpdateDataSources = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateDataSources"));
    m_createAndUpdateDataSourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareDataSources")) {
    m_shareDataSources = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareDataSources"));
    m_shareDataSourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ViewAccountSPICECapacity")) {
    m_viewAccountSPICECapacity = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ViewAccountSPICECapacity"));
    m_viewAccountSPICECapacityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateSPICEDataset")) {
    m_createSPICEDataset = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateSPICEDataset"));
    m_createSPICEDatasetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExportToPdfInScheduledReports")) {
    m_exportToPdfInScheduledReports =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ExportToPdfInScheduledReports"));
    m_exportToPdfInScheduledReportsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExportToCsvInScheduledReports")) {
    m_exportToCsvInScheduledReports =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ExportToCsvInScheduledReports"));
    m_exportToCsvInScheduledReportsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExportToExcelInScheduledReports")) {
    m_exportToExcelInScheduledReports =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ExportToExcelInScheduledReports"));
    m_exportToExcelInScheduledReportsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IncludeContentInScheduledReportsEmail")) {
    m_includeContentInScheduledReportsEmail =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("IncludeContentInScheduledReportsEmail"));
    m_includeContentInScheduledReportsEmailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Dashboard")) {
    m_dashboard = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("Dashboard"));
    m_dashboardHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Analysis")) {
    m_analysis = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("Analysis"));
    m_analysisHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Automate")) {
    m_automate = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("Automate"));
    m_automateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Flow")) {
    m_flow = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("Flow"));
    m_flowHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Apps")) {
    m_apps = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("Apps"));
    m_appsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateApps")) {
    m_createAndUpdateApps = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateApps"));
    m_createAndUpdateAppsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareApps")) {
    m_shareApps = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareApps"));
    m_shareAppsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InvokeAppsAIInference")) {
    m_invokeAppsAIInference = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("InvokeAppsAIInference"));
    m_invokeAppsAIInferenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AccessAppsNativeDataStore")) {
    m_accessAppsNativeDataStore = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("AccessAppsNativeDataStore"));
    m_accessAppsNativeDataStoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PublishWithoutApproval")) {
    m_publishWithoutApproval = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("PublishWithoutApproval"));
    m_publishWithoutApprovalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseBedrockModels")) {
    m_useBedrockModels = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseBedrockModels"));
    m_useBedrockModelsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PerformFlowUiTask")) {
    m_performFlowUiTask = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("PerformFlowUiTask"));
    m_performFlowUiTaskHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ApproveFlowShareRequests")) {
    m_approveFlowShareRequests = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ApproveFlowShareRequests"));
    m_approveFlowShareRequestsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseAgentWebSearch")) {
    m_useAgentWebSearch = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseAgentWebSearch"));
    m_useAgentWebSearchHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KnowledgeBase")) {
    m_knowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("KnowledgeBase"));
    m_knowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateKnowledgeBases")) {
    m_createAndUpdateKnowledgeBases =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateKnowledgeBases"));
    m_createAndUpdateKnowledgeBasesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareKnowledgeBases")) {
    m_shareKnowledgeBases = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareKnowledgeBases"));
    m_shareKnowledgeBasesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SharePointKnowledgeBase")) {
    m_sharePointKnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("SharePointKnowledgeBase"));
    m_sharePointKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateSharePointKnowledgeBase")) {
    m_createAndUpdateSharePointKnowledgeBase =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateSharePointKnowledgeBase"));
    m_createAndUpdateSharePointKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareSharePointKnowledgeBase")) {
    m_shareSharePointKnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareSharePointKnowledgeBase"));
    m_shareSharePointKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseSharePointKnowledgeBase")) {
    m_useSharePointKnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseSharePointKnowledgeBase"));
    m_useSharePointKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GoogleDriveKnowledgeBase")) {
    m_googleDriveKnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("GoogleDriveKnowledgeBase"));
    m_googleDriveKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateGoogleDriveKnowledgeBase")) {
    m_createAndUpdateGoogleDriveKnowledgeBase =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateGoogleDriveKnowledgeBase"));
    m_createAndUpdateGoogleDriveKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareGoogleDriveKnowledgeBase")) {
    m_shareGoogleDriveKnowledgeBase =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareGoogleDriveKnowledgeBase"));
    m_shareGoogleDriveKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseGoogleDriveKnowledgeBase")) {
    m_useGoogleDriveKnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseGoogleDriveKnowledgeBase"));
    m_useGoogleDriveKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WebCrawlerKnowledgeBase")) {
    m_webCrawlerKnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("WebCrawlerKnowledgeBase"));
    m_webCrawlerKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateWebCrawlerKnowledgeBase")) {
    m_createAndUpdateWebCrawlerKnowledgeBase =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateWebCrawlerKnowledgeBase"));
    m_createAndUpdateWebCrawlerKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareWebCrawlerKnowledgeBase")) {
    m_shareWebCrawlerKnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareWebCrawlerKnowledgeBase"));
    m_shareWebCrawlerKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseWebCrawlerKnowledgeBase")) {
    m_useWebCrawlerKnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseWebCrawlerKnowledgeBase"));
    m_useWebCrawlerKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("S3KnowledgeBase")) {
    m_s3KnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("S3KnowledgeBase"));
    m_s3KnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateS3KnowledgeBase")) {
    m_createAndUpdateS3KnowledgeBase =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateS3KnowledgeBase"));
    m_createAndUpdateS3KnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareS3KnowledgeBase")) {
    m_shareS3KnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareS3KnowledgeBase"));
    m_shareS3KnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseS3KnowledgeBase")) {
    m_useS3KnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseS3KnowledgeBase"));
    m_useS3KnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConfluenceKnowledgeBase")) {
    m_confluenceKnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ConfluenceKnowledgeBase"));
    m_confluenceKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateConfluenceKnowledgeBase")) {
    m_createAndUpdateConfluenceKnowledgeBase =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateConfluenceKnowledgeBase"));
    m_createAndUpdateConfluenceKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareConfluenceKnowledgeBase")) {
    m_shareConfluenceKnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareConfluenceKnowledgeBase"));
    m_shareConfluenceKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseConfluenceKnowledgeBase")) {
    m_useConfluenceKnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseConfluenceKnowledgeBase"));
    m_useConfluenceKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OneDriveKnowledgeBase")) {
    m_oneDriveKnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("OneDriveKnowledgeBase"));
    m_oneDriveKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateOneDriveKnowledgeBase")) {
    m_createAndUpdateOneDriveKnowledgeBase =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateOneDriveKnowledgeBase"));
    m_createAndUpdateOneDriveKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareOneDriveKnowledgeBase")) {
    m_shareOneDriveKnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareOneDriveKnowledgeBase"));
    m_shareOneDriveKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseOneDriveKnowledgeBase")) {
    m_useOneDriveKnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseOneDriveKnowledgeBase"));
    m_useOneDriveKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("QBusinessKnowledgeBase")) {
    m_qBusinessKnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("QBusinessKnowledgeBase"));
    m_qBusinessKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateQBusinessKnowledgeBase")) {
    m_createAndUpdateQBusinessKnowledgeBase =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateQBusinessKnowledgeBase"));
    m_createAndUpdateQBusinessKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareQBusinessKnowledgeBase")) {
    m_shareQBusinessKnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareQBusinessKnowledgeBase"));
    m_shareQBusinessKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseQBusinessKnowledgeBase")) {
    m_useQBusinessKnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseQBusinessKnowledgeBase"));
    m_useQBusinessKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BedrockManagedKnowledgeBase")) {
    m_bedrockManagedKnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("BedrockManagedKnowledgeBase"));
    m_bedrockManagedKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateBedrockManagedKnowledgeBase")) {
    m_createAndUpdateBedrockManagedKnowledgeBase =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateBedrockManagedKnowledgeBase"));
    m_createAndUpdateBedrockManagedKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareBedrockManagedKnowledgeBase")) {
    m_shareBedrockManagedKnowledgeBase =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareBedrockManagedKnowledgeBase"));
    m_shareBedrockManagedKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseBedrockManagedKnowledgeBase")) {
    m_useBedrockManagedKnowledgeBase =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseBedrockManagedKnowledgeBase"));
    m_useBedrockManagedKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BoxKnowledgeBase")) {
    m_boxKnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("BoxKnowledgeBase"));
    m_boxKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateBoxKnowledgeBase")) {
    m_createAndUpdateBoxKnowledgeBase =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateBoxKnowledgeBase"));
    m_createAndUpdateBoxKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareBoxKnowledgeBase")) {
    m_shareBoxKnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareBoxKnowledgeBase"));
    m_shareBoxKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseBoxKnowledgeBase")) {
    m_useBoxKnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseBoxKnowledgeBase"));
    m_useBoxKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IDCKnowledgeBase")) {
    m_iDCKnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("IDCKnowledgeBase"));
    m_iDCKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateIDCKnowledgeBase")) {
    m_createAndUpdateIDCKnowledgeBase =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateIDCKnowledgeBase"));
    m_createAndUpdateIDCKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareIDCKnowledgeBase")) {
    m_shareIDCKnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareIDCKnowledgeBase"));
    m_shareIDCKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseIDCKnowledgeBase")) {
    m_useIDCKnowledgeBase = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseIDCKnowledgeBase"));
    m_useIDCKnowledgeBaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Action")) {
    m_action = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("Action"));
    m_actionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GenericHTTPAction")) {
    m_genericHTTPAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("GenericHTTPAction"));
    m_genericHTTPActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateGenericHTTPAction")) {
    m_createAndUpdateGenericHTTPAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateGenericHTTPAction"));
    m_createAndUpdateGenericHTTPActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareGenericHTTPAction")) {
    m_shareGenericHTTPAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareGenericHTTPAction"));
    m_shareGenericHTTPActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseGenericHTTPAction")) {
    m_useGenericHTTPAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseGenericHTTPAction"));
    m_useGenericHTTPActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AsanaAction")) {
    m_asanaAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("AsanaAction"));
    m_asanaActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateAsanaAction")) {
    m_createAndUpdateAsanaAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateAsanaAction"));
    m_createAndUpdateAsanaActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareAsanaAction")) {
    m_shareAsanaAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareAsanaAction"));
    m_shareAsanaActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseAsanaAction")) {
    m_useAsanaAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseAsanaAction"));
    m_useAsanaActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SlackAction")) {
    m_slackAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("SlackAction"));
    m_slackActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateSlackAction")) {
    m_createAndUpdateSlackAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateSlackAction"));
    m_createAndUpdateSlackActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareSlackAction")) {
    m_shareSlackAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareSlackAction"));
    m_shareSlackActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseSlackAction")) {
    m_useSlackAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseSlackAction"));
    m_useSlackActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ServiceNowAction")) {
    m_serviceNowAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ServiceNowAction"));
    m_serviceNowActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateServiceNowAction")) {
    m_createAndUpdateServiceNowAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateServiceNowAction"));
    m_createAndUpdateServiceNowActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareServiceNowAction")) {
    m_shareServiceNowAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareServiceNowAction"));
    m_shareServiceNowActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseServiceNowAction")) {
    m_useServiceNowAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseServiceNowAction"));
    m_useServiceNowActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SalesforceAction")) {
    m_salesforceAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("SalesforceAction"));
    m_salesforceActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateSalesforceAction")) {
    m_createAndUpdateSalesforceAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateSalesforceAction"));
    m_createAndUpdateSalesforceActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareSalesforceAction")) {
    m_shareSalesforceAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareSalesforceAction"));
    m_shareSalesforceActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseSalesforceAction")) {
    m_useSalesforceAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseSalesforceAction"));
    m_useSalesforceActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MSExchangeAction")) {
    m_mSExchangeAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("MSExchangeAction"));
    m_mSExchangeActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateMSExchangeAction")) {
    m_createAndUpdateMSExchangeAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateMSExchangeAction"));
    m_createAndUpdateMSExchangeActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareMSExchangeAction")) {
    m_shareMSExchangeAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareMSExchangeAction"));
    m_shareMSExchangeActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseMSExchangeAction")) {
    m_useMSExchangeAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseMSExchangeAction"));
    m_useMSExchangeActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PagerDutyAction")) {
    m_pagerDutyAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("PagerDutyAction"));
    m_pagerDutyActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdatePagerDutyAction")) {
    m_createAndUpdatePagerDutyAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdatePagerDutyAction"));
    m_createAndUpdatePagerDutyActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SharePagerDutyAction")) {
    m_sharePagerDutyAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("SharePagerDutyAction"));
    m_sharePagerDutyActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UsePagerDutyAction")) {
    m_usePagerDutyAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UsePagerDutyAction"));
    m_usePagerDutyActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("JiraAction")) {
    m_jiraAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("JiraAction"));
    m_jiraActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateJiraAction")) {
    m_createAndUpdateJiraAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateJiraAction"));
    m_createAndUpdateJiraActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareJiraAction")) {
    m_shareJiraAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareJiraAction"));
    m_shareJiraActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseJiraAction")) {
    m_useJiraAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseJiraAction"));
    m_useJiraActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConfluenceAction")) {
    m_confluenceAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ConfluenceAction"));
    m_confluenceActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateConfluenceAction")) {
    m_createAndUpdateConfluenceAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateConfluenceAction"));
    m_createAndUpdateConfluenceActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareConfluenceAction")) {
    m_shareConfluenceAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareConfluenceAction"));
    m_shareConfluenceActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseConfluenceAction")) {
    m_useConfluenceAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseConfluenceAction"));
    m_useConfluenceActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OneDriveAction")) {
    m_oneDriveAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("OneDriveAction"));
    m_oneDriveActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateOneDriveAction")) {
    m_createAndUpdateOneDriveAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateOneDriveAction"));
    m_createAndUpdateOneDriveActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareOneDriveAction")) {
    m_shareOneDriveAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareOneDriveAction"));
    m_shareOneDriveActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseOneDriveAction")) {
    m_useOneDriveAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseOneDriveAction"));
    m_useOneDriveActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SharePointAction")) {
    m_sharePointAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("SharePointAction"));
    m_sharePointActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateSharePointAction")) {
    m_createAndUpdateSharePointAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateSharePointAction"));
    m_createAndUpdateSharePointActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareSharePointAction")) {
    m_shareSharePointAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareSharePointAction"));
    m_shareSharePointActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseSharePointAction")) {
    m_useSharePointAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseSharePointAction"));
    m_useSharePointActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MSTeamsAction")) {
    m_mSTeamsAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("MSTeamsAction"));
    m_mSTeamsActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateMSTeamsAction")) {
    m_createAndUpdateMSTeamsAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateMSTeamsAction"));
    m_createAndUpdateMSTeamsActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareMSTeamsAction")) {
    m_shareMSTeamsAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareMSTeamsAction"));
    m_shareMSTeamsActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseMSTeamsAction")) {
    m_useMSTeamsAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseMSTeamsAction"));
    m_useMSTeamsActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GoogleCalendarAction")) {
    m_googleCalendarAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("GoogleCalendarAction"));
    m_googleCalendarActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateGoogleCalendarAction")) {
    m_createAndUpdateGoogleCalendarAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateGoogleCalendarAction"));
    m_createAndUpdateGoogleCalendarActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareGoogleCalendarAction")) {
    m_shareGoogleCalendarAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareGoogleCalendarAction"));
    m_shareGoogleCalendarActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseGoogleCalendarAction")) {
    m_useGoogleCalendarAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseGoogleCalendarAction"));
    m_useGoogleCalendarActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ZendeskAction")) {
    m_zendeskAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ZendeskAction"));
    m_zendeskActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateZendeskAction")) {
    m_createAndUpdateZendeskAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateZendeskAction"));
    m_createAndUpdateZendeskActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareZendeskAction")) {
    m_shareZendeskAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareZendeskAction"));
    m_shareZendeskActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseZendeskAction")) {
    m_useZendeskAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseZendeskAction"));
    m_useZendeskActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SmartsheetAction")) {
    m_smartsheetAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("SmartsheetAction"));
    m_smartsheetActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateSmartsheetAction")) {
    m_createAndUpdateSmartsheetAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateSmartsheetAction"));
    m_createAndUpdateSmartsheetActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareSmartsheetAction")) {
    m_shareSmartsheetAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareSmartsheetAction"));
    m_shareSmartsheetActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseSmartsheetAction")) {
    m_useSmartsheetAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseSmartsheetAction"));
    m_useSmartsheetActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SAPBusinessPartnerAction")) {
    m_sAPBusinessPartnerAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("SAPBusinessPartnerAction"));
    m_sAPBusinessPartnerActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateSAPBusinessPartnerAction")) {
    m_createAndUpdateSAPBusinessPartnerAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateSAPBusinessPartnerAction"));
    m_createAndUpdateSAPBusinessPartnerActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareSAPBusinessPartnerAction")) {
    m_shareSAPBusinessPartnerAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareSAPBusinessPartnerAction"));
    m_shareSAPBusinessPartnerActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseSAPBusinessPartnerAction")) {
    m_useSAPBusinessPartnerAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseSAPBusinessPartnerAction"));
    m_useSAPBusinessPartnerActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SAPProductMasterDataAction")) {
    m_sAPProductMasterDataAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("SAPProductMasterDataAction"));
    m_sAPProductMasterDataActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateSAPProductMasterDataAction")) {
    m_createAndUpdateSAPProductMasterDataAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateSAPProductMasterDataAction"));
    m_createAndUpdateSAPProductMasterDataActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareSAPProductMasterDataAction")) {
    m_shareSAPProductMasterDataAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareSAPProductMasterDataAction"));
    m_shareSAPProductMasterDataActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseSAPProductMasterDataAction")) {
    m_useSAPProductMasterDataAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseSAPProductMasterDataAction"));
    m_useSAPProductMasterDataActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SAPPhysicalInventoryAction")) {
    m_sAPPhysicalInventoryAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("SAPPhysicalInventoryAction"));
    m_sAPPhysicalInventoryActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateSAPPhysicalInventoryAction")) {
    m_createAndUpdateSAPPhysicalInventoryAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateSAPPhysicalInventoryAction"));
    m_createAndUpdateSAPPhysicalInventoryActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareSAPPhysicalInventoryAction")) {
    m_shareSAPPhysicalInventoryAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareSAPPhysicalInventoryAction"));
    m_shareSAPPhysicalInventoryActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseSAPPhysicalInventoryAction")) {
    m_useSAPPhysicalInventoryAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseSAPPhysicalInventoryAction"));
    m_useSAPPhysicalInventoryActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SAPBillOfMaterialAction")) {
    m_sAPBillOfMaterialAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("SAPBillOfMaterialAction"));
    m_sAPBillOfMaterialActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateSAPBillOfMaterialAction")) {
    m_createAndUpdateSAPBillOfMaterialAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateSAPBillOfMaterialAction"));
    m_createAndUpdateSAPBillOfMaterialActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareSAPBillOfMaterialAction")) {
    m_shareSAPBillOfMaterialAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareSAPBillOfMaterialAction"));
    m_shareSAPBillOfMaterialActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseSAPBillOfMaterialAction")) {
    m_useSAPBillOfMaterialAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseSAPBillOfMaterialAction"));
    m_useSAPBillOfMaterialActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SAPMaterialStockAction")) {
    m_sAPMaterialStockAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("SAPMaterialStockAction"));
    m_sAPMaterialStockActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateSAPMaterialStockAction")) {
    m_createAndUpdateSAPMaterialStockAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateSAPMaterialStockAction"));
    m_createAndUpdateSAPMaterialStockActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareSAPMaterialStockAction")) {
    m_shareSAPMaterialStockAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareSAPMaterialStockAction"));
    m_shareSAPMaterialStockActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseSAPMaterialStockAction")) {
    m_useSAPMaterialStockAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseSAPMaterialStockAction"));
    m_useSAPMaterialStockActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FactSetAction")) {
    m_factSetAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("FactSetAction"));
    m_factSetActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateFactSetAction")) {
    m_createAndUpdateFactSetAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateFactSetAction"));
    m_createAndUpdateFactSetActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareFactSetAction")) {
    m_shareFactSetAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareFactSetAction"));
    m_shareFactSetActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseFactSetAction")) {
    m_useFactSetAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseFactSetAction"));
    m_useFactSetActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AmazonSThreeAction")) {
    m_amazonSThreeAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("AmazonSThreeAction"));
    m_amazonSThreeActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateAmazonSThreeAction")) {
    m_createAndUpdateAmazonSThreeAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateAmazonSThreeAction"));
    m_createAndUpdateAmazonSThreeActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareAmazonSThreeAction")) {
    m_shareAmazonSThreeAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareAmazonSThreeAction"));
    m_shareAmazonSThreeActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseAmazonSThreeAction")) {
    m_useAmazonSThreeAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseAmazonSThreeAction"));
    m_useAmazonSThreeActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TextractAction")) {
    m_textractAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("TextractAction"));
    m_textractActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateTextractAction")) {
    m_createAndUpdateTextractAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateTextractAction"));
    m_createAndUpdateTextractActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareTextractAction")) {
    m_shareTextractAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareTextractAction"));
    m_shareTextractActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseTextractAction")) {
    m_useTextractAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseTextractAction"));
    m_useTextractActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ComprehendAction")) {
    m_comprehendAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ComprehendAction"));
    m_comprehendActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateComprehendAction")) {
    m_createAndUpdateComprehendAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateComprehendAction"));
    m_createAndUpdateComprehendActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareComprehendAction")) {
    m_shareComprehendAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareComprehendAction"));
    m_shareComprehendActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseComprehendAction")) {
    m_useComprehendAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseComprehendAction"));
    m_useComprehendActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ComprehendMedicalAction")) {
    m_comprehendMedicalAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ComprehendMedicalAction"));
    m_comprehendMedicalActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateComprehendMedicalAction")) {
    m_createAndUpdateComprehendMedicalAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateComprehendMedicalAction"));
    m_createAndUpdateComprehendMedicalActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareComprehendMedicalAction")) {
    m_shareComprehendMedicalAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareComprehendMedicalAction"));
    m_shareComprehendMedicalActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseComprehendMedicalAction")) {
    m_useComprehendMedicalAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseComprehendMedicalAction"));
    m_useComprehendMedicalActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AmazonBedrockARSAction")) {
    m_amazonBedrockARSAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("AmazonBedrockARSAction"));
    m_amazonBedrockARSActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateAmazonBedrockARSAction")) {
    m_createAndUpdateAmazonBedrockARSAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateAmazonBedrockARSAction"));
    m_createAndUpdateAmazonBedrockARSActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareAmazonBedrockARSAction")) {
    m_shareAmazonBedrockARSAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareAmazonBedrockARSAction"));
    m_shareAmazonBedrockARSActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseAmazonBedrockARSAction")) {
    m_useAmazonBedrockARSAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseAmazonBedrockARSAction"));
    m_useAmazonBedrockARSActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AmazonBedrockFSAction")) {
    m_amazonBedrockFSAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("AmazonBedrockFSAction"));
    m_amazonBedrockFSActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateAmazonBedrockFSAction")) {
    m_createAndUpdateAmazonBedrockFSAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateAmazonBedrockFSAction"));
    m_createAndUpdateAmazonBedrockFSActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareAmazonBedrockFSAction")) {
    m_shareAmazonBedrockFSAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareAmazonBedrockFSAction"));
    m_shareAmazonBedrockFSActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseAmazonBedrockFSAction")) {
    m_useAmazonBedrockFSAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseAmazonBedrockFSAction"));
    m_useAmazonBedrockFSActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AmazonBedrockKRSAction")) {
    m_amazonBedrockKRSAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("AmazonBedrockKRSAction"));
    m_amazonBedrockKRSActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateAmazonBedrockKRSAction")) {
    m_createAndUpdateAmazonBedrockKRSAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateAmazonBedrockKRSAction"));
    m_createAndUpdateAmazonBedrockKRSActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareAmazonBedrockKRSAction")) {
    m_shareAmazonBedrockKRSAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareAmazonBedrockKRSAction"));
    m_shareAmazonBedrockKRSActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseAmazonBedrockKRSAction")) {
    m_useAmazonBedrockKRSAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseAmazonBedrockKRSAction"));
    m_useAmazonBedrockKRSActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MCPAction")) {
    m_mCPAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("MCPAction"));
    m_mCPActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateMCPAction")) {
    m_createAndUpdateMCPAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateMCPAction"));
    m_createAndUpdateMCPActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareMCPAction")) {
    m_shareMCPAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareMCPAction"));
    m_shareMCPActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseMCPAction")) {
    m_useMCPAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseMCPAction"));
    m_useMCPActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OpenAPIAction")) {
    m_openAPIAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("OpenAPIAction"));
    m_openAPIActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateOpenAPIAction")) {
    m_createAndUpdateOpenAPIAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateOpenAPIAction"));
    m_createAndUpdateOpenAPIActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareOpenAPIAction")) {
    m_shareOpenAPIAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareOpenAPIAction"));
    m_shareOpenAPIActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseOpenAPIAction")) {
    m_useOpenAPIAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseOpenAPIAction"));
    m_useOpenAPIActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SandPGMIAction")) {
    m_sandPGMIAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("SandPGMIAction"));
    m_sandPGMIActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateSandPGMIAction")) {
    m_createAndUpdateSandPGMIAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateSandPGMIAction"));
    m_createAndUpdateSandPGMIActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareSandPGMIAction")) {
    m_shareSandPGMIAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareSandPGMIAction"));
    m_shareSandPGMIActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseSandPGMIAction")) {
    m_useSandPGMIAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseSandPGMIAction"));
    m_useSandPGMIActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SandPGlobalEnergyAction")) {
    m_sandPGlobalEnergyAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("SandPGlobalEnergyAction"));
    m_sandPGlobalEnergyActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateSandPGlobalEnergyAction")) {
    m_createAndUpdateSandPGlobalEnergyAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateSandPGlobalEnergyAction"));
    m_createAndUpdateSandPGlobalEnergyActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareSandPGlobalEnergyAction")) {
    m_shareSandPGlobalEnergyAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareSandPGlobalEnergyAction"));
    m_shareSandPGlobalEnergyActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseSandPGlobalEnergyAction")) {
    m_useSandPGlobalEnergyAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseSandPGlobalEnergyAction"));
    m_useSandPGlobalEnergyActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BambooHRAction")) {
    m_bambooHRAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("BambooHRAction"));
    m_bambooHRActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateBambooHRAction")) {
    m_createAndUpdateBambooHRAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateBambooHRAction"));
    m_createAndUpdateBambooHRActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareBambooHRAction")) {
    m_shareBambooHRAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareBambooHRAction"));
    m_shareBambooHRActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseBambooHRAction")) {
    m_useBambooHRAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseBambooHRAction"));
    m_useBambooHRActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BoxAgentAction")) {
    m_boxAgentAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("BoxAgentAction"));
    m_boxAgentActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateBoxAgentAction")) {
    m_createAndUpdateBoxAgentAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateBoxAgentAction"));
    m_createAndUpdateBoxAgentActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareBoxAgentAction")) {
    m_shareBoxAgentAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareBoxAgentAction"));
    m_shareBoxAgentActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseBoxAgentAction")) {
    m_useBoxAgentAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseBoxAgentAction"));
    m_useBoxAgentActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CanvaAgentAction")) {
    m_canvaAgentAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CanvaAgentAction"));
    m_canvaAgentActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateCanvaAgentAction")) {
    m_createAndUpdateCanvaAgentAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateCanvaAgentAction"));
    m_createAndUpdateCanvaAgentActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareCanvaAgentAction")) {
    m_shareCanvaAgentAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareCanvaAgentAction"));
    m_shareCanvaAgentActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseCanvaAgentAction")) {
    m_useCanvaAgentAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseCanvaAgentAction"));
    m_useCanvaAgentActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GithubAction")) {
    m_githubAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("GithubAction"));
    m_githubActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateGithubAction")) {
    m_createAndUpdateGithubAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateGithubAction"));
    m_createAndUpdateGithubActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareGithubAction")) {
    m_shareGithubAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareGithubAction"));
    m_shareGithubActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseGithubAction")) {
    m_useGithubAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseGithubAction"));
    m_useGithubActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NotionAction")) {
    m_notionAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("NotionAction"));
    m_notionActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateNotionAction")) {
    m_createAndUpdateNotionAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateNotionAction"));
    m_createAndUpdateNotionActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareNotionAction")) {
    m_shareNotionAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareNotionAction"));
    m_shareNotionActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseNotionAction")) {
    m_useNotionAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseNotionAction"));
    m_useNotionActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LinearAction")) {
    m_linearAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("LinearAction"));
    m_linearActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateLinearAction")) {
    m_createAndUpdateLinearAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateLinearAction"));
    m_createAndUpdateLinearActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareLinearAction")) {
    m_shareLinearAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareLinearAction"));
    m_shareLinearActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseLinearAction")) {
    m_useLinearAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseLinearAction"));
    m_useLinearActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("HuggingFaceAction")) {
    m_huggingFaceAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("HuggingFaceAction"));
    m_huggingFaceActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateHuggingFaceAction")) {
    m_createAndUpdateHuggingFaceAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateHuggingFaceAction"));
    m_createAndUpdateHuggingFaceActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareHuggingFaceAction")) {
    m_shareHuggingFaceAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareHuggingFaceAction"));
    m_shareHuggingFaceActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseHuggingFaceAction")) {
    m_useHuggingFaceAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseHuggingFaceAction"));
    m_useHuggingFaceActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MondayAction")) {
    m_mondayAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("MondayAction"));
    m_mondayActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateMondayAction")) {
    m_createAndUpdateMondayAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateMondayAction"));
    m_createAndUpdateMondayActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareMondayAction")) {
    m_shareMondayAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareMondayAction"));
    m_shareMondayActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseMondayAction")) {
    m_useMondayAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseMondayAction"));
    m_useMondayActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("HubspotAction")) {
    m_hubspotAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("HubspotAction"));
    m_hubspotActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateHubspotAction")) {
    m_createAndUpdateHubspotAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateHubspotAction"));
    m_createAndUpdateHubspotActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareHubspotAction")) {
    m_shareHubspotAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareHubspotAction"));
    m_shareHubspotActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseHubspotAction")) {
    m_useHubspotAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseHubspotAction"));
    m_useHubspotActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IntercomAction")) {
    m_intercomAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("IntercomAction"));
    m_intercomActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateIntercomAction")) {
    m_createAndUpdateIntercomAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateIntercomAction"));
    m_createAndUpdateIntercomActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareIntercomAction")) {
    m_shareIntercomAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareIntercomAction"));
    m_shareIntercomActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseIntercomAction")) {
    m_useIntercomAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseIntercomAction"));
    m_useIntercomActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NewRelicAction")) {
    m_newRelicAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("NewRelicAction"));
    m_newRelicActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateNewRelicAction")) {
    m_createAndUpdateNewRelicAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateNewRelicAction"));
    m_createAndUpdateNewRelicActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareNewRelicAction")) {
    m_shareNewRelicAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareNewRelicAction"));
    m_shareNewRelicActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseNewRelicAction")) {
    m_useNewRelicAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseNewRelicAction"));
    m_useNewRelicActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PagerDutyAgentAction")) {
    m_pagerDutyAgentAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("PagerDutyAgentAction"));
    m_pagerDutyAgentActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdatePagerDutyAgentAction")) {
    m_createAndUpdatePagerDutyAgentAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdatePagerDutyAgentAction"));
    m_createAndUpdatePagerDutyAgentActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SharePagerDutyAgentAction")) {
    m_sharePagerDutyAgentAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("SharePagerDutyAgentAction"));
    m_sharePagerDutyAgentActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UsePagerDutyAgentAction")) {
    m_usePagerDutyAgentAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UsePagerDutyAgentAction"));
    m_usePagerDutyAgentActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VisierAgentAction")) {
    m_visierAgentAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("VisierAgentAction"));
    m_visierAgentActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateVisierAgentAction")) {
    m_createAndUpdateVisierAgentAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateVisierAgentAction"));
    m_createAndUpdateVisierAgentActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareVisierAgentAction")) {
    m_shareVisierAgentAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareVisierAgentAction"));
    m_shareVisierAgentActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseVisierAgentAction")) {
    m_useVisierAgentAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseVisierAgentAction"));
    m_useVisierAgentActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ZoomAction")) {
    m_zoomAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ZoomAction"));
    m_zoomActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateZoomAction")) {
    m_createAndUpdateZoomAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateZoomAction"));
    m_createAndUpdateZoomActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareZoomAction")) {
    m_shareZoomAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareZoomAction"));
    m_shareZoomActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseZoomAction")) {
    m_useZoomAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseZoomAction"));
    m_useZoomActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnowFlakeAction")) {
    m_snowFlakeAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("SnowFlakeAction"));
    m_snowFlakeActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateSnowFlakeAction")) {
    m_createAndUpdateSnowFlakeAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateSnowFlakeAction"));
    m_createAndUpdateSnowFlakeActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareSnowFlakeAction")) {
    m_shareSnowFlakeAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareSnowFlakeAction"));
    m_shareSnowFlakeActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseSnowFlakeAction")) {
    m_useSnowFlakeAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseSnowFlakeAction"));
    m_useSnowFlakeActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ZapierAction")) {
    m_zapierAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ZapierAction"));
    m_zapierActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateZapierAction")) {
    m_createAndUpdateZapierAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateZapierAction"));
    m_createAndUpdateZapierActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareZapierAction")) {
    m_shareZapierAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareZapierAction"));
    m_shareZapierActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseZapierAction")) {
    m_useZapierAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseZapierAction"));
    m_useZapierActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AirtableAction")) {
    m_airtableAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("AirtableAction"));
    m_airtableActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateAirtableAction")) {
    m_createAndUpdateAirtableAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateAirtableAction"));
    m_createAndUpdateAirtableActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareAirtableAction")) {
    m_shareAirtableAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareAirtableAction"));
    m_shareAirtableActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseAirtableAction")) {
    m_useAirtableAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseAirtableAction"));
    m_useAirtableActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DropboxAction")) {
    m_dropboxAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("DropboxAction"));
    m_dropboxActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateDropboxAction")) {
    m_createAndUpdateDropboxAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateDropboxAction"));
    m_createAndUpdateDropboxActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareDropboxAction")) {
    m_shareDropboxAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareDropboxAction"));
    m_shareDropboxActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseDropboxAction")) {
    m_useDropboxAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseDropboxAction"));
    m_useDropboxActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GmailAction")) {
    m_gmailAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("GmailAction"));
    m_gmailActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateGmailAction")) {
    m_createAndUpdateGmailAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateGmailAction"));
    m_createAndUpdateGmailActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareGmailAction")) {
    m_shareGmailAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareGmailAction"));
    m_shareGmailActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseGmailAction")) {
    m_useGmailAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseGmailAction"));
    m_useGmailActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GoogleAnalyticsAction")) {
    m_googleAnalyticsAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("GoogleAnalyticsAction"));
    m_googleAnalyticsActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateGoogleAnalyticsAction")) {
    m_createAndUpdateGoogleAnalyticsAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateGoogleAnalyticsAction"));
    m_createAndUpdateGoogleAnalyticsActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareGoogleAnalyticsAction")) {
    m_shareGoogleAnalyticsAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareGoogleAnalyticsAction"));
    m_shareGoogleAnalyticsActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseGoogleAnalyticsAction")) {
    m_useGoogleAnalyticsAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseGoogleAnalyticsAction"));
    m_useGoogleAnalyticsActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GoogleDocsAction")) {
    m_googleDocsAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("GoogleDocsAction"));
    m_googleDocsActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateGoogleDocsAction")) {
    m_createAndUpdateGoogleDocsAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateGoogleDocsAction"));
    m_createAndUpdateGoogleDocsActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareGoogleDocsAction")) {
    m_shareGoogleDocsAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareGoogleDocsAction"));
    m_shareGoogleDocsActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseGoogleDocsAction")) {
    m_useGoogleDocsAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseGoogleDocsAction"));
    m_useGoogleDocsActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GoogleDriveAction")) {
    m_googleDriveAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("GoogleDriveAction"));
    m_googleDriveActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateGoogleDriveAction")) {
    m_createAndUpdateGoogleDriveAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateGoogleDriveAction"));
    m_createAndUpdateGoogleDriveActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareGoogleDriveAction")) {
    m_shareGoogleDriveAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareGoogleDriveAction"));
    m_shareGoogleDriveActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseGoogleDriveAction")) {
    m_useGoogleDriveAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseGoogleDriveAction"));
    m_useGoogleDriveActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GoogleMeetAction")) {
    m_googleMeetAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("GoogleMeetAction"));
    m_googleMeetActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateGoogleMeetAction")) {
    m_createAndUpdateGoogleMeetAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateGoogleMeetAction"));
    m_createAndUpdateGoogleMeetActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareGoogleMeetAction")) {
    m_shareGoogleMeetAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareGoogleMeetAction"));
    m_shareGoogleMeetActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseGoogleMeetAction")) {
    m_useGoogleMeetAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseGoogleMeetAction"));
    m_useGoogleMeetActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GoogleSheetsAction")) {
    m_googleSheetsAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("GoogleSheetsAction"));
    m_googleSheetsActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateGoogleSheetsAction")) {
    m_createAndUpdateGoogleSheetsAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateGoogleSheetsAction"));
    m_createAndUpdateGoogleSheetsActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareGoogleSheetsAction")) {
    m_shareGoogleSheetsAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareGoogleSheetsAction"));
    m_shareGoogleSheetsActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseGoogleSheetsAction")) {
    m_useGoogleSheetsAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseGoogleSheetsAction"));
    m_useGoogleSheetsActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GoogleSlidesAction")) {
    m_googleSlidesAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("GoogleSlidesAction"));
    m_googleSlidesActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateGoogleSlidesAction")) {
    m_createAndUpdateGoogleSlidesAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateGoogleSlidesAction"));
    m_createAndUpdateGoogleSlidesActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareGoogleSlidesAction")) {
    m_shareGoogleSlidesAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareGoogleSlidesAction"));
    m_shareGoogleSlidesActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseGoogleSlidesAction")) {
    m_useGoogleSlidesAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseGoogleSlidesAction"));
    m_useGoogleSlidesActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("QuickBooksAction")) {
    m_quickBooksAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("QuickBooksAction"));
    m_quickBooksActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateQuickBooksAction")) {
    m_createAndUpdateQuickBooksAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateQuickBooksAction"));
    m_createAndUpdateQuickBooksActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareQuickBooksAction")) {
    m_shareQuickBooksAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareQuickBooksAction"));
    m_shareQuickBooksActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseQuickBooksAction")) {
    m_useQuickBooksAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseQuickBooksAction"));
    m_useQuickBooksActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FigmaAction")) {
    m_figmaAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("FigmaAction"));
    m_figmaActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateFigmaAction")) {
    m_createAndUpdateFigmaAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateFigmaAction"));
    m_createAndUpdateFigmaActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareFigmaAction")) {
    m_shareFigmaAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareFigmaAction"));
    m_shareFigmaActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseFigmaAction")) {
    m_useFigmaAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseFigmaAction"));
    m_useFigmaActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WhatsAppAction")) {
    m_whatsAppAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("WhatsAppAction"));
    m_whatsAppActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateWhatsAppAction")) {
    m_createAndUpdateWhatsAppAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateWhatsAppAction"));
    m_createAndUpdateWhatsAppActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareWhatsAppAction")) {
    m_shareWhatsAppAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareWhatsAppAction"));
    m_shareWhatsAppActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseWhatsAppAction")) {
    m_useWhatsAppAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseWhatsAppAction"));
    m_useWhatsAppActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GoogleChatAction")) {
    m_googleChatAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("GoogleChatAction"));
    m_googleChatActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateGoogleChatAction")) {
    m_createAndUpdateGoogleChatAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateGoogleChatAction"));
    m_createAndUpdateGoogleChatActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareGoogleChatAction")) {
    m_shareGoogleChatAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareGoogleChatAction"));
    m_shareGoogleChatActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseGoogleChatAction")) {
    m_useGoogleChatAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseGoogleChatAction"));
    m_useGoogleChatActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OneNoteAction")) {
    m_oneNoteAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("OneNoteAction"));
    m_oneNoteActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateOneNoteAction")) {
    m_createAndUpdateOneNoteAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateOneNoteAction"));
    m_createAndUpdateOneNoteActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareOneNoteAction")) {
    m_shareOneNoteAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareOneNoteAction"));
    m_shareOneNoteActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseOneNoteAction")) {
    m_useOneNoteAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseOneNoteAction"));
    m_useOneNoteActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShopifyAction")) {
    m_shopifyAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShopifyAction"));
    m_shopifyActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateShopifyAction")) {
    m_createAndUpdateShopifyAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateShopifyAction"));
    m_createAndUpdateShopifyActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareShopifyAction")) {
    m_shareShopifyAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareShopifyAction"));
    m_shareShopifyActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseShopifyAction")) {
    m_useShopifyAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseShopifyAction"));
    m_useShopifyActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AdobeAction")) {
    m_adobeAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("AdobeAction"));
    m_adobeActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateAdobeAction")) {
    m_createAndUpdateAdobeAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateAdobeAction"));
    m_createAndUpdateAdobeActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareAdobeAction")) {
    m_shareAdobeAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareAdobeAction"));
    m_shareAdobeActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseAdobeAction")) {
    m_useAdobeAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseAdobeAction"));
    m_useAdobeActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CiscoWebexVidcastAction")) {
    m_ciscoWebexVidcastAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CiscoWebexVidcastAction"));
    m_ciscoWebexVidcastActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateCiscoWebexVidcastAction")) {
    m_createAndUpdateCiscoWebexVidcastAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateCiscoWebexVidcastAction"));
    m_createAndUpdateCiscoWebexVidcastActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareCiscoWebexVidcastAction")) {
    m_shareCiscoWebexVidcastAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareCiscoWebexVidcastAction"));
    m_shareCiscoWebexVidcastActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseCiscoWebexVidcastAction")) {
    m_useCiscoWebexVidcastAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseCiscoWebexVidcastAction"));
    m_useCiscoWebexVidcastActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CiscoWebexMeetingsAction")) {
    m_ciscoWebexMeetingsAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CiscoWebexMeetingsAction"));
    m_ciscoWebexMeetingsActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateCiscoWebexMeetingsAction")) {
    m_createAndUpdateCiscoWebexMeetingsAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateCiscoWebexMeetingsAction"));
    m_createAndUpdateCiscoWebexMeetingsActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareCiscoWebexMeetingsAction")) {
    m_shareCiscoWebexMeetingsAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareCiscoWebexMeetingsAction"));
    m_shareCiscoWebexMeetingsActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseCiscoWebexMeetingsAction")) {
    m_useCiscoWebexMeetingsAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseCiscoWebexMeetingsAction"));
    m_useCiscoWebexMeetingsActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DunAndBradstreetAction")) {
    m_dunAndBradstreetAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("DunAndBradstreetAction"));
    m_dunAndBradstreetActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateDunAndBradstreetAction")) {
    m_createAndUpdateDunAndBradstreetAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateDunAndBradstreetAction"));
    m_createAndUpdateDunAndBradstreetActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareDunAndBradstreetAction")) {
    m_shareDunAndBradstreetAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareDunAndBradstreetAction"));
    m_shareDunAndBradstreetActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseDunAndBradstreetAction")) {
    m_useDunAndBradstreetAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseDunAndBradstreetAction"));
    m_useDunAndBradstreetActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("HGInsightsAction")) {
    m_hGInsightsAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("HGInsightsAction"));
    m_hGInsightsActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateHGInsightsAction")) {
    m_createAndUpdateHGInsightsAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateHGInsightsAction"));
    m_createAndUpdateHGInsightsActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareHGInsightsAction")) {
    m_shareHGInsightsAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareHGInsightsAction"));
    m_shareHGInsightsActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseHGInsightsAction")) {
    m_useHGInsightsAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseHGInsightsAction"));
    m_useHGInsightsActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ZoomInfoAction")) {
    m_zoomInfoAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ZoomInfoAction"));
    m_zoomInfoActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateZoomInfoAction")) {
    m_createAndUpdateZoomInfoAction =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateZoomInfoAction"));
    m_createAndUpdateZoomInfoActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareZoomInfoAction")) {
    m_shareZoomInfoAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareZoomInfoAction"));
    m_shareZoomInfoActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseZoomInfoAction")) {
    m_useZoomInfoAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseZoomInfoAction"));
    m_useZoomInfoActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MoodysAction")) {
    m_moodysAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("MoodysAction"));
    m_moodysActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateMoodysAction")) {
    m_createAndUpdateMoodysAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateMoodysAction"));
    m_createAndUpdateMoodysActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareMoodysAction")) {
    m_shareMoodysAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareMoodysAction"));
    m_shareMoodysActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseMoodysAction")) {
    m_useMoodysAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseMoodysAction"));
    m_useMoodysActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BeeAction")) {
    m_beeAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("BeeAction"));
    m_beeActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateAndUpdateBeeAction")) {
    m_createAndUpdateBeeAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateAndUpdateBeeAction"));
    m_createAndUpdateBeeActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareBeeAction")) {
    m_shareBeeAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareBeeAction"));
    m_shareBeeActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseBeeAction")) {
    m_useBeeAction = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseBeeAction"));
    m_useBeeActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Topic")) {
    m_topic = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("Topic"));
    m_topicHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EditVisualWithQ")) {
    m_editVisualWithQ = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("EditVisualWithQ"));
    m_editVisualWithQHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BuildCalculatedFieldWithQ")) {
    m_buildCalculatedFieldWithQ = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("BuildCalculatedFieldWithQ"));
    m_buildCalculatedFieldWithQHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateDashboardExecutiveSummaryWithQ")) {
    m_createDashboardExecutiveSummaryWithQ =
        CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateDashboardExecutiveSummaryWithQ"));
    m_createDashboardExecutiveSummaryWithQHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Space")) {
    m_space = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("Space"));
    m_spaceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateSpaces")) {
    m_createSpaces = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateSpaces"));
    m_createSpacesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareSpaces")) {
    m_shareSpaces = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareSpaces"));
    m_shareSpacesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ChatAgent")) {
    m_chatAgent = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ChatAgent"));
    m_chatAgentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateChatAgents")) {
    m_createChatAgents = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("CreateChatAgents"));
    m_createChatAgentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShareChatAgents")) {
    m_shareChatAgents = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ShareChatAgents"));
    m_shareChatAgentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Research")) {
    m_research = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("Research"));
    m_researchHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SelfUpgradeUserRole")) {
    m_selfUpgradeUserRole = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("SelfUpgradeUserRole"));
    m_selfUpgradeUserRoleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Extension")) {
    m_extension = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("Extension"));
    m_extensionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseBrowserExtension")) {
    m_useBrowserExtension = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseBrowserExtension"));
    m_useBrowserExtensionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseWordAddInExtension")) {
    m_useWordAddInExtension = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseWordAddInExtension"));
    m_useWordAddInExtensionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseOutlookAddInExtension")) {
    m_useOutlookAddInExtension = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseOutlookAddInExtension"));
    m_useOutlookAddInExtensionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseExcelAddInExtension")) {
    m_useExcelAddInExtension = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UseExcelAddInExtension"));
    m_useExcelAddInExtensionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UsePowerpointAddInExtension")) {
    m_usePowerpointAddInExtension = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("UsePowerpointAddInExtension"));
    m_usePowerpointAddInExtensionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ManageSharedFolders")) {
    m_manageSharedFolders = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ManageSharedFolders"));
    m_manageSharedFoldersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GenerateAnalyses")) {
    m_generateAnalyses = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("GenerateAnalyses"));
    m_generateAnalysesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Story")) {
    m_story = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("Story"));
    m_storyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Scenario")) {
    m_scenario = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("Scenario"));
    m_scenarioHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Trigger")) {
    m_trigger = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("Trigger"));
    m_triggerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScheduleTrigger")) {
    m_scheduleTrigger = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("ScheduleTrigger"));
    m_scheduleTriggerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InboundEmailTrigger")) {
    m_inboundEmailTrigger = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("InboundEmailTrigger"));
    m_inboundEmailTriggerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("QuickEventTrigger")) {
    m_quickEventTrigger = CapabilityStateMapper::GetCapabilityStateForName(jsonValue.GetString("QuickEventTrigger"));
    m_quickEventTriggerHasBeenSet = true;
  }
  return *this;
}

JsonValue Capabilities::Jsonize() const {
  JsonValue payload;

  if (m_exportToCsvHasBeenSet) {
    payload.WithString("ExportToCsv", CapabilityStateMapper::GetNameForCapabilityState(m_exportToCsv));
  }

  if (m_exportToExcelHasBeenSet) {
    payload.WithString("ExportToExcel", CapabilityStateMapper::GetNameForCapabilityState(m_exportToExcel));
  }

  if (m_exportToPdfHasBeenSet) {
    payload.WithString("ExportToPdf", CapabilityStateMapper::GetNameForCapabilityState(m_exportToPdf));
  }

  if (m_printReportsHasBeenSet) {
    payload.WithString("PrintReports", CapabilityStateMapper::GetNameForCapabilityState(m_printReports));
  }

  if (m_createAndUpdateThemesHasBeenSet) {
    payload.WithString("CreateAndUpdateThemes", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateThemes));
  }

  if (m_addOrRunAnomalyDetectionForAnalysesHasBeenSet) {
    payload.WithString("AddOrRunAnomalyDetectionForAnalyses",
                       CapabilityStateMapper::GetNameForCapabilityState(m_addOrRunAnomalyDetectionForAnalyses));
  }

  if (m_shareAnalysesHasBeenSet) {
    payload.WithString("ShareAnalyses", CapabilityStateMapper::GetNameForCapabilityState(m_shareAnalyses));
  }

  if (m_createAndUpdateDatasetsHasBeenSet) {
    payload.WithString("CreateAndUpdateDatasets", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateDatasets));
  }

  if (m_shareDatasetsHasBeenSet) {
    payload.WithString("ShareDatasets", CapabilityStateMapper::GetNameForCapabilityState(m_shareDatasets));
  }

  if (m_subscribeDashboardEmailReportsHasBeenSet) {
    payload.WithString("SubscribeDashboardEmailReports",
                       CapabilityStateMapper::GetNameForCapabilityState(m_subscribeDashboardEmailReports));
  }

  if (m_createAndUpdateDashboardEmailReportsHasBeenSet) {
    payload.WithString("CreateAndUpdateDashboardEmailReports",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateDashboardEmailReports));
  }

  if (m_shareDashboardsHasBeenSet) {
    payload.WithString("ShareDashboards", CapabilityStateMapper::GetNameForCapabilityState(m_shareDashboards));
  }

  if (m_createAndUpdateThresholdAlertsHasBeenSet) {
    payload.WithString("CreateAndUpdateThresholdAlerts",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateThresholdAlerts));
  }

  if (m_renameSharedFoldersHasBeenSet) {
    payload.WithString("RenameSharedFolders", CapabilityStateMapper::GetNameForCapabilityState(m_renameSharedFolders));
  }

  if (m_createSharedFoldersHasBeenSet) {
    payload.WithString("CreateSharedFolders", CapabilityStateMapper::GetNameForCapabilityState(m_createSharedFolders));
  }

  if (m_createAndUpdateDataSourcesHasBeenSet) {
    payload.WithString("CreateAndUpdateDataSources", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateDataSources));
  }

  if (m_shareDataSourcesHasBeenSet) {
    payload.WithString("ShareDataSources", CapabilityStateMapper::GetNameForCapabilityState(m_shareDataSources));
  }

  if (m_viewAccountSPICECapacityHasBeenSet) {
    payload.WithString("ViewAccountSPICECapacity", CapabilityStateMapper::GetNameForCapabilityState(m_viewAccountSPICECapacity));
  }

  if (m_createSPICEDatasetHasBeenSet) {
    payload.WithString("CreateSPICEDataset", CapabilityStateMapper::GetNameForCapabilityState(m_createSPICEDataset));
  }

  if (m_exportToPdfInScheduledReportsHasBeenSet) {
    payload.WithString("ExportToPdfInScheduledReports", CapabilityStateMapper::GetNameForCapabilityState(m_exportToPdfInScheduledReports));
  }

  if (m_exportToCsvInScheduledReportsHasBeenSet) {
    payload.WithString("ExportToCsvInScheduledReports", CapabilityStateMapper::GetNameForCapabilityState(m_exportToCsvInScheduledReports));
  }

  if (m_exportToExcelInScheduledReportsHasBeenSet) {
    payload.WithString("ExportToExcelInScheduledReports",
                       CapabilityStateMapper::GetNameForCapabilityState(m_exportToExcelInScheduledReports));
  }

  if (m_includeContentInScheduledReportsEmailHasBeenSet) {
    payload.WithString("IncludeContentInScheduledReportsEmail",
                       CapabilityStateMapper::GetNameForCapabilityState(m_includeContentInScheduledReportsEmail));
  }

  if (m_dashboardHasBeenSet) {
    payload.WithString("Dashboard", CapabilityStateMapper::GetNameForCapabilityState(m_dashboard));
  }

  if (m_analysisHasBeenSet) {
    payload.WithString("Analysis", CapabilityStateMapper::GetNameForCapabilityState(m_analysis));
  }

  if (m_automateHasBeenSet) {
    payload.WithString("Automate", CapabilityStateMapper::GetNameForCapabilityState(m_automate));
  }

  if (m_flowHasBeenSet) {
    payload.WithString("Flow", CapabilityStateMapper::GetNameForCapabilityState(m_flow));
  }

  if (m_appsHasBeenSet) {
    payload.WithString("Apps", CapabilityStateMapper::GetNameForCapabilityState(m_apps));
  }

  if (m_createAndUpdateAppsHasBeenSet) {
    payload.WithString("CreateAndUpdateApps", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateApps));
  }

  if (m_shareAppsHasBeenSet) {
    payload.WithString("ShareApps", CapabilityStateMapper::GetNameForCapabilityState(m_shareApps));
  }

  if (m_invokeAppsAIInferenceHasBeenSet) {
    payload.WithString("InvokeAppsAIInference", CapabilityStateMapper::GetNameForCapabilityState(m_invokeAppsAIInference));
  }

  if (m_accessAppsNativeDataStoreHasBeenSet) {
    payload.WithString("AccessAppsNativeDataStore", CapabilityStateMapper::GetNameForCapabilityState(m_accessAppsNativeDataStore));
  }

  if (m_publishWithoutApprovalHasBeenSet) {
    payload.WithString("PublishWithoutApproval", CapabilityStateMapper::GetNameForCapabilityState(m_publishWithoutApproval));
  }

  if (m_useBedrockModelsHasBeenSet) {
    payload.WithString("UseBedrockModels", CapabilityStateMapper::GetNameForCapabilityState(m_useBedrockModels));
  }

  if (m_performFlowUiTaskHasBeenSet) {
    payload.WithString("PerformFlowUiTask", CapabilityStateMapper::GetNameForCapabilityState(m_performFlowUiTask));
  }

  if (m_approveFlowShareRequestsHasBeenSet) {
    payload.WithString("ApproveFlowShareRequests", CapabilityStateMapper::GetNameForCapabilityState(m_approveFlowShareRequests));
  }

  if (m_useAgentWebSearchHasBeenSet) {
    payload.WithString("UseAgentWebSearch", CapabilityStateMapper::GetNameForCapabilityState(m_useAgentWebSearch));
  }

  if (m_knowledgeBaseHasBeenSet) {
    payload.WithString("KnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_knowledgeBase));
  }

  if (m_createAndUpdateKnowledgeBasesHasBeenSet) {
    payload.WithString("CreateAndUpdateKnowledgeBases", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateKnowledgeBases));
  }

  if (m_shareKnowledgeBasesHasBeenSet) {
    payload.WithString("ShareKnowledgeBases", CapabilityStateMapper::GetNameForCapabilityState(m_shareKnowledgeBases));
  }

  if (m_sharePointKnowledgeBaseHasBeenSet) {
    payload.WithString("SharePointKnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_sharePointKnowledgeBase));
  }

  if (m_createAndUpdateSharePointKnowledgeBaseHasBeenSet) {
    payload.WithString("CreateAndUpdateSharePointKnowledgeBase",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateSharePointKnowledgeBase));
  }

  if (m_shareSharePointKnowledgeBaseHasBeenSet) {
    payload.WithString("ShareSharePointKnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_shareSharePointKnowledgeBase));
  }

  if (m_useSharePointKnowledgeBaseHasBeenSet) {
    payload.WithString("UseSharePointKnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_useSharePointKnowledgeBase));
  }

  if (m_googleDriveKnowledgeBaseHasBeenSet) {
    payload.WithString("GoogleDriveKnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_googleDriveKnowledgeBase));
  }

  if (m_createAndUpdateGoogleDriveKnowledgeBaseHasBeenSet) {
    payload.WithString("CreateAndUpdateGoogleDriveKnowledgeBase",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateGoogleDriveKnowledgeBase));
  }

  if (m_shareGoogleDriveKnowledgeBaseHasBeenSet) {
    payload.WithString("ShareGoogleDriveKnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_shareGoogleDriveKnowledgeBase));
  }

  if (m_useGoogleDriveKnowledgeBaseHasBeenSet) {
    payload.WithString("UseGoogleDriveKnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_useGoogleDriveKnowledgeBase));
  }

  if (m_webCrawlerKnowledgeBaseHasBeenSet) {
    payload.WithString("WebCrawlerKnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_webCrawlerKnowledgeBase));
  }

  if (m_createAndUpdateWebCrawlerKnowledgeBaseHasBeenSet) {
    payload.WithString("CreateAndUpdateWebCrawlerKnowledgeBase",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateWebCrawlerKnowledgeBase));
  }

  if (m_shareWebCrawlerKnowledgeBaseHasBeenSet) {
    payload.WithString("ShareWebCrawlerKnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_shareWebCrawlerKnowledgeBase));
  }

  if (m_useWebCrawlerKnowledgeBaseHasBeenSet) {
    payload.WithString("UseWebCrawlerKnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_useWebCrawlerKnowledgeBase));
  }

  if (m_s3KnowledgeBaseHasBeenSet) {
    payload.WithString("S3KnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_s3KnowledgeBase));
  }

  if (m_createAndUpdateS3KnowledgeBaseHasBeenSet) {
    payload.WithString("CreateAndUpdateS3KnowledgeBase",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateS3KnowledgeBase));
  }

  if (m_shareS3KnowledgeBaseHasBeenSet) {
    payload.WithString("ShareS3KnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_shareS3KnowledgeBase));
  }

  if (m_useS3KnowledgeBaseHasBeenSet) {
    payload.WithString("UseS3KnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_useS3KnowledgeBase));
  }

  if (m_confluenceKnowledgeBaseHasBeenSet) {
    payload.WithString("ConfluenceKnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_confluenceKnowledgeBase));
  }

  if (m_createAndUpdateConfluenceKnowledgeBaseHasBeenSet) {
    payload.WithString("CreateAndUpdateConfluenceKnowledgeBase",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateConfluenceKnowledgeBase));
  }

  if (m_shareConfluenceKnowledgeBaseHasBeenSet) {
    payload.WithString("ShareConfluenceKnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_shareConfluenceKnowledgeBase));
  }

  if (m_useConfluenceKnowledgeBaseHasBeenSet) {
    payload.WithString("UseConfluenceKnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_useConfluenceKnowledgeBase));
  }

  if (m_oneDriveKnowledgeBaseHasBeenSet) {
    payload.WithString("OneDriveKnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_oneDriveKnowledgeBase));
  }

  if (m_createAndUpdateOneDriveKnowledgeBaseHasBeenSet) {
    payload.WithString("CreateAndUpdateOneDriveKnowledgeBase",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateOneDriveKnowledgeBase));
  }

  if (m_shareOneDriveKnowledgeBaseHasBeenSet) {
    payload.WithString("ShareOneDriveKnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_shareOneDriveKnowledgeBase));
  }

  if (m_useOneDriveKnowledgeBaseHasBeenSet) {
    payload.WithString("UseOneDriveKnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_useOneDriveKnowledgeBase));
  }

  if (m_qBusinessKnowledgeBaseHasBeenSet) {
    payload.WithString("QBusinessKnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_qBusinessKnowledgeBase));
  }

  if (m_createAndUpdateQBusinessKnowledgeBaseHasBeenSet) {
    payload.WithString("CreateAndUpdateQBusinessKnowledgeBase",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateQBusinessKnowledgeBase));
  }

  if (m_shareQBusinessKnowledgeBaseHasBeenSet) {
    payload.WithString("ShareQBusinessKnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_shareQBusinessKnowledgeBase));
  }

  if (m_useQBusinessKnowledgeBaseHasBeenSet) {
    payload.WithString("UseQBusinessKnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_useQBusinessKnowledgeBase));
  }

  if (m_bedrockManagedKnowledgeBaseHasBeenSet) {
    payload.WithString("BedrockManagedKnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_bedrockManagedKnowledgeBase));
  }

  if (m_createAndUpdateBedrockManagedKnowledgeBaseHasBeenSet) {
    payload.WithString("CreateAndUpdateBedrockManagedKnowledgeBase",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateBedrockManagedKnowledgeBase));
  }

  if (m_shareBedrockManagedKnowledgeBaseHasBeenSet) {
    payload.WithString("ShareBedrockManagedKnowledgeBase",
                       CapabilityStateMapper::GetNameForCapabilityState(m_shareBedrockManagedKnowledgeBase));
  }

  if (m_useBedrockManagedKnowledgeBaseHasBeenSet) {
    payload.WithString("UseBedrockManagedKnowledgeBase",
                       CapabilityStateMapper::GetNameForCapabilityState(m_useBedrockManagedKnowledgeBase));
  }

  if (m_boxKnowledgeBaseHasBeenSet) {
    payload.WithString("BoxKnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_boxKnowledgeBase));
  }

  if (m_createAndUpdateBoxKnowledgeBaseHasBeenSet) {
    payload.WithString("CreateAndUpdateBoxKnowledgeBase",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateBoxKnowledgeBase));
  }

  if (m_shareBoxKnowledgeBaseHasBeenSet) {
    payload.WithString("ShareBoxKnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_shareBoxKnowledgeBase));
  }

  if (m_useBoxKnowledgeBaseHasBeenSet) {
    payload.WithString("UseBoxKnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_useBoxKnowledgeBase));
  }

  if (m_iDCKnowledgeBaseHasBeenSet) {
    payload.WithString("IDCKnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_iDCKnowledgeBase));
  }

  if (m_createAndUpdateIDCKnowledgeBaseHasBeenSet) {
    payload.WithString("CreateAndUpdateIDCKnowledgeBase",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateIDCKnowledgeBase));
  }

  if (m_shareIDCKnowledgeBaseHasBeenSet) {
    payload.WithString("ShareIDCKnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_shareIDCKnowledgeBase));
  }

  if (m_useIDCKnowledgeBaseHasBeenSet) {
    payload.WithString("UseIDCKnowledgeBase", CapabilityStateMapper::GetNameForCapabilityState(m_useIDCKnowledgeBase));
  }

  if (m_actionHasBeenSet) {
    payload.WithString("Action", CapabilityStateMapper::GetNameForCapabilityState(m_action));
  }

  if (m_genericHTTPActionHasBeenSet) {
    payload.WithString("GenericHTTPAction", CapabilityStateMapper::GetNameForCapabilityState(m_genericHTTPAction));
  }

  if (m_createAndUpdateGenericHTTPActionHasBeenSet) {
    payload.WithString("CreateAndUpdateGenericHTTPAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateGenericHTTPAction));
  }

  if (m_shareGenericHTTPActionHasBeenSet) {
    payload.WithString("ShareGenericHTTPAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareGenericHTTPAction));
  }

  if (m_useGenericHTTPActionHasBeenSet) {
    payload.WithString("UseGenericHTTPAction", CapabilityStateMapper::GetNameForCapabilityState(m_useGenericHTTPAction));
  }

  if (m_asanaActionHasBeenSet) {
    payload.WithString("AsanaAction", CapabilityStateMapper::GetNameForCapabilityState(m_asanaAction));
  }

  if (m_createAndUpdateAsanaActionHasBeenSet) {
    payload.WithString("CreateAndUpdateAsanaAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateAsanaAction));
  }

  if (m_shareAsanaActionHasBeenSet) {
    payload.WithString("ShareAsanaAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareAsanaAction));
  }

  if (m_useAsanaActionHasBeenSet) {
    payload.WithString("UseAsanaAction", CapabilityStateMapper::GetNameForCapabilityState(m_useAsanaAction));
  }

  if (m_slackActionHasBeenSet) {
    payload.WithString("SlackAction", CapabilityStateMapper::GetNameForCapabilityState(m_slackAction));
  }

  if (m_createAndUpdateSlackActionHasBeenSet) {
    payload.WithString("CreateAndUpdateSlackAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateSlackAction));
  }

  if (m_shareSlackActionHasBeenSet) {
    payload.WithString("ShareSlackAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareSlackAction));
  }

  if (m_useSlackActionHasBeenSet) {
    payload.WithString("UseSlackAction", CapabilityStateMapper::GetNameForCapabilityState(m_useSlackAction));
  }

  if (m_serviceNowActionHasBeenSet) {
    payload.WithString("ServiceNowAction", CapabilityStateMapper::GetNameForCapabilityState(m_serviceNowAction));
  }

  if (m_createAndUpdateServiceNowActionHasBeenSet) {
    payload.WithString("CreateAndUpdateServiceNowAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateServiceNowAction));
  }

  if (m_shareServiceNowActionHasBeenSet) {
    payload.WithString("ShareServiceNowAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareServiceNowAction));
  }

  if (m_useServiceNowActionHasBeenSet) {
    payload.WithString("UseServiceNowAction", CapabilityStateMapper::GetNameForCapabilityState(m_useServiceNowAction));
  }

  if (m_salesforceActionHasBeenSet) {
    payload.WithString("SalesforceAction", CapabilityStateMapper::GetNameForCapabilityState(m_salesforceAction));
  }

  if (m_createAndUpdateSalesforceActionHasBeenSet) {
    payload.WithString("CreateAndUpdateSalesforceAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateSalesforceAction));
  }

  if (m_shareSalesforceActionHasBeenSet) {
    payload.WithString("ShareSalesforceAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareSalesforceAction));
  }

  if (m_useSalesforceActionHasBeenSet) {
    payload.WithString("UseSalesforceAction", CapabilityStateMapper::GetNameForCapabilityState(m_useSalesforceAction));
  }

  if (m_mSExchangeActionHasBeenSet) {
    payload.WithString("MSExchangeAction", CapabilityStateMapper::GetNameForCapabilityState(m_mSExchangeAction));
  }

  if (m_createAndUpdateMSExchangeActionHasBeenSet) {
    payload.WithString("CreateAndUpdateMSExchangeAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateMSExchangeAction));
  }

  if (m_shareMSExchangeActionHasBeenSet) {
    payload.WithString("ShareMSExchangeAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareMSExchangeAction));
  }

  if (m_useMSExchangeActionHasBeenSet) {
    payload.WithString("UseMSExchangeAction", CapabilityStateMapper::GetNameForCapabilityState(m_useMSExchangeAction));
  }

  if (m_pagerDutyActionHasBeenSet) {
    payload.WithString("PagerDutyAction", CapabilityStateMapper::GetNameForCapabilityState(m_pagerDutyAction));
  }

  if (m_createAndUpdatePagerDutyActionHasBeenSet) {
    payload.WithString("CreateAndUpdatePagerDutyAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdatePagerDutyAction));
  }

  if (m_sharePagerDutyActionHasBeenSet) {
    payload.WithString("SharePagerDutyAction", CapabilityStateMapper::GetNameForCapabilityState(m_sharePagerDutyAction));
  }

  if (m_usePagerDutyActionHasBeenSet) {
    payload.WithString("UsePagerDutyAction", CapabilityStateMapper::GetNameForCapabilityState(m_usePagerDutyAction));
  }

  if (m_jiraActionHasBeenSet) {
    payload.WithString("JiraAction", CapabilityStateMapper::GetNameForCapabilityState(m_jiraAction));
  }

  if (m_createAndUpdateJiraActionHasBeenSet) {
    payload.WithString("CreateAndUpdateJiraAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateJiraAction));
  }

  if (m_shareJiraActionHasBeenSet) {
    payload.WithString("ShareJiraAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareJiraAction));
  }

  if (m_useJiraActionHasBeenSet) {
    payload.WithString("UseJiraAction", CapabilityStateMapper::GetNameForCapabilityState(m_useJiraAction));
  }

  if (m_confluenceActionHasBeenSet) {
    payload.WithString("ConfluenceAction", CapabilityStateMapper::GetNameForCapabilityState(m_confluenceAction));
  }

  if (m_createAndUpdateConfluenceActionHasBeenSet) {
    payload.WithString("CreateAndUpdateConfluenceAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateConfluenceAction));
  }

  if (m_shareConfluenceActionHasBeenSet) {
    payload.WithString("ShareConfluenceAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareConfluenceAction));
  }

  if (m_useConfluenceActionHasBeenSet) {
    payload.WithString("UseConfluenceAction", CapabilityStateMapper::GetNameForCapabilityState(m_useConfluenceAction));
  }

  if (m_oneDriveActionHasBeenSet) {
    payload.WithString("OneDriveAction", CapabilityStateMapper::GetNameForCapabilityState(m_oneDriveAction));
  }

  if (m_createAndUpdateOneDriveActionHasBeenSet) {
    payload.WithString("CreateAndUpdateOneDriveAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateOneDriveAction));
  }

  if (m_shareOneDriveActionHasBeenSet) {
    payload.WithString("ShareOneDriveAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareOneDriveAction));
  }

  if (m_useOneDriveActionHasBeenSet) {
    payload.WithString("UseOneDriveAction", CapabilityStateMapper::GetNameForCapabilityState(m_useOneDriveAction));
  }

  if (m_sharePointActionHasBeenSet) {
    payload.WithString("SharePointAction", CapabilityStateMapper::GetNameForCapabilityState(m_sharePointAction));
  }

  if (m_createAndUpdateSharePointActionHasBeenSet) {
    payload.WithString("CreateAndUpdateSharePointAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateSharePointAction));
  }

  if (m_shareSharePointActionHasBeenSet) {
    payload.WithString("ShareSharePointAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareSharePointAction));
  }

  if (m_useSharePointActionHasBeenSet) {
    payload.WithString("UseSharePointAction", CapabilityStateMapper::GetNameForCapabilityState(m_useSharePointAction));
  }

  if (m_mSTeamsActionHasBeenSet) {
    payload.WithString("MSTeamsAction", CapabilityStateMapper::GetNameForCapabilityState(m_mSTeamsAction));
  }

  if (m_createAndUpdateMSTeamsActionHasBeenSet) {
    payload.WithString("CreateAndUpdateMSTeamsAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateMSTeamsAction));
  }

  if (m_shareMSTeamsActionHasBeenSet) {
    payload.WithString("ShareMSTeamsAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareMSTeamsAction));
  }

  if (m_useMSTeamsActionHasBeenSet) {
    payload.WithString("UseMSTeamsAction", CapabilityStateMapper::GetNameForCapabilityState(m_useMSTeamsAction));
  }

  if (m_googleCalendarActionHasBeenSet) {
    payload.WithString("GoogleCalendarAction", CapabilityStateMapper::GetNameForCapabilityState(m_googleCalendarAction));
  }

  if (m_createAndUpdateGoogleCalendarActionHasBeenSet) {
    payload.WithString("CreateAndUpdateGoogleCalendarAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateGoogleCalendarAction));
  }

  if (m_shareGoogleCalendarActionHasBeenSet) {
    payload.WithString("ShareGoogleCalendarAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareGoogleCalendarAction));
  }

  if (m_useGoogleCalendarActionHasBeenSet) {
    payload.WithString("UseGoogleCalendarAction", CapabilityStateMapper::GetNameForCapabilityState(m_useGoogleCalendarAction));
  }

  if (m_zendeskActionHasBeenSet) {
    payload.WithString("ZendeskAction", CapabilityStateMapper::GetNameForCapabilityState(m_zendeskAction));
  }

  if (m_createAndUpdateZendeskActionHasBeenSet) {
    payload.WithString("CreateAndUpdateZendeskAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateZendeskAction));
  }

  if (m_shareZendeskActionHasBeenSet) {
    payload.WithString("ShareZendeskAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareZendeskAction));
  }

  if (m_useZendeskActionHasBeenSet) {
    payload.WithString("UseZendeskAction", CapabilityStateMapper::GetNameForCapabilityState(m_useZendeskAction));
  }

  if (m_smartsheetActionHasBeenSet) {
    payload.WithString("SmartsheetAction", CapabilityStateMapper::GetNameForCapabilityState(m_smartsheetAction));
  }

  if (m_createAndUpdateSmartsheetActionHasBeenSet) {
    payload.WithString("CreateAndUpdateSmartsheetAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateSmartsheetAction));
  }

  if (m_shareSmartsheetActionHasBeenSet) {
    payload.WithString("ShareSmartsheetAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareSmartsheetAction));
  }

  if (m_useSmartsheetActionHasBeenSet) {
    payload.WithString("UseSmartsheetAction", CapabilityStateMapper::GetNameForCapabilityState(m_useSmartsheetAction));
  }

  if (m_sAPBusinessPartnerActionHasBeenSet) {
    payload.WithString("SAPBusinessPartnerAction", CapabilityStateMapper::GetNameForCapabilityState(m_sAPBusinessPartnerAction));
  }

  if (m_createAndUpdateSAPBusinessPartnerActionHasBeenSet) {
    payload.WithString("CreateAndUpdateSAPBusinessPartnerAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateSAPBusinessPartnerAction));
  }

  if (m_shareSAPBusinessPartnerActionHasBeenSet) {
    payload.WithString("ShareSAPBusinessPartnerAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareSAPBusinessPartnerAction));
  }

  if (m_useSAPBusinessPartnerActionHasBeenSet) {
    payload.WithString("UseSAPBusinessPartnerAction", CapabilityStateMapper::GetNameForCapabilityState(m_useSAPBusinessPartnerAction));
  }

  if (m_sAPProductMasterDataActionHasBeenSet) {
    payload.WithString("SAPProductMasterDataAction", CapabilityStateMapper::GetNameForCapabilityState(m_sAPProductMasterDataAction));
  }

  if (m_createAndUpdateSAPProductMasterDataActionHasBeenSet) {
    payload.WithString("CreateAndUpdateSAPProductMasterDataAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateSAPProductMasterDataAction));
  }

  if (m_shareSAPProductMasterDataActionHasBeenSet) {
    payload.WithString("ShareSAPProductMasterDataAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_shareSAPProductMasterDataAction));
  }

  if (m_useSAPProductMasterDataActionHasBeenSet) {
    payload.WithString("UseSAPProductMasterDataAction", CapabilityStateMapper::GetNameForCapabilityState(m_useSAPProductMasterDataAction));
  }

  if (m_sAPPhysicalInventoryActionHasBeenSet) {
    payload.WithString("SAPPhysicalInventoryAction", CapabilityStateMapper::GetNameForCapabilityState(m_sAPPhysicalInventoryAction));
  }

  if (m_createAndUpdateSAPPhysicalInventoryActionHasBeenSet) {
    payload.WithString("CreateAndUpdateSAPPhysicalInventoryAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateSAPPhysicalInventoryAction));
  }

  if (m_shareSAPPhysicalInventoryActionHasBeenSet) {
    payload.WithString("ShareSAPPhysicalInventoryAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_shareSAPPhysicalInventoryAction));
  }

  if (m_useSAPPhysicalInventoryActionHasBeenSet) {
    payload.WithString("UseSAPPhysicalInventoryAction", CapabilityStateMapper::GetNameForCapabilityState(m_useSAPPhysicalInventoryAction));
  }

  if (m_sAPBillOfMaterialActionHasBeenSet) {
    payload.WithString("SAPBillOfMaterialAction", CapabilityStateMapper::GetNameForCapabilityState(m_sAPBillOfMaterialAction));
  }

  if (m_createAndUpdateSAPBillOfMaterialActionHasBeenSet) {
    payload.WithString("CreateAndUpdateSAPBillOfMaterialAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateSAPBillOfMaterialAction));
  }

  if (m_shareSAPBillOfMaterialActionHasBeenSet) {
    payload.WithString("ShareSAPBillOfMaterialAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareSAPBillOfMaterialAction));
  }

  if (m_useSAPBillOfMaterialActionHasBeenSet) {
    payload.WithString("UseSAPBillOfMaterialAction", CapabilityStateMapper::GetNameForCapabilityState(m_useSAPBillOfMaterialAction));
  }

  if (m_sAPMaterialStockActionHasBeenSet) {
    payload.WithString("SAPMaterialStockAction", CapabilityStateMapper::GetNameForCapabilityState(m_sAPMaterialStockAction));
  }

  if (m_createAndUpdateSAPMaterialStockActionHasBeenSet) {
    payload.WithString("CreateAndUpdateSAPMaterialStockAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateSAPMaterialStockAction));
  }

  if (m_shareSAPMaterialStockActionHasBeenSet) {
    payload.WithString("ShareSAPMaterialStockAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareSAPMaterialStockAction));
  }

  if (m_useSAPMaterialStockActionHasBeenSet) {
    payload.WithString("UseSAPMaterialStockAction", CapabilityStateMapper::GetNameForCapabilityState(m_useSAPMaterialStockAction));
  }

  if (m_factSetActionHasBeenSet) {
    payload.WithString("FactSetAction", CapabilityStateMapper::GetNameForCapabilityState(m_factSetAction));
  }

  if (m_createAndUpdateFactSetActionHasBeenSet) {
    payload.WithString("CreateAndUpdateFactSetAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateFactSetAction));
  }

  if (m_shareFactSetActionHasBeenSet) {
    payload.WithString("ShareFactSetAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareFactSetAction));
  }

  if (m_useFactSetActionHasBeenSet) {
    payload.WithString("UseFactSetAction", CapabilityStateMapper::GetNameForCapabilityState(m_useFactSetAction));
  }

  if (m_amazonSThreeActionHasBeenSet) {
    payload.WithString("AmazonSThreeAction", CapabilityStateMapper::GetNameForCapabilityState(m_amazonSThreeAction));
  }

  if (m_createAndUpdateAmazonSThreeActionHasBeenSet) {
    payload.WithString("CreateAndUpdateAmazonSThreeAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateAmazonSThreeAction));
  }

  if (m_shareAmazonSThreeActionHasBeenSet) {
    payload.WithString("ShareAmazonSThreeAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareAmazonSThreeAction));
  }

  if (m_useAmazonSThreeActionHasBeenSet) {
    payload.WithString("UseAmazonSThreeAction", CapabilityStateMapper::GetNameForCapabilityState(m_useAmazonSThreeAction));
  }

  if (m_textractActionHasBeenSet) {
    payload.WithString("TextractAction", CapabilityStateMapper::GetNameForCapabilityState(m_textractAction));
  }

  if (m_createAndUpdateTextractActionHasBeenSet) {
    payload.WithString("CreateAndUpdateTextractAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateTextractAction));
  }

  if (m_shareTextractActionHasBeenSet) {
    payload.WithString("ShareTextractAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareTextractAction));
  }

  if (m_useTextractActionHasBeenSet) {
    payload.WithString("UseTextractAction", CapabilityStateMapper::GetNameForCapabilityState(m_useTextractAction));
  }

  if (m_comprehendActionHasBeenSet) {
    payload.WithString("ComprehendAction", CapabilityStateMapper::GetNameForCapabilityState(m_comprehendAction));
  }

  if (m_createAndUpdateComprehendActionHasBeenSet) {
    payload.WithString("CreateAndUpdateComprehendAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateComprehendAction));
  }

  if (m_shareComprehendActionHasBeenSet) {
    payload.WithString("ShareComprehendAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareComprehendAction));
  }

  if (m_useComprehendActionHasBeenSet) {
    payload.WithString("UseComprehendAction", CapabilityStateMapper::GetNameForCapabilityState(m_useComprehendAction));
  }

  if (m_comprehendMedicalActionHasBeenSet) {
    payload.WithString("ComprehendMedicalAction", CapabilityStateMapper::GetNameForCapabilityState(m_comprehendMedicalAction));
  }

  if (m_createAndUpdateComprehendMedicalActionHasBeenSet) {
    payload.WithString("CreateAndUpdateComprehendMedicalAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateComprehendMedicalAction));
  }

  if (m_shareComprehendMedicalActionHasBeenSet) {
    payload.WithString("ShareComprehendMedicalAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareComprehendMedicalAction));
  }

  if (m_useComprehendMedicalActionHasBeenSet) {
    payload.WithString("UseComprehendMedicalAction", CapabilityStateMapper::GetNameForCapabilityState(m_useComprehendMedicalAction));
  }

  if (m_amazonBedrockARSActionHasBeenSet) {
    payload.WithString("AmazonBedrockARSAction", CapabilityStateMapper::GetNameForCapabilityState(m_amazonBedrockARSAction));
  }

  if (m_createAndUpdateAmazonBedrockARSActionHasBeenSet) {
    payload.WithString("CreateAndUpdateAmazonBedrockARSAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateAmazonBedrockARSAction));
  }

  if (m_shareAmazonBedrockARSActionHasBeenSet) {
    payload.WithString("ShareAmazonBedrockARSAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareAmazonBedrockARSAction));
  }

  if (m_useAmazonBedrockARSActionHasBeenSet) {
    payload.WithString("UseAmazonBedrockARSAction", CapabilityStateMapper::GetNameForCapabilityState(m_useAmazonBedrockARSAction));
  }

  if (m_amazonBedrockFSActionHasBeenSet) {
    payload.WithString("AmazonBedrockFSAction", CapabilityStateMapper::GetNameForCapabilityState(m_amazonBedrockFSAction));
  }

  if (m_createAndUpdateAmazonBedrockFSActionHasBeenSet) {
    payload.WithString("CreateAndUpdateAmazonBedrockFSAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateAmazonBedrockFSAction));
  }

  if (m_shareAmazonBedrockFSActionHasBeenSet) {
    payload.WithString("ShareAmazonBedrockFSAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareAmazonBedrockFSAction));
  }

  if (m_useAmazonBedrockFSActionHasBeenSet) {
    payload.WithString("UseAmazonBedrockFSAction", CapabilityStateMapper::GetNameForCapabilityState(m_useAmazonBedrockFSAction));
  }

  if (m_amazonBedrockKRSActionHasBeenSet) {
    payload.WithString("AmazonBedrockKRSAction", CapabilityStateMapper::GetNameForCapabilityState(m_amazonBedrockKRSAction));
  }

  if (m_createAndUpdateAmazonBedrockKRSActionHasBeenSet) {
    payload.WithString("CreateAndUpdateAmazonBedrockKRSAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateAmazonBedrockKRSAction));
  }

  if (m_shareAmazonBedrockKRSActionHasBeenSet) {
    payload.WithString("ShareAmazonBedrockKRSAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareAmazonBedrockKRSAction));
  }

  if (m_useAmazonBedrockKRSActionHasBeenSet) {
    payload.WithString("UseAmazonBedrockKRSAction", CapabilityStateMapper::GetNameForCapabilityState(m_useAmazonBedrockKRSAction));
  }

  if (m_mCPActionHasBeenSet) {
    payload.WithString("MCPAction", CapabilityStateMapper::GetNameForCapabilityState(m_mCPAction));
  }

  if (m_createAndUpdateMCPActionHasBeenSet) {
    payload.WithString("CreateAndUpdateMCPAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateMCPAction));
  }

  if (m_shareMCPActionHasBeenSet) {
    payload.WithString("ShareMCPAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareMCPAction));
  }

  if (m_useMCPActionHasBeenSet) {
    payload.WithString("UseMCPAction", CapabilityStateMapper::GetNameForCapabilityState(m_useMCPAction));
  }

  if (m_openAPIActionHasBeenSet) {
    payload.WithString("OpenAPIAction", CapabilityStateMapper::GetNameForCapabilityState(m_openAPIAction));
  }

  if (m_createAndUpdateOpenAPIActionHasBeenSet) {
    payload.WithString("CreateAndUpdateOpenAPIAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateOpenAPIAction));
  }

  if (m_shareOpenAPIActionHasBeenSet) {
    payload.WithString("ShareOpenAPIAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareOpenAPIAction));
  }

  if (m_useOpenAPIActionHasBeenSet) {
    payload.WithString("UseOpenAPIAction", CapabilityStateMapper::GetNameForCapabilityState(m_useOpenAPIAction));
  }

  if (m_sandPGMIActionHasBeenSet) {
    payload.WithString("SandPGMIAction", CapabilityStateMapper::GetNameForCapabilityState(m_sandPGMIAction));
  }

  if (m_createAndUpdateSandPGMIActionHasBeenSet) {
    payload.WithString("CreateAndUpdateSandPGMIAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateSandPGMIAction));
  }

  if (m_shareSandPGMIActionHasBeenSet) {
    payload.WithString("ShareSandPGMIAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareSandPGMIAction));
  }

  if (m_useSandPGMIActionHasBeenSet) {
    payload.WithString("UseSandPGMIAction", CapabilityStateMapper::GetNameForCapabilityState(m_useSandPGMIAction));
  }

  if (m_sandPGlobalEnergyActionHasBeenSet) {
    payload.WithString("SandPGlobalEnergyAction", CapabilityStateMapper::GetNameForCapabilityState(m_sandPGlobalEnergyAction));
  }

  if (m_createAndUpdateSandPGlobalEnergyActionHasBeenSet) {
    payload.WithString("CreateAndUpdateSandPGlobalEnergyAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateSandPGlobalEnergyAction));
  }

  if (m_shareSandPGlobalEnergyActionHasBeenSet) {
    payload.WithString("ShareSandPGlobalEnergyAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareSandPGlobalEnergyAction));
  }

  if (m_useSandPGlobalEnergyActionHasBeenSet) {
    payload.WithString("UseSandPGlobalEnergyAction", CapabilityStateMapper::GetNameForCapabilityState(m_useSandPGlobalEnergyAction));
  }

  if (m_bambooHRActionHasBeenSet) {
    payload.WithString("BambooHRAction", CapabilityStateMapper::GetNameForCapabilityState(m_bambooHRAction));
  }

  if (m_createAndUpdateBambooHRActionHasBeenSet) {
    payload.WithString("CreateAndUpdateBambooHRAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateBambooHRAction));
  }

  if (m_shareBambooHRActionHasBeenSet) {
    payload.WithString("ShareBambooHRAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareBambooHRAction));
  }

  if (m_useBambooHRActionHasBeenSet) {
    payload.WithString("UseBambooHRAction", CapabilityStateMapper::GetNameForCapabilityState(m_useBambooHRAction));
  }

  if (m_boxAgentActionHasBeenSet) {
    payload.WithString("BoxAgentAction", CapabilityStateMapper::GetNameForCapabilityState(m_boxAgentAction));
  }

  if (m_createAndUpdateBoxAgentActionHasBeenSet) {
    payload.WithString("CreateAndUpdateBoxAgentAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateBoxAgentAction));
  }

  if (m_shareBoxAgentActionHasBeenSet) {
    payload.WithString("ShareBoxAgentAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareBoxAgentAction));
  }

  if (m_useBoxAgentActionHasBeenSet) {
    payload.WithString("UseBoxAgentAction", CapabilityStateMapper::GetNameForCapabilityState(m_useBoxAgentAction));
  }

  if (m_canvaAgentActionHasBeenSet) {
    payload.WithString("CanvaAgentAction", CapabilityStateMapper::GetNameForCapabilityState(m_canvaAgentAction));
  }

  if (m_createAndUpdateCanvaAgentActionHasBeenSet) {
    payload.WithString("CreateAndUpdateCanvaAgentAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateCanvaAgentAction));
  }

  if (m_shareCanvaAgentActionHasBeenSet) {
    payload.WithString("ShareCanvaAgentAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareCanvaAgentAction));
  }

  if (m_useCanvaAgentActionHasBeenSet) {
    payload.WithString("UseCanvaAgentAction", CapabilityStateMapper::GetNameForCapabilityState(m_useCanvaAgentAction));
  }

  if (m_githubActionHasBeenSet) {
    payload.WithString("GithubAction", CapabilityStateMapper::GetNameForCapabilityState(m_githubAction));
  }

  if (m_createAndUpdateGithubActionHasBeenSet) {
    payload.WithString("CreateAndUpdateGithubAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateGithubAction));
  }

  if (m_shareGithubActionHasBeenSet) {
    payload.WithString("ShareGithubAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareGithubAction));
  }

  if (m_useGithubActionHasBeenSet) {
    payload.WithString("UseGithubAction", CapabilityStateMapper::GetNameForCapabilityState(m_useGithubAction));
  }

  if (m_notionActionHasBeenSet) {
    payload.WithString("NotionAction", CapabilityStateMapper::GetNameForCapabilityState(m_notionAction));
  }

  if (m_createAndUpdateNotionActionHasBeenSet) {
    payload.WithString("CreateAndUpdateNotionAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateNotionAction));
  }

  if (m_shareNotionActionHasBeenSet) {
    payload.WithString("ShareNotionAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareNotionAction));
  }

  if (m_useNotionActionHasBeenSet) {
    payload.WithString("UseNotionAction", CapabilityStateMapper::GetNameForCapabilityState(m_useNotionAction));
  }

  if (m_linearActionHasBeenSet) {
    payload.WithString("LinearAction", CapabilityStateMapper::GetNameForCapabilityState(m_linearAction));
  }

  if (m_createAndUpdateLinearActionHasBeenSet) {
    payload.WithString("CreateAndUpdateLinearAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateLinearAction));
  }

  if (m_shareLinearActionHasBeenSet) {
    payload.WithString("ShareLinearAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareLinearAction));
  }

  if (m_useLinearActionHasBeenSet) {
    payload.WithString("UseLinearAction", CapabilityStateMapper::GetNameForCapabilityState(m_useLinearAction));
  }

  if (m_huggingFaceActionHasBeenSet) {
    payload.WithString("HuggingFaceAction", CapabilityStateMapper::GetNameForCapabilityState(m_huggingFaceAction));
  }

  if (m_createAndUpdateHuggingFaceActionHasBeenSet) {
    payload.WithString("CreateAndUpdateHuggingFaceAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateHuggingFaceAction));
  }

  if (m_shareHuggingFaceActionHasBeenSet) {
    payload.WithString("ShareHuggingFaceAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareHuggingFaceAction));
  }

  if (m_useHuggingFaceActionHasBeenSet) {
    payload.WithString("UseHuggingFaceAction", CapabilityStateMapper::GetNameForCapabilityState(m_useHuggingFaceAction));
  }

  if (m_mondayActionHasBeenSet) {
    payload.WithString("MondayAction", CapabilityStateMapper::GetNameForCapabilityState(m_mondayAction));
  }

  if (m_createAndUpdateMondayActionHasBeenSet) {
    payload.WithString("CreateAndUpdateMondayAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateMondayAction));
  }

  if (m_shareMondayActionHasBeenSet) {
    payload.WithString("ShareMondayAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareMondayAction));
  }

  if (m_useMondayActionHasBeenSet) {
    payload.WithString("UseMondayAction", CapabilityStateMapper::GetNameForCapabilityState(m_useMondayAction));
  }

  if (m_hubspotActionHasBeenSet) {
    payload.WithString("HubspotAction", CapabilityStateMapper::GetNameForCapabilityState(m_hubspotAction));
  }

  if (m_createAndUpdateHubspotActionHasBeenSet) {
    payload.WithString("CreateAndUpdateHubspotAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateHubspotAction));
  }

  if (m_shareHubspotActionHasBeenSet) {
    payload.WithString("ShareHubspotAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareHubspotAction));
  }

  if (m_useHubspotActionHasBeenSet) {
    payload.WithString("UseHubspotAction", CapabilityStateMapper::GetNameForCapabilityState(m_useHubspotAction));
  }

  if (m_intercomActionHasBeenSet) {
    payload.WithString("IntercomAction", CapabilityStateMapper::GetNameForCapabilityState(m_intercomAction));
  }

  if (m_createAndUpdateIntercomActionHasBeenSet) {
    payload.WithString("CreateAndUpdateIntercomAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateIntercomAction));
  }

  if (m_shareIntercomActionHasBeenSet) {
    payload.WithString("ShareIntercomAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareIntercomAction));
  }

  if (m_useIntercomActionHasBeenSet) {
    payload.WithString("UseIntercomAction", CapabilityStateMapper::GetNameForCapabilityState(m_useIntercomAction));
  }

  if (m_newRelicActionHasBeenSet) {
    payload.WithString("NewRelicAction", CapabilityStateMapper::GetNameForCapabilityState(m_newRelicAction));
  }

  if (m_createAndUpdateNewRelicActionHasBeenSet) {
    payload.WithString("CreateAndUpdateNewRelicAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateNewRelicAction));
  }

  if (m_shareNewRelicActionHasBeenSet) {
    payload.WithString("ShareNewRelicAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareNewRelicAction));
  }

  if (m_useNewRelicActionHasBeenSet) {
    payload.WithString("UseNewRelicAction", CapabilityStateMapper::GetNameForCapabilityState(m_useNewRelicAction));
  }

  if (m_pagerDutyAgentActionHasBeenSet) {
    payload.WithString("PagerDutyAgentAction", CapabilityStateMapper::GetNameForCapabilityState(m_pagerDutyAgentAction));
  }

  if (m_createAndUpdatePagerDutyAgentActionHasBeenSet) {
    payload.WithString("CreateAndUpdatePagerDutyAgentAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdatePagerDutyAgentAction));
  }

  if (m_sharePagerDutyAgentActionHasBeenSet) {
    payload.WithString("SharePagerDutyAgentAction", CapabilityStateMapper::GetNameForCapabilityState(m_sharePagerDutyAgentAction));
  }

  if (m_usePagerDutyAgentActionHasBeenSet) {
    payload.WithString("UsePagerDutyAgentAction", CapabilityStateMapper::GetNameForCapabilityState(m_usePagerDutyAgentAction));
  }

  if (m_visierAgentActionHasBeenSet) {
    payload.WithString("VisierAgentAction", CapabilityStateMapper::GetNameForCapabilityState(m_visierAgentAction));
  }

  if (m_createAndUpdateVisierAgentActionHasBeenSet) {
    payload.WithString("CreateAndUpdateVisierAgentAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateVisierAgentAction));
  }

  if (m_shareVisierAgentActionHasBeenSet) {
    payload.WithString("ShareVisierAgentAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareVisierAgentAction));
  }

  if (m_useVisierAgentActionHasBeenSet) {
    payload.WithString("UseVisierAgentAction", CapabilityStateMapper::GetNameForCapabilityState(m_useVisierAgentAction));
  }

  if (m_zoomActionHasBeenSet) {
    payload.WithString("ZoomAction", CapabilityStateMapper::GetNameForCapabilityState(m_zoomAction));
  }

  if (m_createAndUpdateZoomActionHasBeenSet) {
    payload.WithString("CreateAndUpdateZoomAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateZoomAction));
  }

  if (m_shareZoomActionHasBeenSet) {
    payload.WithString("ShareZoomAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareZoomAction));
  }

  if (m_useZoomActionHasBeenSet) {
    payload.WithString("UseZoomAction", CapabilityStateMapper::GetNameForCapabilityState(m_useZoomAction));
  }

  if (m_snowFlakeActionHasBeenSet) {
    payload.WithString("SnowFlakeAction", CapabilityStateMapper::GetNameForCapabilityState(m_snowFlakeAction));
  }

  if (m_createAndUpdateSnowFlakeActionHasBeenSet) {
    payload.WithString("CreateAndUpdateSnowFlakeAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateSnowFlakeAction));
  }

  if (m_shareSnowFlakeActionHasBeenSet) {
    payload.WithString("ShareSnowFlakeAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareSnowFlakeAction));
  }

  if (m_useSnowFlakeActionHasBeenSet) {
    payload.WithString("UseSnowFlakeAction", CapabilityStateMapper::GetNameForCapabilityState(m_useSnowFlakeAction));
  }

  if (m_zapierActionHasBeenSet) {
    payload.WithString("ZapierAction", CapabilityStateMapper::GetNameForCapabilityState(m_zapierAction));
  }

  if (m_createAndUpdateZapierActionHasBeenSet) {
    payload.WithString("CreateAndUpdateZapierAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateZapierAction));
  }

  if (m_shareZapierActionHasBeenSet) {
    payload.WithString("ShareZapierAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareZapierAction));
  }

  if (m_useZapierActionHasBeenSet) {
    payload.WithString("UseZapierAction", CapabilityStateMapper::GetNameForCapabilityState(m_useZapierAction));
  }

  if (m_airtableActionHasBeenSet) {
    payload.WithString("AirtableAction", CapabilityStateMapper::GetNameForCapabilityState(m_airtableAction));
  }

  if (m_createAndUpdateAirtableActionHasBeenSet) {
    payload.WithString("CreateAndUpdateAirtableAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateAirtableAction));
  }

  if (m_shareAirtableActionHasBeenSet) {
    payload.WithString("ShareAirtableAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareAirtableAction));
  }

  if (m_useAirtableActionHasBeenSet) {
    payload.WithString("UseAirtableAction", CapabilityStateMapper::GetNameForCapabilityState(m_useAirtableAction));
  }

  if (m_dropboxActionHasBeenSet) {
    payload.WithString("DropboxAction", CapabilityStateMapper::GetNameForCapabilityState(m_dropboxAction));
  }

  if (m_createAndUpdateDropboxActionHasBeenSet) {
    payload.WithString("CreateAndUpdateDropboxAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateDropboxAction));
  }

  if (m_shareDropboxActionHasBeenSet) {
    payload.WithString("ShareDropboxAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareDropboxAction));
  }

  if (m_useDropboxActionHasBeenSet) {
    payload.WithString("UseDropboxAction", CapabilityStateMapper::GetNameForCapabilityState(m_useDropboxAction));
  }

  if (m_gmailActionHasBeenSet) {
    payload.WithString("GmailAction", CapabilityStateMapper::GetNameForCapabilityState(m_gmailAction));
  }

  if (m_createAndUpdateGmailActionHasBeenSet) {
    payload.WithString("CreateAndUpdateGmailAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateGmailAction));
  }

  if (m_shareGmailActionHasBeenSet) {
    payload.WithString("ShareGmailAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareGmailAction));
  }

  if (m_useGmailActionHasBeenSet) {
    payload.WithString("UseGmailAction", CapabilityStateMapper::GetNameForCapabilityState(m_useGmailAction));
  }

  if (m_googleAnalyticsActionHasBeenSet) {
    payload.WithString("GoogleAnalyticsAction", CapabilityStateMapper::GetNameForCapabilityState(m_googleAnalyticsAction));
  }

  if (m_createAndUpdateGoogleAnalyticsActionHasBeenSet) {
    payload.WithString("CreateAndUpdateGoogleAnalyticsAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateGoogleAnalyticsAction));
  }

  if (m_shareGoogleAnalyticsActionHasBeenSet) {
    payload.WithString("ShareGoogleAnalyticsAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareGoogleAnalyticsAction));
  }

  if (m_useGoogleAnalyticsActionHasBeenSet) {
    payload.WithString("UseGoogleAnalyticsAction", CapabilityStateMapper::GetNameForCapabilityState(m_useGoogleAnalyticsAction));
  }

  if (m_googleDocsActionHasBeenSet) {
    payload.WithString("GoogleDocsAction", CapabilityStateMapper::GetNameForCapabilityState(m_googleDocsAction));
  }

  if (m_createAndUpdateGoogleDocsActionHasBeenSet) {
    payload.WithString("CreateAndUpdateGoogleDocsAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateGoogleDocsAction));
  }

  if (m_shareGoogleDocsActionHasBeenSet) {
    payload.WithString("ShareGoogleDocsAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareGoogleDocsAction));
  }

  if (m_useGoogleDocsActionHasBeenSet) {
    payload.WithString("UseGoogleDocsAction", CapabilityStateMapper::GetNameForCapabilityState(m_useGoogleDocsAction));
  }

  if (m_googleDriveActionHasBeenSet) {
    payload.WithString("GoogleDriveAction", CapabilityStateMapper::GetNameForCapabilityState(m_googleDriveAction));
  }

  if (m_createAndUpdateGoogleDriveActionHasBeenSet) {
    payload.WithString("CreateAndUpdateGoogleDriveAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateGoogleDriveAction));
  }

  if (m_shareGoogleDriveActionHasBeenSet) {
    payload.WithString("ShareGoogleDriveAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareGoogleDriveAction));
  }

  if (m_useGoogleDriveActionHasBeenSet) {
    payload.WithString("UseGoogleDriveAction", CapabilityStateMapper::GetNameForCapabilityState(m_useGoogleDriveAction));
  }

  if (m_googleMeetActionHasBeenSet) {
    payload.WithString("GoogleMeetAction", CapabilityStateMapper::GetNameForCapabilityState(m_googleMeetAction));
  }

  if (m_createAndUpdateGoogleMeetActionHasBeenSet) {
    payload.WithString("CreateAndUpdateGoogleMeetAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateGoogleMeetAction));
  }

  if (m_shareGoogleMeetActionHasBeenSet) {
    payload.WithString("ShareGoogleMeetAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareGoogleMeetAction));
  }

  if (m_useGoogleMeetActionHasBeenSet) {
    payload.WithString("UseGoogleMeetAction", CapabilityStateMapper::GetNameForCapabilityState(m_useGoogleMeetAction));
  }

  if (m_googleSheetsActionHasBeenSet) {
    payload.WithString("GoogleSheetsAction", CapabilityStateMapper::GetNameForCapabilityState(m_googleSheetsAction));
  }

  if (m_createAndUpdateGoogleSheetsActionHasBeenSet) {
    payload.WithString("CreateAndUpdateGoogleSheetsAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateGoogleSheetsAction));
  }

  if (m_shareGoogleSheetsActionHasBeenSet) {
    payload.WithString("ShareGoogleSheetsAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareGoogleSheetsAction));
  }

  if (m_useGoogleSheetsActionHasBeenSet) {
    payload.WithString("UseGoogleSheetsAction", CapabilityStateMapper::GetNameForCapabilityState(m_useGoogleSheetsAction));
  }

  if (m_googleSlidesActionHasBeenSet) {
    payload.WithString("GoogleSlidesAction", CapabilityStateMapper::GetNameForCapabilityState(m_googleSlidesAction));
  }

  if (m_createAndUpdateGoogleSlidesActionHasBeenSet) {
    payload.WithString("CreateAndUpdateGoogleSlidesAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateGoogleSlidesAction));
  }

  if (m_shareGoogleSlidesActionHasBeenSet) {
    payload.WithString("ShareGoogleSlidesAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareGoogleSlidesAction));
  }

  if (m_useGoogleSlidesActionHasBeenSet) {
    payload.WithString("UseGoogleSlidesAction", CapabilityStateMapper::GetNameForCapabilityState(m_useGoogleSlidesAction));
  }

  if (m_quickBooksActionHasBeenSet) {
    payload.WithString("QuickBooksAction", CapabilityStateMapper::GetNameForCapabilityState(m_quickBooksAction));
  }

  if (m_createAndUpdateQuickBooksActionHasBeenSet) {
    payload.WithString("CreateAndUpdateQuickBooksAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateQuickBooksAction));
  }

  if (m_shareQuickBooksActionHasBeenSet) {
    payload.WithString("ShareQuickBooksAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareQuickBooksAction));
  }

  if (m_useQuickBooksActionHasBeenSet) {
    payload.WithString("UseQuickBooksAction", CapabilityStateMapper::GetNameForCapabilityState(m_useQuickBooksAction));
  }

  if (m_figmaActionHasBeenSet) {
    payload.WithString("FigmaAction", CapabilityStateMapper::GetNameForCapabilityState(m_figmaAction));
  }

  if (m_createAndUpdateFigmaActionHasBeenSet) {
    payload.WithString("CreateAndUpdateFigmaAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateFigmaAction));
  }

  if (m_shareFigmaActionHasBeenSet) {
    payload.WithString("ShareFigmaAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareFigmaAction));
  }

  if (m_useFigmaActionHasBeenSet) {
    payload.WithString("UseFigmaAction", CapabilityStateMapper::GetNameForCapabilityState(m_useFigmaAction));
  }

  if (m_whatsAppActionHasBeenSet) {
    payload.WithString("WhatsAppAction", CapabilityStateMapper::GetNameForCapabilityState(m_whatsAppAction));
  }

  if (m_createAndUpdateWhatsAppActionHasBeenSet) {
    payload.WithString("CreateAndUpdateWhatsAppAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateWhatsAppAction));
  }

  if (m_shareWhatsAppActionHasBeenSet) {
    payload.WithString("ShareWhatsAppAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareWhatsAppAction));
  }

  if (m_useWhatsAppActionHasBeenSet) {
    payload.WithString("UseWhatsAppAction", CapabilityStateMapper::GetNameForCapabilityState(m_useWhatsAppAction));
  }

  if (m_googleChatActionHasBeenSet) {
    payload.WithString("GoogleChatAction", CapabilityStateMapper::GetNameForCapabilityState(m_googleChatAction));
  }

  if (m_createAndUpdateGoogleChatActionHasBeenSet) {
    payload.WithString("CreateAndUpdateGoogleChatAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateGoogleChatAction));
  }

  if (m_shareGoogleChatActionHasBeenSet) {
    payload.WithString("ShareGoogleChatAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareGoogleChatAction));
  }

  if (m_useGoogleChatActionHasBeenSet) {
    payload.WithString("UseGoogleChatAction", CapabilityStateMapper::GetNameForCapabilityState(m_useGoogleChatAction));
  }

  if (m_oneNoteActionHasBeenSet) {
    payload.WithString("OneNoteAction", CapabilityStateMapper::GetNameForCapabilityState(m_oneNoteAction));
  }

  if (m_createAndUpdateOneNoteActionHasBeenSet) {
    payload.WithString("CreateAndUpdateOneNoteAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateOneNoteAction));
  }

  if (m_shareOneNoteActionHasBeenSet) {
    payload.WithString("ShareOneNoteAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareOneNoteAction));
  }

  if (m_useOneNoteActionHasBeenSet) {
    payload.WithString("UseOneNoteAction", CapabilityStateMapper::GetNameForCapabilityState(m_useOneNoteAction));
  }

  if (m_shopifyActionHasBeenSet) {
    payload.WithString("ShopifyAction", CapabilityStateMapper::GetNameForCapabilityState(m_shopifyAction));
  }

  if (m_createAndUpdateShopifyActionHasBeenSet) {
    payload.WithString("CreateAndUpdateShopifyAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateShopifyAction));
  }

  if (m_shareShopifyActionHasBeenSet) {
    payload.WithString("ShareShopifyAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareShopifyAction));
  }

  if (m_useShopifyActionHasBeenSet) {
    payload.WithString("UseShopifyAction", CapabilityStateMapper::GetNameForCapabilityState(m_useShopifyAction));
  }

  if (m_adobeActionHasBeenSet) {
    payload.WithString("AdobeAction", CapabilityStateMapper::GetNameForCapabilityState(m_adobeAction));
  }

  if (m_createAndUpdateAdobeActionHasBeenSet) {
    payload.WithString("CreateAndUpdateAdobeAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateAdobeAction));
  }

  if (m_shareAdobeActionHasBeenSet) {
    payload.WithString("ShareAdobeAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareAdobeAction));
  }

  if (m_useAdobeActionHasBeenSet) {
    payload.WithString("UseAdobeAction", CapabilityStateMapper::GetNameForCapabilityState(m_useAdobeAction));
  }

  if (m_ciscoWebexVidcastActionHasBeenSet) {
    payload.WithString("CiscoWebexVidcastAction", CapabilityStateMapper::GetNameForCapabilityState(m_ciscoWebexVidcastAction));
  }

  if (m_createAndUpdateCiscoWebexVidcastActionHasBeenSet) {
    payload.WithString("CreateAndUpdateCiscoWebexVidcastAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateCiscoWebexVidcastAction));
  }

  if (m_shareCiscoWebexVidcastActionHasBeenSet) {
    payload.WithString("ShareCiscoWebexVidcastAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareCiscoWebexVidcastAction));
  }

  if (m_useCiscoWebexVidcastActionHasBeenSet) {
    payload.WithString("UseCiscoWebexVidcastAction", CapabilityStateMapper::GetNameForCapabilityState(m_useCiscoWebexVidcastAction));
  }

  if (m_ciscoWebexMeetingsActionHasBeenSet) {
    payload.WithString("CiscoWebexMeetingsAction", CapabilityStateMapper::GetNameForCapabilityState(m_ciscoWebexMeetingsAction));
  }

  if (m_createAndUpdateCiscoWebexMeetingsActionHasBeenSet) {
    payload.WithString("CreateAndUpdateCiscoWebexMeetingsAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateCiscoWebexMeetingsAction));
  }

  if (m_shareCiscoWebexMeetingsActionHasBeenSet) {
    payload.WithString("ShareCiscoWebexMeetingsAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareCiscoWebexMeetingsAction));
  }

  if (m_useCiscoWebexMeetingsActionHasBeenSet) {
    payload.WithString("UseCiscoWebexMeetingsAction", CapabilityStateMapper::GetNameForCapabilityState(m_useCiscoWebexMeetingsAction));
  }

  if (m_dunAndBradstreetActionHasBeenSet) {
    payload.WithString("DunAndBradstreetAction", CapabilityStateMapper::GetNameForCapabilityState(m_dunAndBradstreetAction));
  }

  if (m_createAndUpdateDunAndBradstreetActionHasBeenSet) {
    payload.WithString("CreateAndUpdateDunAndBradstreetAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateDunAndBradstreetAction));
  }

  if (m_shareDunAndBradstreetActionHasBeenSet) {
    payload.WithString("ShareDunAndBradstreetAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareDunAndBradstreetAction));
  }

  if (m_useDunAndBradstreetActionHasBeenSet) {
    payload.WithString("UseDunAndBradstreetAction", CapabilityStateMapper::GetNameForCapabilityState(m_useDunAndBradstreetAction));
  }

  if (m_hGInsightsActionHasBeenSet) {
    payload.WithString("HGInsightsAction", CapabilityStateMapper::GetNameForCapabilityState(m_hGInsightsAction));
  }

  if (m_createAndUpdateHGInsightsActionHasBeenSet) {
    payload.WithString("CreateAndUpdateHGInsightsAction",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateHGInsightsAction));
  }

  if (m_shareHGInsightsActionHasBeenSet) {
    payload.WithString("ShareHGInsightsAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareHGInsightsAction));
  }

  if (m_useHGInsightsActionHasBeenSet) {
    payload.WithString("UseHGInsightsAction", CapabilityStateMapper::GetNameForCapabilityState(m_useHGInsightsAction));
  }

  if (m_zoomInfoActionHasBeenSet) {
    payload.WithString("ZoomInfoAction", CapabilityStateMapper::GetNameForCapabilityState(m_zoomInfoAction));
  }

  if (m_createAndUpdateZoomInfoActionHasBeenSet) {
    payload.WithString("CreateAndUpdateZoomInfoAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateZoomInfoAction));
  }

  if (m_shareZoomInfoActionHasBeenSet) {
    payload.WithString("ShareZoomInfoAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareZoomInfoAction));
  }

  if (m_useZoomInfoActionHasBeenSet) {
    payload.WithString("UseZoomInfoAction", CapabilityStateMapper::GetNameForCapabilityState(m_useZoomInfoAction));
  }

  if (m_moodysActionHasBeenSet) {
    payload.WithString("MoodysAction", CapabilityStateMapper::GetNameForCapabilityState(m_moodysAction));
  }

  if (m_createAndUpdateMoodysActionHasBeenSet) {
    payload.WithString("CreateAndUpdateMoodysAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateMoodysAction));
  }

  if (m_shareMoodysActionHasBeenSet) {
    payload.WithString("ShareMoodysAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareMoodysAction));
  }

  if (m_useMoodysActionHasBeenSet) {
    payload.WithString("UseMoodysAction", CapabilityStateMapper::GetNameForCapabilityState(m_useMoodysAction));
  }

  if (m_beeActionHasBeenSet) {
    payload.WithString("BeeAction", CapabilityStateMapper::GetNameForCapabilityState(m_beeAction));
  }

  if (m_createAndUpdateBeeActionHasBeenSet) {
    payload.WithString("CreateAndUpdateBeeAction", CapabilityStateMapper::GetNameForCapabilityState(m_createAndUpdateBeeAction));
  }

  if (m_shareBeeActionHasBeenSet) {
    payload.WithString("ShareBeeAction", CapabilityStateMapper::GetNameForCapabilityState(m_shareBeeAction));
  }

  if (m_useBeeActionHasBeenSet) {
    payload.WithString("UseBeeAction", CapabilityStateMapper::GetNameForCapabilityState(m_useBeeAction));
  }

  if (m_topicHasBeenSet) {
    payload.WithString("Topic", CapabilityStateMapper::GetNameForCapabilityState(m_topic));
  }

  if (m_editVisualWithQHasBeenSet) {
    payload.WithString("EditVisualWithQ", CapabilityStateMapper::GetNameForCapabilityState(m_editVisualWithQ));
  }

  if (m_buildCalculatedFieldWithQHasBeenSet) {
    payload.WithString("BuildCalculatedFieldWithQ", CapabilityStateMapper::GetNameForCapabilityState(m_buildCalculatedFieldWithQ));
  }

  if (m_createDashboardExecutiveSummaryWithQHasBeenSet) {
    payload.WithString("CreateDashboardExecutiveSummaryWithQ",
                       CapabilityStateMapper::GetNameForCapabilityState(m_createDashboardExecutiveSummaryWithQ));
  }

  if (m_spaceHasBeenSet) {
    payload.WithString("Space", CapabilityStateMapper::GetNameForCapabilityState(m_space));
  }

  if (m_createSpacesHasBeenSet) {
    payload.WithString("CreateSpaces", CapabilityStateMapper::GetNameForCapabilityState(m_createSpaces));
  }

  if (m_shareSpacesHasBeenSet) {
    payload.WithString("ShareSpaces", CapabilityStateMapper::GetNameForCapabilityState(m_shareSpaces));
  }

  if (m_chatAgentHasBeenSet) {
    payload.WithString("ChatAgent", CapabilityStateMapper::GetNameForCapabilityState(m_chatAgent));
  }

  if (m_createChatAgentsHasBeenSet) {
    payload.WithString("CreateChatAgents", CapabilityStateMapper::GetNameForCapabilityState(m_createChatAgents));
  }

  if (m_shareChatAgentsHasBeenSet) {
    payload.WithString("ShareChatAgents", CapabilityStateMapper::GetNameForCapabilityState(m_shareChatAgents));
  }

  if (m_researchHasBeenSet) {
    payload.WithString("Research", CapabilityStateMapper::GetNameForCapabilityState(m_research));
  }

  if (m_selfUpgradeUserRoleHasBeenSet) {
    payload.WithString("SelfUpgradeUserRole", CapabilityStateMapper::GetNameForCapabilityState(m_selfUpgradeUserRole));
  }

  if (m_extensionHasBeenSet) {
    payload.WithString("Extension", CapabilityStateMapper::GetNameForCapabilityState(m_extension));
  }

  if (m_useBrowserExtensionHasBeenSet) {
    payload.WithString("UseBrowserExtension", CapabilityStateMapper::GetNameForCapabilityState(m_useBrowserExtension));
  }

  if (m_useWordAddInExtensionHasBeenSet) {
    payload.WithString("UseWordAddInExtension", CapabilityStateMapper::GetNameForCapabilityState(m_useWordAddInExtension));
  }

  if (m_useOutlookAddInExtensionHasBeenSet) {
    payload.WithString("UseOutlookAddInExtension", CapabilityStateMapper::GetNameForCapabilityState(m_useOutlookAddInExtension));
  }

  if (m_useExcelAddInExtensionHasBeenSet) {
    payload.WithString("UseExcelAddInExtension", CapabilityStateMapper::GetNameForCapabilityState(m_useExcelAddInExtension));
  }

  if (m_usePowerpointAddInExtensionHasBeenSet) {
    payload.WithString("UsePowerpointAddInExtension", CapabilityStateMapper::GetNameForCapabilityState(m_usePowerpointAddInExtension));
  }

  if (m_manageSharedFoldersHasBeenSet) {
    payload.WithString("ManageSharedFolders", CapabilityStateMapper::GetNameForCapabilityState(m_manageSharedFolders));
  }

  if (m_generateAnalysesHasBeenSet) {
    payload.WithString("GenerateAnalyses", CapabilityStateMapper::GetNameForCapabilityState(m_generateAnalyses));
  }

  if (m_storyHasBeenSet) {
    payload.WithString("Story", CapabilityStateMapper::GetNameForCapabilityState(m_story));
  }

  if (m_scenarioHasBeenSet) {
    payload.WithString("Scenario", CapabilityStateMapper::GetNameForCapabilityState(m_scenario));
  }

  if (m_triggerHasBeenSet) {
    payload.WithString("Trigger", CapabilityStateMapper::GetNameForCapabilityState(m_trigger));
  }

  if (m_scheduleTriggerHasBeenSet) {
    payload.WithString("ScheduleTrigger", CapabilityStateMapper::GetNameForCapabilityState(m_scheduleTrigger));
  }

  if (m_inboundEmailTriggerHasBeenSet) {
    payload.WithString("InboundEmailTrigger", CapabilityStateMapper::GetNameForCapabilityState(m_inboundEmailTrigger));
  }

  if (m_quickEventTriggerHasBeenSet) {
    payload.WithString("QuickEventTrigger", CapabilityStateMapper::GetNameForCapabilityState(m_quickEventTrigger));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
