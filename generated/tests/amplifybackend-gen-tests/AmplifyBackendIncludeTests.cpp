/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/amplifybackend/AmplifyBackendClient.h>
#include <aws/amplifybackend/AmplifyBackendEndpointProvider.h>
#include <aws/amplifybackend/AmplifyBackendEndpointRules.h>
#include <aws/amplifybackend/AmplifyBackendErrorMarshaller.h>
#include <aws/amplifybackend/AmplifyBackendErrors.h>
#include <aws/amplifybackend/AmplifyBackendRequest.h>
#include <aws/amplifybackend/AmplifyBackendServiceClientModel.h>
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/amplifybackend/model/AdditionalConstraintsElement.h>
#include <aws/amplifybackend/model/AuthResources.h>
#include <aws/amplifybackend/model/AuthenticatedElement.h>
#include <aws/amplifybackend/model/BackendAPIAppSyncAuthSettings.h>
#include <aws/amplifybackend/model/BackendAPIAuthType.h>
#include <aws/amplifybackend/model/BackendAPIConflictResolution.h>
#include <aws/amplifybackend/model/BackendAPIResourceConfig.h>
#include <aws/amplifybackend/model/BackendAuthAppleProviderConfig.h>
#include <aws/amplifybackend/model/BackendAuthSocialProviderConfig.h>
#include <aws/amplifybackend/model/BackendJobRespObj.h>
#include <aws/amplifybackend/model/BackendStoragePermissions.h>
#include <aws/amplifybackend/model/CloneBackendRequest.h>
#include <aws/amplifybackend/model/CloneBackendResult.h>
#include <aws/amplifybackend/model/CreateBackendAPIRequest.h>
#include <aws/amplifybackend/model/CreateBackendAPIResult.h>
#include <aws/amplifybackend/model/CreateBackendAuthForgotPasswordConfig.h>
#include <aws/amplifybackend/model/CreateBackendAuthIdentityPoolConfig.h>
#include <aws/amplifybackend/model/CreateBackendAuthMFAConfig.h>
#include <aws/amplifybackend/model/CreateBackendAuthOAuthConfig.h>
#include <aws/amplifybackend/model/CreateBackendAuthPasswordPolicyConfig.h>
#include <aws/amplifybackend/model/CreateBackendAuthRequest.h>
#include <aws/amplifybackend/model/CreateBackendAuthResourceConfig.h>
#include <aws/amplifybackend/model/CreateBackendAuthResult.h>
#include <aws/amplifybackend/model/CreateBackendAuthUserPoolConfig.h>
#include <aws/amplifybackend/model/CreateBackendAuthVerificationMessageConfig.h>
#include <aws/amplifybackend/model/CreateBackendConfigRequest.h>
#include <aws/amplifybackend/model/CreateBackendConfigResult.h>
#include <aws/amplifybackend/model/CreateBackendRequest.h>
#include <aws/amplifybackend/model/CreateBackendResult.h>
#include <aws/amplifybackend/model/CreateBackendStorageRequest.h>
#include <aws/amplifybackend/model/CreateBackendStorageResourceConfig.h>
#include <aws/amplifybackend/model/CreateBackendStorageResult.h>
#include <aws/amplifybackend/model/CreateTokenRequest.h>
#include <aws/amplifybackend/model/CreateTokenResult.h>
#include <aws/amplifybackend/model/DeleteBackendAPIRequest.h>
#include <aws/amplifybackend/model/DeleteBackendAPIResult.h>
#include <aws/amplifybackend/model/DeleteBackendAuthRequest.h>
#include <aws/amplifybackend/model/DeleteBackendAuthResult.h>
#include <aws/amplifybackend/model/DeleteBackendRequest.h>
#include <aws/amplifybackend/model/DeleteBackendResult.h>
#include <aws/amplifybackend/model/DeleteBackendStorageRequest.h>
#include <aws/amplifybackend/model/DeleteBackendStorageResult.h>
#include <aws/amplifybackend/model/DeleteTokenRequest.h>
#include <aws/amplifybackend/model/DeleteTokenResult.h>
#include <aws/amplifybackend/model/DeliveryMethod.h>
#include <aws/amplifybackend/model/EmailSettings.h>
#include <aws/amplifybackend/model/GenerateBackendAPIModelsRequest.h>
#include <aws/amplifybackend/model/GenerateBackendAPIModelsResult.h>
#include <aws/amplifybackend/model/GetBackendAPIModelsRequest.h>
#include <aws/amplifybackend/model/GetBackendAPIModelsResult.h>
#include <aws/amplifybackend/model/GetBackendAPIRequest.h>
#include <aws/amplifybackend/model/GetBackendAPIResult.h>
#include <aws/amplifybackend/model/GetBackendAuthRequest.h>
#include <aws/amplifybackend/model/GetBackendAuthResult.h>
#include <aws/amplifybackend/model/GetBackendJobRequest.h>
#include <aws/amplifybackend/model/GetBackendJobResult.h>
#include <aws/amplifybackend/model/GetBackendRequest.h>
#include <aws/amplifybackend/model/GetBackendResult.h>
#include <aws/amplifybackend/model/GetBackendStorageRequest.h>
#include <aws/amplifybackend/model/GetBackendStorageResourceConfig.h>
#include <aws/amplifybackend/model/GetBackendStorageResult.h>
#include <aws/amplifybackend/model/GetTokenRequest.h>
#include <aws/amplifybackend/model/GetTokenResult.h>
#include <aws/amplifybackend/model/ImportBackendAuthRequest.h>
#include <aws/amplifybackend/model/ImportBackendAuthResult.h>
#include <aws/amplifybackend/model/ImportBackendStorageRequest.h>
#include <aws/amplifybackend/model/ImportBackendStorageResult.h>
#include <aws/amplifybackend/model/ListBackendJobsRequest.h>
#include <aws/amplifybackend/model/ListBackendJobsResult.h>
#include <aws/amplifybackend/model/ListS3BucketsRequest.h>
#include <aws/amplifybackend/model/ListS3BucketsResult.h>
#include <aws/amplifybackend/model/LoginAuthConfigReqObj.h>
#include <aws/amplifybackend/model/MFAMode.h>
#include <aws/amplifybackend/model/MfaTypesElement.h>
#include <aws/amplifybackend/model/Mode.h>
#include <aws/amplifybackend/model/NotFoundException.h>
#include <aws/amplifybackend/model/OAuthGrantType.h>
#include <aws/amplifybackend/model/OAuthScopesElement.h>
#include <aws/amplifybackend/model/RemoveAllBackendsRequest.h>
#include <aws/amplifybackend/model/RemoveAllBackendsResult.h>
#include <aws/amplifybackend/model/RemoveBackendConfigRequest.h>
#include <aws/amplifybackend/model/RemoveBackendConfigResult.h>
#include <aws/amplifybackend/model/RequiredSignUpAttributesElement.h>
#include <aws/amplifybackend/model/ResolutionStrategy.h>
#include <aws/amplifybackend/model/ResourceConfig.h>
#include <aws/amplifybackend/model/S3BucketInfo.h>
#include <aws/amplifybackend/model/Service.h>
#include <aws/amplifybackend/model/ServiceName.h>
#include <aws/amplifybackend/model/Settings.h>
#include <aws/amplifybackend/model/SignInMethod.h>
#include <aws/amplifybackend/model/SmsSettings.h>
#include <aws/amplifybackend/model/SocialProviderSettings.h>
#include <aws/amplifybackend/model/Status.h>
#include <aws/amplifybackend/model/TooManyRequestsException.h>
#include <aws/amplifybackend/model/UnAuthenticatedElement.h>
#include <aws/amplifybackend/model/UpdateBackendAPIRequest.h>
#include <aws/amplifybackend/model/UpdateBackendAPIResult.h>
#include <aws/amplifybackend/model/UpdateBackendAuthForgotPasswordConfig.h>
#include <aws/amplifybackend/model/UpdateBackendAuthIdentityPoolConfig.h>
#include <aws/amplifybackend/model/UpdateBackendAuthMFAConfig.h>
#include <aws/amplifybackend/model/UpdateBackendAuthOAuthConfig.h>
#include <aws/amplifybackend/model/UpdateBackendAuthPasswordPolicyConfig.h>
#include <aws/amplifybackend/model/UpdateBackendAuthRequest.h>
#include <aws/amplifybackend/model/UpdateBackendAuthResourceConfig.h>
#include <aws/amplifybackend/model/UpdateBackendAuthResult.h>
#include <aws/amplifybackend/model/UpdateBackendAuthUserPoolConfig.h>
#include <aws/amplifybackend/model/UpdateBackendAuthVerificationMessageConfig.h>
#include <aws/amplifybackend/model/UpdateBackendConfigRequest.h>
#include <aws/amplifybackend/model/UpdateBackendConfigResult.h>
#include <aws/amplifybackend/model/UpdateBackendJobRequest.h>
#include <aws/amplifybackend/model/UpdateBackendJobResult.h>
#include <aws/amplifybackend/model/UpdateBackendStorageRequest.h>
#include <aws/amplifybackend/model/UpdateBackendStorageResourceConfig.h>
#include <aws/amplifybackend/model/UpdateBackendStorageResult.h>

using AmplifyBackendIncludeTest = ::testing::Test;

TEST_F(AmplifyBackendIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::AmplifyBackend::AmplifyBackendClient>("AmplifyBackendIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
