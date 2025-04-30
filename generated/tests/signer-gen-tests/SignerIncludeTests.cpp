/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/signer/SignerClient.h>
#include <aws/signer/SignerEndpointProvider.h>
#include <aws/signer/SignerEndpointRules.h>
#include <aws/signer/SignerErrorMarshaller.h>
#include <aws/signer/SignerErrors.h>
#include <aws/signer/SignerRequest.h>
#include <aws/signer/SignerServiceClientModel.h>
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/model/AccessDeniedException.h>
#include <aws/signer/model/AddProfilePermissionRequest.h>
#include <aws/signer/model/AddProfilePermissionResult.h>
#include <aws/signer/model/BadRequestException.h>
#include <aws/signer/model/CancelSigningProfileRequest.h>
#include <aws/signer/model/Category.h>
#include <aws/signer/model/ConflictException.h>
#include <aws/signer/model/DescribeSigningJobRequest.h>
#include <aws/signer/model/DescribeSigningJobResult.h>
#include <aws/signer/model/Destination.h>
#include <aws/signer/model/EncryptionAlgorithm.h>
#include <aws/signer/model/EncryptionAlgorithmOptions.h>
#include <aws/signer/model/GetRevocationStatusRequest.h>
#include <aws/signer/model/GetRevocationStatusResult.h>
#include <aws/signer/model/GetSigningPlatformRequest.h>
#include <aws/signer/model/GetSigningPlatformResult.h>
#include <aws/signer/model/GetSigningProfileRequest.h>
#include <aws/signer/model/GetSigningProfileResult.h>
#include <aws/signer/model/HashAlgorithm.h>
#include <aws/signer/model/HashAlgorithmOptions.h>
#include <aws/signer/model/ImageFormat.h>
#include <aws/signer/model/InternalServiceErrorException.h>
#include <aws/signer/model/ListProfilePermissionsRequest.h>
#include <aws/signer/model/ListProfilePermissionsResult.h>
#include <aws/signer/model/ListSigningJobsRequest.h>
#include <aws/signer/model/ListSigningJobsResult.h>
#include <aws/signer/model/ListSigningPlatformsRequest.h>
#include <aws/signer/model/ListSigningPlatformsResult.h>
#include <aws/signer/model/ListSigningProfilesRequest.h>
#include <aws/signer/model/ListSigningProfilesResult.h>
#include <aws/signer/model/ListTagsForResourceRequest.h>
#include <aws/signer/model/ListTagsForResourceResult.h>
#include <aws/signer/model/NotFoundException.h>
#include <aws/signer/model/Permission.h>
#include <aws/signer/model/PutSigningProfileRequest.h>
#include <aws/signer/model/PutSigningProfileResult.h>
#include <aws/signer/model/RemoveProfilePermissionRequest.h>
#include <aws/signer/model/RemoveProfilePermissionResult.h>
#include <aws/signer/model/ResourceNotFoundException.h>
#include <aws/signer/model/RevokeSignatureRequest.h>
#include <aws/signer/model/RevokeSigningProfileRequest.h>
#include <aws/signer/model/S3Destination.h>
#include <aws/signer/model/S3SignedObject.h>
#include <aws/signer/model/S3Source.h>
#include <aws/signer/model/ServiceLimitExceededException.h>
#include <aws/signer/model/SignPayloadRequest.h>
#include <aws/signer/model/SignPayloadResult.h>
#include <aws/signer/model/SignatureValidityPeriod.h>
#include <aws/signer/model/SignedObject.h>
#include <aws/signer/model/SigningConfiguration.h>
#include <aws/signer/model/SigningConfigurationOverrides.h>
#include <aws/signer/model/SigningImageFormat.h>
#include <aws/signer/model/SigningJob.h>
#include <aws/signer/model/SigningJobRevocationRecord.h>
#include <aws/signer/model/SigningMaterial.h>
#include <aws/signer/model/SigningPlatform.h>
#include <aws/signer/model/SigningPlatformOverrides.h>
#include <aws/signer/model/SigningProfile.h>
#include <aws/signer/model/SigningProfileRevocationRecord.h>
#include <aws/signer/model/SigningProfileStatus.h>
#include <aws/signer/model/SigningStatus.h>
#include <aws/signer/model/Source.h>
#include <aws/signer/model/StartSigningJobRequest.h>
#include <aws/signer/model/StartSigningJobResult.h>
#include <aws/signer/model/TagResourceRequest.h>
#include <aws/signer/model/TagResourceResult.h>
#include <aws/signer/model/ThrottlingException.h>
#include <aws/signer/model/TooManyRequestsException.h>
#include <aws/signer/model/UntagResourceRequest.h>
#include <aws/signer/model/UntagResourceResult.h>
#include <aws/signer/model/ValidationException.h>
#include <aws/signer/model/ValidityType.h>

using SignerIncludeTest = ::testing::Test;

TEST_F(SignerIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::signer::SignerClient>("SignerIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
