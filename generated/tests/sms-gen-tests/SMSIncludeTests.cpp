/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/sms/SMSClient.h>
#include <aws/sms/SMSEndpointProvider.h>
#include <aws/sms/SMSEndpointRules.h>
#include <aws/sms/SMSErrorMarshaller.h>
#include <aws/sms/SMSErrors.h>
#include <aws/sms/SMSRequest.h>
#include <aws/sms/SMSServiceClientModel.h>
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/model/AppLaunchConfigurationStatus.h>
#include <aws/sms/model/AppLaunchStatus.h>
#include <aws/sms/model/AppReplicationConfigurationStatus.h>
#include <aws/sms/model/AppReplicationStatus.h>
#include <aws/sms/model/AppStatus.h>
#include <aws/sms/model/AppSummary.h>
#include <aws/sms/model/AppValidationConfiguration.h>
#include <aws/sms/model/AppValidationOutput.h>
#include <aws/sms/model/AppValidationStrategy.h>
#include <aws/sms/model/Connector.h>
#include <aws/sms/model/ConnectorCapability.h>
#include <aws/sms/model/ConnectorStatus.h>
#include <aws/sms/model/CreateAppRequest.h>
#include <aws/sms/model/CreateAppResult.h>
#include <aws/sms/model/CreateReplicationJobRequest.h>
#include <aws/sms/model/CreateReplicationJobResult.h>
#include <aws/sms/model/DeleteAppLaunchConfigurationRequest.h>
#include <aws/sms/model/DeleteAppLaunchConfigurationResult.h>
#include <aws/sms/model/DeleteAppReplicationConfigurationRequest.h>
#include <aws/sms/model/DeleteAppReplicationConfigurationResult.h>
#include <aws/sms/model/DeleteAppRequest.h>
#include <aws/sms/model/DeleteAppResult.h>
#include <aws/sms/model/DeleteAppValidationConfigurationRequest.h>
#include <aws/sms/model/DeleteAppValidationConfigurationResult.h>
#include <aws/sms/model/DeleteReplicationJobRequest.h>
#include <aws/sms/model/DeleteReplicationJobResult.h>
#include <aws/sms/model/DeleteServerCatalogRequest.h>
#include <aws/sms/model/DeleteServerCatalogResult.h>
#include <aws/sms/model/DisassociateConnectorRequest.h>
#include <aws/sms/model/DisassociateConnectorResult.h>
#include <aws/sms/model/GenerateChangeSetRequest.h>
#include <aws/sms/model/GenerateChangeSetResult.h>
#include <aws/sms/model/GenerateTemplateRequest.h>
#include <aws/sms/model/GenerateTemplateResult.h>
#include <aws/sms/model/GetAppLaunchConfigurationRequest.h>
#include <aws/sms/model/GetAppLaunchConfigurationResult.h>
#include <aws/sms/model/GetAppReplicationConfigurationRequest.h>
#include <aws/sms/model/GetAppReplicationConfigurationResult.h>
#include <aws/sms/model/GetAppRequest.h>
#include <aws/sms/model/GetAppResult.h>
#include <aws/sms/model/GetAppValidationConfigurationRequest.h>
#include <aws/sms/model/GetAppValidationConfigurationResult.h>
#include <aws/sms/model/GetAppValidationOutputRequest.h>
#include <aws/sms/model/GetAppValidationOutputResult.h>
#include <aws/sms/model/GetConnectorsRequest.h>
#include <aws/sms/model/GetConnectorsResult.h>
#include <aws/sms/model/GetReplicationJobsRequest.h>
#include <aws/sms/model/GetReplicationJobsResult.h>
#include <aws/sms/model/GetReplicationRunsRequest.h>
#include <aws/sms/model/GetReplicationRunsResult.h>
#include <aws/sms/model/GetServersRequest.h>
#include <aws/sms/model/GetServersResult.h>
#include <aws/sms/model/ImportAppCatalogRequest.h>
#include <aws/sms/model/ImportAppCatalogResult.h>
#include <aws/sms/model/ImportServerCatalogRequest.h>
#include <aws/sms/model/ImportServerCatalogResult.h>
#include <aws/sms/model/LaunchAppRequest.h>
#include <aws/sms/model/LaunchAppResult.h>
#include <aws/sms/model/LaunchDetails.h>
#include <aws/sms/model/LicenseType.h>
#include <aws/sms/model/ListAppsRequest.h>
#include <aws/sms/model/ListAppsResult.h>
#include <aws/sms/model/NotificationContext.h>
#include <aws/sms/model/NotifyAppValidationOutputRequest.h>
#include <aws/sms/model/NotifyAppValidationOutputResult.h>
#include <aws/sms/model/OutputFormat.h>
#include <aws/sms/model/PutAppLaunchConfigurationRequest.h>
#include <aws/sms/model/PutAppLaunchConfigurationResult.h>
#include <aws/sms/model/PutAppReplicationConfigurationRequest.h>
#include <aws/sms/model/PutAppReplicationConfigurationResult.h>
#include <aws/sms/model/PutAppValidationConfigurationRequest.h>
#include <aws/sms/model/PutAppValidationConfigurationResult.h>
#include <aws/sms/model/ReplicationJob.h>
#include <aws/sms/model/ReplicationJobState.h>
#include <aws/sms/model/ReplicationRun.h>
#include <aws/sms/model/ReplicationRunStageDetails.h>
#include <aws/sms/model/ReplicationRunState.h>
#include <aws/sms/model/ReplicationRunType.h>
#include <aws/sms/model/S3Location.h>
#include <aws/sms/model/SSMOutput.h>
#include <aws/sms/model/SSMValidationParameters.h>
#include <aws/sms/model/ScriptType.h>
#include <aws/sms/model/Server.h>
#include <aws/sms/model/ServerCatalogStatus.h>
#include <aws/sms/model/ServerGroup.h>
#include <aws/sms/model/ServerGroupLaunchConfiguration.h>
#include <aws/sms/model/ServerGroupReplicationConfiguration.h>
#include <aws/sms/model/ServerGroupValidationConfiguration.h>
#include <aws/sms/model/ServerLaunchConfiguration.h>
#include <aws/sms/model/ServerReplicationConfiguration.h>
#include <aws/sms/model/ServerReplicationParameters.h>
#include <aws/sms/model/ServerType.h>
#include <aws/sms/model/ServerValidationConfiguration.h>
#include <aws/sms/model/ServerValidationOutput.h>
#include <aws/sms/model/ServerValidationStrategy.h>
#include <aws/sms/model/Source.h>
#include <aws/sms/model/StartAppReplicationRequest.h>
#include <aws/sms/model/StartAppReplicationResult.h>
#include <aws/sms/model/StartOnDemandAppReplicationRequest.h>
#include <aws/sms/model/StartOnDemandAppReplicationResult.h>
#include <aws/sms/model/StartOnDemandReplicationRunRequest.h>
#include <aws/sms/model/StartOnDemandReplicationRunResult.h>
#include <aws/sms/model/StopAppReplicationRequest.h>
#include <aws/sms/model/StopAppReplicationResult.h>
#include <aws/sms/model/Tag.h>
#include <aws/sms/model/TerminateAppRequest.h>
#include <aws/sms/model/TerminateAppResult.h>
#include <aws/sms/model/UpdateAppRequest.h>
#include <aws/sms/model/UpdateAppResult.h>
#include <aws/sms/model/UpdateReplicationJobRequest.h>
#include <aws/sms/model/UpdateReplicationJobResult.h>
#include <aws/sms/model/UserData.h>
#include <aws/sms/model/UserDataValidationParameters.h>
#include <aws/sms/model/ValidationOutput.h>
#include <aws/sms/model/ValidationStatus.h>
#include <aws/sms/model/VmManagerType.h>
#include <aws/sms/model/VmServer.h>
#include <aws/sms/model/VmServerAddress.h>

using SMSIncludeTest = ::testing::Test;

TEST_F(SMSIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  auto pClient = Aws::MakeUnique<Aws::SMS::SMSClient>("SMSIncludeTest", config);
  ASSERT_TRUE(pClient.get());
}
