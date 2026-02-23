/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/signer-data/SignerDataPaginationBase.h>
#include <aws/signer-data/SignerDataServiceClientModel.h>
#include <aws/signer-data/SignerData_EXPORTS.h>

namespace Aws {
namespace SignerData {
/**
 * <p>AWS Signer Data Plane service provides APIs for checking revocation status of
 * signed artifacts.</p>
 */
class AWS_SIGNERDATA_API SignerDataClient : public Aws::Client::AWSJsonClient,
                                            public Aws::Client::ClientWithAsyncTemplateMethods<SignerDataClient>,
                                            public SignerDataPaginationBase<SignerDataClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef SignerDataClientConfiguration ClientConfigurationType;
  typedef SignerDataEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SignerDataClient(
      const Aws::SignerData::SignerDataClientConfiguration& clientConfiguration = Aws::SignerData::SignerDataClientConfiguration(),
      std::shared_ptr<SignerDataEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SignerDataClient(
      const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<SignerDataEndpointProviderBase> endpointProvider = nullptr,
      const Aws::SignerData::SignerDataClientConfiguration& clientConfiguration = Aws::SignerData::SignerDataClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SignerDataClient(
      const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
      std::shared_ptr<SignerDataEndpointProviderBase> endpointProvider = nullptr,
      const Aws::SignerData::SignerDataClientConfiguration& clientConfiguration = Aws::SignerData::SignerDataClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SignerDataClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SignerDataClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SignerDataClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~SignerDataClient();

  /**
   * <p>Retrieves the revocation status for a signed artifact by checking if the
   * signing profile, job, or certificate has been revoked.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-data-2017-08-25/GetRevocationStatus">AWS
   * API Reference</a></p>
   */
  virtual Model::GetRevocationStatusOutcome GetRevocationStatus(const Model::GetRevocationStatusRequest& request) const;

  /**
   * A Callable wrapper for GetRevocationStatus that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetRevocationStatusRequestT = Model::GetRevocationStatusRequest>
  Model::GetRevocationStatusOutcomeCallable GetRevocationStatusCallable(const GetRevocationStatusRequestT& request) const {
    return SubmitCallable(&SignerDataClient::GetRevocationStatus, request);
  }

  /**
   * An Async wrapper for GetRevocationStatus that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetRevocationStatusRequestT = Model::GetRevocationStatusRequest>
  void GetRevocationStatusAsync(const GetRevocationStatusRequestT& request, const GetRevocationStatusResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SignerDataClient::GetRevocationStatus, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<SignerDataEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<SignerDataClient>;
  void init(const SignerDataClientConfiguration& clientConfiguration);

  SignerDataClientConfiguration m_clientConfiguration;
  std::shared_ptr<SignerDataEndpointProviderBase> m_endpointProvider;
};

}  // namespace SignerData
}  // namespace Aws
