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
#include <aws/signin/model/DeleteConsoleAuthorizationConfigurationRequest.h>
#include <aws/signin/model/DeleteConsoleAuthorizationConfigurationResult.h>
#include <aws/signin/model/DeleteResourcePermissionStatementResult.h>
#include <aws/signin/model/GetConsoleAuthorizationConfigurationRequest.h>
#include <aws/signin/model/GetConsoleAuthorizationConfigurationResult.h>
#include <aws/signin/model/GetResourcePolicyRequest.h>
#include <aws/signin/model/GetResourcePolicyResult.h>
#include <aws/signin/model/ListResourcePermissionStatementsRequest.h>
#include <aws/signin/model/ListResourcePermissionStatementsResult.h>
#include <aws/signin/model/PutConsoleAuthorizationConfigurationRequest.h>
#include <aws/signin/model/PutConsoleAuthorizationConfigurationResult.h>
#include <aws/signin/model/PutResourcePermissionStatementRequest.h>
#include <aws/signin/model/PutResourcePermissionStatementResult.h>
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
class DeleteConsoleAuthorizationConfigurationRequest;
class DeleteResourcePermissionStatementRequest;
class GetConsoleAuthorizationConfigurationRequest;
class GetResourcePolicyRequest;
class ListResourcePermissionStatementsRequest;
class PutConsoleAuthorizationConfigurationRequest;
class PutResourcePermissionStatementRequest;
/* End of service model forward declarations required in SigninClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CreateOAuth2TokenResult, SigninError> CreateOAuth2TokenOutcome;
typedef Aws::Utils::Outcome<DeleteConsoleAuthorizationConfigurationResult, SigninError> DeleteConsoleAuthorizationConfigurationOutcome;
typedef Aws::Utils::Outcome<DeleteResourcePermissionStatementResult, SigninError> DeleteResourcePermissionStatementOutcome;
typedef Aws::Utils::Outcome<GetConsoleAuthorizationConfigurationResult, SigninError> GetConsoleAuthorizationConfigurationOutcome;
typedef Aws::Utils::Outcome<GetResourcePolicyResult, SigninError> GetResourcePolicyOutcome;
typedef Aws::Utils::Outcome<ListResourcePermissionStatementsResult, SigninError> ListResourcePermissionStatementsOutcome;
typedef Aws::Utils::Outcome<PutConsoleAuthorizationConfigurationResult, SigninError> PutConsoleAuthorizationConfigurationOutcome;
typedef Aws::Utils::Outcome<PutResourcePermissionStatementResult, SigninError> PutResourcePermissionStatementOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CreateOAuth2TokenOutcome> CreateOAuth2TokenOutcomeCallable;
typedef std::future<DeleteConsoleAuthorizationConfigurationOutcome> DeleteConsoleAuthorizationConfigurationOutcomeCallable;
typedef std::future<DeleteResourcePermissionStatementOutcome> DeleteResourcePermissionStatementOutcomeCallable;
typedef std::future<GetConsoleAuthorizationConfigurationOutcome> GetConsoleAuthorizationConfigurationOutcomeCallable;
typedef std::future<GetResourcePolicyOutcome> GetResourcePolicyOutcomeCallable;
typedef std::future<ListResourcePermissionStatementsOutcome> ListResourcePermissionStatementsOutcomeCallable;
typedef std::future<PutConsoleAuthorizationConfigurationOutcome> PutConsoleAuthorizationConfigurationOutcomeCallable;
typedef std::future<PutResourcePermissionStatementOutcome> PutResourcePermissionStatementOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class SigninClient;

/* Service model async handlers definitions */
typedef std::function<void(const SigninClient*, const Model::CreateOAuth2TokenRequest&, const Model::CreateOAuth2TokenOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateOAuth2TokenResponseReceivedHandler;
typedef std::function<void(const SigninClient*, const Model::DeleteConsoleAuthorizationConfigurationRequest&,
                           const Model::DeleteConsoleAuthorizationConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteConsoleAuthorizationConfigurationResponseReceivedHandler;
typedef std::function<void(const SigninClient*, const Model::DeleteResourcePermissionStatementRequest&,
                           const Model::DeleteResourcePermissionStatementOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteResourcePermissionStatementResponseReceivedHandler;
typedef std::function<void(const SigninClient*, const Model::GetConsoleAuthorizationConfigurationRequest&,
                           const Model::GetConsoleAuthorizationConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetConsoleAuthorizationConfigurationResponseReceivedHandler;
typedef std::function<void(const SigninClient*, const Model::GetResourcePolicyRequest&, const Model::GetResourcePolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetResourcePolicyResponseReceivedHandler;
typedef std::function<void(const SigninClient*, const Model::ListResourcePermissionStatementsRequest&,
                           const Model::ListResourcePermissionStatementsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListResourcePermissionStatementsResponseReceivedHandler;
typedef std::function<void(const SigninClient*, const Model::PutConsoleAuthorizationConfigurationRequest&,
                           const Model::PutConsoleAuthorizationConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutConsoleAuthorizationConfigurationResponseReceivedHandler;
typedef std::function<void(const SigninClient*, const Model::PutResourcePermissionStatementRequest&,
                           const Model::PutResourcePermissionStatementOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutResourcePermissionStatementResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace Signin
}  // namespace Aws
