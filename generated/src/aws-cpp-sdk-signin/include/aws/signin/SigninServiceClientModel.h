/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signin/SigninEndpointProvider.h>
#include <aws/signin/SigninErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in SigninClient header */
#include <aws/signin/model/CreateOAuth2TokenResult.h>
/* End of service model headers required in SigninClient header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace Signin {
using SigninClientConfiguration = Aws::Client::GenericClientConfiguration;
using SigninEndpointProviderBase = Aws::Signin::Endpoint::SigninEndpointProviderBase;
using SigninEndpointProvider = Aws::Signin::Endpoint::SigninEndpointProvider;

namespace Model {
/* Service model forward declarations required in SigninClient header */
class CreateOAuth2TokenRequest;
/* End of service model forward declarations required in SigninClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CreateOAuth2TokenResult, SigninError> CreateOAuth2TokenOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CreateOAuth2TokenOutcome> CreateOAuth2TokenOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class SigninClient;

/* Service model async handlers definitions */
typedef std::function<void(const SigninClient*, const Model::CreateOAuth2TokenRequest&, const Model::CreateOAuth2TokenOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateOAuth2TokenResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace Signin
}  // namespace Aws
