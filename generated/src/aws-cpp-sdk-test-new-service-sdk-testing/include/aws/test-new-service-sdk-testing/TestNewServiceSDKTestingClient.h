/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTestingServiceClientModel.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTesting_EXPORTS.h>

namespace Aws {
namespace TestNewServiceSDKTesting {
class AWS_TESTNEWSERVICESDKTESTING_API TestNewServiceSDKTestingClient
    : public Aws::Client::AWSJsonClient,
      public Aws::Client::ClientWithAsyncTemplateMethods<TestNewServiceSDKTestingClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef TestNewServiceSDKTestingClientConfiguration ClientConfigurationType;
  typedef TestNewServiceSDKTestingEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  TestNewServiceSDKTestingClient(const Aws::TestNewServiceSDKTesting::TestNewServiceSDKTestingClientConfiguration& clientConfiguration =
                                     Aws::TestNewServiceSDKTesting::TestNewServiceSDKTestingClientConfiguration(),
                                 std::shared_ptr<TestNewServiceSDKTestingEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  TestNewServiceSDKTestingClient(const Aws::Auth::AWSCredentials& credentials,
                                 std::shared_ptr<TestNewServiceSDKTestingEndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::TestNewServiceSDKTesting::TestNewServiceSDKTestingClientConfiguration& clientConfiguration =
                                     Aws::TestNewServiceSDKTesting::TestNewServiceSDKTestingClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  TestNewServiceSDKTestingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<TestNewServiceSDKTestingEndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::TestNewServiceSDKTesting::TestNewServiceSDKTestingClientConfiguration& clientConfiguration =
                                     Aws::TestNewServiceSDKTesting::TestNewServiceSDKTestingClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  TestNewServiceSDKTestingClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  TestNewServiceSDKTestingClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  TestNewServiceSDKTestingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~TestNewServiceSDKTestingClient();

  /**
   *
   */
  virtual Model::GetFooOutcome GetFoo(const Model::GetFooRequest& request) const;

  /**
   * A Callable wrapper for GetFoo that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetFooRequestT = Model::GetFooRequest>
  Model::GetFooOutcomeCallable GetFooCallable(const GetFooRequestT& request) const {
    return SubmitCallable(&TestNewServiceSDKTestingClient::GetFoo, request);
  }

  /**
   * An Async wrapper for GetFoo that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetFooRequestT = Model::GetFooRequest>
  void GetFooAsync(const GetFooRequestT& request, const GetFooResponseReceivedHandler& handler,
                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&TestNewServiceSDKTestingClient::GetFoo, request, handler, context);
  }

  /**
   *
   */
  virtual Model::GetFoosOutcome GetFoos(const Model::GetFoosRequest& request = {}) const;

  /**
   * A Callable wrapper for GetFoos that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetFoosRequestT = Model::GetFoosRequest>
  Model::GetFoosOutcomeCallable GetFoosCallable(const GetFoosRequestT& request = {}) const {
    return SubmitCallable(&TestNewServiceSDKTestingClient::GetFoos, request);
  }

  /**
   * An Async wrapper for GetFoos that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetFoosRequestT = Model::GetFoosRequest>
  void GetFoosAsync(const GetFoosResponseReceivedHandler& handler,
                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                    const GetFoosRequestT& request = {}) const {
    return SubmitAsync(&TestNewServiceSDKTestingClient::GetFoos, request, handler, context);
  }

  /**
   *
   *
   * Queues the request into a thread executor.
   * The streamReadyHandler is triggered when the stream is ready to be written to.
   * The handler is triggered when the request is finished.
   */
  virtual void PublishFoosAsync(Model::PublishFoosRequest& request, const PublishFoosStreamReadyHandler& streamReadyHandler,
                                const PublishFoosResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext = nullptr) const;

  void OverrideEndpoint(const Aws::String& endpoint);
  std::shared_ptr<TestNewServiceSDKTestingEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<TestNewServiceSDKTestingClient>;
  void init(const TestNewServiceSDKTestingClientConfiguration& clientConfiguration);

  TestNewServiceSDKTestingClientConfiguration m_clientConfiguration;
  std::shared_ptr<TestNewServiceSDKTestingEndpointProviderBase> m_endpointProvider;
};

}  // namespace TestNewServiceSDKTesting
}  // namespace Aws
