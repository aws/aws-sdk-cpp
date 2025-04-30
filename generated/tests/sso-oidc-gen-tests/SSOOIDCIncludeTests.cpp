/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/sso-oidc/SSOOIDCClient.h>
#include <aws/sso-oidc/SSOOIDCEndpointProvider.h>
#include <aws/sso-oidc/SSOOIDCEndpointRules.h>
#include <aws/sso-oidc/SSOOIDCErrorMarshaller.h>
#include <aws/sso-oidc/SSOOIDCErrors.h>
#include <aws/sso-oidc/SSOOIDCRequest.h>
#include <aws/sso-oidc/SSOOIDCServiceClientModel.h>
#include <aws/sso-oidc/SSOOIDC_EXPORTS.h>
#include <aws/sso-oidc/model/AccessDeniedException.h>
#include <aws/sso-oidc/model/AuthorizationPendingException.h>
#include <aws/sso-oidc/model/AwsAdditionalDetails.h>
#include <aws/sso-oidc/model/CreateTokenRequest.h>
#include <aws/sso-oidc/model/CreateTokenResult.h>
#include <aws/sso-oidc/model/CreateTokenWithIAMRequest.h>
#include <aws/sso-oidc/model/CreateTokenWithIAMResult.h>
#include <aws/sso-oidc/model/ExpiredTokenException.h>
#include <aws/sso-oidc/model/InternalServerException.h>
#include <aws/sso-oidc/model/InvalidClientException.h>
#include <aws/sso-oidc/model/InvalidClientMetadataException.h>
#include <aws/sso-oidc/model/InvalidGrantException.h>
#include <aws/sso-oidc/model/InvalidRedirectUriException.h>
#include <aws/sso-oidc/model/InvalidRequestException.h>
#include <aws/sso-oidc/model/InvalidRequestRegionException.h>
#include <aws/sso-oidc/model/InvalidScopeException.h>
#include <aws/sso-oidc/model/RegisterClientRequest.h>
#include <aws/sso-oidc/model/RegisterClientResult.h>
#include <aws/sso-oidc/model/SlowDownException.h>
#include <aws/sso-oidc/model/StartDeviceAuthorizationRequest.h>
#include <aws/sso-oidc/model/StartDeviceAuthorizationResult.h>
#include <aws/sso-oidc/model/UnauthorizedClientException.h>
#include <aws/sso-oidc/model/UnsupportedGrantTypeException.h>

using SSOOIDCIncludeTest = ::testing::Test;

TEST_F(SSOOIDCIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SSOOIDC::SSOOIDCClient>("SSOOIDCIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
