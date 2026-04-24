/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/tnb/TnbClient.h>
#include <aws/tnb/TnbEndpointProvider.h>
#include <aws/tnb/TnbEndpointRules.h>
#include <aws/tnb/TnbErrorMarshaller.h>
#include <aws/tnb/TnbErrors.h>
#include <aws/tnb/TnbRequest.h>
#include <aws/tnb/TnbServiceClientModel.h>
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/tnb/model/CancelSolNetworkOperationRequest.h>
#include <aws/tnb/model/CreateSolFunctionPackageRequest.h>
#include <aws/tnb/model/CreateSolFunctionPackageResult.h>
#include <aws/tnb/model/CreateSolNetworkInstanceRequest.h>
#include <aws/tnb/model/CreateSolNetworkInstanceResult.h>
#include <aws/tnb/model/CreateSolNetworkPackageRequest.h>
#include <aws/tnb/model/CreateSolNetworkPackageResult.h>
#include <aws/tnb/model/DeleteSolFunctionPackageRequest.h>
#include <aws/tnb/model/DeleteSolNetworkInstanceRequest.h>
#include <aws/tnb/model/DeleteSolNetworkPackageRequest.h>
#include <aws/tnb/model/DescriptorContentType.h>
#include <aws/tnb/model/ErrorInfo.h>
#include <aws/tnb/model/FunctionArtifactMeta.h>
#include <aws/tnb/model/GetSolFunctionInstanceMetadata.h>
#include <aws/tnb/model/GetSolFunctionInstanceRequest.h>
#include <aws/tnb/model/GetSolFunctionInstanceResult.h>
#include <aws/tnb/model/GetSolFunctionPackageContentRequest.h>
#include <aws/tnb/model/GetSolFunctionPackageContentResult.h>
#include <aws/tnb/model/GetSolFunctionPackageDescriptorRequest.h>
#include <aws/tnb/model/GetSolFunctionPackageDescriptorResult.h>
#include <aws/tnb/model/GetSolFunctionPackageMetadata.h>
#include <aws/tnb/model/GetSolFunctionPackageRequest.h>
#include <aws/tnb/model/GetSolFunctionPackageResult.h>
#include <aws/tnb/model/GetSolInstantiatedVnfInfo.h>
#include <aws/tnb/model/GetSolNetworkInstanceMetadata.h>
#include <aws/tnb/model/GetSolNetworkInstanceRequest.h>
#include <aws/tnb/model/GetSolNetworkInstanceResult.h>
#include <aws/tnb/model/GetSolNetworkOperationMetadata.h>
#include <aws/tnb/model/GetSolNetworkOperationRequest.h>
#include <aws/tnb/model/GetSolNetworkOperationResult.h>
#include <aws/tnb/model/GetSolNetworkOperationTaskDetails.h>
#include <aws/tnb/model/GetSolNetworkPackageContentRequest.h>
#include <aws/tnb/model/GetSolNetworkPackageContentResult.h>
#include <aws/tnb/model/GetSolNetworkPackageDescriptorRequest.h>
#include <aws/tnb/model/GetSolNetworkPackageDescriptorResult.h>
#include <aws/tnb/model/GetSolNetworkPackageMetadata.h>
#include <aws/tnb/model/GetSolNetworkPackageRequest.h>
#include <aws/tnb/model/GetSolNetworkPackageResult.h>
#include <aws/tnb/model/GetSolVnfInfo.h>
#include <aws/tnb/model/GetSolVnfcResourceInfo.h>
#include <aws/tnb/model/GetSolVnfcResourceInfoMetadata.h>
#include <aws/tnb/model/InstantiateMetadata.h>
#include <aws/tnb/model/InstantiateSolNetworkInstanceRequest.h>
#include <aws/tnb/model/InstantiateSolNetworkInstanceResult.h>
#include <aws/tnb/model/LcmOperationInfo.h>
#include <aws/tnb/model/LcmOperationType.h>
#include <aws/tnb/model/ListSolFunctionInstanceInfo.h>
#include <aws/tnb/model/ListSolFunctionInstanceMetadata.h>
#include <aws/tnb/model/ListSolFunctionInstancesRequest.h>
#include <aws/tnb/model/ListSolFunctionInstancesResult.h>
#include <aws/tnb/model/ListSolFunctionPackageInfo.h>
#include <aws/tnb/model/ListSolFunctionPackageMetadata.h>
#include <aws/tnb/model/ListSolFunctionPackagesRequest.h>
#include <aws/tnb/model/ListSolFunctionPackagesResult.h>
#include <aws/tnb/model/ListSolNetworkInstanceInfo.h>
#include <aws/tnb/model/ListSolNetworkInstanceMetadata.h>
#include <aws/tnb/model/ListSolNetworkInstancesRequest.h>
#include <aws/tnb/model/ListSolNetworkInstancesResult.h>
#include <aws/tnb/model/ListSolNetworkOperationsInfo.h>
#include <aws/tnb/model/ListSolNetworkOperationsMetadata.h>
#include <aws/tnb/model/ListSolNetworkOperationsRequest.h>
#include <aws/tnb/model/ListSolNetworkOperationsResult.h>
#include <aws/tnb/model/ListSolNetworkPackageInfo.h>
#include <aws/tnb/model/ListSolNetworkPackageMetadata.h>
#include <aws/tnb/model/ListSolNetworkPackagesRequest.h>
#include <aws/tnb/model/ListSolNetworkPackagesResult.h>
#include <aws/tnb/model/ListTagsForResourceRequest.h>
#include <aws/tnb/model/ListTagsForResourceResult.h>
#include <aws/tnb/model/ModifyVnfInfoMetadata.h>
#include <aws/tnb/model/NetworkArtifactMeta.h>
#include <aws/tnb/model/NsLcmOperationState.h>
#include <aws/tnb/model/NsState.h>
#include <aws/tnb/model/NsdOnboardingState.h>
#include <aws/tnb/model/NsdOperationalState.h>
#include <aws/tnb/model/NsdUsageState.h>
#include <aws/tnb/model/OnboardingState.h>
#include <aws/tnb/model/OperationalState.h>
#include <aws/tnb/model/PackageContentType.h>
#include <aws/tnb/model/ProblemDetails.h>
#include <aws/tnb/model/PutSolFunctionPackageContentMetadata.h>
#include <aws/tnb/model/PutSolFunctionPackageContentRequest.h>
#include <aws/tnb/model/PutSolFunctionPackageContentResult.h>
#include <aws/tnb/model/PutSolNetworkPackageContentMetadata.h>
#include <aws/tnb/model/PutSolNetworkPackageContentRequest.h>
#include <aws/tnb/model/PutSolNetworkPackageContentResult.h>
#include <aws/tnb/model/TagResourceRequest.h>
#include <aws/tnb/model/TagResourceResult.h>
#include <aws/tnb/model/TaskStatus.h>
#include <aws/tnb/model/TerminateSolNetworkInstanceRequest.h>
#include <aws/tnb/model/TerminateSolNetworkInstanceResult.h>
#include <aws/tnb/model/ToscaOverride.h>
#include <aws/tnb/model/UntagResourceRequest.h>
#include <aws/tnb/model/UntagResourceResult.h>
#include <aws/tnb/model/UpdateNsMetadata.h>
#include <aws/tnb/model/UpdateSolFunctionPackageRequest.h>
#include <aws/tnb/model/UpdateSolFunctionPackageResult.h>
#include <aws/tnb/model/UpdateSolNetworkInstanceRequest.h>
#include <aws/tnb/model/UpdateSolNetworkInstanceResult.h>
#include <aws/tnb/model/UpdateSolNetworkModify.h>
#include <aws/tnb/model/UpdateSolNetworkPackageRequest.h>
#include <aws/tnb/model/UpdateSolNetworkPackageResult.h>
#include <aws/tnb/model/UpdateSolNetworkServiceData.h>
#include <aws/tnb/model/UpdateSolNetworkType.h>
#include <aws/tnb/model/UsageState.h>
#include <aws/tnb/model/ValidateSolFunctionPackageContentMetadata.h>
#include <aws/tnb/model/ValidateSolFunctionPackageContentRequest.h>
#include <aws/tnb/model/ValidateSolFunctionPackageContentResult.h>
#include <aws/tnb/model/ValidateSolNetworkPackageContentMetadata.h>
#include <aws/tnb/model/ValidateSolNetworkPackageContentRequest.h>
#include <aws/tnb/model/ValidateSolNetworkPackageContentResult.h>
#include <aws/tnb/model/VnfInstantiationState.h>
#include <aws/tnb/model/VnfOperationalState.h>

using TnbIncludeTest = ::testing::Test;

TEST_F(TnbIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::tnb::TnbClient>("TnbIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
