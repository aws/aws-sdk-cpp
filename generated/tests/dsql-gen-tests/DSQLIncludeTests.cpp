/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/dsql/DSQLClient.h>
#include <aws/dsql/DSQLEndpointProvider.h>
#include <aws/dsql/DSQLEndpointRules.h>
#include <aws/dsql/DSQLErrorMarshaller.h>
#include <aws/dsql/DSQLErrors.h>
#include <aws/dsql/DSQLRequest.h>
#include <aws/dsql/DSQLServiceClientModel.h>
#include <aws/dsql/DSQL_EXPORTS.h>
#include <aws/dsql/model/ClusterStatus.h>
#include <aws/dsql/model/ClusterSummary.h>
#include <aws/dsql/model/ConflictException.h>
#include <aws/dsql/model/CreateClusterRequest.h>
#include <aws/dsql/model/CreateClusterResult.h>
#include <aws/dsql/model/DeleteClusterRequest.h>
#include <aws/dsql/model/DeleteClusterResult.h>
#include <aws/dsql/model/EncryptionDetails.h>
#include <aws/dsql/model/EncryptionStatus.h>
#include <aws/dsql/model/EncryptionType.h>
#include <aws/dsql/model/GetClusterRequest.h>
#include <aws/dsql/model/GetClusterResult.h>
#include <aws/dsql/model/GetVpcEndpointServiceNameRequest.h>
#include <aws/dsql/model/GetVpcEndpointServiceNameResult.h>
#include <aws/dsql/model/InternalServerException.h>
#include <aws/dsql/model/ListClustersRequest.h>
#include <aws/dsql/model/ListClustersResult.h>
#include <aws/dsql/model/ListTagsForResourceRequest.h>
#include <aws/dsql/model/ListTagsForResourceResult.h>
#include <aws/dsql/model/MultiRegionProperties.h>
#include <aws/dsql/model/ResourceNotFoundException.h>
#include <aws/dsql/model/ServiceQuotaExceededException.h>
#include <aws/dsql/model/TagResourceRequest.h>
#include <aws/dsql/model/ThrottlingException.h>
#include <aws/dsql/model/UntagResourceRequest.h>
#include <aws/dsql/model/UpdateClusterRequest.h>
#include <aws/dsql/model/UpdateClusterResult.h>
#include <aws/dsql/model/ValidationException.h>
#include <aws/dsql/model/ValidationExceptionField.h>
#include <aws/dsql/model/ValidationExceptionReason.h>

using DSQLIncludeTest = ::testing::Test;

TEST_F(DSQLIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::DSQL::DSQLClient>("DSQLIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
