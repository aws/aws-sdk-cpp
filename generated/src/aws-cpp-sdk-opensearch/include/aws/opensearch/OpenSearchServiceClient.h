/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/OpenSearchServiceServiceClientModel.h>

namespace Aws
{
namespace OpenSearchService
{
  /**
   * <p>Use the Amazon OpenSearch Service configuration API to create, configure, and
   * manage OpenSearch Service domains. The endpoint for configuration service
   * requests is Region specific: es.<i>region</i>.amazonaws.com. For example,
   * es.us-east-1.amazonaws.com. For a current list of supported Regions and
   * endpoints, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#service-regions">Amazon
   * Web Services service endpoints</a>.</p>
   */
  class AWS_OPENSEARCHSERVICE_API OpenSearchServiceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<OpenSearchServiceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef OpenSearchServiceClientConfiguration ClientConfigurationType;
      typedef OpenSearchServiceEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpenSearchServiceClient(const Aws::OpenSearchService::OpenSearchServiceClientConfiguration& clientConfiguration = Aws::OpenSearchService::OpenSearchServiceClientConfiguration(),
                                std::shared_ptr<OpenSearchServiceEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpenSearchServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                std::shared_ptr<OpenSearchServiceEndpointProviderBase> endpointProvider = nullptr,
                                const Aws::OpenSearchService::OpenSearchServiceClientConfiguration& clientConfiguration = Aws::OpenSearchService::OpenSearchServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OpenSearchServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                std::shared_ptr<OpenSearchServiceEndpointProviderBase> endpointProvider = nullptr,
                                const Aws::OpenSearchService::OpenSearchServiceClientConfiguration& clientConfiguration = Aws::OpenSearchService::OpenSearchServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpenSearchServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpenSearchServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OpenSearchServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~OpenSearchServiceClient();

        /**
         * <p>Allows the destination Amazon OpenSearch Service domain owner to accept an
         * inbound cross-cluster search connection request. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/cross-cluster-search.html">Cross-cluster
         * search for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AcceptInboundConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptInboundConnectionOutcome AcceptInboundConnection(const Model::AcceptInboundConnectionRequest& request) const;

        /**
         * A Callable wrapper for AcceptInboundConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AcceptInboundConnectionRequestT = Model::AcceptInboundConnectionRequest>
        Model::AcceptInboundConnectionOutcomeCallable AcceptInboundConnectionCallable(const AcceptInboundConnectionRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::AcceptInboundConnection, request);
        }

        /**
         * An Async wrapper for AcceptInboundConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcceptInboundConnectionRequestT = Model::AcceptInboundConnectionRequest>
        void AcceptInboundConnectionAsync(const AcceptInboundConnectionRequestT& request, const AcceptInboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::AcceptInboundConnection, request, handler, context);
        }

        /**
         * <p>Creates a new direct-query data source to the specified domain. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/direct-query-s3-creating.html">Creating
         * Amazon OpenSearch Service data source integrations with Amazon
         * S3</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AddDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddDataSourceOutcome AddDataSource(const Model::AddDataSourceRequest& request) const;

        /**
         * A Callable wrapper for AddDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddDataSourceRequestT = Model::AddDataSourceRequest>
        Model::AddDataSourceOutcomeCallable AddDataSourceCallable(const AddDataSourceRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::AddDataSource, request);
        }

        /**
         * An Async wrapper for AddDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddDataSourceRequestT = Model::AddDataSourceRequest>
        void AddDataSourceAsync(const AddDataSourceRequestT& request, const AddDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::AddDataSource, request, handler, context);
        }

        /**
         * <p>Attaches tags to an existing Amazon OpenSearch Service domain. Tags are a set
         * of case-sensitive key-value pairs. A domain can have up to 10 tags. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/managedomains-awsresourcetagging.html">Tagging
         * Amazon OpenSearch Service domains</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AddTags">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsOutcome AddTags(const Model::AddTagsRequest& request) const;

        /**
         * A Callable wrapper for AddTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddTagsRequestT = Model::AddTagsRequest>
        Model::AddTagsOutcomeCallable AddTagsCallable(const AddTagsRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::AddTags, request);
        }

        /**
         * An Async wrapper for AddTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddTagsRequestT = Model::AddTagsRequest>
        void AddTagsAsync(const AddTagsRequestT& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::AddTags, request, handler, context);
        }

        /**
         * <p>Associates a package with an Amazon OpenSearch Service domain. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/custom-packages.html">Custom
         * packages for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AssociatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePackageOutcome AssociatePackage(const Model::AssociatePackageRequest& request) const;

        /**
         * A Callable wrapper for AssociatePackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociatePackageRequestT = Model::AssociatePackageRequest>
        Model::AssociatePackageOutcomeCallable AssociatePackageCallable(const AssociatePackageRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::AssociatePackage, request);
        }

        /**
         * An Async wrapper for AssociatePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociatePackageRequestT = Model::AssociatePackageRequest>
        void AssociatePackageAsync(const AssociatePackageRequestT& request, const AssociatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::AssociatePackage, request, handler, context);
        }

        /**
         * <p>Provides access to an Amazon OpenSearch Service domain through the use of an
         * interface VPC endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AuthorizeVpcEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::AuthorizeVpcEndpointAccessOutcome AuthorizeVpcEndpointAccess(const Model::AuthorizeVpcEndpointAccessRequest& request) const;

        /**
         * A Callable wrapper for AuthorizeVpcEndpointAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AuthorizeVpcEndpointAccessRequestT = Model::AuthorizeVpcEndpointAccessRequest>
        Model::AuthorizeVpcEndpointAccessOutcomeCallable AuthorizeVpcEndpointAccessCallable(const AuthorizeVpcEndpointAccessRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::AuthorizeVpcEndpointAccess, request);
        }

        /**
         * An Async wrapper for AuthorizeVpcEndpointAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AuthorizeVpcEndpointAccessRequestT = Model::AuthorizeVpcEndpointAccessRequest>
        void AuthorizeVpcEndpointAccessAsync(const AuthorizeVpcEndpointAccessRequestT& request, const AuthorizeVpcEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::AuthorizeVpcEndpointAccess, request, handler, context);
        }

        /**
         * <p>Cancels a pending configuration change on an Amazon OpenSearch Service
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CancelDomainConfigChange">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelDomainConfigChangeOutcome CancelDomainConfigChange(const Model::CancelDomainConfigChangeRequest& request) const;

        /**
         * A Callable wrapper for CancelDomainConfigChange that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelDomainConfigChangeRequestT = Model::CancelDomainConfigChangeRequest>
        Model::CancelDomainConfigChangeOutcomeCallable CancelDomainConfigChangeCallable(const CancelDomainConfigChangeRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::CancelDomainConfigChange, request);
        }

        /**
         * An Async wrapper for CancelDomainConfigChange that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelDomainConfigChangeRequestT = Model::CancelDomainConfigChangeRequest>
        void CancelDomainConfigChangeAsync(const CancelDomainConfigChangeRequestT& request, const CancelDomainConfigChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::CancelDomainConfigChange, request, handler, context);
        }

        /**
         * <p>Cancels a scheduled service software update for an Amazon OpenSearch Service
         * domain. You can only perform this operation before the
         * <code>AutomatedUpdateDate</code> and when the domain's <code>UpdateStatus</code>
         * is <code>PENDING_UPDATE</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/service-software.html">Service
         * software updates in Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CancelServiceSoftwareUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelServiceSoftwareUpdateOutcome CancelServiceSoftwareUpdate(const Model::CancelServiceSoftwareUpdateRequest& request) const;

        /**
         * A Callable wrapper for CancelServiceSoftwareUpdate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelServiceSoftwareUpdateRequestT = Model::CancelServiceSoftwareUpdateRequest>
        Model::CancelServiceSoftwareUpdateOutcomeCallable CancelServiceSoftwareUpdateCallable(const CancelServiceSoftwareUpdateRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::CancelServiceSoftwareUpdate, request);
        }

        /**
         * An Async wrapper for CancelServiceSoftwareUpdate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelServiceSoftwareUpdateRequestT = Model::CancelServiceSoftwareUpdateRequest>
        void CancelServiceSoftwareUpdateAsync(const CancelServiceSoftwareUpdateRequestT& request, const CancelServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::CancelServiceSoftwareUpdate, request, handler, context);
        }

        /**
         * <p>Creates an Amazon OpenSearch Service domain. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html">Creating
         * and managing Amazon OpenSearch Service domains</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CreateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest& request) const;

        /**
         * A Callable wrapper for CreateDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDomainRequestT = Model::CreateDomainRequest>
        Model::CreateDomainOutcomeCallable CreateDomainCallable(const CreateDomainRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::CreateDomain, request);
        }

        /**
         * An Async wrapper for CreateDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDomainRequestT = Model::CreateDomainRequest>
        void CreateDomainAsync(const CreateDomainRequestT& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::CreateDomain, request, handler, context);
        }

        /**
         * <p>Creates a new cross-cluster search connection from a source Amazon OpenSearch
         * Service domain to a destination domain. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/cross-cluster-search.html">Cross-cluster
         * search for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CreateOutboundConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOutboundConnectionOutcome CreateOutboundConnection(const Model::CreateOutboundConnectionRequest& request) const;

        /**
         * A Callable wrapper for CreateOutboundConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateOutboundConnectionRequestT = Model::CreateOutboundConnectionRequest>
        Model::CreateOutboundConnectionOutcomeCallable CreateOutboundConnectionCallable(const CreateOutboundConnectionRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::CreateOutboundConnection, request);
        }

        /**
         * An Async wrapper for CreateOutboundConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateOutboundConnectionRequestT = Model::CreateOutboundConnectionRequest>
        void CreateOutboundConnectionAsync(const CreateOutboundConnectionRequestT& request, const CreateOutboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::CreateOutboundConnection, request, handler, context);
        }

        /**
         * <p>Creates a package for use with Amazon OpenSearch Service domains. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/custom-packages.html">Custom
         * packages for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CreatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePackageOutcome CreatePackage(const Model::CreatePackageRequest& request) const;

        /**
         * A Callable wrapper for CreatePackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePackageRequestT = Model::CreatePackageRequest>
        Model::CreatePackageOutcomeCallable CreatePackageCallable(const CreatePackageRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::CreatePackage, request);
        }

        /**
         * An Async wrapper for CreatePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePackageRequestT = Model::CreatePackageRequest>
        void CreatePackageAsync(const CreatePackageRequestT& request, const CreatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::CreatePackage, request, handler, context);
        }

        /**
         * <p>Creates an Amazon OpenSearch Service-managed VPC endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CreateVpcEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcEndpointOutcome CreateVpcEndpoint(const Model::CreateVpcEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateVpcEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVpcEndpointRequestT = Model::CreateVpcEndpointRequest>
        Model::CreateVpcEndpointOutcomeCallable CreateVpcEndpointCallable(const CreateVpcEndpointRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::CreateVpcEndpoint, request);
        }

        /**
         * An Async wrapper for CreateVpcEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVpcEndpointRequestT = Model::CreateVpcEndpointRequest>
        void CreateVpcEndpointAsync(const CreateVpcEndpointRequestT& request, const CreateVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::CreateVpcEndpoint, request, handler, context);
        }

        /**
         * <p>Deletes a direct-query data source. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/direct-query-s3-delete.html">Deleting
         * an Amazon OpenSearch Service data source with Amazon S3</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DeleteDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataSourceOutcome DeleteDataSource(const Model::DeleteDataSourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataSourceRequestT = Model::DeleteDataSourceRequest>
        Model::DeleteDataSourceOutcomeCallable DeleteDataSourceCallable(const DeleteDataSourceRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::DeleteDataSource, request);
        }

        /**
         * An Async wrapper for DeleteDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataSourceRequestT = Model::DeleteDataSourceRequest>
        void DeleteDataSourceAsync(const DeleteDataSourceRequestT& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::DeleteDataSource, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon OpenSearch Service domain and all of its data. You can't
         * recover a domain after you delete it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DeleteDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest& request) const;

        /**
         * A Callable wrapper for DeleteDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDomainRequestT = Model::DeleteDomainRequest>
        Model::DeleteDomainOutcomeCallable DeleteDomainCallable(const DeleteDomainRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::DeleteDomain, request);
        }

        /**
         * An Async wrapper for DeleteDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDomainRequestT = Model::DeleteDomainRequest>
        void DeleteDomainAsync(const DeleteDomainRequestT& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::DeleteDomain, request, handler, context);
        }

        /**
         * <p>Allows the destination Amazon OpenSearch Service domain owner to delete an
         * existing inbound cross-cluster search connection. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/cross-cluster-search.html">Cross-cluster
         * search for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DeleteInboundConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInboundConnectionOutcome DeleteInboundConnection(const Model::DeleteInboundConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteInboundConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInboundConnectionRequestT = Model::DeleteInboundConnectionRequest>
        Model::DeleteInboundConnectionOutcomeCallable DeleteInboundConnectionCallable(const DeleteInboundConnectionRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::DeleteInboundConnection, request);
        }

        /**
         * An Async wrapper for DeleteInboundConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInboundConnectionRequestT = Model::DeleteInboundConnectionRequest>
        void DeleteInboundConnectionAsync(const DeleteInboundConnectionRequestT& request, const DeleteInboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::DeleteInboundConnection, request, handler, context);
        }

        /**
         * <p>Allows the source Amazon OpenSearch Service domain owner to delete an
         * existing outbound cross-cluster search connection. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/cross-cluster-search.html">Cross-cluster
         * search for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DeleteOutboundConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOutboundConnectionOutcome DeleteOutboundConnection(const Model::DeleteOutboundConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteOutboundConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteOutboundConnectionRequestT = Model::DeleteOutboundConnectionRequest>
        Model::DeleteOutboundConnectionOutcomeCallable DeleteOutboundConnectionCallable(const DeleteOutboundConnectionRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::DeleteOutboundConnection, request);
        }

        /**
         * An Async wrapper for DeleteOutboundConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteOutboundConnectionRequestT = Model::DeleteOutboundConnectionRequest>
        void DeleteOutboundConnectionAsync(const DeleteOutboundConnectionRequestT& request, const DeleteOutboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::DeleteOutboundConnection, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon OpenSearch Service package. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/custom-packages.html">Custom
         * packages for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DeletePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePackageOutcome DeletePackage(const Model::DeletePackageRequest& request) const;

        /**
         * A Callable wrapper for DeletePackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePackageRequestT = Model::DeletePackageRequest>
        Model::DeletePackageOutcomeCallable DeletePackageCallable(const DeletePackageRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::DeletePackage, request);
        }

        /**
         * An Async wrapper for DeletePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePackageRequestT = Model::DeletePackageRequest>
        void DeletePackageAsync(const DeletePackageRequestT& request, const DeletePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::DeletePackage, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon OpenSearch Service-managed interface VPC
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DeleteVpcEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcEndpointOutcome DeleteVpcEndpoint(const Model::DeleteVpcEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteVpcEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVpcEndpointRequestT = Model::DeleteVpcEndpointRequest>
        Model::DeleteVpcEndpointOutcomeCallable DeleteVpcEndpointCallable(const DeleteVpcEndpointRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::DeleteVpcEndpoint, request);
        }

        /**
         * An Async wrapper for DeleteVpcEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVpcEndpointRequestT = Model::DeleteVpcEndpointRequest>
        void DeleteVpcEndpointAsync(const DeleteVpcEndpointRequestT& request, const DeleteVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::DeleteVpcEndpoint, request, handler, context);
        }

        /**
         * <p>Describes the domain configuration for the specified Amazon OpenSearch
         * Service domain, including the domain ID, domain service endpoint, and domain
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainOutcome DescribeDomain(const Model::DescribeDomainRequest& request) const;

        /**
         * A Callable wrapper for DescribeDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDomainRequestT = Model::DescribeDomainRequest>
        Model::DescribeDomainOutcomeCallable DescribeDomainCallable(const DescribeDomainRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::DescribeDomain, request);
        }

        /**
         * An Async wrapper for DescribeDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDomainRequestT = Model::DescribeDomainRequest>
        void DescribeDomainAsync(const DescribeDomainRequestT& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::DescribeDomain, request, handler, context);
        }

        /**
         * <p>Returns the list of optimizations that Auto-Tune has made to an Amazon
         * OpenSearch Service domain. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html">Auto-Tune
         * for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomainAutoTunes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainAutoTunesOutcome DescribeDomainAutoTunes(const Model::DescribeDomainAutoTunesRequest& request) const;

        /**
         * A Callable wrapper for DescribeDomainAutoTunes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDomainAutoTunesRequestT = Model::DescribeDomainAutoTunesRequest>
        Model::DescribeDomainAutoTunesOutcomeCallable DescribeDomainAutoTunesCallable(const DescribeDomainAutoTunesRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::DescribeDomainAutoTunes, request);
        }

        /**
         * An Async wrapper for DescribeDomainAutoTunes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDomainAutoTunesRequestT = Model::DescribeDomainAutoTunesRequest>
        void DescribeDomainAutoTunesAsync(const DescribeDomainAutoTunesRequestT& request, const DescribeDomainAutoTunesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::DescribeDomainAutoTunes, request, handler, context);
        }

        /**
         * <p>Returns information about the current blue/green deployment happening on an
         * Amazon OpenSearch Service domain. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/managedomains-configuration-changes.html">Making
         * configuration changes in Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomainChangeProgress">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainChangeProgressOutcome DescribeDomainChangeProgress(const Model::DescribeDomainChangeProgressRequest& request) const;

        /**
         * A Callable wrapper for DescribeDomainChangeProgress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDomainChangeProgressRequestT = Model::DescribeDomainChangeProgressRequest>
        Model::DescribeDomainChangeProgressOutcomeCallable DescribeDomainChangeProgressCallable(const DescribeDomainChangeProgressRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::DescribeDomainChangeProgress, request);
        }

        /**
         * An Async wrapper for DescribeDomainChangeProgress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDomainChangeProgressRequestT = Model::DescribeDomainChangeProgressRequest>
        void DescribeDomainChangeProgressAsync(const DescribeDomainChangeProgressRequestT& request, const DescribeDomainChangeProgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::DescribeDomainChangeProgress, request, handler, context);
        }

        /**
         * <p>Returns the configuration of an Amazon OpenSearch Service
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomainConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainConfigOutcome DescribeDomainConfig(const Model::DescribeDomainConfigRequest& request) const;

        /**
         * A Callable wrapper for DescribeDomainConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDomainConfigRequestT = Model::DescribeDomainConfigRequest>
        Model::DescribeDomainConfigOutcomeCallable DescribeDomainConfigCallable(const DescribeDomainConfigRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::DescribeDomainConfig, request);
        }

        /**
         * An Async wrapper for DescribeDomainConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDomainConfigRequestT = Model::DescribeDomainConfigRequest>
        void DescribeDomainConfigAsync(const DescribeDomainConfigRequestT& request, const DescribeDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::DescribeDomainConfig, request, handler, context);
        }

        /**
         * <p>Returns information about domain and node health, the standby Availability
         * Zone, number of nodes per Availability Zone, and shard count per
         * node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomainHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainHealthOutcome DescribeDomainHealth(const Model::DescribeDomainHealthRequest& request) const;

        /**
         * A Callable wrapper for DescribeDomainHealth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDomainHealthRequestT = Model::DescribeDomainHealthRequest>
        Model::DescribeDomainHealthOutcomeCallable DescribeDomainHealthCallable(const DescribeDomainHealthRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::DescribeDomainHealth, request);
        }

        /**
         * An Async wrapper for DescribeDomainHealth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDomainHealthRequestT = Model::DescribeDomainHealthRequest>
        void DescribeDomainHealthAsync(const DescribeDomainHealthRequestT& request, const DescribeDomainHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::DescribeDomainHealth, request, handler, context);
        }

        /**
         * <p>Returns information about domain and nodes, including data nodes, master
         * nodes, ultrawarm nodes, Availability Zone(s), standby nodes, node
         * configurations, and node states.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomainNodes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainNodesOutcome DescribeDomainNodes(const Model::DescribeDomainNodesRequest& request) const;

        /**
         * A Callable wrapper for DescribeDomainNodes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDomainNodesRequestT = Model::DescribeDomainNodesRequest>
        Model::DescribeDomainNodesOutcomeCallable DescribeDomainNodesCallable(const DescribeDomainNodesRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::DescribeDomainNodes, request);
        }

        /**
         * An Async wrapper for DescribeDomainNodes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDomainNodesRequestT = Model::DescribeDomainNodesRequest>
        void DescribeDomainNodesAsync(const DescribeDomainNodesRequestT& request, const DescribeDomainNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::DescribeDomainNodes, request, handler, context);
        }

        /**
         * <p>Returns domain configuration information about the specified Amazon
         * OpenSearch Service domains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainsOutcome DescribeDomains(const Model::DescribeDomainsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDomainsRequestT = Model::DescribeDomainsRequest>
        Model::DescribeDomainsOutcomeCallable DescribeDomainsCallable(const DescribeDomainsRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::DescribeDomains, request);
        }

        /**
         * An Async wrapper for DescribeDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDomainsRequestT = Model::DescribeDomainsRequest>
        void DescribeDomainsAsync(const DescribeDomainsRequestT& request, const DescribeDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::DescribeDomains, request, handler, context);
        }

        /**
         * <p>Describes the progress of a pre-update dry run analysis on an Amazon
         * OpenSearch Service domain. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/managedomains-configuration-changes#dryrun">Determining
         * whether a change will cause a blue/green deployment</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDryRunProgress">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDryRunProgressOutcome DescribeDryRunProgress(const Model::DescribeDryRunProgressRequest& request) const;

        /**
         * A Callable wrapper for DescribeDryRunProgress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDryRunProgressRequestT = Model::DescribeDryRunProgressRequest>
        Model::DescribeDryRunProgressOutcomeCallable DescribeDryRunProgressCallable(const DescribeDryRunProgressRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::DescribeDryRunProgress, request);
        }

        /**
         * An Async wrapper for DescribeDryRunProgress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDryRunProgressRequestT = Model::DescribeDryRunProgressRequest>
        void DescribeDryRunProgressAsync(const DescribeDryRunProgressRequestT& request, const DescribeDryRunProgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::DescribeDryRunProgress, request, handler, context);
        }

        /**
         * <p>Lists all the inbound cross-cluster search connections for a destination
         * (remote) Amazon OpenSearch Service domain. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/cross-cluster-search.html">Cross-cluster
         * search for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeInboundConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInboundConnectionsOutcome DescribeInboundConnections(const Model::DescribeInboundConnectionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeInboundConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInboundConnectionsRequestT = Model::DescribeInboundConnectionsRequest>
        Model::DescribeInboundConnectionsOutcomeCallable DescribeInboundConnectionsCallable(const DescribeInboundConnectionsRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::DescribeInboundConnections, request);
        }

        /**
         * An Async wrapper for DescribeInboundConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInboundConnectionsRequestT = Model::DescribeInboundConnectionsRequest>
        void DescribeInboundConnectionsAsync(const DescribeInboundConnectionsRequestT& request, const DescribeInboundConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::DescribeInboundConnections, request, handler, context);
        }

        /**
         * <p>Describes the instance count, storage, and master node limits for a given
         * OpenSearch or Elasticsearch version and instance type.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeInstanceTypeLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceTypeLimitsOutcome DescribeInstanceTypeLimits(const Model::DescribeInstanceTypeLimitsRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstanceTypeLimits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInstanceTypeLimitsRequestT = Model::DescribeInstanceTypeLimitsRequest>
        Model::DescribeInstanceTypeLimitsOutcomeCallable DescribeInstanceTypeLimitsCallable(const DescribeInstanceTypeLimitsRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::DescribeInstanceTypeLimits, request);
        }

        /**
         * An Async wrapper for DescribeInstanceTypeLimits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInstanceTypeLimitsRequestT = Model::DescribeInstanceTypeLimitsRequest>
        void DescribeInstanceTypeLimitsAsync(const DescribeInstanceTypeLimitsRequestT& request, const DescribeInstanceTypeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::DescribeInstanceTypeLimits, request, handler, context);
        }

        /**
         * <p>Lists all the outbound cross-cluster connections for a local (source) Amazon
         * OpenSearch Service domain. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/cross-cluster-search.html">Cross-cluster
         * search for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeOutboundConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOutboundConnectionsOutcome DescribeOutboundConnections(const Model::DescribeOutboundConnectionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeOutboundConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeOutboundConnectionsRequestT = Model::DescribeOutboundConnectionsRequest>
        Model::DescribeOutboundConnectionsOutcomeCallable DescribeOutboundConnectionsCallable(const DescribeOutboundConnectionsRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::DescribeOutboundConnections, request);
        }

        /**
         * An Async wrapper for DescribeOutboundConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOutboundConnectionsRequestT = Model::DescribeOutboundConnectionsRequest>
        void DescribeOutboundConnectionsAsync(const DescribeOutboundConnectionsRequestT& request, const DescribeOutboundConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::DescribeOutboundConnections, request, handler, context);
        }

        /**
         * <p>Describes all packages available to OpenSearch Service. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/custom-packages.html">Custom
         * packages for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribePackages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePackagesOutcome DescribePackages(const Model::DescribePackagesRequest& request) const;

        /**
         * A Callable wrapper for DescribePackages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePackagesRequestT = Model::DescribePackagesRequest>
        Model::DescribePackagesOutcomeCallable DescribePackagesCallable(const DescribePackagesRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::DescribePackages, request);
        }

        /**
         * An Async wrapper for DescribePackages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePackagesRequestT = Model::DescribePackagesRequest>
        void DescribePackagesAsync(const DescribePackagesRequestT& request, const DescribePackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::DescribePackages, request, handler, context);
        }

        /**
         * <p>Describes the available Amazon OpenSearch Service Reserved Instance offerings
         * for a given Region. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/ri.html">Reserved
         * Instances in Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeReservedInstanceOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedInstanceOfferingsOutcome DescribeReservedInstanceOfferings(const Model::DescribeReservedInstanceOfferingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeReservedInstanceOfferings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeReservedInstanceOfferingsRequestT = Model::DescribeReservedInstanceOfferingsRequest>
        Model::DescribeReservedInstanceOfferingsOutcomeCallable DescribeReservedInstanceOfferingsCallable(const DescribeReservedInstanceOfferingsRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::DescribeReservedInstanceOfferings, request);
        }

        /**
         * An Async wrapper for DescribeReservedInstanceOfferings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReservedInstanceOfferingsRequestT = Model::DescribeReservedInstanceOfferingsRequest>
        void DescribeReservedInstanceOfferingsAsync(const DescribeReservedInstanceOfferingsRequestT& request, const DescribeReservedInstanceOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::DescribeReservedInstanceOfferings, request, handler, context);
        }

        /**
         * <p>Describes the Amazon OpenSearch Service instances that you have reserved in a
         * given Region. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/ri.html">Reserved
         * Instances in Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeReservedInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservedInstancesOutcome DescribeReservedInstances(const Model::DescribeReservedInstancesRequest& request) const;

        /**
         * A Callable wrapper for DescribeReservedInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeReservedInstancesRequestT = Model::DescribeReservedInstancesRequest>
        Model::DescribeReservedInstancesOutcomeCallable DescribeReservedInstancesCallable(const DescribeReservedInstancesRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::DescribeReservedInstances, request);
        }

        /**
         * An Async wrapper for DescribeReservedInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReservedInstancesRequestT = Model::DescribeReservedInstancesRequest>
        void DescribeReservedInstancesAsync(const DescribeReservedInstancesRequestT& request, const DescribeReservedInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::DescribeReservedInstances, request, handler, context);
        }

        /**
         * <p>Describes one or more Amazon OpenSearch Service-managed VPC
         * endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeVpcEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcEndpointsOutcome DescribeVpcEndpoints(const Model::DescribeVpcEndpointsRequest& request) const;

        /**
         * A Callable wrapper for DescribeVpcEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeVpcEndpointsRequestT = Model::DescribeVpcEndpointsRequest>
        Model::DescribeVpcEndpointsOutcomeCallable DescribeVpcEndpointsCallable(const DescribeVpcEndpointsRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::DescribeVpcEndpoints, request);
        }

        /**
         * An Async wrapper for DescribeVpcEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeVpcEndpointsRequestT = Model::DescribeVpcEndpointsRequest>
        void DescribeVpcEndpointsAsync(const DescribeVpcEndpointsRequestT& request, const DescribeVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::DescribeVpcEndpoints, request, handler, context);
        }

        /**
         * <p>Removes a package from the specified Amazon OpenSearch Service domain. The
         * package can't be in use with any OpenSearch index for the dissociation to
         * succeed. The package is still available in OpenSearch Service for association
         * later. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/custom-packages.html">Custom
         * packages for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DissociatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DissociatePackageOutcome DissociatePackage(const Model::DissociatePackageRequest& request) const;

        /**
         * A Callable wrapper for DissociatePackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DissociatePackageRequestT = Model::DissociatePackageRequest>
        Model::DissociatePackageOutcomeCallable DissociatePackageCallable(const DissociatePackageRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::DissociatePackage, request);
        }

        /**
         * An Async wrapper for DissociatePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DissociatePackageRequestT = Model::DissociatePackageRequest>
        void DissociatePackageAsync(const DissociatePackageRequestT& request, const DissociatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::DissociatePackage, request, handler, context);
        }

        /**
         * <p>Returns a map of OpenSearch or Elasticsearch versions and the versions you
         * can upgrade them to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/GetCompatibleVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCompatibleVersionsOutcome GetCompatibleVersions(const Model::GetCompatibleVersionsRequest& request) const;

        /**
         * A Callable wrapper for GetCompatibleVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCompatibleVersionsRequestT = Model::GetCompatibleVersionsRequest>
        Model::GetCompatibleVersionsOutcomeCallable GetCompatibleVersionsCallable(const GetCompatibleVersionsRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::GetCompatibleVersions, request);
        }

        /**
         * An Async wrapper for GetCompatibleVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCompatibleVersionsRequestT = Model::GetCompatibleVersionsRequest>
        void GetCompatibleVersionsAsync(const GetCompatibleVersionsRequestT& request, const GetCompatibleVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::GetCompatibleVersions, request, handler, context);
        }

        /**
         * <p>Retrieves information about a direct query data source.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/GetDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataSourceOutcome GetDataSource(const Model::GetDataSourceRequest& request) const;

        /**
         * A Callable wrapper for GetDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataSourceRequestT = Model::GetDataSourceRequest>
        Model::GetDataSourceOutcomeCallable GetDataSourceCallable(const GetDataSourceRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::GetDataSource, request);
        }

        /**
         * An Async wrapper for GetDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataSourceRequestT = Model::GetDataSourceRequest>
        void GetDataSourceAsync(const GetDataSourceRequestT& request, const GetDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::GetDataSource, request, handler, context);
        }

        /**
         * <p>The status of the maintenance action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/GetDomainMaintenanceStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainMaintenanceStatusOutcome GetDomainMaintenanceStatus(const Model::GetDomainMaintenanceStatusRequest& request) const;

        /**
         * A Callable wrapper for GetDomainMaintenanceStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDomainMaintenanceStatusRequestT = Model::GetDomainMaintenanceStatusRequest>
        Model::GetDomainMaintenanceStatusOutcomeCallable GetDomainMaintenanceStatusCallable(const GetDomainMaintenanceStatusRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::GetDomainMaintenanceStatus, request);
        }

        /**
         * An Async wrapper for GetDomainMaintenanceStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDomainMaintenanceStatusRequestT = Model::GetDomainMaintenanceStatusRequest>
        void GetDomainMaintenanceStatusAsync(const GetDomainMaintenanceStatusRequestT& request, const GetDomainMaintenanceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::GetDomainMaintenanceStatus, request, handler, context);
        }

        /**
         * <p>Returns a list of Amazon OpenSearch Service package versions, along with
         * their creation time, commit message, and plugin properties (if the package is a
         * zip plugin package). For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/custom-packages.html">Custom
         * packages for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/GetPackageVersionHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPackageVersionHistoryOutcome GetPackageVersionHistory(const Model::GetPackageVersionHistoryRequest& request) const;

        /**
         * A Callable wrapper for GetPackageVersionHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPackageVersionHistoryRequestT = Model::GetPackageVersionHistoryRequest>
        Model::GetPackageVersionHistoryOutcomeCallable GetPackageVersionHistoryCallable(const GetPackageVersionHistoryRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::GetPackageVersionHistory, request);
        }

        /**
         * An Async wrapper for GetPackageVersionHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPackageVersionHistoryRequestT = Model::GetPackageVersionHistoryRequest>
        void GetPackageVersionHistoryAsync(const GetPackageVersionHistoryRequestT& request, const GetPackageVersionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::GetPackageVersionHistory, request, handler, context);
        }

        /**
         * <p>Retrieves the complete history of the last 10 upgrades performed on an Amazon
         * OpenSearch Service domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/GetUpgradeHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUpgradeHistoryOutcome GetUpgradeHistory(const Model::GetUpgradeHistoryRequest& request) const;

        /**
         * A Callable wrapper for GetUpgradeHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUpgradeHistoryRequestT = Model::GetUpgradeHistoryRequest>
        Model::GetUpgradeHistoryOutcomeCallable GetUpgradeHistoryCallable(const GetUpgradeHistoryRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::GetUpgradeHistory, request);
        }

        /**
         * An Async wrapper for GetUpgradeHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUpgradeHistoryRequestT = Model::GetUpgradeHistoryRequest>
        void GetUpgradeHistoryAsync(const GetUpgradeHistoryRequestT& request, const GetUpgradeHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::GetUpgradeHistory, request, handler, context);
        }

        /**
         * <p>Returns the most recent status of the last upgrade or upgrade eligibility
         * check performed on an Amazon OpenSearch Service domain.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/GetUpgradeStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUpgradeStatusOutcome GetUpgradeStatus(const Model::GetUpgradeStatusRequest& request) const;

        /**
         * A Callable wrapper for GetUpgradeStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUpgradeStatusRequestT = Model::GetUpgradeStatusRequest>
        Model::GetUpgradeStatusOutcomeCallable GetUpgradeStatusCallable(const GetUpgradeStatusRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::GetUpgradeStatus, request);
        }

        /**
         * An Async wrapper for GetUpgradeStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUpgradeStatusRequestT = Model::GetUpgradeStatusRequest>
        void GetUpgradeStatusAsync(const GetUpgradeStatusRequestT& request, const GetUpgradeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::GetUpgradeStatus, request, handler, context);
        }

        /**
         * <p>Lists direct-query data sources for a specific domain. For more information,
         * see For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/direct-query-s3.html">Working
         * with Amazon OpenSearch Service direct queries with Amazon S3</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListDataSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSourcesOutcome ListDataSources(const Model::ListDataSourcesRequest& request) const;

        /**
         * A Callable wrapper for ListDataSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataSourcesRequestT = Model::ListDataSourcesRequest>
        Model::ListDataSourcesOutcomeCallable ListDataSourcesCallable(const ListDataSourcesRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::ListDataSources, request);
        }

        /**
         * An Async wrapper for ListDataSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataSourcesRequestT = Model::ListDataSourcesRequest>
        void ListDataSourcesAsync(const ListDataSourcesRequestT& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::ListDataSources, request, handler, context);
        }

        /**
         * <p>A list of maintenance actions for the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListDomainMaintenances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainMaintenancesOutcome ListDomainMaintenances(const Model::ListDomainMaintenancesRequest& request) const;

        /**
         * A Callable wrapper for ListDomainMaintenances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDomainMaintenancesRequestT = Model::ListDomainMaintenancesRequest>
        Model::ListDomainMaintenancesOutcomeCallable ListDomainMaintenancesCallable(const ListDomainMaintenancesRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::ListDomainMaintenances, request);
        }

        /**
         * An Async wrapper for ListDomainMaintenances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDomainMaintenancesRequestT = Model::ListDomainMaintenancesRequest>
        void ListDomainMaintenancesAsync(const ListDomainMaintenancesRequestT& request, const ListDomainMaintenancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::ListDomainMaintenances, request, handler, context);
        }

        /**
         * <p>Returns the names of all Amazon OpenSearch Service domains owned by the
         * current user in the active Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListDomainNames">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainNamesOutcome ListDomainNames(const Model::ListDomainNamesRequest& request) const;

        /**
         * A Callable wrapper for ListDomainNames that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDomainNamesRequestT = Model::ListDomainNamesRequest>
        Model::ListDomainNamesOutcomeCallable ListDomainNamesCallable(const ListDomainNamesRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::ListDomainNames, request);
        }

        /**
         * An Async wrapper for ListDomainNames that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDomainNamesRequestT = Model::ListDomainNamesRequest>
        void ListDomainNamesAsync(const ListDomainNamesRequestT& request, const ListDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::ListDomainNames, request, handler, context);
        }

        /**
         * <p>Lists all Amazon OpenSearch Service domains associated with a given package.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/custom-packages.html">Custom
         * packages for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListDomainsForPackage">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainsForPackageOutcome ListDomainsForPackage(const Model::ListDomainsForPackageRequest& request) const;

        /**
         * A Callable wrapper for ListDomainsForPackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDomainsForPackageRequestT = Model::ListDomainsForPackageRequest>
        Model::ListDomainsForPackageOutcomeCallable ListDomainsForPackageCallable(const ListDomainsForPackageRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::ListDomainsForPackage, request);
        }

        /**
         * An Async wrapper for ListDomainsForPackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDomainsForPackageRequestT = Model::ListDomainsForPackageRequest>
        void ListDomainsForPackageAsync(const ListDomainsForPackageRequestT& request, const ListDomainsForPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::ListDomainsForPackage, request, handler, context);
        }

        /**
         * <p>Lists all instance types and available features for a given OpenSearch or
         * Elasticsearch version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListInstanceTypeDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceTypeDetailsOutcome ListInstanceTypeDetails(const Model::ListInstanceTypeDetailsRequest& request) const;

        /**
         * A Callable wrapper for ListInstanceTypeDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInstanceTypeDetailsRequestT = Model::ListInstanceTypeDetailsRequest>
        Model::ListInstanceTypeDetailsOutcomeCallable ListInstanceTypeDetailsCallable(const ListInstanceTypeDetailsRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::ListInstanceTypeDetails, request);
        }

        /**
         * An Async wrapper for ListInstanceTypeDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInstanceTypeDetailsRequestT = Model::ListInstanceTypeDetailsRequest>
        void ListInstanceTypeDetailsAsync(const ListInstanceTypeDetailsRequestT& request, const ListInstanceTypeDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::ListInstanceTypeDetails, request, handler, context);
        }

        /**
         * <p>Lists all packages associated with an Amazon OpenSearch Service domain. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/custom-packages.html">Custom
         * packages for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListPackagesForDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackagesForDomainOutcome ListPackagesForDomain(const Model::ListPackagesForDomainRequest& request) const;

        /**
         * A Callable wrapper for ListPackagesForDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPackagesForDomainRequestT = Model::ListPackagesForDomainRequest>
        Model::ListPackagesForDomainOutcomeCallable ListPackagesForDomainCallable(const ListPackagesForDomainRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::ListPackagesForDomain, request);
        }

        /**
         * An Async wrapper for ListPackagesForDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPackagesForDomainRequestT = Model::ListPackagesForDomainRequest>
        void ListPackagesForDomainAsync(const ListPackagesForDomainRequestT& request, const ListPackagesForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::ListPackagesForDomain, request, handler, context);
        }

        /**
         * <p>Retrieves a list of configuration changes that are scheduled for a domain.
         * These changes can be <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/service-software.html">service
         * software updates</a> or <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html#auto-tune-types">blue/green
         * Auto-Tune enhancements</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListScheduledActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListScheduledActionsOutcome ListScheduledActions(const Model::ListScheduledActionsRequest& request) const;

        /**
         * A Callable wrapper for ListScheduledActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListScheduledActionsRequestT = Model::ListScheduledActionsRequest>
        Model::ListScheduledActionsOutcomeCallable ListScheduledActionsCallable(const ListScheduledActionsRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::ListScheduledActions, request);
        }

        /**
         * An Async wrapper for ListScheduledActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListScheduledActionsRequestT = Model::ListScheduledActionsRequest>
        void ListScheduledActionsAsync(const ListScheduledActionsRequestT& request, const ListScheduledActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::ListScheduledActions, request, handler, context);
        }

        /**
         * <p>Returns all resource tags for an Amazon OpenSearch Service domain. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/managedomains-awsresourcetagging.html">Tagging
         * Amazon OpenSearch Service domains</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * A Callable wrapper for ListTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsRequestT = Model::ListTagsRequest>
        Model::ListTagsOutcomeCallable ListTagsCallable(const ListTagsRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::ListTags, request);
        }

        /**
         * An Async wrapper for ListTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsRequestT = Model::ListTagsRequest>
        void ListTagsAsync(const ListTagsRequestT& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::ListTags, request, handler, context);
        }

        /**
         * <p>Lists all versions of OpenSearch and Elasticsearch that Amazon OpenSearch
         * Service supports.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVersionsOutcome ListVersions(const Model::ListVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVersionsRequestT = Model::ListVersionsRequest>
        Model::ListVersionsOutcomeCallable ListVersionsCallable(const ListVersionsRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::ListVersions, request);
        }

        /**
         * An Async wrapper for ListVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVersionsRequestT = Model::ListVersionsRequest>
        void ListVersionsAsync(const ListVersionsRequestT& request, const ListVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::ListVersions, request, handler, context);
        }

        /**
         * <p>Retrieves information about each Amazon Web Services principal that is
         * allowed to access a given Amazon OpenSearch Service domain through the use of an
         * interface VPC endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListVpcEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVpcEndpointAccessOutcome ListVpcEndpointAccess(const Model::ListVpcEndpointAccessRequest& request) const;

        /**
         * A Callable wrapper for ListVpcEndpointAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVpcEndpointAccessRequestT = Model::ListVpcEndpointAccessRequest>
        Model::ListVpcEndpointAccessOutcomeCallable ListVpcEndpointAccessCallable(const ListVpcEndpointAccessRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::ListVpcEndpointAccess, request);
        }

        /**
         * An Async wrapper for ListVpcEndpointAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVpcEndpointAccessRequestT = Model::ListVpcEndpointAccessRequest>
        void ListVpcEndpointAccessAsync(const ListVpcEndpointAccessRequestT& request, const ListVpcEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::ListVpcEndpointAccess, request, handler, context);
        }

        /**
         * <p>Retrieves all Amazon OpenSearch Service-managed VPC endpoints in the current
         * Amazon Web Services account and Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListVpcEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVpcEndpointsOutcome ListVpcEndpoints(const Model::ListVpcEndpointsRequest& request) const;

        /**
         * A Callable wrapper for ListVpcEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVpcEndpointsRequestT = Model::ListVpcEndpointsRequest>
        Model::ListVpcEndpointsOutcomeCallable ListVpcEndpointsCallable(const ListVpcEndpointsRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::ListVpcEndpoints, request);
        }

        /**
         * An Async wrapper for ListVpcEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVpcEndpointsRequestT = Model::ListVpcEndpointsRequest>
        void ListVpcEndpointsAsync(const ListVpcEndpointsRequestT& request, const ListVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::ListVpcEndpoints, request, handler, context);
        }

        /**
         * <p>Retrieves all Amazon OpenSearch Service-managed VPC endpoints associated with
         * a particular domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListVpcEndpointsForDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVpcEndpointsForDomainOutcome ListVpcEndpointsForDomain(const Model::ListVpcEndpointsForDomainRequest& request) const;

        /**
         * A Callable wrapper for ListVpcEndpointsForDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVpcEndpointsForDomainRequestT = Model::ListVpcEndpointsForDomainRequest>
        Model::ListVpcEndpointsForDomainOutcomeCallable ListVpcEndpointsForDomainCallable(const ListVpcEndpointsForDomainRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::ListVpcEndpointsForDomain, request);
        }

        /**
         * An Async wrapper for ListVpcEndpointsForDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVpcEndpointsForDomainRequestT = Model::ListVpcEndpointsForDomainRequest>
        void ListVpcEndpointsForDomainAsync(const ListVpcEndpointsForDomainRequestT& request, const ListVpcEndpointsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::ListVpcEndpointsForDomain, request, handler, context);
        }

        /**
         * <p>Allows you to purchase Amazon OpenSearch Service Reserved
         * Instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/PurchaseReservedInstanceOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseReservedInstanceOfferingOutcome PurchaseReservedInstanceOffering(const Model::PurchaseReservedInstanceOfferingRequest& request) const;

        /**
         * A Callable wrapper for PurchaseReservedInstanceOffering that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PurchaseReservedInstanceOfferingRequestT = Model::PurchaseReservedInstanceOfferingRequest>
        Model::PurchaseReservedInstanceOfferingOutcomeCallable PurchaseReservedInstanceOfferingCallable(const PurchaseReservedInstanceOfferingRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::PurchaseReservedInstanceOffering, request);
        }

        /**
         * An Async wrapper for PurchaseReservedInstanceOffering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PurchaseReservedInstanceOfferingRequestT = Model::PurchaseReservedInstanceOfferingRequest>
        void PurchaseReservedInstanceOfferingAsync(const PurchaseReservedInstanceOfferingRequestT& request, const PurchaseReservedInstanceOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::PurchaseReservedInstanceOffering, request, handler, context);
        }

        /**
         * <p>Allows the remote Amazon OpenSearch Service domain owner to reject an inbound
         * cross-cluster connection request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/RejectInboundConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectInboundConnectionOutcome RejectInboundConnection(const Model::RejectInboundConnectionRequest& request) const;

        /**
         * A Callable wrapper for RejectInboundConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RejectInboundConnectionRequestT = Model::RejectInboundConnectionRequest>
        Model::RejectInboundConnectionOutcomeCallable RejectInboundConnectionCallable(const RejectInboundConnectionRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::RejectInboundConnection, request);
        }

        /**
         * An Async wrapper for RejectInboundConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RejectInboundConnectionRequestT = Model::RejectInboundConnectionRequest>
        void RejectInboundConnectionAsync(const RejectInboundConnectionRequestT& request, const RejectInboundConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::RejectInboundConnection, request, handler, context);
        }

        /**
         * <p>Removes the specified set of tags from an Amazon OpenSearch Service domain.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/managedomains.html#managedomains-awsresorcetagging">
         * Tagging Amazon OpenSearch Service domains</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/RemoveTags">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsOutcome RemoveTags(const Model::RemoveTagsRequest& request) const;

        /**
         * A Callable wrapper for RemoveTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveTagsRequestT = Model::RemoveTagsRequest>
        Model::RemoveTagsOutcomeCallable RemoveTagsCallable(const RemoveTagsRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::RemoveTags, request);
        }

        /**
         * An Async wrapper for RemoveTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveTagsRequestT = Model::RemoveTagsRequest>
        void RemoveTagsAsync(const RemoveTagsRequestT& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::RemoveTags, request, handler, context);
        }

        /**
         * <p>Revokes access to an Amazon OpenSearch Service domain that was provided
         * through an interface VPC endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/RevokeVpcEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeVpcEndpointAccessOutcome RevokeVpcEndpointAccess(const Model::RevokeVpcEndpointAccessRequest& request) const;

        /**
         * A Callable wrapper for RevokeVpcEndpointAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RevokeVpcEndpointAccessRequestT = Model::RevokeVpcEndpointAccessRequest>
        Model::RevokeVpcEndpointAccessOutcomeCallable RevokeVpcEndpointAccessCallable(const RevokeVpcEndpointAccessRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::RevokeVpcEndpointAccess, request);
        }

        /**
         * An Async wrapper for RevokeVpcEndpointAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RevokeVpcEndpointAccessRequestT = Model::RevokeVpcEndpointAccessRequest>
        void RevokeVpcEndpointAccessAsync(const RevokeVpcEndpointAccessRequestT& request, const RevokeVpcEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::RevokeVpcEndpointAccess, request, handler, context);
        }

        /**
         * <p>Starts the node maintenance process on the data node. These processes can
         * include a node reboot, an Opensearch or Elasticsearch process restart, or a
         * Dashboard or Kibana restart.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/StartDomainMaintenance">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDomainMaintenanceOutcome StartDomainMaintenance(const Model::StartDomainMaintenanceRequest& request) const;

        /**
         * A Callable wrapper for StartDomainMaintenance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDomainMaintenanceRequestT = Model::StartDomainMaintenanceRequest>
        Model::StartDomainMaintenanceOutcomeCallable StartDomainMaintenanceCallable(const StartDomainMaintenanceRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::StartDomainMaintenance, request);
        }

        /**
         * An Async wrapper for StartDomainMaintenance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDomainMaintenanceRequestT = Model::StartDomainMaintenanceRequest>
        void StartDomainMaintenanceAsync(const StartDomainMaintenanceRequestT& request, const StartDomainMaintenanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::StartDomainMaintenance, request, handler, context);
        }

        /**
         * <p>Schedules a service software update for an Amazon OpenSearch Service domain.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/service-software.html">Service
         * software updates in Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/StartServiceSoftwareUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::StartServiceSoftwareUpdateOutcome StartServiceSoftwareUpdate(const Model::StartServiceSoftwareUpdateRequest& request) const;

        /**
         * A Callable wrapper for StartServiceSoftwareUpdate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartServiceSoftwareUpdateRequestT = Model::StartServiceSoftwareUpdateRequest>
        Model::StartServiceSoftwareUpdateOutcomeCallable StartServiceSoftwareUpdateCallable(const StartServiceSoftwareUpdateRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::StartServiceSoftwareUpdate, request);
        }

        /**
         * An Async wrapper for StartServiceSoftwareUpdate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartServiceSoftwareUpdateRequestT = Model::StartServiceSoftwareUpdateRequest>
        void StartServiceSoftwareUpdateAsync(const StartServiceSoftwareUpdateRequestT& request, const StartServiceSoftwareUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::StartServiceSoftwareUpdate, request, handler, context);
        }

        /**
         * <p>Updates a direct-query data source. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/direct-query-s3-creating.html">Working
         * with Amazon OpenSearch Service data source integrations with Amazon
         * S3</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpdateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSourceOutcome UpdateDataSource(const Model::UpdateDataSourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDataSourceRequestT = Model::UpdateDataSourceRequest>
        Model::UpdateDataSourceOutcomeCallable UpdateDataSourceCallable(const UpdateDataSourceRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::UpdateDataSource, request);
        }

        /**
         * An Async wrapper for UpdateDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDataSourceRequestT = Model::UpdateDataSourceRequest>
        void UpdateDataSourceAsync(const UpdateDataSourceRequestT& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::UpdateDataSource, request, handler, context);
        }

        /**
         * <p>Modifies the cluster configuration of the specified Amazon OpenSearch Service
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpdateDomainConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainConfigOutcome UpdateDomainConfig(const Model::UpdateDomainConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateDomainConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDomainConfigRequestT = Model::UpdateDomainConfigRequest>
        Model::UpdateDomainConfigOutcomeCallable UpdateDomainConfigCallable(const UpdateDomainConfigRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::UpdateDomainConfig, request);
        }

        /**
         * An Async wrapper for UpdateDomainConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDomainConfigRequestT = Model::UpdateDomainConfigRequest>
        void UpdateDomainConfigAsync(const UpdateDomainConfigRequestT& request, const UpdateDomainConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::UpdateDomainConfig, request, handler, context);
        }

        /**
         * <p>Updates a package for use with Amazon OpenSearch Service domains. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/custom-packages.html">Custom
         * packages for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpdatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePackageOutcome UpdatePackage(const Model::UpdatePackageRequest& request) const;

        /**
         * A Callable wrapper for UpdatePackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePackageRequestT = Model::UpdatePackageRequest>
        Model::UpdatePackageOutcomeCallable UpdatePackageCallable(const UpdatePackageRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::UpdatePackage, request);
        }

        /**
         * An Async wrapper for UpdatePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePackageRequestT = Model::UpdatePackageRequest>
        void UpdatePackageAsync(const UpdatePackageRequestT& request, const UpdatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::UpdatePackage, request, handler, context);
        }

        /**
         * <p>Reschedules a planned domain configuration change for a later time. This
         * change can be a scheduled <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/service-software.html">service
         * software update</a> or a <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html#auto-tune-types">blue/green
         * Auto-Tune enhancement</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpdateScheduledAction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateScheduledActionOutcome UpdateScheduledAction(const Model::UpdateScheduledActionRequest& request) const;

        /**
         * A Callable wrapper for UpdateScheduledAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateScheduledActionRequestT = Model::UpdateScheduledActionRequest>
        Model::UpdateScheduledActionOutcomeCallable UpdateScheduledActionCallable(const UpdateScheduledActionRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::UpdateScheduledAction, request);
        }

        /**
         * An Async wrapper for UpdateScheduledAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateScheduledActionRequestT = Model::UpdateScheduledActionRequest>
        void UpdateScheduledActionAsync(const UpdateScheduledActionRequestT& request, const UpdateScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::UpdateScheduledAction, request, handler, context);
        }

        /**
         * <p>Modifies an Amazon OpenSearch Service-managed interface VPC
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpdateVpcEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVpcEndpointOutcome UpdateVpcEndpoint(const Model::UpdateVpcEndpointRequest& request) const;

        /**
         * A Callable wrapper for UpdateVpcEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateVpcEndpointRequestT = Model::UpdateVpcEndpointRequest>
        Model::UpdateVpcEndpointOutcomeCallable UpdateVpcEndpointCallable(const UpdateVpcEndpointRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::UpdateVpcEndpoint, request);
        }

        /**
         * An Async wrapper for UpdateVpcEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVpcEndpointRequestT = Model::UpdateVpcEndpointRequest>
        void UpdateVpcEndpointAsync(const UpdateVpcEndpointRequestT& request, const UpdateVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::UpdateVpcEndpoint, request, handler, context);
        }

        /**
         * <p>Allows you to either upgrade your Amazon OpenSearch Service domain or perform
         * an upgrade eligibility check to a compatible version of OpenSearch or
         * Elasticsearch.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpgradeDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UpgradeDomainOutcome UpgradeDomain(const Model::UpgradeDomainRequest& request) const;

        /**
         * A Callable wrapper for UpgradeDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpgradeDomainRequestT = Model::UpgradeDomainRequest>
        Model::UpgradeDomainOutcomeCallable UpgradeDomainCallable(const UpgradeDomainRequestT& request) const
        {
            return SubmitCallable(&OpenSearchServiceClient::UpgradeDomain, request);
        }

        /**
         * An Async wrapper for UpgradeDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpgradeDomainRequestT = Model::UpgradeDomainRequest>
        void UpgradeDomainAsync(const UpgradeDomainRequestT& request, const UpgradeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OpenSearchServiceClient::UpgradeDomain, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<OpenSearchServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<OpenSearchServiceClient>;
      void init(const OpenSearchServiceClientConfiguration& clientConfiguration);

      OpenSearchServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<OpenSearchServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace OpenSearchService
} // namespace Aws
