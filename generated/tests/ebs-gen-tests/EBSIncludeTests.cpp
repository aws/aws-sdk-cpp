/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/ebs/EBSClient.h>
#include <aws/ebs/EBSEndpointProvider.h>
#include <aws/ebs/EBSEndpointRules.h>
#include <aws/ebs/EBSErrorMarshaller.h>
#include <aws/ebs/EBSErrors.h>
#include <aws/ebs/EBSRequest.h>
#include <aws/ebs/EBSServiceClientModel.h>
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/ebs/model/AccessDeniedException.h>
#include <aws/ebs/model/AccessDeniedExceptionReason.h>
#include <aws/ebs/model/Block.h>
#include <aws/ebs/model/ChangedBlock.h>
#include <aws/ebs/model/ChecksumAggregationMethod.h>
#include <aws/ebs/model/ChecksumAlgorithm.h>
#include <aws/ebs/model/CompleteSnapshotRequest.h>
#include <aws/ebs/model/CompleteSnapshotResult.h>
#include <aws/ebs/model/GetSnapshotBlockRequest.h>
#include <aws/ebs/model/GetSnapshotBlockResult.h>
#include <aws/ebs/model/ListChangedBlocksRequest.h>
#include <aws/ebs/model/ListChangedBlocksResult.h>
#include <aws/ebs/model/ListSnapshotBlocksRequest.h>
#include <aws/ebs/model/ListSnapshotBlocksResult.h>
#include <aws/ebs/model/PutSnapshotBlockRequest.h>
#include <aws/ebs/model/PutSnapshotBlockResult.h>
#include <aws/ebs/model/RequestThrottledException.h>
#include <aws/ebs/model/RequestThrottledExceptionReason.h>
#include <aws/ebs/model/ResourceNotFoundException.h>
#include <aws/ebs/model/ResourceNotFoundExceptionReason.h>
#include <aws/ebs/model/SSEType.h>
#include <aws/ebs/model/ServiceQuotaExceededException.h>
#include <aws/ebs/model/ServiceQuotaExceededExceptionReason.h>
#include <aws/ebs/model/StartSnapshotRequest.h>
#include <aws/ebs/model/StartSnapshotResult.h>
#include <aws/ebs/model/Status.h>
#include <aws/ebs/model/Tag.h>
#include <aws/ebs/model/ValidationException.h>
#include <aws/ebs/model/ValidationExceptionReason.h>

using EBSIncludeTest = ::testing::Test;

TEST_F(EBSIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::EBS::EBSClient>("EBSIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
