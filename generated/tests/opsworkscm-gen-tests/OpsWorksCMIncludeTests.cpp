/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/opsworkscm/OpsWorksCMClient.h>
#include <aws/opsworkscm/OpsWorksCMEndpointProvider.h>
#include <aws/opsworkscm/OpsWorksCMEndpointRules.h>
#include <aws/opsworkscm/OpsWorksCMErrorMarshaller.h>
#include <aws/opsworkscm/OpsWorksCMErrors.h>
#include <aws/opsworkscm/OpsWorksCMRequest.h>
#include <aws/opsworkscm/OpsWorksCMServiceClientModel.h>
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/model/AccountAttribute.h>
#include <aws/opsworkscm/model/AssociateNodeRequest.h>
#include <aws/opsworkscm/model/AssociateNodeResult.h>
#include <aws/opsworkscm/model/Backup.h>
#include <aws/opsworkscm/model/BackupStatus.h>
#include <aws/opsworkscm/model/BackupType.h>
#include <aws/opsworkscm/model/CreateBackupRequest.h>
#include <aws/opsworkscm/model/CreateBackupResult.h>
#include <aws/opsworkscm/model/CreateServerRequest.h>
#include <aws/opsworkscm/model/CreateServerResult.h>
#include <aws/opsworkscm/model/DeleteBackupRequest.h>
#include <aws/opsworkscm/model/DeleteBackupResult.h>
#include <aws/opsworkscm/model/DeleteServerRequest.h>
#include <aws/opsworkscm/model/DeleteServerResult.h>
#include <aws/opsworkscm/model/DescribeAccountAttributesRequest.h>
#include <aws/opsworkscm/model/DescribeAccountAttributesResult.h>
#include <aws/opsworkscm/model/DescribeBackupsRequest.h>
#include <aws/opsworkscm/model/DescribeBackupsResult.h>
#include <aws/opsworkscm/model/DescribeEventsRequest.h>
#include <aws/opsworkscm/model/DescribeEventsResult.h>
#include <aws/opsworkscm/model/DescribeNodeAssociationStatusRequest.h>
#include <aws/opsworkscm/model/DescribeNodeAssociationStatusResult.h>
#include <aws/opsworkscm/model/DescribeServersRequest.h>
#include <aws/opsworkscm/model/DescribeServersResult.h>
#include <aws/opsworkscm/model/DisassociateNodeRequest.h>
#include <aws/opsworkscm/model/DisassociateNodeResult.h>
#include <aws/opsworkscm/model/EngineAttribute.h>
#include <aws/opsworkscm/model/ExportServerEngineAttributeRequest.h>
#include <aws/opsworkscm/model/ExportServerEngineAttributeResult.h>
#include <aws/opsworkscm/model/ListTagsForResourceRequest.h>
#include <aws/opsworkscm/model/ListTagsForResourceResult.h>
#include <aws/opsworkscm/model/MaintenanceStatus.h>
#include <aws/opsworkscm/model/NodeAssociationStatus.h>
#include <aws/opsworkscm/model/RestoreServerRequest.h>
#include <aws/opsworkscm/model/RestoreServerResult.h>
#include <aws/opsworkscm/model/Server.h>
#include <aws/opsworkscm/model/ServerEvent.h>
#include <aws/opsworkscm/model/ServerStatus.h>
#include <aws/opsworkscm/model/StartMaintenanceRequest.h>
#include <aws/opsworkscm/model/StartMaintenanceResult.h>
#include <aws/opsworkscm/model/Tag.h>
#include <aws/opsworkscm/model/TagResourceRequest.h>
#include <aws/opsworkscm/model/TagResourceResult.h>
#include <aws/opsworkscm/model/UntagResourceRequest.h>
#include <aws/opsworkscm/model/UntagResourceResult.h>
#include <aws/opsworkscm/model/UpdateServerEngineAttributesRequest.h>
#include <aws/opsworkscm/model/UpdateServerEngineAttributesResult.h>
#include <aws/opsworkscm/model/UpdateServerRequest.h>
#include <aws/opsworkscm/model/UpdateServerResult.h>

using OpsWorksCMIncludeTest = ::testing::Test;

TEST_F(OpsWorksCMIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::OpsWorksCM::OpsWorksCMClient>("OpsWorksCMIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
