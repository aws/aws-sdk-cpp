/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/signin/SigninPaginationBase.h>
#include <aws/signin/SigninServiceClientModel.h>
#include <aws/signin/SigninWaiter.h>
#include <aws/signin/Signin_EXPORTS.h>

namespace Aws {
namespace Signin {
/**
 * <p>AWS Sign-In manages authentication for AWS services. This service provides
 * secure authentication flows for accessing AWS resources from the console and
 * developer tools.</p>
 */
class AWS_SIGNIN_API SigninClient : public Aws::Client::AWSJsonClient,
                                    public Aws::Client::ClientWithAsyncTemplateMethods<SigninClient>,
                                    public SigninPaginationBase<SigninClient>,
                                    public SigninWaiter<SigninClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef SigninClientConfiguration ClientConfigurationType;
  typedef SigninEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SigninClient(const Aws::Signin::SigninClientConfiguration& clientConfiguration = Aws::Signin::SigninClientConfiguration(),
               std::shared_ptr<SigninEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SigninClient(const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<SigninEndpointProviderBase> endpointProvider = nullptr,
               const Aws::Signin::SigninClientConfiguration& clientConfiguration = Aws::Signin::SigninClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SigninClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
               std::shared_ptr<SigninEndpointProviderBase> endpointProvider = nullptr,
               const Aws::Signin::SigninClientConfiguration& clientConfiguration = Aws::Signin::SigninClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SigninClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SigninClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SigninClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
               const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~SigninClient();

  /**
   * <p>CreateOAuth2Token API</p> <p>Path: /v1/token Request Method: POST
   * Content-Type: application/json or application/x-www-form-urlencoded</p> <p>This
   * API implements OAuth 2.0 flows for AWS Sign-In CLI clients, supporting both:</p>
   * <ol> <li>Authorization code redemption (grant_type=authorization_code) - NOT
   * idempotent</li> <li>Token refresh (grant_type=refresh_token) - Idempotent within
   * token validity window</li> </ol> <p>The operation behavior is determined by the
   * grant_type parameter in the request body:</p> <p><strong>Authorization Code Flow
   * (NOT Idempotent):</strong></p> <ul> <li>JSON or form-encoded body with
   * client_id, grant_type=authorization_code, code, redirect_uri, code_verifier</li>
   * <li>Returns access_token, token_type, expires_in, refresh_token, and
   * id_token</li> <li>Each authorization code can only be used ONCE for security
   * (prevents replay attacks)</li> </ul> <p><strong>Token Refresh Flow
   * (Idempotent):</strong></p> <ul> <li>JSON or form-encoded body with client_id,
   * grant_type=refresh_token, refresh_token</li> <li>Returns access_token,
   * token_type, expires_in, and refresh_token (no id_token)</li> <li>Multiple calls
   * with same refresh_token return consistent results within validity window</li>
   * </ul> <p>Authentication and authorization:</p> <ul> <li>Confidential clients:
   * sigv4 signing required with signin:ExchangeToken permissions</li> <li>CLI
   * clients (public): authn/authz skipped based on client_id &amp; grant_type</li>
   * </ul> <p>Note: This operation cannot be marked as @idempotent because it handles
   * both idempotent (token refresh) and non-idempotent (auth code redemption) flows
   * in a single endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/CreateOAuth2Token">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateOAuth2TokenOutcome CreateOAuth2Token(const Model::CreateOAuth2TokenRequest& request) const;

  /**
   * A Callable wrapper for CreateOAuth2Token that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateOAuth2TokenRequestT = Model::CreateOAuth2TokenRequest>
  Model::CreateOAuth2TokenOutcomeCallable CreateOAuth2TokenCallable(const CreateOAuth2TokenRequestT& request) const {
    return SubmitCallable(&SigninClient::CreateOAuth2Token, request);
  }

  /**
   * An Async wrapper for CreateOAuth2Token that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateOAuth2TokenRequestT = Model::CreateOAuth2TokenRequest>
  void CreateOAuth2TokenAsync(const CreateOAuth2TokenRequestT& request, const CreateOAuth2TokenResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SigninClient::CreateOAuth2Token, request, handler, context);
  }

  /**
   * <p>Delete console authorization configuration with automatic scope
   * detection</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/DeleteConsoleAuthorizationConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteConsoleAuthorizationConfigurationOutcome DeleteConsoleAuthorizationConfiguration(
      const Model::DeleteConsoleAuthorizationConfigurationRequest& request = {}) const;

  /**
   * A Callable wrapper for DeleteConsoleAuthorizationConfiguration that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename DeleteConsoleAuthorizationConfigurationRequestT = Model::DeleteConsoleAuthorizationConfigurationRequest>
  Model::DeleteConsoleAuthorizationConfigurationOutcomeCallable DeleteConsoleAuthorizationConfigurationCallable(
      const DeleteConsoleAuthorizationConfigurationRequestT& request = {}) const {
    return SubmitCallable(&SigninClient::DeleteConsoleAuthorizationConfiguration, request);
  }

  /**
   * An Async wrapper for DeleteConsoleAuthorizationConfiguration that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename DeleteConsoleAuthorizationConfigurationRequestT = Model::DeleteConsoleAuthorizationConfigurationRequest>
  void DeleteConsoleAuthorizationConfigurationAsync(const DeleteConsoleAuthorizationConfigurationResponseReceivedHandler& handler,
                                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                                    const DeleteConsoleAuthorizationConfigurationRequestT& request = {}) const {
    return SubmitAsync(&SigninClient::DeleteConsoleAuthorizationConfiguration, request, handler, context);
  }

  /**
   * <p>Remove a permission statement from the account's SignIn resource-based
   * policy</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/DeleteResourcePermissionStatement">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteResourcePermissionStatementOutcome DeleteResourcePermissionStatement(
      const Model::DeleteResourcePermissionStatementRequest& request) const;

  /**
   * A Callable wrapper for DeleteResourcePermissionStatement that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename DeleteResourcePermissionStatementRequestT = Model::DeleteResourcePermissionStatementRequest>
  Model::DeleteResourcePermissionStatementOutcomeCallable DeleteResourcePermissionStatementCallable(
      const DeleteResourcePermissionStatementRequestT& request) const {
    return SubmitCallable(&SigninClient::DeleteResourcePermissionStatement, request);
  }

  /**
   * An Async wrapper for DeleteResourcePermissionStatement that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename DeleteResourcePermissionStatementRequestT = Model::DeleteResourcePermissionStatementRequest>
  void DeleteResourcePermissionStatementAsync(const DeleteResourcePermissionStatementRequestT& request,
                                              const DeleteResourcePermissionStatementResponseReceivedHandler& handler,
                                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SigninClient::DeleteResourcePermissionStatement, request, handler, context);
  }

  /**
   * <p>Get console authorization configuration with automatic scope
   * detection</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/GetConsoleAuthorizationConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::GetConsoleAuthorizationConfigurationOutcome GetConsoleAuthorizationConfiguration(
      const Model::GetConsoleAuthorizationConfigurationRequest& request = {}) const;

  /**
   * A Callable wrapper for GetConsoleAuthorizationConfiguration that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename GetConsoleAuthorizationConfigurationRequestT = Model::GetConsoleAuthorizationConfigurationRequest>
  Model::GetConsoleAuthorizationConfigurationOutcomeCallable GetConsoleAuthorizationConfigurationCallable(
      const GetConsoleAuthorizationConfigurationRequestT& request = {}) const {
    return SubmitCallable(&SigninClient::GetConsoleAuthorizationConfiguration, request);
  }

  /**
   * An Async wrapper for GetConsoleAuthorizationConfiguration that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename GetConsoleAuthorizationConfigurationRequestT = Model::GetConsoleAuthorizationConfigurationRequest>
  void GetConsoleAuthorizationConfigurationAsync(const GetConsoleAuthorizationConfigurationResponseReceivedHandler& handler,
                                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                                 const GetConsoleAuthorizationConfigurationRequestT& request = {}) const {
    return SubmitAsync(&SigninClient::GetConsoleAuthorizationConfiguration, request, handler, context);
  }

  /**
   * <p>Retrieve the account's consolidated SignIn resource-based
   * policy</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/GetResourcePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request = {}) const;

  /**
   * A Callable wrapper for GetResourcePolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
  Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const GetResourcePolicyRequestT& request = {}) const {
    return SubmitCallable(&SigninClient::GetResourcePolicy, request);
  }

  /**
   * An Async wrapper for GetResourcePolicy that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
  void GetResourcePolicyAsync(const GetResourcePolicyResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const GetResourcePolicyRequestT& request = {}) const {
    return SubmitAsync(&SigninClient::GetResourcePolicy, request, handler, context);
  }

  /**
   * <p>Retrieve all permission statements in the account's SignIn resource-based
   * policy</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/ListResourcePermissionStatements">AWS
   * API Reference</a></p>
   */
  virtual Model::ListResourcePermissionStatementsOutcome ListResourcePermissionStatements(
      const Model::ListResourcePermissionStatementsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListResourcePermissionStatements that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename ListResourcePermissionStatementsRequestT = Model::ListResourcePermissionStatementsRequest>
  Model::ListResourcePermissionStatementsOutcomeCallable ListResourcePermissionStatementsCallable(
      const ListResourcePermissionStatementsRequestT& request = {}) const {
    return SubmitCallable(&SigninClient::ListResourcePermissionStatements, request);
  }

  /**
   * An Async wrapper for ListResourcePermissionStatements that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ListResourcePermissionStatementsRequestT = Model::ListResourcePermissionStatementsRequest>
  void ListResourcePermissionStatementsAsync(const ListResourcePermissionStatementsResponseReceivedHandler& handler,
                                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                             const ListResourcePermissionStatementsRequestT& request = {}) const {
    return SubmitAsync(&SigninClient::ListResourcePermissionStatements, request, handler, context);
  }

  /**
   * <p>Enable console authorization configuration with automatic scope
   * detection</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/PutConsoleAuthorizationConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::PutConsoleAuthorizationConfigurationOutcome PutConsoleAuthorizationConfiguration(
      const Model::PutConsoleAuthorizationConfigurationRequest& request = {}) const;

  /**
   * A Callable wrapper for PutConsoleAuthorizationConfiguration that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename PutConsoleAuthorizationConfigurationRequestT = Model::PutConsoleAuthorizationConfigurationRequest>
  Model::PutConsoleAuthorizationConfigurationOutcomeCallable PutConsoleAuthorizationConfigurationCallable(
      const PutConsoleAuthorizationConfigurationRequestT& request = {}) const {
    return SubmitCallable(&SigninClient::PutConsoleAuthorizationConfiguration, request);
  }

  /**
   * An Async wrapper for PutConsoleAuthorizationConfiguration that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename PutConsoleAuthorizationConfigurationRequestT = Model::PutConsoleAuthorizationConfigurationRequest>
  void PutConsoleAuthorizationConfigurationAsync(const PutConsoleAuthorizationConfigurationResponseReceivedHandler& handler,
                                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                                 const PutConsoleAuthorizationConfigurationRequestT& request = {}) const {
    return SubmitAsync(&SigninClient::PutConsoleAuthorizationConfiguration, request, handler, context);
  }

  /**
   * <p>Create a permission statement in the account's SignIn resource-based
   * policy</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/PutResourcePermissionStatement">AWS
   * API Reference</a></p>
   */
  virtual Model::PutResourcePermissionStatementOutcome PutResourcePermissionStatement(
      const Model::PutResourcePermissionStatementRequest& request = {}) const;

  /**
   * A Callable wrapper for PutResourcePermissionStatement that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename PutResourcePermissionStatementRequestT = Model::PutResourcePermissionStatementRequest>
  Model::PutResourcePermissionStatementOutcomeCallable PutResourcePermissionStatementCallable(
      const PutResourcePermissionStatementRequestT& request = {}) const {
    return SubmitCallable(&SigninClient::PutResourcePermissionStatement, request);
  }

  /**
   * An Async wrapper for PutResourcePermissionStatement that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename PutResourcePermissionStatementRequestT = Model::PutResourcePermissionStatementRequest>
  void PutResourcePermissionStatementAsync(const PutResourcePermissionStatementResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                           const PutResourcePermissionStatementRequestT& request = {}) const {
    return SubmitAsync(&SigninClient::PutResourcePermissionStatement, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<SigninEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<SigninClient>;
  void init(const SigninClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, SigninError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  SigninClientConfiguration m_clientConfiguration;
  std::shared_ptr<SigninEndpointProviderBase> m_endpointProvider;
};

}  // namespace Signin
}  // namespace Aws
