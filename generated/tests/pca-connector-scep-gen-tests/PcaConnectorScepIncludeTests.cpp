/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/pca-connector-scep/PcaConnectorScepClient.h>
#include <aws/pca-connector-scep/PcaConnectorScepEndpointProvider.h>
#include <aws/pca-connector-scep/PcaConnectorScepEndpointRules.h>
#include <aws/pca-connector-scep/PcaConnectorScepErrorMarshaller.h>
#include <aws/pca-connector-scep/PcaConnectorScepErrors.h>
#include <aws/pca-connector-scep/PcaConnectorScepRequest.h>
#include <aws/pca-connector-scep/PcaConnectorScepServiceClientModel.h>
#include <aws/pca-connector-scep/PcaConnectorScep_EXPORTS.h>
#include <aws/pca-connector-scep/model/Challenge.h>
#include <aws/pca-connector-scep/model/ChallengeMetadata.h>
#include <aws/pca-connector-scep/model/ChallengeMetadataSummary.h>
#include <aws/pca-connector-scep/model/ConflictException.h>
#include <aws/pca-connector-scep/model/Connector.h>
#include <aws/pca-connector-scep/model/ConnectorStatus.h>
#include <aws/pca-connector-scep/model/ConnectorStatusReason.h>
#include <aws/pca-connector-scep/model/ConnectorSummary.h>
#include <aws/pca-connector-scep/model/ConnectorType.h>
#include <aws/pca-connector-scep/model/CreateChallengeRequest.h>
#include <aws/pca-connector-scep/model/CreateChallengeResult.h>
#include <aws/pca-connector-scep/model/CreateConnectorRequest.h>
#include <aws/pca-connector-scep/model/CreateConnectorResult.h>
#include <aws/pca-connector-scep/model/DeleteChallengeRequest.h>
#include <aws/pca-connector-scep/model/DeleteConnectorRequest.h>
#include <aws/pca-connector-scep/model/GetChallengeMetadataRequest.h>
#include <aws/pca-connector-scep/model/GetChallengeMetadataResult.h>
#include <aws/pca-connector-scep/model/GetChallengePasswordRequest.h>
#include <aws/pca-connector-scep/model/GetChallengePasswordResult.h>
#include <aws/pca-connector-scep/model/GetConnectorRequest.h>
#include <aws/pca-connector-scep/model/GetConnectorResult.h>
#include <aws/pca-connector-scep/model/IntuneConfiguration.h>
#include <aws/pca-connector-scep/model/ListChallengeMetadataRequest.h>
#include <aws/pca-connector-scep/model/ListChallengeMetadataResult.h>
#include <aws/pca-connector-scep/model/ListConnectorsRequest.h>
#include <aws/pca-connector-scep/model/ListConnectorsResult.h>
#include <aws/pca-connector-scep/model/ListTagsForResourceRequest.h>
#include <aws/pca-connector-scep/model/ListTagsForResourceResult.h>
#include <aws/pca-connector-scep/model/MobileDeviceManagement.h>
#include <aws/pca-connector-scep/model/OpenIdConfiguration.h>
#include <aws/pca-connector-scep/model/ResourceNotFoundException.h>
#include <aws/pca-connector-scep/model/ServiceQuotaExceededException.h>
#include <aws/pca-connector-scep/model/TagResourceRequest.h>
#include <aws/pca-connector-scep/model/UntagResourceRequest.h>
#include <aws/pca-connector-scep/model/ValidationException.h>
#include <aws/pca-connector-scep/model/ValidationExceptionReason.h>

using PcaConnectorScepIncludeTest = ::testing::Test;

TEST_F(PcaConnectorScepIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::PcaConnectorScep::PcaConnectorScepClient>("PcaConnectorScepIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
