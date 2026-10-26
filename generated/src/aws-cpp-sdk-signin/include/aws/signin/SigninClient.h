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
 * <p>AWS Sign-In manages authentication for AWS services. It implements OAuth 2.0,
 * providing secure token exchange and refresh capabilities.</p>
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
   * <p>Exchanges an authorization code or refresh token for an OAuth 2.0 access
   * token and refresh token.</p><p><h3>See Also:</h3>   <a
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
   * <p>Exchanges client credentials for an OAuth 2.0 access token scoped to a
   * resource, which you can use to access AWS services from
   * applications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/CreateOAuth2TokenWithIAM">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateOAuth2TokenWithIAMOutcome CreateOAuth2TokenWithIAM(const Model::CreateOAuth2TokenWithIAMRequest& request) const;

  /**
   * A Callable wrapper for CreateOAuth2TokenWithIAM that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateOAuth2TokenWithIAMRequestT = Model::CreateOAuth2TokenWithIAMRequest>
  Model::CreateOAuth2TokenWithIAMOutcomeCallable CreateOAuth2TokenWithIAMCallable(const CreateOAuth2TokenWithIAMRequestT& request) const {
    return SubmitCallable(&SigninClient::CreateOAuth2TokenWithIAM, request);
  }

  /**
   * An Async wrapper for CreateOAuth2TokenWithIAM that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateOAuth2TokenWithIAMRequestT = Model::CreateOAuth2TokenWithIAMRequest>
  void CreateOAuth2TokenWithIAMAsync(const CreateOAuth2TokenWithIAMRequestT& request,
                                     const CreateOAuth2TokenWithIAMResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SigninClient::CreateOAuth2TokenWithIAM, request, handler, context);
  }

  /**
   * <p>Exchanges a supported token for an OAuth 2.0 access token scoped to a
   * resource, which you can use to access AWS services from
   * applications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/CreateOAuth2TokenWithTokenExchange">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateOAuth2TokenWithTokenExchangeOutcome CreateOAuth2TokenWithTokenExchange(
      const Model::CreateOAuth2TokenWithTokenExchangeRequest& request) const;

  /**
   * A Callable wrapper for CreateOAuth2TokenWithTokenExchange that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename CreateOAuth2TokenWithTokenExchangeRequestT = Model::CreateOAuth2TokenWithTokenExchangeRequest>
  Model::CreateOAuth2TokenWithTokenExchangeOutcomeCallable CreateOAuth2TokenWithTokenExchangeCallable(
      const CreateOAuth2TokenWithTokenExchangeRequestT& request) const {
    return SubmitCallable(&SigninClient::CreateOAuth2TokenWithTokenExchange, request);
  }

  /**
   * An Async wrapper for CreateOAuth2TokenWithTokenExchange that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename CreateOAuth2TokenWithTokenExchangeRequestT = Model::CreateOAuth2TokenWithTokenExchangeRequest>
  void CreateOAuth2TokenWithTokenExchangeAsync(const CreateOAuth2TokenWithTokenExchangeRequestT& request,
                                               const CreateOAuth2TokenWithTokenExchangeResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SigninClient::CreateOAuth2TokenWithTokenExchange, request, handler, context);
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
   * <p>Inspects the metadata and active state of an OAuth 2.0 access token or
   * refresh token.</p> <p>Implements RFC 7662 OAuth 2.0 Token Introspection over a
   * SigV4-authenticated endpoint. Returns the claims associated with a token issued
   * by AWS Sign-In.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/IntrospectOAuth2TokenWithIAM">AWS
   * API Reference</a></p>
   */
  virtual Model::IntrospectOAuth2TokenWithIAMOutcome IntrospectOAuth2TokenWithIAM(
      const Model::IntrospectOAuth2TokenWithIAMRequest& request) const;

  /**
   * A Callable wrapper for IntrospectOAuth2TokenWithIAM that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename IntrospectOAuth2TokenWithIAMRequestT = Model::IntrospectOAuth2TokenWithIAMRequest>
  Model::IntrospectOAuth2TokenWithIAMOutcomeCallable IntrospectOAuth2TokenWithIAMCallable(
      const IntrospectOAuth2TokenWithIAMRequestT& request) const {
    return SubmitCallable(&SigninClient::IntrospectOAuth2TokenWithIAM, request);
  }

  /**
   * An Async wrapper for IntrospectOAuth2TokenWithIAM that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename IntrospectOAuth2TokenWithIAMRequestT = Model::IntrospectOAuth2TokenWithIAMRequest>
  void IntrospectOAuth2TokenWithIAMAsync(const IntrospectOAuth2TokenWithIAMRequestT& request,
                                         const IntrospectOAuth2TokenWithIAMResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SigninClient::IntrospectOAuth2TokenWithIAM, request, handler, context);
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

  /**
   * <p>Revokes an OAuth 2.0 refresh token and its associated token
   * chain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/RevokeOAuth2TokenWithIAM">AWS
   * API Reference</a></p>
   */
  virtual Model::RevokeOAuth2TokenWithIAMOutcome RevokeOAuth2TokenWithIAM(const Model::RevokeOAuth2TokenWithIAMRequest& request) const;

  /**
   * A Callable wrapper for RevokeOAuth2TokenWithIAM that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename RevokeOAuth2TokenWithIAMRequestT = Model::RevokeOAuth2TokenWithIAMRequest>
  Model::RevokeOAuth2TokenWithIAMOutcomeCallable RevokeOAuth2TokenWithIAMCallable(const RevokeOAuth2TokenWithIAMRequestT& request) const {
    return SubmitCallable(&SigninClient::RevokeOAuth2TokenWithIAM, request);
  }

  /**
   * An Async wrapper for RevokeOAuth2TokenWithIAM that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename RevokeOAuth2TokenWithIAMRequestT = Model::RevokeOAuth2TokenWithIAMRequest>
  void RevokeOAuth2TokenWithIAMAsync(const RevokeOAuth2TokenWithIAMRequestT& request,
                                     const RevokeOAuth2TokenWithIAMResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SigninClient::RevokeOAuth2TokenWithIAM, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<SigninEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<SigninClient>;
  void init(const SigninClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, SigninError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod, const char* signerName = Aws::Auth::SIGV4_SIGNER) const;

  SigninClientConfiguration m_clientConfiguration;
  std::shared_ptr<SigninEndpointProviderBase> m_endpointProvider;
};

}  // namespace Signin
}  // namespace Aws
