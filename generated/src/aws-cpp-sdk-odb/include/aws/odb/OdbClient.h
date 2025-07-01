/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/OdbServiceClientModel.h>

namespace Aws
{
namespace odb
{
  /**
   * <p>Oracle Database@Amazon Web Services is an offering that enables you to access
   * Oracle Exadata infrastructure managed by Oracle Cloud Infrastructure (OCI)
   * inside Amazon Web Services data centers. You can migrate your Oracle Exadata
   * workloads, establish low-latency connectivity with applications running on
   * Amazon Web Services, and integrate with Amazon Web Services services. For
   * example, you can run application servers in a virtual private cloud (VPC) and
   * access an Oracle Exadata system running in Oracle Database@Amazon Web Services.
   * You can get started with Oracle Database@Amazon Web Services by using the
   * familiar Amazon Web Services Management Console, APIs, or CLI.</p> <p>This
   * interface reference for Oracle Database@Amazon Web Services contains
   * documentation for a programming or command line interface that you can use to
   * manage Oracle Database@Amazon Web Services. Oracle Database@Amazon Web Services
   * is asynchronous, which means that some interfaces might require techniques such
   * as polling or callback functions to determine when a command has been applied.
   * The reference structure is as follows.</p>  <p>In this preview release
   * documentation, the links in the "See Also" sections do not work.</p>  <p>
   * <b>Oracle Database@Amazon Web Services API Reference</b> </p> <ul> <li> <p>For
   * the alphabetical list of API actions, see .</p> </li> <li> <p>For the
   * alphabetical list of data types, see .</p> </li> <li> <p>For a list of common
   * parameters, see <a>CommonParameters</a>.</p> </li> <li> <p>For descriptions of
   * the error codes, see <a>CommonErrors</a>.</p> </li> </ul>
   */
  class AWS_ODB_API OdbClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<OdbClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef OdbClientConfiguration ClientConfigurationType;
      typedef OdbEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OdbClient(const Aws::odb::OdbClientConfiguration& clientConfiguration = Aws::odb::OdbClientConfiguration(),
                  std::shared_ptr<OdbEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OdbClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<OdbEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::odb::OdbClientConfiguration& clientConfiguration = Aws::odb::OdbClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OdbClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<OdbEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::odb::OdbClientConfiguration& clientConfiguration = Aws::odb::OdbClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OdbClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OdbClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OdbClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~OdbClient();

        /**
         * <p>Registers the Amazon Web Services Marketplace token for your Amazon Web
         * Services account to activate your Oracle Database@Amazon Web Services
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/AcceptMarketplaceRegistration">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptMarketplaceRegistrationOutcome AcceptMarketplaceRegistration(const Model::AcceptMarketplaceRegistrationRequest& request) const;

        /**
         * A Callable wrapper for AcceptMarketplaceRegistration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AcceptMarketplaceRegistrationRequestT = Model::AcceptMarketplaceRegistrationRequest>
        Model::AcceptMarketplaceRegistrationOutcomeCallable AcceptMarketplaceRegistrationCallable(const AcceptMarketplaceRegistrationRequestT& request) const
        {
            return SubmitCallable(&OdbClient::AcceptMarketplaceRegistration, request);
        }

        /**
         * An Async wrapper for AcceptMarketplaceRegistration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcceptMarketplaceRegistrationRequestT = Model::AcceptMarketplaceRegistrationRequest>
        void AcceptMarketplaceRegistrationAsync(const AcceptMarketplaceRegistrationRequestT& request, const AcceptMarketplaceRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::AcceptMarketplaceRegistration, request, handler, context);
        }

        /**
         * <p>Creates a new Autonomous VM cluster in the specified Exadata
         * infrastructure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/CreateCloudAutonomousVmCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCloudAutonomousVmClusterOutcome CreateCloudAutonomousVmCluster(const Model::CreateCloudAutonomousVmClusterRequest& request) const;

        /**
         * A Callable wrapper for CreateCloudAutonomousVmCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCloudAutonomousVmClusterRequestT = Model::CreateCloudAutonomousVmClusterRequest>
        Model::CreateCloudAutonomousVmClusterOutcomeCallable CreateCloudAutonomousVmClusterCallable(const CreateCloudAutonomousVmClusterRequestT& request) const
        {
            return SubmitCallable(&OdbClient::CreateCloudAutonomousVmCluster, request);
        }

        /**
         * An Async wrapper for CreateCloudAutonomousVmCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCloudAutonomousVmClusterRequestT = Model::CreateCloudAutonomousVmClusterRequest>
        void CreateCloudAutonomousVmClusterAsync(const CreateCloudAutonomousVmClusterRequestT& request, const CreateCloudAutonomousVmClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::CreateCloudAutonomousVmCluster, request, handler, context);
        }

        /**
         * <p>Creates an Exadata infrastructure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/CreateCloudExadataInfrastructure">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCloudExadataInfrastructureOutcome CreateCloudExadataInfrastructure(const Model::CreateCloudExadataInfrastructureRequest& request) const;

        /**
         * A Callable wrapper for CreateCloudExadataInfrastructure that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCloudExadataInfrastructureRequestT = Model::CreateCloudExadataInfrastructureRequest>
        Model::CreateCloudExadataInfrastructureOutcomeCallable CreateCloudExadataInfrastructureCallable(const CreateCloudExadataInfrastructureRequestT& request) const
        {
            return SubmitCallable(&OdbClient::CreateCloudExadataInfrastructure, request);
        }

        /**
         * An Async wrapper for CreateCloudExadataInfrastructure that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCloudExadataInfrastructureRequestT = Model::CreateCloudExadataInfrastructureRequest>
        void CreateCloudExadataInfrastructureAsync(const CreateCloudExadataInfrastructureRequestT& request, const CreateCloudExadataInfrastructureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::CreateCloudExadataInfrastructure, request, handler, context);
        }

        /**
         * <p>Creates a VM cluster on the specified Exadata infrastructure.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/CreateCloudVmCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCloudVmClusterOutcome CreateCloudVmCluster(const Model::CreateCloudVmClusterRequest& request) const;

        /**
         * A Callable wrapper for CreateCloudVmCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCloudVmClusterRequestT = Model::CreateCloudVmClusterRequest>
        Model::CreateCloudVmClusterOutcomeCallable CreateCloudVmClusterCallable(const CreateCloudVmClusterRequestT& request) const
        {
            return SubmitCallable(&OdbClient::CreateCloudVmCluster, request);
        }

        /**
         * An Async wrapper for CreateCloudVmCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCloudVmClusterRequestT = Model::CreateCloudVmClusterRequest>
        void CreateCloudVmClusterAsync(const CreateCloudVmClusterRequestT& request, const CreateCloudVmClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::CreateCloudVmCluster, request, handler, context);
        }

        /**
         * <p>Creates an ODB network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/CreateOdbNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOdbNetworkOutcome CreateOdbNetwork(const Model::CreateOdbNetworkRequest& request) const;

        /**
         * A Callable wrapper for CreateOdbNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateOdbNetworkRequestT = Model::CreateOdbNetworkRequest>
        Model::CreateOdbNetworkOutcomeCallable CreateOdbNetworkCallable(const CreateOdbNetworkRequestT& request) const
        {
            return SubmitCallable(&OdbClient::CreateOdbNetwork, request);
        }

        /**
         * An Async wrapper for CreateOdbNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateOdbNetworkRequestT = Model::CreateOdbNetworkRequest>
        void CreateOdbNetworkAsync(const CreateOdbNetworkRequestT& request, const CreateOdbNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::CreateOdbNetwork, request, handler, context);
        }

        /**
         * <p>Creates a peering connection between an ODB network and either another ODB
         * network or a customer-owned VPC.</p> <p>A peering connection enables private
         * connectivity between the networks for application-tier
         * communication.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/CreateOdbPeeringConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOdbPeeringConnectionOutcome CreateOdbPeeringConnection(const Model::CreateOdbPeeringConnectionRequest& request) const;

        /**
         * A Callable wrapper for CreateOdbPeeringConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateOdbPeeringConnectionRequestT = Model::CreateOdbPeeringConnectionRequest>
        Model::CreateOdbPeeringConnectionOutcomeCallable CreateOdbPeeringConnectionCallable(const CreateOdbPeeringConnectionRequestT& request) const
        {
            return SubmitCallable(&OdbClient::CreateOdbPeeringConnection, request);
        }

        /**
         * An Async wrapper for CreateOdbPeeringConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateOdbPeeringConnectionRequestT = Model::CreateOdbPeeringConnectionRequest>
        void CreateOdbPeeringConnectionAsync(const CreateOdbPeeringConnectionRequestT& request, const CreateOdbPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::CreateOdbPeeringConnection, request, handler, context);
        }

        /**
         * <p>Deletes an Autonomous VM cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/DeleteCloudAutonomousVmCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCloudAutonomousVmClusterOutcome DeleteCloudAutonomousVmCluster(const Model::DeleteCloudAutonomousVmClusterRequest& request) const;

        /**
         * A Callable wrapper for DeleteCloudAutonomousVmCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCloudAutonomousVmClusterRequestT = Model::DeleteCloudAutonomousVmClusterRequest>
        Model::DeleteCloudAutonomousVmClusterOutcomeCallable DeleteCloudAutonomousVmClusterCallable(const DeleteCloudAutonomousVmClusterRequestT& request) const
        {
            return SubmitCallable(&OdbClient::DeleteCloudAutonomousVmCluster, request);
        }

        /**
         * An Async wrapper for DeleteCloudAutonomousVmCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCloudAutonomousVmClusterRequestT = Model::DeleteCloudAutonomousVmClusterRequest>
        void DeleteCloudAutonomousVmClusterAsync(const DeleteCloudAutonomousVmClusterRequestT& request, const DeleteCloudAutonomousVmClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::DeleteCloudAutonomousVmCluster, request, handler, context);
        }

        /**
         * <p>Deletes the specified Exadata infrastructure. Before you use this operation,
         * make sure to delete all of the VM clusters that are hosted on this Exadata
         * infrastructure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/DeleteCloudExadataInfrastructure">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCloudExadataInfrastructureOutcome DeleteCloudExadataInfrastructure(const Model::DeleteCloudExadataInfrastructureRequest& request) const;

        /**
         * A Callable wrapper for DeleteCloudExadataInfrastructure that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCloudExadataInfrastructureRequestT = Model::DeleteCloudExadataInfrastructureRequest>
        Model::DeleteCloudExadataInfrastructureOutcomeCallable DeleteCloudExadataInfrastructureCallable(const DeleteCloudExadataInfrastructureRequestT& request) const
        {
            return SubmitCallable(&OdbClient::DeleteCloudExadataInfrastructure, request);
        }

        /**
         * An Async wrapper for DeleteCloudExadataInfrastructure that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCloudExadataInfrastructureRequestT = Model::DeleteCloudExadataInfrastructureRequest>
        void DeleteCloudExadataInfrastructureAsync(const DeleteCloudExadataInfrastructureRequestT& request, const DeleteCloudExadataInfrastructureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::DeleteCloudExadataInfrastructure, request, handler, context);
        }

        /**
         * <p>Deletes the specified VM cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/DeleteCloudVmCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCloudVmClusterOutcome DeleteCloudVmCluster(const Model::DeleteCloudVmClusterRequest& request) const;

        /**
         * A Callable wrapper for DeleteCloudVmCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCloudVmClusterRequestT = Model::DeleteCloudVmClusterRequest>
        Model::DeleteCloudVmClusterOutcomeCallable DeleteCloudVmClusterCallable(const DeleteCloudVmClusterRequestT& request) const
        {
            return SubmitCallable(&OdbClient::DeleteCloudVmCluster, request);
        }

        /**
         * An Async wrapper for DeleteCloudVmCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCloudVmClusterRequestT = Model::DeleteCloudVmClusterRequest>
        void DeleteCloudVmClusterAsync(const DeleteCloudVmClusterRequestT& request, const DeleteCloudVmClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::DeleteCloudVmCluster, request, handler, context);
        }

        /**
         * <p>Deletes the specified ODB network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/DeleteOdbNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOdbNetworkOutcome DeleteOdbNetwork(const Model::DeleteOdbNetworkRequest& request) const;

        /**
         * A Callable wrapper for DeleteOdbNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteOdbNetworkRequestT = Model::DeleteOdbNetworkRequest>
        Model::DeleteOdbNetworkOutcomeCallable DeleteOdbNetworkCallable(const DeleteOdbNetworkRequestT& request) const
        {
            return SubmitCallable(&OdbClient::DeleteOdbNetwork, request);
        }

        /**
         * An Async wrapper for DeleteOdbNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteOdbNetworkRequestT = Model::DeleteOdbNetworkRequest>
        void DeleteOdbNetworkAsync(const DeleteOdbNetworkRequestT& request, const DeleteOdbNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::DeleteOdbNetwork, request, handler, context);
        }

        /**
         * <p>Deletes an ODB peering connection.</p> <p>When you delete an ODB peering
         * connection, the underlying VPC peering connection is also deleted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/DeleteOdbPeeringConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOdbPeeringConnectionOutcome DeleteOdbPeeringConnection(const Model::DeleteOdbPeeringConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteOdbPeeringConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteOdbPeeringConnectionRequestT = Model::DeleteOdbPeeringConnectionRequest>
        Model::DeleteOdbPeeringConnectionOutcomeCallable DeleteOdbPeeringConnectionCallable(const DeleteOdbPeeringConnectionRequestT& request) const
        {
            return SubmitCallable(&OdbClient::DeleteOdbPeeringConnection, request);
        }

        /**
         * An Async wrapper for DeleteOdbPeeringConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteOdbPeeringConnectionRequestT = Model::DeleteOdbPeeringConnectionRequest>
        void DeleteOdbPeeringConnectionAsync(const DeleteOdbPeeringConnectionRequestT& request, const DeleteOdbPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::DeleteOdbPeeringConnection, request, handler, context);
        }

        /**
         * <p>Gets information about a specific Autonomous VM cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/GetCloudAutonomousVmCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCloudAutonomousVmClusterOutcome GetCloudAutonomousVmCluster(const Model::GetCloudAutonomousVmClusterRequest& request) const;

        /**
         * A Callable wrapper for GetCloudAutonomousVmCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCloudAutonomousVmClusterRequestT = Model::GetCloudAutonomousVmClusterRequest>
        Model::GetCloudAutonomousVmClusterOutcomeCallable GetCloudAutonomousVmClusterCallable(const GetCloudAutonomousVmClusterRequestT& request) const
        {
            return SubmitCallable(&OdbClient::GetCloudAutonomousVmCluster, request);
        }

        /**
         * An Async wrapper for GetCloudAutonomousVmCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCloudAutonomousVmClusterRequestT = Model::GetCloudAutonomousVmClusterRequest>
        void GetCloudAutonomousVmClusterAsync(const GetCloudAutonomousVmClusterRequestT& request, const GetCloudAutonomousVmClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::GetCloudAutonomousVmCluster, request, handler, context);
        }

        /**
         * <p>Returns information about the specified Exadata infrastructure.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/GetCloudExadataInfrastructure">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCloudExadataInfrastructureOutcome GetCloudExadataInfrastructure(const Model::GetCloudExadataInfrastructureRequest& request) const;

        /**
         * A Callable wrapper for GetCloudExadataInfrastructure that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCloudExadataInfrastructureRequestT = Model::GetCloudExadataInfrastructureRequest>
        Model::GetCloudExadataInfrastructureOutcomeCallable GetCloudExadataInfrastructureCallable(const GetCloudExadataInfrastructureRequestT& request) const
        {
            return SubmitCallable(&OdbClient::GetCloudExadataInfrastructure, request);
        }

        /**
         * An Async wrapper for GetCloudExadataInfrastructure that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCloudExadataInfrastructureRequestT = Model::GetCloudExadataInfrastructureRequest>
        void GetCloudExadataInfrastructureAsync(const GetCloudExadataInfrastructureRequestT& request, const GetCloudExadataInfrastructureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::GetCloudExadataInfrastructure, request, handler, context);
        }

        /**
         * <p>Retrieves information about unallocated resources in a specified Cloud
         * Exadata Infrastructure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/GetCloudExadataInfrastructureUnallocatedResources">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCloudExadataInfrastructureUnallocatedResourcesOutcome GetCloudExadataInfrastructureUnallocatedResources(const Model::GetCloudExadataInfrastructureUnallocatedResourcesRequest& request) const;

        /**
         * A Callable wrapper for GetCloudExadataInfrastructureUnallocatedResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCloudExadataInfrastructureUnallocatedResourcesRequestT = Model::GetCloudExadataInfrastructureUnallocatedResourcesRequest>
        Model::GetCloudExadataInfrastructureUnallocatedResourcesOutcomeCallable GetCloudExadataInfrastructureUnallocatedResourcesCallable(const GetCloudExadataInfrastructureUnallocatedResourcesRequestT& request) const
        {
            return SubmitCallable(&OdbClient::GetCloudExadataInfrastructureUnallocatedResources, request);
        }

        /**
         * An Async wrapper for GetCloudExadataInfrastructureUnallocatedResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCloudExadataInfrastructureUnallocatedResourcesRequestT = Model::GetCloudExadataInfrastructureUnallocatedResourcesRequest>
        void GetCloudExadataInfrastructureUnallocatedResourcesAsync(const GetCloudExadataInfrastructureUnallocatedResourcesRequestT& request, const GetCloudExadataInfrastructureUnallocatedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::GetCloudExadataInfrastructureUnallocatedResources, request, handler, context);
        }

        /**
         * <p>Returns information about the specified VM cluster.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/GetCloudVmCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCloudVmClusterOutcome GetCloudVmCluster(const Model::GetCloudVmClusterRequest& request) const;

        /**
         * A Callable wrapper for GetCloudVmCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCloudVmClusterRequestT = Model::GetCloudVmClusterRequest>
        Model::GetCloudVmClusterOutcomeCallable GetCloudVmClusterCallable(const GetCloudVmClusterRequestT& request) const
        {
            return SubmitCallable(&OdbClient::GetCloudVmCluster, request);
        }

        /**
         * An Async wrapper for GetCloudVmCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCloudVmClusterRequestT = Model::GetCloudVmClusterRequest>
        void GetCloudVmClusterAsync(const GetCloudVmClusterRequestT& request, const GetCloudVmClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::GetCloudVmCluster, request, handler, context);
        }

        /**
         * <p>Returns information about the specified DB node.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/GetDbNode">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDbNodeOutcome GetDbNode(const Model::GetDbNodeRequest& request) const;

        /**
         * A Callable wrapper for GetDbNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDbNodeRequestT = Model::GetDbNodeRequest>
        Model::GetDbNodeOutcomeCallable GetDbNodeCallable(const GetDbNodeRequestT& request) const
        {
            return SubmitCallable(&OdbClient::GetDbNode, request);
        }

        /**
         * An Async wrapper for GetDbNode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDbNodeRequestT = Model::GetDbNodeRequest>
        void GetDbNodeAsync(const GetDbNodeRequestT& request, const GetDbNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::GetDbNode, request, handler, context);
        }

        /**
         * <p>Returns information about the specified database server.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/GetDbServer">AWS API
         * Reference</a></p>
         */
        virtual Model::GetDbServerOutcome GetDbServer(const Model::GetDbServerRequest& request) const;

        /**
         * A Callable wrapper for GetDbServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDbServerRequestT = Model::GetDbServerRequest>
        Model::GetDbServerOutcomeCallable GetDbServerCallable(const GetDbServerRequestT& request) const
        {
            return SubmitCallable(&OdbClient::GetDbServer, request);
        }

        /**
         * An Async wrapper for GetDbServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDbServerRequestT = Model::GetDbServerRequest>
        void GetDbServerAsync(const GetDbServerRequestT& request, const GetDbServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::GetDbServer, request, handler, context);
        }

        /**
         * <p>Returns the tenancy activation link and onboarding status for your Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/GetOciOnboardingStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOciOnboardingStatusOutcome GetOciOnboardingStatus(const Model::GetOciOnboardingStatusRequest& request = {}) const;

        /**
         * A Callable wrapper for GetOciOnboardingStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOciOnboardingStatusRequestT = Model::GetOciOnboardingStatusRequest>
        Model::GetOciOnboardingStatusOutcomeCallable GetOciOnboardingStatusCallable(const GetOciOnboardingStatusRequestT& request = {}) const
        {
            return SubmitCallable(&OdbClient::GetOciOnboardingStatus, request);
        }

        /**
         * An Async wrapper for GetOciOnboardingStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOciOnboardingStatusRequestT = Model::GetOciOnboardingStatusRequest>
        void GetOciOnboardingStatusAsync(const GetOciOnboardingStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetOciOnboardingStatusRequestT& request = {}) const
        {
            return SubmitAsync(&OdbClient::GetOciOnboardingStatus, request, handler, context);
        }

        /**
         * <p>Returns information about the specified ODB network.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/GetOdbNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOdbNetworkOutcome GetOdbNetwork(const Model::GetOdbNetworkRequest& request) const;

        /**
         * A Callable wrapper for GetOdbNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOdbNetworkRequestT = Model::GetOdbNetworkRequest>
        Model::GetOdbNetworkOutcomeCallable GetOdbNetworkCallable(const GetOdbNetworkRequestT& request) const
        {
            return SubmitCallable(&OdbClient::GetOdbNetwork, request);
        }

        /**
         * An Async wrapper for GetOdbNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOdbNetworkRequestT = Model::GetOdbNetworkRequest>
        void GetOdbNetworkAsync(const GetOdbNetworkRequestT& request, const GetOdbNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::GetOdbNetwork, request, handler, context);
        }

        /**
         * <p>Retrieves information about an ODB peering connection.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/GetOdbPeeringConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOdbPeeringConnectionOutcome GetOdbPeeringConnection(const Model::GetOdbPeeringConnectionRequest& request) const;

        /**
         * A Callable wrapper for GetOdbPeeringConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOdbPeeringConnectionRequestT = Model::GetOdbPeeringConnectionRequest>
        Model::GetOdbPeeringConnectionOutcomeCallable GetOdbPeeringConnectionCallable(const GetOdbPeeringConnectionRequestT& request) const
        {
            return SubmitCallable(&OdbClient::GetOdbPeeringConnection, request);
        }

        /**
         * An Async wrapper for GetOdbPeeringConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOdbPeeringConnectionRequestT = Model::GetOdbPeeringConnectionRequest>
        void GetOdbPeeringConnectionAsync(const GetOdbPeeringConnectionRequestT& request, const GetOdbPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::GetOdbPeeringConnection, request, handler, context);
        }

        /**
         * <p>Initializes the ODB service for the first time in an account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/InitializeService">AWS
         * API Reference</a></p>
         */
        virtual Model::InitializeServiceOutcome InitializeService(const Model::InitializeServiceRequest& request = {}) const;

        /**
         * A Callable wrapper for InitializeService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InitializeServiceRequestT = Model::InitializeServiceRequest>
        Model::InitializeServiceOutcomeCallable InitializeServiceCallable(const InitializeServiceRequestT& request = {}) const
        {
            return SubmitCallable(&OdbClient::InitializeService, request);
        }

        /**
         * An Async wrapper for InitializeService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InitializeServiceRequestT = Model::InitializeServiceRequest>
        void InitializeServiceAsync(const InitializeServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const InitializeServiceRequestT& request = {}) const
        {
            return SubmitAsync(&OdbClient::InitializeService, request, handler, context);
        }

        /**
         * <p>Lists all Autonomous VMs in an Autonomous VM cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListAutonomousVirtualMachines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAutonomousVirtualMachinesOutcome ListAutonomousVirtualMachines(const Model::ListAutonomousVirtualMachinesRequest& request) const;

        /**
         * A Callable wrapper for ListAutonomousVirtualMachines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAutonomousVirtualMachinesRequestT = Model::ListAutonomousVirtualMachinesRequest>
        Model::ListAutonomousVirtualMachinesOutcomeCallable ListAutonomousVirtualMachinesCallable(const ListAutonomousVirtualMachinesRequestT& request) const
        {
            return SubmitCallable(&OdbClient::ListAutonomousVirtualMachines, request);
        }

        /**
         * An Async wrapper for ListAutonomousVirtualMachines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAutonomousVirtualMachinesRequestT = Model::ListAutonomousVirtualMachinesRequest>
        void ListAutonomousVirtualMachinesAsync(const ListAutonomousVirtualMachinesRequestT& request, const ListAutonomousVirtualMachinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::ListAutonomousVirtualMachines, request, handler, context);
        }

        /**
         * <p>Lists all Autonomous VM clusters in a specified Cloud Exadata
         * infrastructure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListCloudAutonomousVmClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCloudAutonomousVmClustersOutcome ListCloudAutonomousVmClusters(const Model::ListCloudAutonomousVmClustersRequest& request = {}) const;

        /**
         * A Callable wrapper for ListCloudAutonomousVmClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCloudAutonomousVmClustersRequestT = Model::ListCloudAutonomousVmClustersRequest>
        Model::ListCloudAutonomousVmClustersOutcomeCallable ListCloudAutonomousVmClustersCallable(const ListCloudAutonomousVmClustersRequestT& request = {}) const
        {
            return SubmitCallable(&OdbClient::ListCloudAutonomousVmClusters, request);
        }

        /**
         * An Async wrapper for ListCloudAutonomousVmClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCloudAutonomousVmClustersRequestT = Model::ListCloudAutonomousVmClustersRequest>
        void ListCloudAutonomousVmClustersAsync(const ListCloudAutonomousVmClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListCloudAutonomousVmClustersRequestT& request = {}) const
        {
            return SubmitAsync(&OdbClient::ListCloudAutonomousVmClusters, request, handler, context);
        }

        /**
         * <p>Returns information about the Exadata infrastructures owned by your Amazon
         * Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListCloudExadataInfrastructures">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCloudExadataInfrastructuresOutcome ListCloudExadataInfrastructures(const Model::ListCloudExadataInfrastructuresRequest& request = {}) const;

        /**
         * A Callable wrapper for ListCloudExadataInfrastructures that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCloudExadataInfrastructuresRequestT = Model::ListCloudExadataInfrastructuresRequest>
        Model::ListCloudExadataInfrastructuresOutcomeCallable ListCloudExadataInfrastructuresCallable(const ListCloudExadataInfrastructuresRequestT& request = {}) const
        {
            return SubmitCallable(&OdbClient::ListCloudExadataInfrastructures, request);
        }

        /**
         * An Async wrapper for ListCloudExadataInfrastructures that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCloudExadataInfrastructuresRequestT = Model::ListCloudExadataInfrastructuresRequest>
        void ListCloudExadataInfrastructuresAsync(const ListCloudExadataInfrastructuresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListCloudExadataInfrastructuresRequestT& request = {}) const
        {
            return SubmitAsync(&OdbClient::ListCloudExadataInfrastructures, request, handler, context);
        }

        /**
         * <p>Returns information about the VM clusters owned by your Amazon Web Services
         * account or only the ones on the specified Exadata infrastructure.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListCloudVmClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCloudVmClustersOutcome ListCloudVmClusters(const Model::ListCloudVmClustersRequest& request = {}) const;

        /**
         * A Callable wrapper for ListCloudVmClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCloudVmClustersRequestT = Model::ListCloudVmClustersRequest>
        Model::ListCloudVmClustersOutcomeCallable ListCloudVmClustersCallable(const ListCloudVmClustersRequestT& request = {}) const
        {
            return SubmitCallable(&OdbClient::ListCloudVmClusters, request);
        }

        /**
         * An Async wrapper for ListCloudVmClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCloudVmClustersRequestT = Model::ListCloudVmClustersRequest>
        void ListCloudVmClustersAsync(const ListCloudVmClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListCloudVmClustersRequestT& request = {}) const
        {
            return SubmitAsync(&OdbClient::ListCloudVmClusters, request, handler, context);
        }

        /**
         * <p>Returns information about the DB nodes for the specified VM
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListDbNodes">AWS API
         * Reference</a></p>
         */
        virtual Model::ListDbNodesOutcome ListDbNodes(const Model::ListDbNodesRequest& request) const;

        /**
         * A Callable wrapper for ListDbNodes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDbNodesRequestT = Model::ListDbNodesRequest>
        Model::ListDbNodesOutcomeCallable ListDbNodesCallable(const ListDbNodesRequestT& request) const
        {
            return SubmitCallable(&OdbClient::ListDbNodes, request);
        }

        /**
         * An Async wrapper for ListDbNodes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDbNodesRequestT = Model::ListDbNodesRequest>
        void ListDbNodesAsync(const ListDbNodesRequestT& request, const ListDbNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::ListDbNodes, request, handler, context);
        }

        /**
         * <p>Returns information about the database servers that belong to the specified
         * Exadata infrastructure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListDbServers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDbServersOutcome ListDbServers(const Model::ListDbServersRequest& request) const;

        /**
         * A Callable wrapper for ListDbServers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDbServersRequestT = Model::ListDbServersRequest>
        Model::ListDbServersOutcomeCallable ListDbServersCallable(const ListDbServersRequestT& request) const
        {
            return SubmitCallable(&OdbClient::ListDbServers, request);
        }

        /**
         * An Async wrapper for ListDbServers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDbServersRequestT = Model::ListDbServersRequest>
        void ListDbServersAsync(const ListDbServersRequestT& request, const ListDbServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::ListDbServers, request, handler, context);
        }

        /**
         * <p>Returns information about the shapes that are available for an Exadata
         * infrastructure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListDbSystemShapes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDbSystemShapesOutcome ListDbSystemShapes(const Model::ListDbSystemShapesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListDbSystemShapes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDbSystemShapesRequestT = Model::ListDbSystemShapesRequest>
        Model::ListDbSystemShapesOutcomeCallable ListDbSystemShapesCallable(const ListDbSystemShapesRequestT& request = {}) const
        {
            return SubmitCallable(&OdbClient::ListDbSystemShapes, request);
        }

        /**
         * An Async wrapper for ListDbSystemShapes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDbSystemShapesRequestT = Model::ListDbSystemShapesRequest>
        void ListDbSystemShapesAsync(const ListDbSystemShapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListDbSystemShapesRequestT& request = {}) const
        {
            return SubmitAsync(&OdbClient::ListDbSystemShapes, request, handler, context);
        }

        /**
         * <p>Returns information about Oracle Grid Infrastructure (GI) software versions
         * that are available for a VM cluster for the specified shape.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListGiVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGiVersionsOutcome ListGiVersions(const Model::ListGiVersionsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListGiVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGiVersionsRequestT = Model::ListGiVersionsRequest>
        Model::ListGiVersionsOutcomeCallable ListGiVersionsCallable(const ListGiVersionsRequestT& request = {}) const
        {
            return SubmitCallable(&OdbClient::ListGiVersions, request);
        }

        /**
         * An Async wrapper for ListGiVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGiVersionsRequestT = Model::ListGiVersionsRequest>
        void ListGiVersionsAsync(const ListGiVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListGiVersionsRequestT& request = {}) const
        {
            return SubmitAsync(&OdbClient::ListGiVersions, request, handler, context);
        }

        /**
         * <p>Returns information about the ODB networks owned by your Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListOdbNetworks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOdbNetworksOutcome ListOdbNetworks(const Model::ListOdbNetworksRequest& request = {}) const;

        /**
         * A Callable wrapper for ListOdbNetworks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOdbNetworksRequestT = Model::ListOdbNetworksRequest>
        Model::ListOdbNetworksOutcomeCallable ListOdbNetworksCallable(const ListOdbNetworksRequestT& request = {}) const
        {
            return SubmitCallable(&OdbClient::ListOdbNetworks, request);
        }

        /**
         * An Async wrapper for ListOdbNetworks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOdbNetworksRequestT = Model::ListOdbNetworksRequest>
        void ListOdbNetworksAsync(const ListOdbNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListOdbNetworksRequestT& request = {}) const
        {
            return SubmitAsync(&OdbClient::ListOdbNetworks, request, handler, context);
        }

        /**
         * <p>Lists all ODB peering connections or those associated with a specific ODB
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListOdbPeeringConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOdbPeeringConnectionsOutcome ListOdbPeeringConnections(const Model::ListOdbPeeringConnectionsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListOdbPeeringConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOdbPeeringConnectionsRequestT = Model::ListOdbPeeringConnectionsRequest>
        Model::ListOdbPeeringConnectionsOutcomeCallable ListOdbPeeringConnectionsCallable(const ListOdbPeeringConnectionsRequestT& request = {}) const
        {
            return SubmitCallable(&OdbClient::ListOdbPeeringConnections, request);
        }

        /**
         * An Async wrapper for ListOdbPeeringConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOdbPeeringConnectionsRequestT = Model::ListOdbPeeringConnectionsRequest>
        void ListOdbPeeringConnectionsAsync(const ListOdbPeeringConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListOdbPeeringConnectionsRequestT& request = {}) const
        {
            return SubmitAsync(&OdbClient::ListOdbPeeringConnections, request, handler, context);
        }

        /**
         * <p>Returns information about the system versions that are available for a VM
         * cluster for the specified <code>giVersion</code> and
         * <code>shape</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListSystemVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSystemVersionsOutcome ListSystemVersions(const Model::ListSystemVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListSystemVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSystemVersionsRequestT = Model::ListSystemVersionsRequest>
        Model::ListSystemVersionsOutcomeCallable ListSystemVersionsCallable(const ListSystemVersionsRequestT& request) const
        {
            return SubmitCallable(&OdbClient::ListSystemVersions, request);
        }

        /**
         * An Async wrapper for ListSystemVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSystemVersionsRequestT = Model::ListSystemVersionsRequest>
        void ListSystemVersionsAsync(const ListSystemVersionsRequestT& request, const ListSystemVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::ListSystemVersions, request, handler, context);
        }

        /**
         * <p>Returns information about the tags applied to this resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&OdbClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Reboots the specified DB node in a VM cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/RebootDbNode">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootDbNodeOutcome RebootDbNode(const Model::RebootDbNodeRequest& request) const;

        /**
         * A Callable wrapper for RebootDbNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RebootDbNodeRequestT = Model::RebootDbNodeRequest>
        Model::RebootDbNodeOutcomeCallable RebootDbNodeCallable(const RebootDbNodeRequestT& request) const
        {
            return SubmitCallable(&OdbClient::RebootDbNode, request);
        }

        /**
         * An Async wrapper for RebootDbNode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RebootDbNodeRequestT = Model::RebootDbNodeRequest>
        void RebootDbNodeAsync(const RebootDbNodeRequestT& request, const RebootDbNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::RebootDbNode, request, handler, context);
        }

        /**
         * <p>Starts the specified DB node in a VM cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/StartDbNode">AWS API
         * Reference</a></p>
         */
        virtual Model::StartDbNodeOutcome StartDbNode(const Model::StartDbNodeRequest& request) const;

        /**
         * A Callable wrapper for StartDbNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDbNodeRequestT = Model::StartDbNodeRequest>
        Model::StartDbNodeOutcomeCallable StartDbNodeCallable(const StartDbNodeRequestT& request) const
        {
            return SubmitCallable(&OdbClient::StartDbNode, request);
        }

        /**
         * An Async wrapper for StartDbNode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDbNodeRequestT = Model::StartDbNodeRequest>
        void StartDbNodeAsync(const StartDbNodeRequestT& request, const StartDbNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::StartDbNode, request, handler, context);
        }

        /**
         * <p>Stops the specified DB node in a VM cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/StopDbNode">AWS API
         * Reference</a></p>
         */
        virtual Model::StopDbNodeOutcome StopDbNode(const Model::StopDbNodeRequest& request) const;

        /**
         * A Callable wrapper for StopDbNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopDbNodeRequestT = Model::StopDbNodeRequest>
        Model::StopDbNodeOutcomeCallable StopDbNodeCallable(const StopDbNodeRequestT& request) const
        {
            return SubmitCallable(&OdbClient::StopDbNode, request);
        }

        /**
         * An Async wrapper for StopDbNode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopDbNodeRequestT = Model::StopDbNodeRequest>
        void StopDbNodeAsync(const StopDbNodeRequestT& request, const StopDbNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::StopDbNode, request, handler, context);
        }

        /**
         * <p>Applies tags to the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&OdbClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&OdbClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the properties of an Exadata infrastructure resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/UpdateCloudExadataInfrastructure">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCloudExadataInfrastructureOutcome UpdateCloudExadataInfrastructure(const Model::UpdateCloudExadataInfrastructureRequest& request) const;

        /**
         * A Callable wrapper for UpdateCloudExadataInfrastructure that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCloudExadataInfrastructureRequestT = Model::UpdateCloudExadataInfrastructureRequest>
        Model::UpdateCloudExadataInfrastructureOutcomeCallable UpdateCloudExadataInfrastructureCallable(const UpdateCloudExadataInfrastructureRequestT& request) const
        {
            return SubmitCallable(&OdbClient::UpdateCloudExadataInfrastructure, request);
        }

        /**
         * An Async wrapper for UpdateCloudExadataInfrastructure that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCloudExadataInfrastructureRequestT = Model::UpdateCloudExadataInfrastructureRequest>
        void UpdateCloudExadataInfrastructureAsync(const UpdateCloudExadataInfrastructureRequestT& request, const UpdateCloudExadataInfrastructureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::UpdateCloudExadataInfrastructure, request, handler, context);
        }

        /**
         * <p>Updates properties of a specified ODB network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/UpdateOdbNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOdbNetworkOutcome UpdateOdbNetwork(const Model::UpdateOdbNetworkRequest& request) const;

        /**
         * A Callable wrapper for UpdateOdbNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateOdbNetworkRequestT = Model::UpdateOdbNetworkRequest>
        Model::UpdateOdbNetworkOutcomeCallable UpdateOdbNetworkCallable(const UpdateOdbNetworkRequestT& request) const
        {
            return SubmitCallable(&OdbClient::UpdateOdbNetwork, request);
        }

        /**
         * An Async wrapper for UpdateOdbNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateOdbNetworkRequestT = Model::UpdateOdbNetworkRequest>
        void UpdateOdbNetworkAsync(const UpdateOdbNetworkRequestT& request, const UpdateOdbNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OdbClient::UpdateOdbNetwork, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<OdbEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<OdbClient>;
      void init(const OdbClientConfiguration& clientConfiguration);

      OdbClientConfiguration m_clientConfiguration;
      std::shared_ptr<OdbEndpointProviderBase> m_endpointProvider;
  };

} // namespace odb
} // namespace Aws
