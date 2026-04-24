/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/finspace-data/FinSpaceDataClient.h>
#include <aws/finspace-data/FinSpaceDataEndpointProvider.h>
#include <aws/finspace-data/FinSpaceDataEndpointRules.h>
#include <aws/finspace-data/FinSpaceDataErrorMarshaller.h>
#include <aws/finspace-data/FinSpaceDataErrors.h>
#include <aws/finspace-data/FinSpaceDataRequest.h>
#include <aws/finspace-data/FinSpaceDataServiceClientModel.h>
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/finspace-data/model/ApiAccess.h>
#include <aws/finspace-data/model/ApplicationPermission.h>
#include <aws/finspace-data/model/AwsCredentials.h>
#include <aws/finspace-data/model/ChangeType.h>
#include <aws/finspace-data/model/ChangesetErrorInfo.h>
#include <aws/finspace-data/model/ChangesetSummary.h>
#include <aws/finspace-data/model/ColumnDataType.h>
#include <aws/finspace-data/model/ColumnDefinition.h>
#include <aws/finspace-data/model/Credentials.h>
#include <aws/finspace-data/model/DataViewDestinationTypeParams.h>
#include <aws/finspace-data/model/DataViewErrorInfo.h>
#include <aws/finspace-data/model/DataViewStatus.h>
#include <aws/finspace-data/model/DataViewSummary.h>
#include <aws/finspace-data/model/Dataset.h>
#include <aws/finspace-data/model/DatasetKind.h>
#include <aws/finspace-data/model/DatasetOwnerInfo.h>
#include <aws/finspace-data/model/DatasetStatus.h>
#include <aws/finspace-data/model/ErrorCategory.h>
#include <aws/finspace-data/model/ExportFileFormat.h>
#include <aws/finspace-data/model/IngestionStatus.h>
#include <aws/finspace-data/model/LocationType.h>
#include <aws/finspace-data/model/PermissionGroup.h>
#include <aws/finspace-data/model/PermissionGroupByUser.h>
#include <aws/finspace-data/model/PermissionGroupMembershipStatus.h>
#include <aws/finspace-data/model/PermissionGroupParams.h>
#include <aws/finspace-data/model/ResourcePermission.h>
#include <aws/finspace-data/model/S3Location.h>
#include <aws/finspace-data/model/SchemaDefinition.h>
#include <aws/finspace-data/model/SchemaUnion.h>
#include <aws/finspace-data/model/User.h>
#include <aws/finspace-data/model/UserByPermissionGroup.h>
#include <aws/finspace-data/model/UserStatus.h>
#include <aws/finspace-data/model/UserType.h>

using FinSpaceDataIncludeTest = ::testing::Test;

TEST_F(FinSpaceDataIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::FinSpaceData::FinSpaceDataClient>("FinSpaceDataIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
