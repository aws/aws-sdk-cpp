/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/aiops/AIOpsClient.h>
#include <aws/aiops/AIOpsEndpointProvider.h>
#include <aws/aiops/AIOpsEndpointRules.h>
#include <aws/aiops/AIOpsErrorMarshaller.h>
#include <aws/aiops/AIOpsErrors.h>
#include <aws/aiops/AIOpsRequest.h>
#include <aws/aiops/AIOpsServiceClientModel.h>
#include <aws/aiops/AIOps_EXPORTS.h>
#include <aws/aiops/model/CreateInvestigationGroupRequest.h>
#include <aws/aiops/model/CreateInvestigationGroupResult.h>
#include <aws/aiops/model/CrossAccountConfiguration.h>
#include <aws/aiops/model/DeleteInvestigationGroupPolicyRequest.h>
#include <aws/aiops/model/DeleteInvestigationGroupPolicyResult.h>
#include <aws/aiops/model/DeleteInvestigationGroupRequest.h>
#include <aws/aiops/model/EncryptionConfiguration.h>
#include <aws/aiops/model/EncryptionConfigurationType.h>
#include <aws/aiops/model/GetInvestigationGroupPolicyRequest.h>
#include <aws/aiops/model/GetInvestigationGroupPolicyResult.h>
#include <aws/aiops/model/GetInvestigationGroupRequest.h>
#include <aws/aiops/model/GetInvestigationGroupResult.h>
#include <aws/aiops/model/ListInvestigationGroupsModel.h>
#include <aws/aiops/model/ListInvestigationGroupsRequest.h>
#include <aws/aiops/model/ListInvestigationGroupsResult.h>
#include <aws/aiops/model/ListTagsForResourceRequest.h>
#include <aws/aiops/model/ListTagsForResourceResult.h>
#include <aws/aiops/model/PutInvestigationGroupPolicyRequest.h>
#include <aws/aiops/model/PutInvestigationGroupPolicyResult.h>
#include <aws/aiops/model/ServiceQuotaExceededException.h>
#include <aws/aiops/model/TagResourceRequest.h>
#include <aws/aiops/model/TagResourceResult.h>
#include <aws/aiops/model/UntagResourceRequest.h>
#include <aws/aiops/model/UntagResourceResult.h>
#include <aws/aiops/model/UpdateInvestigationGroupRequest.h>
#include <aws/aiops/model/UpdateInvestigationGroupResult.h>

using AIOpsIncludeTest = ::testing::Test;

TEST_F(AIOpsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::AIOps::AIOpsClient>("AIOpsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
