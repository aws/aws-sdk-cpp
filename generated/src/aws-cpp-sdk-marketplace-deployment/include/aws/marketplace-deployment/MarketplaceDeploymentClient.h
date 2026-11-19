/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-deployment/MarketplaceDeploymentPaginationBase.h>
#include <aws/marketplace-deployment/MarketplaceDeploymentServiceClientModel.h>
#include <aws/marketplace-deployment/MarketplaceDeploymentWaiter.h>
#include <aws/marketplace-deployment/MarketplaceDeployment_EXPORTS.h>

namespace Aws {
namespace MarketplaceDeployment {
/**
 * <p>The AWS Marketplace Deployment Service supports the Quick Launch experience,
 * which is a deployment option for software as a service (SaaS) products. Quick
 * Launch simplifies and reduces the time, resources, and steps required to
 * configure, deploy, and launch a product. The AWS Marketplace Deployment Service
 * provides sellers with a secure method for passing deployment parameters, such as
 * API keys and external IDs, to buyers during the Quick Launch experience.</p>
 * <p>You can also use the AWS Marketplace Deployment Service to publish deployment
 * configurations. A deployment configuration defines how buyers access a product's
 * delivery option after they subscribe. For example, for the Data as a Service
 * delivery option, it specifies the seller's fulfillment URL.</p>
 */
class AWS_MARKETPLACEDEPLOYMENT_API MarketplaceDeploymentClient
    : public Aws::Client::AWSJsonClient,
      public Aws::Client::ClientWithAsyncTemplateMethods<MarketplaceDeploymentClient>,
      public MarketplaceDeploymentPaginationBase<MarketplaceDeploymentClient>,
      public MarketplaceDeploymentWaiter<MarketplaceDeploymentClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef MarketplaceDeploymentClientConfiguration ClientConfigurationType;
  typedef MarketplaceDeploymentEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  MarketplaceDeploymentClient(const Aws::MarketplaceDeployment::MarketplaceDeploymentClientConfiguration& clientConfiguration =
                                  Aws::MarketplaceDeployment::MarketplaceDeploymentClientConfiguration(),
                              std::shared_ptr<MarketplaceDeploymentEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  MarketplaceDeploymentClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<MarketplaceDeploymentEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::MarketplaceDeployment::MarketplaceDeploymentClientConfiguration& clientConfiguration =
                                  Aws::MarketplaceDeployment::MarketplaceDeploymentClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  MarketplaceDeploymentClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<MarketplaceDeploymentEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::MarketplaceDeployment::MarketplaceDeploymentClientConfiguration& clientConfiguration =
                                  Aws::MarketplaceDeployment::MarketplaceDeploymentClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  MarketplaceDeploymentClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  MarketplaceDeploymentClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  MarketplaceDeploymentClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~MarketplaceDeploymentClient();

  /**
   * <p>Returns the active deployment configuration for a product and delivery
   * option. The active deployment configuration is the configuration from the most
   * recent successful deployment configuration job. The seller that owns the product
   * and buyers entitled to the product can call this operation.</p> <p>If the
   * product and delivery option have no active deployment configuration, the
   * operation returns a <code>ResourceNotFoundException</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-deployment-2023-01-25/GetDeploymentConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::GetDeploymentConfigurationOutcome GetDeploymentConfiguration(
      const Model::GetDeploymentConfigurationRequest& request) const;

  /**
   * A Callable wrapper for GetDeploymentConfiguration that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetDeploymentConfigurationRequestT = Model::GetDeploymentConfigurationRequest>
  Model::GetDeploymentConfigurationOutcomeCallable GetDeploymentConfigurationCallable(
      const GetDeploymentConfigurationRequestT& request) const {
    return SubmitCallable(&MarketplaceDeploymentClient::GetDeploymentConfiguration, request);
  }

  /**
   * An Async wrapper for GetDeploymentConfiguration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetDeploymentConfigurationRequestT = Model::GetDeploymentConfigurationRequest>
  void GetDeploymentConfigurationAsync(const GetDeploymentConfigurationRequestT& request,
                                       const GetDeploymentConfigurationResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MarketplaceDeploymentClient::GetDeploymentConfiguration, request, handler, context);
  }

  /**
   * <p>Returns the details of a deployment configuration job. Only the seller that
   * started the job can call this operation.</p> <p>If the job doesn't belong to the
   * product and delivery option in the request path, the operation returns a
   * <code>ResourceNotFoundException</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-deployment-2023-01-25/GetDeploymentConfigurationJob">AWS
   * API Reference</a></p>
   */
  virtual Model::GetDeploymentConfigurationJobOutcome GetDeploymentConfigurationJob(
      const Model::GetDeploymentConfigurationJobRequest& request) const;

  /**
   * A Callable wrapper for GetDeploymentConfigurationJob that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetDeploymentConfigurationJobRequestT = Model::GetDeploymentConfigurationJobRequest>
  Model::GetDeploymentConfigurationJobOutcomeCallable GetDeploymentConfigurationJobCallable(
      const GetDeploymentConfigurationJobRequestT& request) const {
    return SubmitCallable(&MarketplaceDeploymentClient::GetDeploymentConfigurationJob, request);
  }

  /**
   * An Async wrapper for GetDeploymentConfigurationJob that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetDeploymentConfigurationJobRequestT = Model::GetDeploymentConfigurationJobRequest>
  void GetDeploymentConfigurationJobAsync(const GetDeploymentConfigurationJobRequestT& request,
                                          const GetDeploymentConfigurationJobResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MarketplaceDeploymentClient::GetDeploymentConfigurationJob, request, handler, context);
  }

  /**
   * <p>Lists the deployment configuration jobs that you started for a product and
   * delivery option, ordered from newest to oldest. Results are paginated. Use the
   * <code>nextToken</code> parameter to retrieve additional results.</p> <p>If you
   * haven't started any jobs for the product and delivery option, the operation
   * returns an empty <code>jobs</code> list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-deployment-2023-01-25/ListDeploymentConfigurationJobs">AWS
   * API Reference</a></p>
   */
  virtual Model::ListDeploymentConfigurationJobsOutcome ListDeploymentConfigurationJobs(
      const Model::ListDeploymentConfigurationJobsRequest& request) const;

  /**
   * A Callable wrapper for ListDeploymentConfigurationJobs that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListDeploymentConfigurationJobsRequestT = Model::ListDeploymentConfigurationJobsRequest>
  Model::ListDeploymentConfigurationJobsOutcomeCallable ListDeploymentConfigurationJobsCallable(
      const ListDeploymentConfigurationJobsRequestT& request) const {
    return SubmitCallable(&MarketplaceDeploymentClient::ListDeploymentConfigurationJobs, request);
  }

  /**
   * An Async wrapper for ListDeploymentConfigurationJobs that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ListDeploymentConfigurationJobsRequestT = Model::ListDeploymentConfigurationJobsRequest>
  void ListDeploymentConfigurationJobsAsync(const ListDeploymentConfigurationJobsRequestT& request,
                                            const ListDeploymentConfigurationJobsResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MarketplaceDeploymentClient::ListDeploymentConfigurationJobs, request, handler, context);
  }

  /**
   * <p>Lists all tags that have been added to a resource.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-deployment-2023-01-25/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&MarketplaceDeploymentClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MarketplaceDeploymentClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Creates or updates a deployment parameter and is targeted by
   * <code>catalog</code> and <code>agreementId</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-deployment-2023-01-25/PutDeploymentParameter">AWS
   * API Reference</a></p>
   */
  virtual Model::PutDeploymentParameterOutcome PutDeploymentParameter(const Model::PutDeploymentParameterRequest& request) const;

  /**
   * A Callable wrapper for PutDeploymentParameter that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PutDeploymentParameterRequestT = Model::PutDeploymentParameterRequest>
  Model::PutDeploymentParameterOutcomeCallable PutDeploymentParameterCallable(const PutDeploymentParameterRequestT& request) const {
    return SubmitCallable(&MarketplaceDeploymentClient::PutDeploymentParameter, request);
  }

  /**
   * An Async wrapper for PutDeploymentParameter that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename PutDeploymentParameterRequestT = Model::PutDeploymentParameterRequest>
  void PutDeploymentParameterAsync(const PutDeploymentParameterRequestT& request,
                                   const PutDeploymentParameterResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MarketplaceDeploymentClient::PutDeploymentParameter, request, handler, context);
  }

  /**
   * <p>Starts a job that publishes a deployment configuration for a product and
   * delivery option. The job runs asynchronously. Use
   * <code>GetDeploymentConfigurationJob</code> to track its status. When the job
   * reaches the <code>SUCCEEDED</code> status, its configuration becomes the active
   * deployment configuration for the product and delivery option.</p> <p>The
   * populated member of <code>configuration</code> must match the
   * <code>deliveryOptionType</code> in the request path.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-deployment-2023-01-25/StartDeploymentConfigurationJob">AWS
   * API Reference</a></p>
   */
  virtual Model::StartDeploymentConfigurationJobOutcome StartDeploymentConfigurationJob(
      const Model::StartDeploymentConfigurationJobRequest& request) const;

  /**
   * A Callable wrapper for StartDeploymentConfigurationJob that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename StartDeploymentConfigurationJobRequestT = Model::StartDeploymentConfigurationJobRequest>
  Model::StartDeploymentConfigurationJobOutcomeCallable StartDeploymentConfigurationJobCallable(
      const StartDeploymentConfigurationJobRequestT& request) const {
    return SubmitCallable(&MarketplaceDeploymentClient::StartDeploymentConfigurationJob, request);
  }

  /**
   * An Async wrapper for StartDeploymentConfigurationJob that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename StartDeploymentConfigurationJobRequestT = Model::StartDeploymentConfigurationJobRequest>
  void StartDeploymentConfigurationJobAsync(const StartDeploymentConfigurationJobRequestT& request,
                                            const StartDeploymentConfigurationJobResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MarketplaceDeploymentClient::StartDeploymentConfigurationJob, request, handler, context);
  }

  /**
   * <p>Tags a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-deployment-2023-01-25/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&MarketplaceDeploymentClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MarketplaceDeploymentClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes a tag or list of tags from a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-deployment-2023-01-25/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&MarketplaceDeploymentClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&MarketplaceDeploymentClient::UntagResource, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<MarketplaceDeploymentEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<MarketplaceDeploymentClient>;
  void init(const MarketplaceDeploymentClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, MarketplaceDeploymentError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  MarketplaceDeploymentClientConfiguration m_clientConfiguration;
  std::shared_ptr<MarketplaceDeploymentEndpointProviderBase> m_endpointProvider;
};

}  // namespace MarketplaceDeployment
}  // namespace Aws
