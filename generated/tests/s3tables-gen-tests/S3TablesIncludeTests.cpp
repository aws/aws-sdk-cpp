/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/s3tables/S3TablesClient.h>
#include <aws/s3tables/S3TablesEndpointProvider.h>
#include <aws/s3tables/S3TablesEndpointRules.h>
#include <aws/s3tables/S3TablesErrorMarshaller.h>
#include <aws/s3tables/S3TablesErrors.h>
#include <aws/s3tables/S3TablesRequest.h>
#include <aws/s3tables/S3TablesServiceClientModel.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/CreateNamespaceRequest.h>
#include <aws/s3tables/model/CreateNamespaceResult.h>
#include <aws/s3tables/model/CreateTableBucketRequest.h>
#include <aws/s3tables/model/CreateTableBucketResult.h>
#include <aws/s3tables/model/CreateTableRequest.h>
#include <aws/s3tables/model/CreateTableResult.h>
#include <aws/s3tables/model/DeleteNamespaceRequest.h>
#include <aws/s3tables/model/DeleteTableBucketEncryptionRequest.h>
#include <aws/s3tables/model/DeleteTableBucketPolicyRequest.h>
#include <aws/s3tables/model/DeleteTableBucketRequest.h>
#include <aws/s3tables/model/DeleteTablePolicyRequest.h>
#include <aws/s3tables/model/DeleteTableRequest.h>
#include <aws/s3tables/model/EncryptionConfiguration.h>
#include <aws/s3tables/model/GetNamespaceRequest.h>
#include <aws/s3tables/model/GetNamespaceResult.h>
#include <aws/s3tables/model/GetTableBucketEncryptionRequest.h>
#include <aws/s3tables/model/GetTableBucketEncryptionResult.h>
#include <aws/s3tables/model/GetTableBucketMaintenanceConfigurationRequest.h>
#include <aws/s3tables/model/GetTableBucketMaintenanceConfigurationResult.h>
#include <aws/s3tables/model/GetTableBucketPolicyRequest.h>
#include <aws/s3tables/model/GetTableBucketPolicyResult.h>
#include <aws/s3tables/model/GetTableBucketRequest.h>
#include <aws/s3tables/model/GetTableBucketResult.h>
#include <aws/s3tables/model/GetTableEncryptionRequest.h>
#include <aws/s3tables/model/GetTableEncryptionResult.h>
#include <aws/s3tables/model/GetTableMaintenanceConfigurationRequest.h>
#include <aws/s3tables/model/GetTableMaintenanceConfigurationResult.h>
#include <aws/s3tables/model/GetTableMaintenanceJobStatusRequest.h>
#include <aws/s3tables/model/GetTableMaintenanceJobStatusResult.h>
#include <aws/s3tables/model/GetTableMetadataLocationRequest.h>
#include <aws/s3tables/model/GetTableMetadataLocationResult.h>
#include <aws/s3tables/model/GetTablePolicyRequest.h>
#include <aws/s3tables/model/GetTablePolicyResult.h>
#include <aws/s3tables/model/GetTableRequest.h>
#include <aws/s3tables/model/GetTableResult.h>
#include <aws/s3tables/model/IcebergCompactionSettings.h>
#include <aws/s3tables/model/IcebergCompactionStrategy.h>
#include <aws/s3tables/model/IcebergMetadata.h>
#include <aws/s3tables/model/IcebergSchema.h>
#include <aws/s3tables/model/IcebergSnapshotManagementSettings.h>
#include <aws/s3tables/model/IcebergUnreferencedFileRemovalSettings.h>
#include <aws/s3tables/model/JobStatus.h>
#include <aws/s3tables/model/ListNamespacesRequest.h>
#include <aws/s3tables/model/ListNamespacesResult.h>
#include <aws/s3tables/model/ListTableBucketsRequest.h>
#include <aws/s3tables/model/ListTableBucketsResult.h>
#include <aws/s3tables/model/ListTablesRequest.h>
#include <aws/s3tables/model/ListTablesResult.h>
#include <aws/s3tables/model/MaintenanceStatus.h>
#include <aws/s3tables/model/NamespaceSummary.h>
#include <aws/s3tables/model/OpenTableFormat.h>
#include <aws/s3tables/model/PutTableBucketEncryptionRequest.h>
#include <aws/s3tables/model/PutTableBucketMaintenanceConfigurationRequest.h>
#include <aws/s3tables/model/PutTableBucketPolicyRequest.h>
#include <aws/s3tables/model/PutTableMaintenanceConfigurationRequest.h>
#include <aws/s3tables/model/PutTablePolicyRequest.h>
#include <aws/s3tables/model/RenameTableRequest.h>
#include <aws/s3tables/model/SSEAlgorithm.h>
#include <aws/s3tables/model/SchemaField.h>
#include <aws/s3tables/model/TableBucketMaintenanceConfigurationValue.h>
#include <aws/s3tables/model/TableBucketMaintenanceSettings.h>
#include <aws/s3tables/model/TableBucketMaintenanceType.h>
#include <aws/s3tables/model/TableBucketSummary.h>
#include <aws/s3tables/model/TableBucketType.h>
#include <aws/s3tables/model/TableMaintenanceConfigurationValue.h>
#include <aws/s3tables/model/TableMaintenanceJobStatusValue.h>
#include <aws/s3tables/model/TableMaintenanceJobType.h>
#include <aws/s3tables/model/TableMaintenanceSettings.h>
#include <aws/s3tables/model/TableMaintenanceType.h>
#include <aws/s3tables/model/TableMetadata.h>
#include <aws/s3tables/model/TableSummary.h>
#include <aws/s3tables/model/TableType.h>
#include <aws/s3tables/model/UpdateTableMetadataLocationRequest.h>
#include <aws/s3tables/model/UpdateTableMetadataLocationResult.h>

using S3TablesIncludeTest = ::testing::Test;

TEST_F(S3TablesIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::S3Tables::S3TablesClient>("S3TablesIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
