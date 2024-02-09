/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchserverless/OpenSearchServerlessServiceClientModel.h>

namespace Aws
{
namespace OpenSearchServerless
{
  /**
   * <p>Use the Amazon OpenSearch Serverless API to create, configure, and manage
   * OpenSearch Serverless collections and security policies.</p> <p>OpenSearch
   * Serverless is an on-demand, pre-provisioned serverless configuration for Amazon
   * OpenSearch Service. OpenSearch Serverless removes the operational complexities
   * of provisioning, configuring, and tuning your OpenSearch clusters. It enables
   * you to easily search and analyze petabytes of data without having to worry about
   * the underlying infrastructure and data management.</p> <p> To learn more about
   * OpenSearch Serverless, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-overview.html">What
   * is Amazon OpenSearch Serverless?</a> </p>
   */
  class AWS_OPENSEARCHSERVERLESS_API OpenSearchServerlessClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<OpenSearchServerlessClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef OpenSearchServerlessClientConfiguration ClientConfigurationType;
      typedef OpenSearchServerlessEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpenSearchServerlessClient(const Aws::OpenSearchServerless::OpenSearchServerlessClientConfiguration& clientConfiguration = Aws::OpenSearchServerless::OpenSearchServerlessClientConfiguration(),
                                   std::shared_ptr<OpenSearchServerlessEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpenSearchServerlessClient(const Aws::Auth::AWSCredentials& credentials,
                                   std::shared_ptr<OpenSearchServerlessEndpointProviderBase> endpointProvider = nullptr,
                                   const Aws::OpenSearchServerless::OpenSearchServerlessClientConfiguration& clientConfiguration = Aws::OpenSearchServerless::OpenSearchServerlessClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OpenSearchServerlessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<OpenSearchServerlessEndpointProviderBase> endpointProvider = nullptr,
                                   const Aws::OpenSearchServerless::OpenSearchServerlessClientConfiguration& clientConfiguration = Aws::OpenSearchServerless::OpenSearchServerlessClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpenSearchServerlessClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpenSearchServerlessClient(const Aws::Auth::AWSCredentials& credentials,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OpenSearchServerlessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~OpenSearchServerlessClient();

        /**
         * <p>Returns attributes for one or more collections, including the collection
         * endpoint and the OpenSearch Dashboards endpoint. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-manage.html">Creating
         * and managing Amazon OpenSearch Serverless collections</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/BatchGetCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetCollectionOutcome BatchGetCollection(const Model::BatchGetCollectionRequest& request) const;

        /**
         * A Callable wrapper for BatchGetCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetCollectionRequestT = Model::BatchGetCollectionRequest>
        Model::BatchGetCollectionOutcomeCallable BatchGetCollectionCallable(const BatchGetCollectionRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::BatchGetCollection, request);
        }

        /**
         * An Async wrapper for BatchGetCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetCollectionRequestT = Model::BatchGetCollectionRequest>
        void BatchGetCollectionAsync(const BatchGetCollectionRequestT& request, const BatchGetCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::BatchGetCollection, request, handler, context);
        }

        /**
         * <p>Returns a list of successful and failed retrievals for the OpenSearch
         * Serverless indexes. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-lifecycle.html#serverless-lifecycle-list">Viewing
         * data lifecycle policies</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/BatchGetEffectiveLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetEffectiveLifecyclePolicyOutcome BatchGetEffectiveLifecyclePolicy(const Model::BatchGetEffectiveLifecyclePolicyRequest& request) const;

        /**
         * A Callable wrapper for BatchGetEffectiveLifecyclePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetEffectiveLifecyclePolicyRequestT = Model::BatchGetEffectiveLifecyclePolicyRequest>
        Model::BatchGetEffectiveLifecyclePolicyOutcomeCallable BatchGetEffectiveLifecyclePolicyCallable(const BatchGetEffectiveLifecyclePolicyRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::BatchGetEffectiveLifecyclePolicy, request);
        }

        /**
         * An Async wrapper for BatchGetEffectiveLifecyclePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetEffectiveLifecyclePolicyRequestT = Model::BatchGetEffectiveLifecyclePolicyRequest>
        void BatchGetEffectiveLifecyclePolicyAsync(const BatchGetEffectiveLifecyclePolicyRequestT& request, const BatchGetEffectiveLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::BatchGetEffectiveLifecyclePolicy, request, handler, context);
        }

        /**
         * <p>Returns one or more configured OpenSearch Serverless lifecycle policies. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-lifecycle.html#serverless-lifecycle-list">Viewing
         * data lifecycle policies</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/BatchGetLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetLifecyclePolicyOutcome BatchGetLifecyclePolicy(const Model::BatchGetLifecyclePolicyRequest& request) const;

        /**
         * A Callable wrapper for BatchGetLifecyclePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetLifecyclePolicyRequestT = Model::BatchGetLifecyclePolicyRequest>
        Model::BatchGetLifecyclePolicyOutcomeCallable BatchGetLifecyclePolicyCallable(const BatchGetLifecyclePolicyRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::BatchGetLifecyclePolicy, request);
        }

        /**
         * An Async wrapper for BatchGetLifecyclePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetLifecyclePolicyRequestT = Model::BatchGetLifecyclePolicyRequest>
        void BatchGetLifecyclePolicyAsync(const BatchGetLifecyclePolicyRequestT& request, const BatchGetLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::BatchGetLifecyclePolicy, request, handler, context);
        }

        /**
         * <p>Returns attributes for one or more VPC endpoints associated with the current
         * account. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-vpc.html">Access
         * Amazon OpenSearch Serverless using an interface endpoint</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/BatchGetVpcEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetVpcEndpointOutcome BatchGetVpcEndpoint(const Model::BatchGetVpcEndpointRequest& request) const;

        /**
         * A Callable wrapper for BatchGetVpcEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetVpcEndpointRequestT = Model::BatchGetVpcEndpointRequest>
        Model::BatchGetVpcEndpointOutcomeCallable BatchGetVpcEndpointCallable(const BatchGetVpcEndpointRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::BatchGetVpcEndpoint, request);
        }

        /**
         * An Async wrapper for BatchGetVpcEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetVpcEndpointRequestT = Model::BatchGetVpcEndpointRequest>
        void BatchGetVpcEndpointAsync(const BatchGetVpcEndpointRequestT& request, const BatchGetVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::BatchGetVpcEndpoint, request, handler, context);
        }

        /**
         * <p>Creates a data access policy for OpenSearch Serverless. Access policies limit
         * access to collections and the resources within them, and allow a user to access
         * that data irrespective of the access mechanism or network source. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-data-access.html">Data
         * access control for Amazon OpenSearch Serverless</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/CreateAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccessPolicyOutcome CreateAccessPolicy(const Model::CreateAccessPolicyRequest& request) const;

        /**
         * A Callable wrapper for CreateAccessPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAccessPolicyRequestT = Model::CreateAccessPolicyRequest>
        Model::CreateAccessPolicyOutcomeCallable CreateAccessPolicyCallable(const CreateAccessPolicyRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::CreateAccessPolicy, request);
        }

        /**
         * An Async wrapper for CreateAccessPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAccessPolicyRequestT = Model::CreateAccessPolicyRequest>
        void CreateAccessPolicyAsync(const CreateAccessPolicyRequestT& request, const CreateAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::CreateAccessPolicy, request, handler, context);
        }

        /**
         * <p>Creates a new OpenSearch Serverless collection. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-manage.html">Creating
         * and managing Amazon OpenSearch Serverless collections</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/CreateCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCollectionOutcome CreateCollection(const Model::CreateCollectionRequest& request) const;

        /**
         * A Callable wrapper for CreateCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCollectionRequestT = Model::CreateCollectionRequest>
        Model::CreateCollectionOutcomeCallable CreateCollectionCallable(const CreateCollectionRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::CreateCollection, request);
        }

        /**
         * An Async wrapper for CreateCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCollectionRequestT = Model::CreateCollectionRequest>
        void CreateCollectionAsync(const CreateCollectionRequestT& request, const CreateCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::CreateCollection, request, handler, context);
        }

        /**
         * <p>Creates a lifecyle policy to be applied to OpenSearch Serverless indexes.
         * Lifecycle policies define the number of days or hours to retain the data on an
         * OpenSearch Serverless index. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-lifecycle.html#serverless-lifecycle-create">Creating
         * data lifecycle policies</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/CreateLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLifecyclePolicyOutcome CreateLifecyclePolicy(const Model::CreateLifecyclePolicyRequest& request) const;

        /**
         * A Callable wrapper for CreateLifecyclePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLifecyclePolicyRequestT = Model::CreateLifecyclePolicyRequest>
        Model::CreateLifecyclePolicyOutcomeCallable CreateLifecyclePolicyCallable(const CreateLifecyclePolicyRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::CreateLifecyclePolicy, request);
        }

        /**
         * An Async wrapper for CreateLifecyclePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLifecyclePolicyRequestT = Model::CreateLifecyclePolicyRequest>
        void CreateLifecyclePolicyAsync(const CreateLifecyclePolicyRequestT& request, const CreateLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::CreateLifecyclePolicy, request, handler, context);
        }

        /**
         * <p>Specifies a security configuration for OpenSearch Serverless. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-saml.html">SAML
         * authentication for Amazon OpenSearch Serverless</a>. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/CreateSecurityConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSecurityConfigOutcome CreateSecurityConfig(const Model::CreateSecurityConfigRequest& request) const;

        /**
         * A Callable wrapper for CreateSecurityConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSecurityConfigRequestT = Model::CreateSecurityConfigRequest>
        Model::CreateSecurityConfigOutcomeCallable CreateSecurityConfigCallable(const CreateSecurityConfigRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::CreateSecurityConfig, request);
        }

        /**
         * An Async wrapper for CreateSecurityConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSecurityConfigRequestT = Model::CreateSecurityConfigRequest>
        void CreateSecurityConfigAsync(const CreateSecurityConfigRequestT& request, const CreateSecurityConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::CreateSecurityConfig, request, handler, context);
        }

        /**
         * <p>Creates a security policy to be used by one or more OpenSearch Serverless
         * collections. Security policies provide access to a collection and its OpenSearch
         * Dashboards endpoint from public networks or specific VPC endpoints. They also
         * allow you to secure a collection with a KMS encryption key. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-network.html">Network
         * access for Amazon OpenSearch Serverless</a> and <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-encryption.html">Encryption
         * at rest for Amazon OpenSearch Serverless</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/CreateSecurityPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSecurityPolicyOutcome CreateSecurityPolicy(const Model::CreateSecurityPolicyRequest& request) const;

        /**
         * A Callable wrapper for CreateSecurityPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSecurityPolicyRequestT = Model::CreateSecurityPolicyRequest>
        Model::CreateSecurityPolicyOutcomeCallable CreateSecurityPolicyCallable(const CreateSecurityPolicyRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::CreateSecurityPolicy, request);
        }

        /**
         * An Async wrapper for CreateSecurityPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSecurityPolicyRequestT = Model::CreateSecurityPolicyRequest>
        void CreateSecurityPolicyAsync(const CreateSecurityPolicyRequestT& request, const CreateSecurityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::CreateSecurityPolicy, request, handler, context);
        }

        /**
         * <p>Creates an OpenSearch Serverless-managed interface VPC endpoint. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-vpc.html">Access
         * Amazon OpenSearch Serverless using an interface endpoint</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/CreateVpcEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcEndpointOutcome CreateVpcEndpoint(const Model::CreateVpcEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateVpcEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVpcEndpointRequestT = Model::CreateVpcEndpointRequest>
        Model::CreateVpcEndpointOutcomeCallable CreateVpcEndpointCallable(const CreateVpcEndpointRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::CreateVpcEndpoint, request);
        }

        /**
         * An Async wrapper for CreateVpcEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVpcEndpointRequestT = Model::CreateVpcEndpointRequest>
        void CreateVpcEndpointAsync(const CreateVpcEndpointRequestT& request, const CreateVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::CreateVpcEndpoint, request, handler, context);
        }

        /**
         * <p>Deletes an OpenSearch Serverless access policy. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-data-access.html">Data
         * access control for Amazon OpenSearch Serverless</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/DeleteAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessPolicyOutcome DeleteAccessPolicy(const Model::DeleteAccessPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccessPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAccessPolicyRequestT = Model::DeleteAccessPolicyRequest>
        Model::DeleteAccessPolicyOutcomeCallable DeleteAccessPolicyCallable(const DeleteAccessPolicyRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::DeleteAccessPolicy, request);
        }

        /**
         * An Async wrapper for DeleteAccessPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAccessPolicyRequestT = Model::DeleteAccessPolicyRequest>
        void DeleteAccessPolicyAsync(const DeleteAccessPolicyRequestT& request, const DeleteAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::DeleteAccessPolicy, request, handler, context);
        }

        /**
         * <p>Deletes an OpenSearch Serverless collection. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-manage.html">Creating
         * and managing Amazon OpenSearch Serverless collections</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/DeleteCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCollectionOutcome DeleteCollection(const Model::DeleteCollectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCollectionRequestT = Model::DeleteCollectionRequest>
        Model::DeleteCollectionOutcomeCallable DeleteCollectionCallable(const DeleteCollectionRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::DeleteCollection, request);
        }

        /**
         * An Async wrapper for DeleteCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCollectionRequestT = Model::DeleteCollectionRequest>
        void DeleteCollectionAsync(const DeleteCollectionRequestT& request, const DeleteCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::DeleteCollection, request, handler, context);
        }

        /**
         * <p>Deletes an OpenSearch Serverless lifecycle policy. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-lifecycle.html#serverless-lifecycle-delete">Deleting
         * data lifecycle policies</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/DeleteLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLifecyclePolicyOutcome DeleteLifecyclePolicy(const Model::DeleteLifecyclePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteLifecyclePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLifecyclePolicyRequestT = Model::DeleteLifecyclePolicyRequest>
        Model::DeleteLifecyclePolicyOutcomeCallable DeleteLifecyclePolicyCallable(const DeleteLifecyclePolicyRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::DeleteLifecyclePolicy, request);
        }

        /**
         * An Async wrapper for DeleteLifecyclePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLifecyclePolicyRequestT = Model::DeleteLifecyclePolicyRequest>
        void DeleteLifecyclePolicyAsync(const DeleteLifecyclePolicyRequestT& request, const DeleteLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::DeleteLifecyclePolicy, request, handler, context);
        }

        /**
         * <p>Deletes a security configuration for OpenSearch Serverless. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-saml.html">SAML
         * authentication for Amazon OpenSearch Serverless</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/DeleteSecurityConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSecurityConfigOutcome DeleteSecurityConfig(const Model::DeleteSecurityConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteSecurityConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSecurityConfigRequestT = Model::DeleteSecurityConfigRequest>
        Model::DeleteSecurityConfigOutcomeCallable DeleteSecurityConfigCallable(const DeleteSecurityConfigRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::DeleteSecurityConfig, request);
        }

        /**
         * An Async wrapper for DeleteSecurityConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSecurityConfigRequestT = Model::DeleteSecurityConfigRequest>
        void DeleteSecurityConfigAsync(const DeleteSecurityConfigRequestT& request, const DeleteSecurityConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::DeleteSecurityConfig, request, handler, context);
        }

        /**
         * <p>Deletes an OpenSearch Serverless security policy.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/DeleteSecurityPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSecurityPolicyOutcome DeleteSecurityPolicy(const Model::DeleteSecurityPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteSecurityPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSecurityPolicyRequestT = Model::DeleteSecurityPolicyRequest>
        Model::DeleteSecurityPolicyOutcomeCallable DeleteSecurityPolicyCallable(const DeleteSecurityPolicyRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::DeleteSecurityPolicy, request);
        }

        /**
         * An Async wrapper for DeleteSecurityPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSecurityPolicyRequestT = Model::DeleteSecurityPolicyRequest>
        void DeleteSecurityPolicyAsync(const DeleteSecurityPolicyRequestT& request, const DeleteSecurityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::DeleteSecurityPolicy, request, handler, context);
        }

        /**
         * <p>Deletes an OpenSearch Serverless-managed interface endpoint. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-vpc.html">Access
         * Amazon OpenSearch Serverless using an interface endpoint</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/DeleteVpcEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcEndpointOutcome DeleteVpcEndpoint(const Model::DeleteVpcEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteVpcEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVpcEndpointRequestT = Model::DeleteVpcEndpointRequest>
        Model::DeleteVpcEndpointOutcomeCallable DeleteVpcEndpointCallable(const DeleteVpcEndpointRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::DeleteVpcEndpoint, request);
        }

        /**
         * An Async wrapper for DeleteVpcEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVpcEndpointRequestT = Model::DeleteVpcEndpointRequest>
        void DeleteVpcEndpointAsync(const DeleteVpcEndpointRequestT& request, const DeleteVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::DeleteVpcEndpoint, request, handler, context);
        }

        /**
         * <p>Returns an OpenSearch Serverless access policy. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-data-access.html">Data
         * access control for Amazon OpenSearch Serverless</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/GetAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessPolicyOutcome GetAccessPolicy(const Model::GetAccessPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetAccessPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccessPolicyRequestT = Model::GetAccessPolicyRequest>
        Model::GetAccessPolicyOutcomeCallable GetAccessPolicyCallable(const GetAccessPolicyRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::GetAccessPolicy, request);
        }

        /**
         * An Async wrapper for GetAccessPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccessPolicyRequestT = Model::GetAccessPolicyRequest>
        void GetAccessPolicyAsync(const GetAccessPolicyRequestT& request, const GetAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::GetAccessPolicy, request, handler, context);
        }

        /**
         * <p>Returns account-level settings related to OpenSearch
         * Serverless.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/GetAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountSettingsOutcome GetAccountSettings(const Model::GetAccountSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetAccountSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccountSettingsRequestT = Model::GetAccountSettingsRequest>
        Model::GetAccountSettingsOutcomeCallable GetAccountSettingsCallable(const GetAccountSettingsRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::GetAccountSettings, request);
        }

        /**
         * An Async wrapper for GetAccountSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccountSettingsRequestT = Model::GetAccountSettingsRequest>
        void GetAccountSettingsAsync(const GetAccountSettingsRequestT& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::GetAccountSettings, request, handler, context);
        }

        /**
         * <p>Returns statistical information about your OpenSearch Serverless access
         * policies, security configurations, and security policies.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/GetPoliciesStats">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPoliciesStatsOutcome GetPoliciesStats(const Model::GetPoliciesStatsRequest& request) const;

        /**
         * A Callable wrapper for GetPoliciesStats that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPoliciesStatsRequestT = Model::GetPoliciesStatsRequest>
        Model::GetPoliciesStatsOutcomeCallable GetPoliciesStatsCallable(const GetPoliciesStatsRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::GetPoliciesStats, request);
        }

        /**
         * An Async wrapper for GetPoliciesStats that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPoliciesStatsRequestT = Model::GetPoliciesStatsRequest>
        void GetPoliciesStatsAsync(const GetPoliciesStatsRequestT& request, const GetPoliciesStatsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::GetPoliciesStats, request, handler, context);
        }

        /**
         * <p>Returns information about an OpenSearch Serverless security configuration.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-saml.html">SAML
         * authentication for Amazon OpenSearch Serverless</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/GetSecurityConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSecurityConfigOutcome GetSecurityConfig(const Model::GetSecurityConfigRequest& request) const;

        /**
         * A Callable wrapper for GetSecurityConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSecurityConfigRequestT = Model::GetSecurityConfigRequest>
        Model::GetSecurityConfigOutcomeCallable GetSecurityConfigCallable(const GetSecurityConfigRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::GetSecurityConfig, request);
        }

        /**
         * An Async wrapper for GetSecurityConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSecurityConfigRequestT = Model::GetSecurityConfigRequest>
        void GetSecurityConfigAsync(const GetSecurityConfigRequestT& request, const GetSecurityConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::GetSecurityConfig, request, handler, context);
        }

        /**
         * <p>Returns information about a configured OpenSearch Serverless security policy.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-network.html">Network
         * access for Amazon OpenSearch Serverless</a> and <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-encryption.html">Encryption
         * at rest for Amazon OpenSearch Serverless</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/GetSecurityPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSecurityPolicyOutcome GetSecurityPolicy(const Model::GetSecurityPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetSecurityPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSecurityPolicyRequestT = Model::GetSecurityPolicyRequest>
        Model::GetSecurityPolicyOutcomeCallable GetSecurityPolicyCallable(const GetSecurityPolicyRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::GetSecurityPolicy, request);
        }

        /**
         * An Async wrapper for GetSecurityPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSecurityPolicyRequestT = Model::GetSecurityPolicyRequest>
        void GetSecurityPolicyAsync(const GetSecurityPolicyRequestT& request, const GetSecurityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::GetSecurityPolicy, request, handler, context);
        }

        /**
         * <p>Returns information about a list of OpenSearch Serverless access
         * policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/ListAccessPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessPoliciesOutcome ListAccessPolicies(const Model::ListAccessPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListAccessPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAccessPoliciesRequestT = Model::ListAccessPoliciesRequest>
        Model::ListAccessPoliciesOutcomeCallable ListAccessPoliciesCallable(const ListAccessPoliciesRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::ListAccessPolicies, request);
        }

        /**
         * An Async wrapper for ListAccessPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAccessPoliciesRequestT = Model::ListAccessPoliciesRequest>
        void ListAccessPoliciesAsync(const ListAccessPoliciesRequestT& request, const ListAccessPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::ListAccessPolicies, request, handler, context);
        }

        /**
         * <p>Lists all OpenSearch Serverless collections. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-manage.html">Creating
         * and managing Amazon OpenSearch Serverless collections</a>.</p>  <p>Make
         * sure to include an empty request body {} if you don't include any collection
         * filters in the request.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/ListCollections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCollectionsOutcome ListCollections(const Model::ListCollectionsRequest& request) const;

        /**
         * A Callable wrapper for ListCollections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCollectionsRequestT = Model::ListCollectionsRequest>
        Model::ListCollectionsOutcomeCallable ListCollectionsCallable(const ListCollectionsRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::ListCollections, request);
        }

        /**
         * An Async wrapper for ListCollections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCollectionsRequestT = Model::ListCollectionsRequest>
        void ListCollectionsAsync(const ListCollectionsRequestT& request, const ListCollectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::ListCollections, request, handler, context);
        }

        /**
         * <p>Returns a list of OpenSearch Serverless lifecycle policies. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-lifecycle.html#serverless-lifecycle-list">Viewing
         * data lifecycle policies</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/ListLifecyclePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLifecyclePoliciesOutcome ListLifecyclePolicies(const Model::ListLifecyclePoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListLifecyclePolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLifecyclePoliciesRequestT = Model::ListLifecyclePoliciesRequest>
        Model::ListLifecyclePoliciesOutcomeCallable ListLifecyclePoliciesCallable(const ListLifecyclePoliciesRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::ListLifecyclePolicies, request);
        }

        /**
         * An Async wrapper for ListLifecyclePolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLifecyclePoliciesRequestT = Model::ListLifecyclePoliciesRequest>
        void ListLifecyclePoliciesAsync(const ListLifecyclePoliciesRequestT& request, const ListLifecyclePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::ListLifecyclePolicies, request, handler, context);
        }

        /**
         * <p>Returns information about configured OpenSearch Serverless security
         * configurations. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-saml.html">SAML
         * authentication for Amazon OpenSearch Serverless</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/ListSecurityConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityConfigsOutcome ListSecurityConfigs(const Model::ListSecurityConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListSecurityConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSecurityConfigsRequestT = Model::ListSecurityConfigsRequest>
        Model::ListSecurityConfigsOutcomeCallable ListSecurityConfigsCallable(const ListSecurityConfigsRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::ListSecurityConfigs, request);
        }

        /**
         * An Async wrapper for ListSecurityConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSecurityConfigsRequestT = Model::ListSecurityConfigsRequest>
        void ListSecurityConfigsAsync(const ListSecurityConfigsRequestT& request, const ListSecurityConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::ListSecurityConfigs, request, handler, context);
        }

        /**
         * <p>Returns information about configured OpenSearch Serverless security
         * policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/ListSecurityPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityPoliciesOutcome ListSecurityPolicies(const Model::ListSecurityPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListSecurityPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSecurityPoliciesRequestT = Model::ListSecurityPoliciesRequest>
        Model::ListSecurityPoliciesOutcomeCallable ListSecurityPoliciesCallable(const ListSecurityPoliciesRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::ListSecurityPolicies, request);
        }

        /**
         * An Async wrapper for ListSecurityPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSecurityPoliciesRequestT = Model::ListSecurityPoliciesRequest>
        void ListSecurityPoliciesAsync(const ListSecurityPoliciesRequestT& request, const ListSecurityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::ListSecurityPolicies, request, handler, context);
        }

        /**
         * <p>Returns the tags for an OpenSearch Serverless resource. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/tag-collection.html">Tagging
         * Amazon OpenSearch Serverless collections</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Returns the OpenSearch Serverless-managed interface VPC endpoints associated
         * with the current account. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-vpc.html">Access
         * Amazon OpenSearch Serverless using an interface endpoint</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/ListVpcEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVpcEndpointsOutcome ListVpcEndpoints(const Model::ListVpcEndpointsRequest& request) const;

        /**
         * A Callable wrapper for ListVpcEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVpcEndpointsRequestT = Model::ListVpcEndpointsRequest>
        Model::ListVpcEndpointsOutcomeCallable ListVpcEndpointsCallable(const ListVpcEndpointsRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::ListVpcEndpoints, request);
        }

        /**
         * An Async wrapper for ListVpcEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVpcEndpointsRequestT = Model::ListVpcEndpointsRequest>
        void ListVpcEndpointsAsync(const ListVpcEndpointsRequestT& request, const ListVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::ListVpcEndpoints, request, handler, context);
        }

        /**
         * <p>Associates tags with an OpenSearch Serverless resource. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/tag-collection.html">Tagging
         * Amazon OpenSearch Serverless collections</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes a tag or set of tags from an OpenSearch Serverless resource. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/tag-collection.html">Tagging
         * Amazon OpenSearch Serverless collections</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an OpenSearch Serverless access policy. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-data-access.html">Data
         * access control for Amazon OpenSearch Serverless</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/UpdateAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccessPolicyOutcome UpdateAccessPolicy(const Model::UpdateAccessPolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccessPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAccessPolicyRequestT = Model::UpdateAccessPolicyRequest>
        Model::UpdateAccessPolicyOutcomeCallable UpdateAccessPolicyCallable(const UpdateAccessPolicyRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::UpdateAccessPolicy, request);
        }

        /**
         * An Async wrapper for UpdateAccessPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAccessPolicyRequestT = Model::UpdateAccessPolicyRequest>
        void UpdateAccessPolicyAsync(const UpdateAccessPolicyRequestT& request, const UpdateAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::UpdateAccessPolicy, request, handler, context);
        }

        /**
         * <p>Update the OpenSearch Serverless settings for the current Amazon Web Services
         * account. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-scaling.html">Managing
         * capacity limits for Amazon OpenSearch Serverless</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/UpdateAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountSettingsOutcome UpdateAccountSettings(const Model::UpdateAccountSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccountSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAccountSettingsRequestT = Model::UpdateAccountSettingsRequest>
        Model::UpdateAccountSettingsOutcomeCallable UpdateAccountSettingsCallable(const UpdateAccountSettingsRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::UpdateAccountSettings, request);
        }

        /**
         * An Async wrapper for UpdateAccountSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAccountSettingsRequestT = Model::UpdateAccountSettingsRequest>
        void UpdateAccountSettingsAsync(const UpdateAccountSettingsRequestT& request, const UpdateAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::UpdateAccountSettings, request, handler, context);
        }

        /**
         * <p>Updates an OpenSearch Serverless collection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/UpdateCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCollectionOutcome UpdateCollection(const Model::UpdateCollectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCollectionRequestT = Model::UpdateCollectionRequest>
        Model::UpdateCollectionOutcomeCallable UpdateCollectionCallable(const UpdateCollectionRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::UpdateCollection, request);
        }

        /**
         * An Async wrapper for UpdateCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCollectionRequestT = Model::UpdateCollectionRequest>
        void UpdateCollectionAsync(const UpdateCollectionRequestT& request, const UpdateCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::UpdateCollection, request, handler, context);
        }

        /**
         * <p>Updates an OpenSearch Serverless access policy. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-lifecycle.html#serverless-lifecycle-update">Updating
         * data lifecycle policies</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/UpdateLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLifecyclePolicyOutcome UpdateLifecyclePolicy(const Model::UpdateLifecyclePolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdateLifecyclePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLifecyclePolicyRequestT = Model::UpdateLifecyclePolicyRequest>
        Model::UpdateLifecyclePolicyOutcomeCallable UpdateLifecyclePolicyCallable(const UpdateLifecyclePolicyRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::UpdateLifecyclePolicy, request);
        }

        /**
         * An Async wrapper for UpdateLifecyclePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLifecyclePolicyRequestT = Model::UpdateLifecyclePolicyRequest>
        void UpdateLifecyclePolicyAsync(const UpdateLifecyclePolicyRequestT& request, const UpdateLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::UpdateLifecyclePolicy, request, handler, context);
        }

        /**
         * <p>Updates a security configuration for OpenSearch Serverless. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-saml.html">SAML
         * authentication for Amazon OpenSearch Serverless</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/UpdateSecurityConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSecurityConfigOutcome UpdateSecurityConfig(const Model::UpdateSecurityConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateSecurityConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSecurityConfigRequestT = Model::UpdateSecurityConfigRequest>
        Model::UpdateSecurityConfigOutcomeCallable UpdateSecurityConfigCallable(const UpdateSecurityConfigRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::UpdateSecurityConfig, request);
        }

        /**
         * An Async wrapper for UpdateSecurityConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSecurityConfigRequestT = Model::UpdateSecurityConfigRequest>
        void UpdateSecurityConfigAsync(const UpdateSecurityConfigRequestT& request, const UpdateSecurityConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::UpdateSecurityConfig, request, handler, context);
        }

        /**
         * <p>Updates an OpenSearch Serverless security policy. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-network.html">Network
         * access for Amazon OpenSearch Serverless</a> and <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-encryption.html">Encryption
         * at rest for Amazon OpenSearch Serverless</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/UpdateSecurityPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSecurityPolicyOutcome UpdateSecurityPolicy(const Model::UpdateSecurityPolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdateSecurityPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSecurityPolicyRequestT = Model::UpdateSecurityPolicyRequest>
        Model::UpdateSecurityPolicyOutcomeCallable UpdateSecurityPolicyCallable(const UpdateSecurityPolicyRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::UpdateSecurityPolicy, request);
        }

        /**
         * An Async wrapper for UpdateSecurityPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSecurityPolicyRequestT = Model::UpdateSecurityPolicyRequest>
        void UpdateSecurityPolicyAsync(const UpdateSecurityPolicyRequestT& request, const UpdateSecurityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::UpdateSecurityPolicy, request, handler, context);
        }

        /**
         * <p>Updates an OpenSearch Serverless-managed interface endpoint. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-vpc.html">Access
         * Amazon OpenSearch Serverless using an interface endpoint</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/UpdateVpcEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVpcEndpointOutcome UpdateVpcEndpoint(const Model::UpdateVpcEndpointRequest& request) const;

        /**
         * A Callable wrapper for UpdateVpcEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateVpcEndpointRequestT = Model::UpdateVpcEndpointRequest>
        Model::UpdateVpcEndpointOutcomeCallable UpdateVpcEndpointCallable(const UpdateVpcEndpointRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServerlessClient::UpdateVpcEndpoint, request);
        }

        /**
         * An Async wrapper for UpdateVpcEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVpcEndpointRequestT = Model::UpdateVpcEndpointRequest>
        void UpdateVpcEndpointAsync(const UpdateVpcEndpointRequestT& request, const UpdateVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServerlessClient::UpdateVpcEndpoint, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<OpenSearchServerlessEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<OpenSearchServerlessClient>;
      void init(const OpenSearchServerlessClientConfiguration& clientConfiguration);

      OpenSearchServerlessClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<OpenSearchServerlessEndpointProviderBase> m_endpointProvider;
  };

} // namespace OpenSearchServerless
} // namespace Aws
