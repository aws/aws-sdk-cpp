/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/sso-oidc/SSOOIDCErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/sso-oidc/SSOOIDCEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SSOOIDCClient header */
#include <aws/sso-oidc/model/CreateTokenResult.h>
#include <aws/sso-oidc/model/RegisterClientResult.h>
#include <aws/sso-oidc/model/StartDeviceAuthorizationResult.h>
/* End of service model headers required in SSOOIDCClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace SSOOIDC
  {
    using SSOOIDCClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SSOOIDCEndpointProviderBase = Aws::SSOOIDC::Endpoint::SSOOIDCEndpointProviderBase;
    using SSOOIDCEndpointProvider = Aws::SSOOIDC::Endpoint::SSOOIDCEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SSOOIDCClient header */
      class CreateTokenRequest;
      class RegisterClientRequest;
      class StartDeviceAuthorizationRequest;
      /* End of service model forward declarations required in SSOOIDCClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateTokenResult, SSOOIDCError> CreateTokenOutcome;
      typedef Aws::Utils::Outcome<RegisterClientResult, SSOOIDCError> RegisterClientOutcome;
      typedef Aws::Utils::Outcome<StartDeviceAuthorizationResult, SSOOIDCError> StartDeviceAuthorizationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateTokenOutcome> CreateTokenOutcomeCallable;
      typedef std::future<RegisterClientOutcome> RegisterClientOutcomeCallable;
      typedef std::future<StartDeviceAuthorizationOutcome> StartDeviceAuthorizationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SSOOIDCClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SSOOIDCClient*, const Model::CreateTokenRequest&, const Model::CreateTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTokenResponseReceivedHandler;
    typedef std::function<void(const SSOOIDCClient*, const Model::RegisterClientRequest&, const Model::RegisterClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterClientResponseReceivedHandler;
    typedef std::function<void(const SSOOIDCClient*, const Model::StartDeviceAuthorizationRequest&, const Model::StartDeviceAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDeviceAuthorizationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SSOOIDC
} // namespace Aws
