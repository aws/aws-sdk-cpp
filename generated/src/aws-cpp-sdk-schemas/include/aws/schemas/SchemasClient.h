/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/schemas/SchemasServiceClientModel.h>

namespace Aws
{
namespace Schemas
{
  /**
   * <p>Amazon EventBridge Schema Registry</p>
   */
  class AWS_SCHEMAS_API SchemasClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SchemasClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SchemasClientConfiguration ClientConfigurationType;
      typedef SchemasEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SchemasClient(const Aws::Schemas::SchemasClientConfiguration& clientConfiguration = Aws::Schemas::SchemasClientConfiguration(),
                      std::shared_ptr<SchemasEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SchemasClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<SchemasEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::Schemas::SchemasClientConfiguration& clientConfiguration = Aws::Schemas::SchemasClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SchemasClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<SchemasEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::Schemas::SchemasClientConfiguration& clientConfiguration = Aws::Schemas::SchemasClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SchemasClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SchemasClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SchemasClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SchemasClient();

        /**
         * <p>Creates a discoverer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/CreateDiscoverer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDiscovererOutcome CreateDiscoverer(const Model::CreateDiscovererRequest& request) const;

        /**
         * A Callable wrapper for CreateDiscoverer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDiscovererRequestT = Model::CreateDiscovererRequest>
        Model::CreateDiscovererOutcomeCallable CreateDiscovererCallable(const CreateDiscovererRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::CreateDiscoverer, request);
        }

        /**
         * An Async wrapper for CreateDiscoverer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDiscovererRequestT = Model::CreateDiscovererRequest>
        void CreateDiscovererAsync(const CreateDiscovererRequestT& request, const CreateDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::CreateDiscoverer, request, handler, context);
        }

        /**
         * <p>Creates a registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/CreateRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRegistryOutcome CreateRegistry(const Model::CreateRegistryRequest& request) const;

        /**
         * A Callable wrapper for CreateRegistry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRegistryRequestT = Model::CreateRegistryRequest>
        Model::CreateRegistryOutcomeCallable CreateRegistryCallable(const CreateRegistryRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::CreateRegistry, request);
        }

        /**
         * An Async wrapper for CreateRegistry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRegistryRequestT = Model::CreateRegistryRequest>
        void CreateRegistryAsync(const CreateRegistryRequestT& request, const CreateRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::CreateRegistry, request, handler, context);
        }

        /**
         * <p>Creates a schema definition.</p> <p>Inactive schemas will be deleted
         * after two years.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/CreateSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSchemaOutcome CreateSchema(const Model::CreateSchemaRequest& request) const;

        /**
         * A Callable wrapper for CreateSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSchemaRequestT = Model::CreateSchemaRequest>
        Model::CreateSchemaOutcomeCallable CreateSchemaCallable(const CreateSchemaRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::CreateSchema, request);
        }

        /**
         * An Async wrapper for CreateSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSchemaRequestT = Model::CreateSchemaRequest>
        void CreateSchemaAsync(const CreateSchemaRequestT& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::CreateSchema, request, handler, context);
        }

        /**
         * <p>Deletes a discoverer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteDiscoverer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDiscovererOutcome DeleteDiscoverer(const Model::DeleteDiscovererRequest& request) const;

        /**
         * A Callable wrapper for DeleteDiscoverer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDiscovererRequestT = Model::DeleteDiscovererRequest>
        Model::DeleteDiscovererOutcomeCallable DeleteDiscovererCallable(const DeleteDiscovererRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::DeleteDiscoverer, request);
        }

        /**
         * An Async wrapper for DeleteDiscoverer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDiscovererRequestT = Model::DeleteDiscovererRequest>
        void DeleteDiscovererAsync(const DeleteDiscovererRequestT& request, const DeleteDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::DeleteDiscoverer, request, handler, context);
        }

        /**
         * <p>Deletes a Registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRegistryOutcome DeleteRegistry(const Model::DeleteRegistryRequest& request) const;

        /**
         * A Callable wrapper for DeleteRegistry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRegistryRequestT = Model::DeleteRegistryRequest>
        Model::DeleteRegistryOutcomeCallable DeleteRegistryCallable(const DeleteRegistryRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::DeleteRegistry, request);
        }

        /**
         * An Async wrapper for DeleteRegistry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRegistryRequestT = Model::DeleteRegistryRequest>
        void DeleteRegistryAsync(const DeleteRegistryRequestT& request, const DeleteRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::DeleteRegistry, request, handler, context);
        }

        /**
         * <p>Delete the resource-based policy attached to the specified
         * registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const DeleteResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::DeleteResourcePolicy, request);
        }

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        void DeleteResourcePolicyAsync(const DeleteResourcePolicyRequestT& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::DeleteResourcePolicy, request, handler, context);
        }

        /**
         * <p>Delete a schema definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSchemaOutcome DeleteSchema(const Model::DeleteSchemaRequest& request) const;

        /**
         * A Callable wrapper for DeleteSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSchemaRequestT = Model::DeleteSchemaRequest>
        Model::DeleteSchemaOutcomeCallable DeleteSchemaCallable(const DeleteSchemaRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::DeleteSchema, request);
        }

        /**
         * An Async wrapper for DeleteSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSchemaRequestT = Model::DeleteSchemaRequest>
        void DeleteSchemaAsync(const DeleteSchemaRequestT& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::DeleteSchema, request, handler, context);
        }

        /**
         * <p>Delete the schema version definition</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DeleteSchemaVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSchemaVersionOutcome DeleteSchemaVersion(const Model::DeleteSchemaVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteSchemaVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSchemaVersionRequestT = Model::DeleteSchemaVersionRequest>
        Model::DeleteSchemaVersionOutcomeCallable DeleteSchemaVersionCallable(const DeleteSchemaVersionRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::DeleteSchemaVersion, request);
        }

        /**
         * An Async wrapper for DeleteSchemaVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSchemaVersionRequestT = Model::DeleteSchemaVersionRequest>
        void DeleteSchemaVersionAsync(const DeleteSchemaVersionRequestT& request, const DeleteSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::DeleteSchemaVersion, request, handler, context);
        }

        /**
         * <p>Describe the code binding URI.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DescribeCodeBinding">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCodeBindingOutcome DescribeCodeBinding(const Model::DescribeCodeBindingRequest& request) const;

        /**
         * A Callable wrapper for DescribeCodeBinding that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCodeBindingRequestT = Model::DescribeCodeBindingRequest>
        Model::DescribeCodeBindingOutcomeCallable DescribeCodeBindingCallable(const DescribeCodeBindingRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::DescribeCodeBinding, request);
        }

        /**
         * An Async wrapper for DescribeCodeBinding that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCodeBindingRequestT = Model::DescribeCodeBindingRequest>
        void DescribeCodeBindingAsync(const DescribeCodeBindingRequestT& request, const DescribeCodeBindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::DescribeCodeBinding, request, handler, context);
        }

        /**
         * <p>Describes the discoverer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DescribeDiscoverer">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDiscovererOutcome DescribeDiscoverer(const Model::DescribeDiscovererRequest& request) const;

        /**
         * A Callable wrapper for DescribeDiscoverer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDiscovererRequestT = Model::DescribeDiscovererRequest>
        Model::DescribeDiscovererOutcomeCallable DescribeDiscovererCallable(const DescribeDiscovererRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::DescribeDiscoverer, request);
        }

        /**
         * An Async wrapper for DescribeDiscoverer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDiscovererRequestT = Model::DescribeDiscovererRequest>
        void DescribeDiscovererAsync(const DescribeDiscovererRequestT& request, const DescribeDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::DescribeDiscoverer, request, handler, context);
        }

        /**
         * <p>Describes the registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DescribeRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRegistryOutcome DescribeRegistry(const Model::DescribeRegistryRequest& request) const;

        /**
         * A Callable wrapper for DescribeRegistry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRegistryRequestT = Model::DescribeRegistryRequest>
        Model::DescribeRegistryOutcomeCallable DescribeRegistryCallable(const DescribeRegistryRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::DescribeRegistry, request);
        }

        /**
         * An Async wrapper for DescribeRegistry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRegistryRequestT = Model::DescribeRegistryRequest>
        void DescribeRegistryAsync(const DescribeRegistryRequestT& request, const DescribeRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::DescribeRegistry, request, handler, context);
        }

        /**
         * <p>Retrieve the schema definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/DescribeSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSchemaOutcome DescribeSchema(const Model::DescribeSchemaRequest& request) const;

        /**
         * A Callable wrapper for DescribeSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSchemaRequestT = Model::DescribeSchemaRequest>
        Model::DescribeSchemaOutcomeCallable DescribeSchemaCallable(const DescribeSchemaRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::DescribeSchema, request);
        }

        /**
         * An Async wrapper for DescribeSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSchemaRequestT = Model::DescribeSchemaRequest>
        void DescribeSchemaAsync(const DescribeSchemaRequestT& request, const DescribeSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::DescribeSchema, request, handler, context);
        }

        /**
         * 
         */
        virtual Model::ExportSchemaOutcome ExportSchema(const Model::ExportSchemaRequest& request) const;

        /**
         * A Callable wrapper for ExportSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExportSchemaRequestT = Model::ExportSchemaRequest>
        Model::ExportSchemaOutcomeCallable ExportSchemaCallable(const ExportSchemaRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::ExportSchema, request);
        }

        /**
         * An Async wrapper for ExportSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportSchemaRequestT = Model::ExportSchemaRequest>
        void ExportSchemaAsync(const ExportSchemaRequestT& request, const ExportSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::ExportSchema, request, handler, context);
        }

        /**
         * <p>Get the code binding source URI.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/GetCodeBindingSource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCodeBindingSourceOutcome GetCodeBindingSource(const Model::GetCodeBindingSourceRequest& request) const;

        /**
         * A Callable wrapper for GetCodeBindingSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCodeBindingSourceRequestT = Model::GetCodeBindingSourceRequest>
        Model::GetCodeBindingSourceOutcomeCallable GetCodeBindingSourceCallable(const GetCodeBindingSourceRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::GetCodeBindingSource, request);
        }

        /**
         * An Async wrapper for GetCodeBindingSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCodeBindingSourceRequestT = Model::GetCodeBindingSourceRequest>
        void GetCodeBindingSourceAsync(const GetCodeBindingSourceRequestT& request, const GetCodeBindingSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::GetCodeBindingSource, request, handler, context);
        }

        /**
         * <p>Get the discovered schema that was generated based on sampled
         * events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/GetDiscoveredSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDiscoveredSchemaOutcome GetDiscoveredSchema(const Model::GetDiscoveredSchemaRequest& request) const;

        /**
         * A Callable wrapper for GetDiscoveredSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDiscoveredSchemaRequestT = Model::GetDiscoveredSchemaRequest>
        Model::GetDiscoveredSchemaOutcomeCallable GetDiscoveredSchemaCallable(const GetDiscoveredSchemaRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::GetDiscoveredSchema, request);
        }

        /**
         * An Async wrapper for GetDiscoveredSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDiscoveredSchemaRequestT = Model::GetDiscoveredSchemaRequest>
        void GetDiscoveredSchemaAsync(const GetDiscoveredSchemaRequestT& request, const GetDiscoveredSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::GetDiscoveredSchema, request, handler, context);
        }

        /**
         * <p>Retrieves the resource-based policy attached to a given
         * registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/GetResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
        Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const GetResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::GetResourcePolicy, request);
        }

        /**
         * An Async wrapper for GetResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
        void GetResourcePolicyAsync(const GetResourcePolicyRequestT& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::GetResourcePolicy, request, handler, context);
        }

        /**
         * <p>List the discoverers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListDiscoverers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDiscoverersOutcome ListDiscoverers(const Model::ListDiscoverersRequest& request) const;

        /**
         * A Callable wrapper for ListDiscoverers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDiscoverersRequestT = Model::ListDiscoverersRequest>
        Model::ListDiscoverersOutcomeCallable ListDiscoverersCallable(const ListDiscoverersRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::ListDiscoverers, request);
        }

        /**
         * An Async wrapper for ListDiscoverers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDiscoverersRequestT = Model::ListDiscoverersRequest>
        void ListDiscoverersAsync(const ListDiscoverersRequestT& request, const ListDiscoverersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::ListDiscoverers, request, handler, context);
        }

        /**
         * <p>List the registries.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListRegistries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRegistriesOutcome ListRegistries(const Model::ListRegistriesRequest& request) const;

        /**
         * A Callable wrapper for ListRegistries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRegistriesRequestT = Model::ListRegistriesRequest>
        Model::ListRegistriesOutcomeCallable ListRegistriesCallable(const ListRegistriesRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::ListRegistries, request);
        }

        /**
         * An Async wrapper for ListRegistries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRegistriesRequestT = Model::ListRegistriesRequest>
        void ListRegistriesAsync(const ListRegistriesRequestT& request, const ListRegistriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::ListRegistries, request, handler, context);
        }

        /**
         * <p>Provides a list of the schema versions and related information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListSchemaVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchemaVersionsOutcome ListSchemaVersions(const Model::ListSchemaVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListSchemaVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSchemaVersionsRequestT = Model::ListSchemaVersionsRequest>
        Model::ListSchemaVersionsOutcomeCallable ListSchemaVersionsCallable(const ListSchemaVersionsRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::ListSchemaVersions, request);
        }

        /**
         * An Async wrapper for ListSchemaVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSchemaVersionsRequestT = Model::ListSchemaVersionsRequest>
        void ListSchemaVersionsAsync(const ListSchemaVersionsRequestT& request, const ListSchemaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::ListSchemaVersions, request, handler, context);
        }

        /**
         * <p>List the schemas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListSchemas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchemasOutcome ListSchemas(const Model::ListSchemasRequest& request) const;

        /**
         * A Callable wrapper for ListSchemas that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSchemasRequestT = Model::ListSchemasRequest>
        Model::ListSchemasOutcomeCallable ListSchemasCallable(const ListSchemasRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::ListSchemas, request);
        }

        /**
         * An Async wrapper for ListSchemas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSchemasRequestT = Model::ListSchemasRequest>
        void ListSchemasAsync(const ListSchemasRequestT& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::ListSchemas, request, handler, context);
        }

        /**
         * <p>Get tags for resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Put code binding URI</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/PutCodeBinding">AWS
         * API Reference</a></p>
         */
        virtual Model::PutCodeBindingOutcome PutCodeBinding(const Model::PutCodeBindingRequest& request) const;

        /**
         * A Callable wrapper for PutCodeBinding that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutCodeBindingRequestT = Model::PutCodeBindingRequest>
        Model::PutCodeBindingOutcomeCallable PutCodeBindingCallable(const PutCodeBindingRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::PutCodeBinding, request);
        }

        /**
         * An Async wrapper for PutCodeBinding that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutCodeBindingRequestT = Model::PutCodeBindingRequest>
        void PutCodeBindingAsync(const PutCodeBindingRequestT& request, const PutCodeBindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::PutCodeBinding, request, handler, context);
        }

        /**
         * <p>The name of the policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const PutResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::PutResourcePolicy, request);
        }

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        void PutResourcePolicyAsync(const PutResourcePolicyRequestT& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::PutResourcePolicy, request, handler, context);
        }

        /**
         * <p>Search the schemas</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/SearchSchemas">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchSchemasOutcome SearchSchemas(const Model::SearchSchemasRequest& request) const;

        /**
         * A Callable wrapper for SearchSchemas that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchSchemasRequestT = Model::SearchSchemasRequest>
        Model::SearchSchemasOutcomeCallable SearchSchemasCallable(const SearchSchemasRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::SearchSchemas, request);
        }

        /**
         * An Async wrapper for SearchSchemas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchSchemasRequestT = Model::SearchSchemasRequest>
        void SearchSchemasAsync(const SearchSchemasRequestT& request, const SearchSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::SearchSchemas, request, handler, context);
        }

        /**
         * <p>Starts the discoverer</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/StartDiscoverer">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDiscovererOutcome StartDiscoverer(const Model::StartDiscovererRequest& request) const;

        /**
         * A Callable wrapper for StartDiscoverer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDiscovererRequestT = Model::StartDiscovererRequest>
        Model::StartDiscovererOutcomeCallable StartDiscovererCallable(const StartDiscovererRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::StartDiscoverer, request);
        }

        /**
         * An Async wrapper for StartDiscoverer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDiscovererRequestT = Model::StartDiscovererRequest>
        void StartDiscovererAsync(const StartDiscovererRequestT& request, const StartDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::StartDiscoverer, request, handler, context);
        }

        /**
         * <p>Stops the discoverer</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/StopDiscoverer">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDiscovererOutcome StopDiscoverer(const Model::StopDiscovererRequest& request) const;

        /**
         * A Callable wrapper for StopDiscoverer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopDiscovererRequestT = Model::StopDiscovererRequest>
        Model::StopDiscovererOutcomeCallable StopDiscovererCallable(const StopDiscovererRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::StopDiscoverer, request);
        }

        /**
         * An Async wrapper for StopDiscoverer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopDiscovererRequestT = Model::StopDiscovererRequest>
        void StopDiscovererAsync(const StopDiscovererRequestT& request, const StopDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::StopDiscoverer, request, handler, context);
        }

        /**
         * <p>Add tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the discoverer</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/UpdateDiscoverer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDiscovererOutcome UpdateDiscoverer(const Model::UpdateDiscovererRequest& request) const;

        /**
         * A Callable wrapper for UpdateDiscoverer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDiscovererRequestT = Model::UpdateDiscovererRequest>
        Model::UpdateDiscovererOutcomeCallable UpdateDiscovererCallable(const UpdateDiscovererRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::UpdateDiscoverer, request);
        }

        /**
         * An Async wrapper for UpdateDiscoverer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDiscovererRequestT = Model::UpdateDiscovererRequest>
        void UpdateDiscovererAsync(const UpdateDiscovererRequestT& request, const UpdateDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::UpdateDiscoverer, request, handler, context);
        }

        /**
         * <p>Updates a registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/UpdateRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRegistryOutcome UpdateRegistry(const Model::UpdateRegistryRequest& request) const;

        /**
         * A Callable wrapper for UpdateRegistry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRegistryRequestT = Model::UpdateRegistryRequest>
        Model::UpdateRegistryOutcomeCallable UpdateRegistryCallable(const UpdateRegistryRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::UpdateRegistry, request);
        }

        /**
         * An Async wrapper for UpdateRegistry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRegistryRequestT = Model::UpdateRegistryRequest>
        void UpdateRegistryAsync(const UpdateRegistryRequestT& request, const UpdateRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::UpdateRegistry, request, handler, context);
        }

        /**
         * <p>Updates the schema definition</p> <p>Inactive schemas will be deleted
         * after two years.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/UpdateSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSchemaOutcome UpdateSchema(const Model::UpdateSchemaRequest& request) const;

        /**
         * A Callable wrapper for UpdateSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSchemaRequestT = Model::UpdateSchemaRequest>
        Model::UpdateSchemaOutcomeCallable UpdateSchemaCallable(const UpdateSchemaRequestT& request) const
        {
            return SubmitCallable(&SchemasClient::UpdateSchema, request);
        }

        /**
         * An Async wrapper for UpdateSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSchemaRequestT = Model::UpdateSchemaRequest>
        void UpdateSchemaAsync(const UpdateSchemaRequestT& request, const UpdateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SchemasClient::UpdateSchema, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SchemasEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SchemasClient>;
      void init(const SchemasClientConfiguration& clientConfiguration);

      SchemasClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SchemasEndpointProviderBase> m_endpointProvider;
  };

} // namespace Schemas
} // namespace Aws
