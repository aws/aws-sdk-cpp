/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/qldb/QLDBClient.h>
#include <aws/qldb/QLDBEndpointProvider.h>
#include <aws/qldb/QLDBEndpointRules.h>
#include <aws/qldb/QLDBErrorMarshaller.h>
#include <aws/qldb/QLDBErrors.h>
#include <aws/qldb/QLDBRequest.h>
#include <aws/qldb/QLDBServiceClientModel.h>
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/qldb/model/CancelJournalKinesisStreamRequest.h>
#include <aws/qldb/model/CancelJournalKinesisStreamResult.h>
#include <aws/qldb/model/CreateLedgerRequest.h>
#include <aws/qldb/model/CreateLedgerResult.h>
#include <aws/qldb/model/DeleteLedgerRequest.h>
#include <aws/qldb/model/DescribeJournalKinesisStreamRequest.h>
#include <aws/qldb/model/DescribeJournalKinesisStreamResult.h>
#include <aws/qldb/model/DescribeJournalS3ExportRequest.h>
#include <aws/qldb/model/DescribeJournalS3ExportResult.h>
#include <aws/qldb/model/DescribeLedgerRequest.h>
#include <aws/qldb/model/DescribeLedgerResult.h>
#include <aws/qldb/model/EncryptionStatus.h>
#include <aws/qldb/model/ErrorCause.h>
#include <aws/qldb/model/ExportJournalToS3Request.h>
#include <aws/qldb/model/ExportJournalToS3Result.h>
#include <aws/qldb/model/ExportStatus.h>
#include <aws/qldb/model/GetBlockRequest.h>
#include <aws/qldb/model/GetBlockResult.h>
#include <aws/qldb/model/GetDigestRequest.h>
#include <aws/qldb/model/GetDigestResult.h>
#include <aws/qldb/model/GetRevisionRequest.h>
#include <aws/qldb/model/GetRevisionResult.h>
#include <aws/qldb/model/InvalidParameterException.h>
#include <aws/qldb/model/JournalKinesisStreamDescription.h>
#include <aws/qldb/model/JournalS3ExportDescription.h>
#include <aws/qldb/model/KinesisConfiguration.h>
#include <aws/qldb/model/LedgerEncryptionDescription.h>
#include <aws/qldb/model/LedgerState.h>
#include <aws/qldb/model/LedgerSummary.h>
#include <aws/qldb/model/LimitExceededException.h>
#include <aws/qldb/model/ListJournalKinesisStreamsForLedgerRequest.h>
#include <aws/qldb/model/ListJournalKinesisStreamsForLedgerResult.h>
#include <aws/qldb/model/ListJournalS3ExportsForLedgerRequest.h>
#include <aws/qldb/model/ListJournalS3ExportsForLedgerResult.h>
#include <aws/qldb/model/ListJournalS3ExportsRequest.h>
#include <aws/qldb/model/ListJournalS3ExportsResult.h>
#include <aws/qldb/model/ListLedgersRequest.h>
#include <aws/qldb/model/ListLedgersResult.h>
#include <aws/qldb/model/ListTagsForResourceRequest.h>
#include <aws/qldb/model/ListTagsForResourceResult.h>
#include <aws/qldb/model/OutputFormat.h>
#include <aws/qldb/model/PermissionsMode.h>
#include <aws/qldb/model/ResourceAlreadyExistsException.h>
#include <aws/qldb/model/ResourceInUseException.h>
#include <aws/qldb/model/ResourceNotFoundException.h>
#include <aws/qldb/model/ResourcePreconditionNotMetException.h>
#include <aws/qldb/model/S3EncryptionConfiguration.h>
#include <aws/qldb/model/S3ExportConfiguration.h>
#include <aws/qldb/model/S3ObjectEncryptionType.h>
#include <aws/qldb/model/StreamJournalToKinesisRequest.h>
#include <aws/qldb/model/StreamJournalToKinesisResult.h>
#include <aws/qldb/model/StreamStatus.h>
#include <aws/qldb/model/TagResourceRequest.h>
#include <aws/qldb/model/TagResourceResult.h>
#include <aws/qldb/model/UntagResourceRequest.h>
#include <aws/qldb/model/UntagResourceResult.h>
#include <aws/qldb/model/UpdateLedgerPermissionsModeRequest.h>
#include <aws/qldb/model/UpdateLedgerPermissionsModeResult.h>
#include <aws/qldb/model/UpdateLedgerRequest.h>
#include <aws/qldb/model/UpdateLedgerResult.h>
#include <aws/qldb/model/ValueHolder.h>

using QLDBIncludeTest = ::testing::Test;

TEST_F(QLDBIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::QLDB::QLDBClient>("QLDBIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
