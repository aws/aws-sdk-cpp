/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/ecr-public/ECRPublicClient.h>
#include <aws/ecr-public/ECRPublicEndpointProvider.h>
#include <aws/ecr-public/ECRPublicEndpointRules.h>
#include <aws/ecr-public/ECRPublicErrorMarshaller.h>
#include <aws/ecr-public/ECRPublicErrors.h>
#include <aws/ecr-public/ECRPublicRequest.h>
#include <aws/ecr-public/ECRPublicServiceClientModel.h>
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/ecr-public/model/AuthorizationData.h>
#include <aws/ecr-public/model/BatchCheckLayerAvailabilityRequest.h>
#include <aws/ecr-public/model/BatchCheckLayerAvailabilityResult.h>
#include <aws/ecr-public/model/BatchDeleteImageRequest.h>
#include <aws/ecr-public/model/BatchDeleteImageResult.h>
#include <aws/ecr-public/model/CompleteLayerUploadRequest.h>
#include <aws/ecr-public/model/CompleteLayerUploadResult.h>
#include <aws/ecr-public/model/CreateRepositoryRequest.h>
#include <aws/ecr-public/model/CreateRepositoryResult.h>
#include <aws/ecr-public/model/DeleteRepositoryPolicyRequest.h>
#include <aws/ecr-public/model/DeleteRepositoryPolicyResult.h>
#include <aws/ecr-public/model/DeleteRepositoryRequest.h>
#include <aws/ecr-public/model/DeleteRepositoryResult.h>
#include <aws/ecr-public/model/DescribeImageTagsRequest.h>
#include <aws/ecr-public/model/DescribeImageTagsResult.h>
#include <aws/ecr-public/model/DescribeImagesRequest.h>
#include <aws/ecr-public/model/DescribeImagesResult.h>
#include <aws/ecr-public/model/DescribeRegistriesRequest.h>
#include <aws/ecr-public/model/DescribeRegistriesResult.h>
#include <aws/ecr-public/model/DescribeRepositoriesRequest.h>
#include <aws/ecr-public/model/DescribeRepositoriesResult.h>
#include <aws/ecr-public/model/GetAuthorizationTokenRequest.h>
#include <aws/ecr-public/model/GetAuthorizationTokenResult.h>
#include <aws/ecr-public/model/GetRegistryCatalogDataRequest.h>
#include <aws/ecr-public/model/GetRegistryCatalogDataResult.h>
#include <aws/ecr-public/model/GetRepositoryCatalogDataRequest.h>
#include <aws/ecr-public/model/GetRepositoryCatalogDataResult.h>
#include <aws/ecr-public/model/GetRepositoryPolicyRequest.h>
#include <aws/ecr-public/model/GetRepositoryPolicyResult.h>
#include <aws/ecr-public/model/Image.h>
#include <aws/ecr-public/model/ImageDetail.h>
#include <aws/ecr-public/model/ImageFailure.h>
#include <aws/ecr-public/model/ImageFailureCode.h>
#include <aws/ecr-public/model/ImageIdentifier.h>
#include <aws/ecr-public/model/ImageTagDetail.h>
#include <aws/ecr-public/model/InitiateLayerUploadRequest.h>
#include <aws/ecr-public/model/InitiateLayerUploadResult.h>
#include <aws/ecr-public/model/InvalidLayerPartException.h>
#include <aws/ecr-public/model/Layer.h>
#include <aws/ecr-public/model/LayerAvailability.h>
#include <aws/ecr-public/model/LayerFailure.h>
#include <aws/ecr-public/model/LayerFailureCode.h>
#include <aws/ecr-public/model/ListTagsForResourceRequest.h>
#include <aws/ecr-public/model/ListTagsForResourceResult.h>
#include <aws/ecr-public/model/PutImageRequest.h>
#include <aws/ecr-public/model/PutImageResult.h>
#include <aws/ecr-public/model/PutRegistryCatalogDataRequest.h>
#include <aws/ecr-public/model/PutRegistryCatalogDataResult.h>
#include <aws/ecr-public/model/PutRepositoryCatalogDataRequest.h>
#include <aws/ecr-public/model/PutRepositoryCatalogDataResult.h>
#include <aws/ecr-public/model/ReferencedImageDetail.h>
#include <aws/ecr-public/model/Registry.h>
#include <aws/ecr-public/model/RegistryAlias.h>
#include <aws/ecr-public/model/RegistryAliasStatus.h>
#include <aws/ecr-public/model/RegistryCatalogData.h>
#include <aws/ecr-public/model/Repository.h>
#include <aws/ecr-public/model/RepositoryCatalogData.h>
#include <aws/ecr-public/model/RepositoryCatalogDataInput.h>
#include <aws/ecr-public/model/SetRepositoryPolicyRequest.h>
#include <aws/ecr-public/model/SetRepositoryPolicyResult.h>
#include <aws/ecr-public/model/Tag.h>
#include <aws/ecr-public/model/TagResourceRequest.h>
#include <aws/ecr-public/model/TagResourceResult.h>
#include <aws/ecr-public/model/UntagResourceRequest.h>
#include <aws/ecr-public/model/UntagResourceResult.h>
#include <aws/ecr-public/model/UploadLayerPartRequest.h>
#include <aws/ecr-public/model/UploadLayerPartResult.h>

using ECRPublicIncludeTest = ::testing::Test;

TEST_F(ECRPublicIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ECRPublic::ECRPublicClient>("ECRPublicIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
