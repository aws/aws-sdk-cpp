/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/supplychain/SupplyChainServiceClientModel.h>

namespace Aws
{
namespace SupplyChain
{
  /**
   * <p> AWS Supply Chain is a cloud-based application that works with your
   * enterprise resource planning (ERP) and supply chain management systems. Using
   * AWS Supply Chain, you can connect and extract your inventory, supply, and demand
   * related data from existing ERP or supply chain systems into a single data model.
   * </p> <p>The AWS Supply Chain API supports configuration data import for Supply
   * Planning.</p> <p> All AWS Supply chain API operations are Amazon-authenticated
   * and certificate-signed. They not only require the use of the AWS SDK, but also
   * allow for the exclusive use of AWS Identity and Access Management users and
   * roles to help facilitate access, trust, and permission policies. </p>
   */
  class AWS_SUPPLYCHAIN_API SupplyChainClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SupplyChainClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SupplyChainClientConfiguration ClientConfigurationType;
      typedef SupplyChainEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SupplyChainClient(const Aws::SupplyChain::SupplyChainClientConfiguration& clientConfiguration = Aws::SupplyChain::SupplyChainClientConfiguration(),
                          std::shared_ptr<SupplyChainEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SupplyChainClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<SupplyChainEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::SupplyChain::SupplyChainClientConfiguration& clientConfiguration = Aws::SupplyChain::SupplyChainClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SupplyChainClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<SupplyChainEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::SupplyChain::SupplyChainClientConfiguration& clientConfiguration = Aws::SupplyChain::SupplyChainClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SupplyChainClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SupplyChainClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SupplyChainClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SupplyChainClient();

        /**
         * <p>CreateBillOfMaterialsImportJob creates an import job for the Product Bill Of
         * Materials (BOM) entity. For information on the product_bom entity, see the AWS
         * Supply Chain User Guide.</p> <p>The CSV file must be located in an Amazon S3
         * location accessible to AWS Supply Chain. It is recommended to use the same
         * Amazon S3 bucket created during your AWS Supply Chain instance
         * creation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/CreateBillOfMaterialsImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBillOfMaterialsImportJobOutcome CreateBillOfMaterialsImportJob(const Model::CreateBillOfMaterialsImportJobRequest& request) const;

        /**
         * A Callable wrapper for CreateBillOfMaterialsImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBillOfMaterialsImportJobRequestT = Model::CreateBillOfMaterialsImportJobRequest>
        Model::CreateBillOfMaterialsImportJobOutcomeCallable CreateBillOfMaterialsImportJobCallable(const CreateBillOfMaterialsImportJobRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::CreateBillOfMaterialsImportJob, request);
        }

        /**
         * An Async wrapper for CreateBillOfMaterialsImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBillOfMaterialsImportJobRequestT = Model::CreateBillOfMaterialsImportJobRequest>
        void CreateBillOfMaterialsImportJobAsync(const CreateBillOfMaterialsImportJobRequestT& request, const CreateBillOfMaterialsImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::CreateBillOfMaterialsImportJob, request, handler, context);
        }

        /**
         * <p>Enables you to programmatically create a data pipeline to ingest data from
         * source systems such as Amazon S3 buckets, to a predefined Amazon Web Services
         * Supply Chain dataset (product, inbound_order) or a temporary dataset along with
         * the data transformation query provided with the API.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/CreateDataIntegrationFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataIntegrationFlowOutcome CreateDataIntegrationFlow(const Model::CreateDataIntegrationFlowRequest& request) const;

        /**
         * A Callable wrapper for CreateDataIntegrationFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataIntegrationFlowRequestT = Model::CreateDataIntegrationFlowRequest>
        Model::CreateDataIntegrationFlowOutcomeCallable CreateDataIntegrationFlowCallable(const CreateDataIntegrationFlowRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::CreateDataIntegrationFlow, request);
        }

        /**
         * An Async wrapper for CreateDataIntegrationFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataIntegrationFlowRequestT = Model::CreateDataIntegrationFlowRequest>
        void CreateDataIntegrationFlowAsync(const CreateDataIntegrationFlowRequestT& request, const CreateDataIntegrationFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::CreateDataIntegrationFlow, request, handler, context);
        }

        /**
         * <p>Enables you to programmatically create an Amazon Web Services Supply Chain
         * data lake dataset. Developers can create the datasets using their pre-defined or
         * custom schema for a given instance ID, namespace, and dataset
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/CreateDataLakeDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataLakeDatasetOutcome CreateDataLakeDataset(const Model::CreateDataLakeDatasetRequest& request) const;

        /**
         * A Callable wrapper for CreateDataLakeDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataLakeDatasetRequestT = Model::CreateDataLakeDatasetRequest>
        Model::CreateDataLakeDatasetOutcomeCallable CreateDataLakeDatasetCallable(const CreateDataLakeDatasetRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::CreateDataLakeDataset, request);
        }

        /**
         * An Async wrapper for CreateDataLakeDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataLakeDatasetRequestT = Model::CreateDataLakeDatasetRequest>
        void CreateDataLakeDatasetAsync(const CreateDataLakeDatasetRequestT& request, const CreateDataLakeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::CreateDataLakeDataset, request, handler, context);
        }

        /**
         * <p>Enables you to programmatically create an Amazon Web Services Supply Chain
         * data lake namespace. Developers can create the namespaces for a given instance
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/CreateDataLakeNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataLakeNamespaceOutcome CreateDataLakeNamespace(const Model::CreateDataLakeNamespaceRequest& request) const;

        /**
         * A Callable wrapper for CreateDataLakeNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataLakeNamespaceRequestT = Model::CreateDataLakeNamespaceRequest>
        Model::CreateDataLakeNamespaceOutcomeCallable CreateDataLakeNamespaceCallable(const CreateDataLakeNamespaceRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::CreateDataLakeNamespace, request);
        }

        /**
         * An Async wrapper for CreateDataLakeNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataLakeNamespaceRequestT = Model::CreateDataLakeNamespaceRequest>
        void CreateDataLakeNamespaceAsync(const CreateDataLakeNamespaceRequestT& request, const CreateDataLakeNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::CreateDataLakeNamespace, request, handler, context);
        }

        /**
         * <p>Enables you to programmatically create an Amazon Web Services Supply Chain
         * instance by applying KMS keys and relevant information associated with the API
         * without using the Amazon Web Services console.</p> <p>This is an asynchronous
         * operation. Upon receiving a CreateInstance request, Amazon Web Services Supply
         * Chain immediately returns the instance resource, instance ID, and the
         * initializing state while simultaneously creating all required Amazon Web
         * Services resources for an instance creation. You can use GetInstance to check
         * the status of the instance. If the instance results in an unhealthy state, you
         * need to check the error message, delete the current instance, and recreate a new
         * one based on the mitigation from the error message.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/CreateInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest& request = {}) const;

        /**
         * A Callable wrapper for CreateInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInstanceRequestT = Model::CreateInstanceRequest>
        Model::CreateInstanceOutcomeCallable CreateInstanceCallable(const CreateInstanceRequestT& request = {}) const
        {
            return SubmitCallable(&SupplyChainClient::CreateInstance, request);
        }

        /**
         * An Async wrapper for CreateInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInstanceRequestT = Model::CreateInstanceRequest>
        void CreateInstanceAsync(const CreateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const CreateInstanceRequestT& request = {}) const
        {
            return SubmitAsync(&SupplyChainClient::CreateInstance, request, handler, context);
        }

        /**
         * <p>Enable you to programmatically delete an existing data pipeline for the
         * provided Amazon Web Services Supply Chain instance and DataIntegrationFlow
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DeleteDataIntegrationFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataIntegrationFlowOutcome DeleteDataIntegrationFlow(const Model::DeleteDataIntegrationFlowRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataIntegrationFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataIntegrationFlowRequestT = Model::DeleteDataIntegrationFlowRequest>
        Model::DeleteDataIntegrationFlowOutcomeCallable DeleteDataIntegrationFlowCallable(const DeleteDataIntegrationFlowRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::DeleteDataIntegrationFlow, request);
        }

        /**
         * An Async wrapper for DeleteDataIntegrationFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataIntegrationFlowRequestT = Model::DeleteDataIntegrationFlowRequest>
        void DeleteDataIntegrationFlowAsync(const DeleteDataIntegrationFlowRequestT& request, const DeleteDataIntegrationFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::DeleteDataIntegrationFlow, request, handler, context);
        }

        /**
         * <p>Enables you to programmatically delete an Amazon Web Services Supply Chain
         * data lake dataset. Developers can delete the existing datasets for a given
         * instance ID, namespace, and instance name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DeleteDataLakeDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataLakeDatasetOutcome DeleteDataLakeDataset(const Model::DeleteDataLakeDatasetRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataLakeDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataLakeDatasetRequestT = Model::DeleteDataLakeDatasetRequest>
        Model::DeleteDataLakeDatasetOutcomeCallable DeleteDataLakeDatasetCallable(const DeleteDataLakeDatasetRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::DeleteDataLakeDataset, request);
        }

        /**
         * An Async wrapper for DeleteDataLakeDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataLakeDatasetRequestT = Model::DeleteDataLakeDatasetRequest>
        void DeleteDataLakeDatasetAsync(const DeleteDataLakeDatasetRequestT& request, const DeleteDataLakeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::DeleteDataLakeDataset, request, handler, context);
        }

        /**
         * <p>Enables you to programmatically delete an Amazon Web Services Supply Chain
         * data lake namespace and its underling datasets. Developers can delete the
         * existing namespaces for a given instance ID and namespace name.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DeleteDataLakeNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataLakeNamespaceOutcome DeleteDataLakeNamespace(const Model::DeleteDataLakeNamespaceRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataLakeNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataLakeNamespaceRequestT = Model::DeleteDataLakeNamespaceRequest>
        Model::DeleteDataLakeNamespaceOutcomeCallable DeleteDataLakeNamespaceCallable(const DeleteDataLakeNamespaceRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::DeleteDataLakeNamespace, request);
        }

        /**
         * An Async wrapper for DeleteDataLakeNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataLakeNamespaceRequestT = Model::DeleteDataLakeNamespaceRequest>
        void DeleteDataLakeNamespaceAsync(const DeleteDataLakeNamespaceRequestT& request, const DeleteDataLakeNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::DeleteDataLakeNamespace, request, handler, context);
        }

        /**
         * <p>Enables you to programmatically delete an Amazon Web Services Supply Chain
         * instance by deleting the KMS keys and relevant information associated with the
         * API without using the Amazon Web Services console.</p> <p>This is an
         * asynchronous operation. Upon receiving a DeleteInstance request, Amazon Web
         * Services Supply Chain immediately returns a response with the instance resource,
         * delete state while cleaning up all Amazon Web Services resources created during
         * the instance creation process. You can use the GetInstance action to check the
         * instance status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DeleteInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeleteInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInstanceRequestT = Model::DeleteInstanceRequest>
        Model::DeleteInstanceOutcomeCallable DeleteInstanceCallable(const DeleteInstanceRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::DeleteInstance, request);
        }

        /**
         * An Async wrapper for DeleteInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInstanceRequestT = Model::DeleteInstanceRequest>
        void DeleteInstanceAsync(const DeleteInstanceRequestT& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::DeleteInstance, request, handler, context);
        }

        /**
         * <p>Get status and details of a BillOfMaterialsImportJob.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/GetBillOfMaterialsImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBillOfMaterialsImportJobOutcome GetBillOfMaterialsImportJob(const Model::GetBillOfMaterialsImportJobRequest& request) const;

        /**
         * A Callable wrapper for GetBillOfMaterialsImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBillOfMaterialsImportJobRequestT = Model::GetBillOfMaterialsImportJobRequest>
        Model::GetBillOfMaterialsImportJobOutcomeCallable GetBillOfMaterialsImportJobCallable(const GetBillOfMaterialsImportJobRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::GetBillOfMaterialsImportJob, request);
        }

        /**
         * An Async wrapper for GetBillOfMaterialsImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBillOfMaterialsImportJobRequestT = Model::GetBillOfMaterialsImportJobRequest>
        void GetBillOfMaterialsImportJobAsync(const GetBillOfMaterialsImportJobRequestT& request, const GetBillOfMaterialsImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::GetBillOfMaterialsImportJob, request, handler, context);
        }

        /**
         * <p>Enables you to programmatically view an Amazon Web Services Supply Chain Data
         * Integration Event. Developers can view the eventType, eventGroupId,
         * eventTimestamp, datasetTarget, datasetLoadExecution.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/GetDataIntegrationEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataIntegrationEventOutcome GetDataIntegrationEvent(const Model::GetDataIntegrationEventRequest& request) const;

        /**
         * A Callable wrapper for GetDataIntegrationEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataIntegrationEventRequestT = Model::GetDataIntegrationEventRequest>
        Model::GetDataIntegrationEventOutcomeCallable GetDataIntegrationEventCallable(const GetDataIntegrationEventRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::GetDataIntegrationEvent, request);
        }

        /**
         * An Async wrapper for GetDataIntegrationEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataIntegrationEventRequestT = Model::GetDataIntegrationEventRequest>
        void GetDataIntegrationEventAsync(const GetDataIntegrationEventRequestT& request, const GetDataIntegrationEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::GetDataIntegrationEvent, request, handler, context);
        }

        /**
         * <p>Enables you to programmatically view a specific data pipeline for the
         * provided Amazon Web Services Supply Chain instance and DataIntegrationFlow
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/GetDataIntegrationFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataIntegrationFlowOutcome GetDataIntegrationFlow(const Model::GetDataIntegrationFlowRequest& request) const;

        /**
         * A Callable wrapper for GetDataIntegrationFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataIntegrationFlowRequestT = Model::GetDataIntegrationFlowRequest>
        Model::GetDataIntegrationFlowOutcomeCallable GetDataIntegrationFlowCallable(const GetDataIntegrationFlowRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::GetDataIntegrationFlow, request);
        }

        /**
         * An Async wrapper for GetDataIntegrationFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataIntegrationFlowRequestT = Model::GetDataIntegrationFlowRequest>
        void GetDataIntegrationFlowAsync(const GetDataIntegrationFlowRequestT& request, const GetDataIntegrationFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::GetDataIntegrationFlow, request, handler, context);
        }

        /**
         * <p>Get the flow execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/GetDataIntegrationFlowExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataIntegrationFlowExecutionOutcome GetDataIntegrationFlowExecution(const Model::GetDataIntegrationFlowExecutionRequest& request) const;

        /**
         * A Callable wrapper for GetDataIntegrationFlowExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataIntegrationFlowExecutionRequestT = Model::GetDataIntegrationFlowExecutionRequest>
        Model::GetDataIntegrationFlowExecutionOutcomeCallable GetDataIntegrationFlowExecutionCallable(const GetDataIntegrationFlowExecutionRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::GetDataIntegrationFlowExecution, request);
        }

        /**
         * An Async wrapper for GetDataIntegrationFlowExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataIntegrationFlowExecutionRequestT = Model::GetDataIntegrationFlowExecutionRequest>
        void GetDataIntegrationFlowExecutionAsync(const GetDataIntegrationFlowExecutionRequestT& request, const GetDataIntegrationFlowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::GetDataIntegrationFlowExecution, request, handler, context);
        }

        /**
         * <p>Enables you to programmatically view an Amazon Web Services Supply Chain data
         * lake dataset. Developers can view the data lake dataset information such as
         * namespace, schema, and so on for a given instance ID, namespace, and dataset
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/GetDataLakeDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataLakeDatasetOutcome GetDataLakeDataset(const Model::GetDataLakeDatasetRequest& request) const;

        /**
         * A Callable wrapper for GetDataLakeDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataLakeDatasetRequestT = Model::GetDataLakeDatasetRequest>
        Model::GetDataLakeDatasetOutcomeCallable GetDataLakeDatasetCallable(const GetDataLakeDatasetRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::GetDataLakeDataset, request);
        }

        /**
         * An Async wrapper for GetDataLakeDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataLakeDatasetRequestT = Model::GetDataLakeDatasetRequest>
        void GetDataLakeDatasetAsync(const GetDataLakeDatasetRequestT& request, const GetDataLakeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::GetDataLakeDataset, request, handler, context);
        }

        /**
         * <p>Enables you to programmatically view an Amazon Web Services Supply Chain data
         * lake namespace. Developers can view the data lake namespace information such as
         * description for a given instance ID and namespace name.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/GetDataLakeNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataLakeNamespaceOutcome GetDataLakeNamespace(const Model::GetDataLakeNamespaceRequest& request) const;

        /**
         * A Callable wrapper for GetDataLakeNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataLakeNamespaceRequestT = Model::GetDataLakeNamespaceRequest>
        Model::GetDataLakeNamespaceOutcomeCallable GetDataLakeNamespaceCallable(const GetDataLakeNamespaceRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::GetDataLakeNamespace, request);
        }

        /**
         * An Async wrapper for GetDataLakeNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataLakeNamespaceRequestT = Model::GetDataLakeNamespaceRequest>
        void GetDataLakeNamespaceAsync(const GetDataLakeNamespaceRequestT& request, const GetDataLakeNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::GetDataLakeNamespace, request, handler, context);
        }

        /**
         * <p>Enables you to programmatically retrieve the information related to an Amazon
         * Web Services Supply Chain instance ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/GetInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceOutcome GetInstance(const Model::GetInstanceRequest& request) const;

        /**
         * A Callable wrapper for GetInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInstanceRequestT = Model::GetInstanceRequest>
        Model::GetInstanceOutcomeCallable GetInstanceCallable(const GetInstanceRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::GetInstance, request);
        }

        /**
         * An Async wrapper for GetInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInstanceRequestT = Model::GetInstanceRequest>
        void GetInstanceAsync(const GetInstanceRequestT& request, const GetInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::GetInstance, request, handler, context);
        }

        /**
         * <p>Enables you to programmatically list all data integration events for the
         * provided Amazon Web Services Supply Chain instance.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/ListDataIntegrationEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataIntegrationEventsOutcome ListDataIntegrationEvents(const Model::ListDataIntegrationEventsRequest& request) const;

        /**
         * A Callable wrapper for ListDataIntegrationEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataIntegrationEventsRequestT = Model::ListDataIntegrationEventsRequest>
        Model::ListDataIntegrationEventsOutcomeCallable ListDataIntegrationEventsCallable(const ListDataIntegrationEventsRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::ListDataIntegrationEvents, request);
        }

        /**
         * An Async wrapper for ListDataIntegrationEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataIntegrationEventsRequestT = Model::ListDataIntegrationEventsRequest>
        void ListDataIntegrationEventsAsync(const ListDataIntegrationEventsRequestT& request, const ListDataIntegrationEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::ListDataIntegrationEvents, request, handler, context);
        }

        /**
         * <p>List flow executions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/ListDataIntegrationFlowExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataIntegrationFlowExecutionsOutcome ListDataIntegrationFlowExecutions(const Model::ListDataIntegrationFlowExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListDataIntegrationFlowExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataIntegrationFlowExecutionsRequestT = Model::ListDataIntegrationFlowExecutionsRequest>
        Model::ListDataIntegrationFlowExecutionsOutcomeCallable ListDataIntegrationFlowExecutionsCallable(const ListDataIntegrationFlowExecutionsRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::ListDataIntegrationFlowExecutions, request);
        }

        /**
         * An Async wrapper for ListDataIntegrationFlowExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataIntegrationFlowExecutionsRequestT = Model::ListDataIntegrationFlowExecutionsRequest>
        void ListDataIntegrationFlowExecutionsAsync(const ListDataIntegrationFlowExecutionsRequestT& request, const ListDataIntegrationFlowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::ListDataIntegrationFlowExecutions, request, handler, context);
        }

        /**
         * <p>Enables you to programmatically list all data pipelines for the provided
         * Amazon Web Services Supply Chain instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/ListDataIntegrationFlows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataIntegrationFlowsOutcome ListDataIntegrationFlows(const Model::ListDataIntegrationFlowsRequest& request) const;

        /**
         * A Callable wrapper for ListDataIntegrationFlows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataIntegrationFlowsRequestT = Model::ListDataIntegrationFlowsRequest>
        Model::ListDataIntegrationFlowsOutcomeCallable ListDataIntegrationFlowsCallable(const ListDataIntegrationFlowsRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::ListDataIntegrationFlows, request);
        }

        /**
         * An Async wrapper for ListDataIntegrationFlows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataIntegrationFlowsRequestT = Model::ListDataIntegrationFlowsRequest>
        void ListDataIntegrationFlowsAsync(const ListDataIntegrationFlowsRequestT& request, const ListDataIntegrationFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::ListDataIntegrationFlows, request, handler, context);
        }

        /**
         * <p>Enables you to programmatically view the list of Amazon Web Services Supply
         * Chain data lake datasets. Developers can view the datasets and the corresponding
         * information such as namespace, schema, and so on for a given instance ID and
         * namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/ListDataLakeDatasets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataLakeDatasetsOutcome ListDataLakeDatasets(const Model::ListDataLakeDatasetsRequest& request) const;

        /**
         * A Callable wrapper for ListDataLakeDatasets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataLakeDatasetsRequestT = Model::ListDataLakeDatasetsRequest>
        Model::ListDataLakeDatasetsOutcomeCallable ListDataLakeDatasetsCallable(const ListDataLakeDatasetsRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::ListDataLakeDatasets, request);
        }

        /**
         * An Async wrapper for ListDataLakeDatasets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataLakeDatasetsRequestT = Model::ListDataLakeDatasetsRequest>
        void ListDataLakeDatasetsAsync(const ListDataLakeDatasetsRequestT& request, const ListDataLakeDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::ListDataLakeDatasets, request, handler, context);
        }

        /**
         * <p>Enables you to programmatically view the list of Amazon Web Services Supply
         * Chain data lake namespaces. Developers can view the namespaces and the
         * corresponding information such as description for a given instance ID. Note that
         * this API only return custom namespaces, instance pre-defined namespaces are not
         * included.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/ListDataLakeNamespaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataLakeNamespacesOutcome ListDataLakeNamespaces(const Model::ListDataLakeNamespacesRequest& request) const;

        /**
         * A Callable wrapper for ListDataLakeNamespaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataLakeNamespacesRequestT = Model::ListDataLakeNamespacesRequest>
        Model::ListDataLakeNamespacesOutcomeCallable ListDataLakeNamespacesCallable(const ListDataLakeNamespacesRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::ListDataLakeNamespaces, request);
        }

        /**
         * An Async wrapper for ListDataLakeNamespaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataLakeNamespacesRequestT = Model::ListDataLakeNamespacesRequest>
        void ListDataLakeNamespacesAsync(const ListDataLakeNamespacesRequestT& request, const ListDataLakeNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::ListDataLakeNamespaces, request, handler, context);
        }

        /**
         * <p>List all Amazon Web Services Supply Chain instances for a specific account.
         * Enables you to programmatically list all Amazon Web Services Supply Chain
         * instances based on their account ID, instance name, and state of the instance
         * (active or delete).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/ListInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstancesOutcome ListInstances(const Model::ListInstancesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInstancesRequestT = Model::ListInstancesRequest>
        Model::ListInstancesOutcomeCallable ListInstancesCallable(const ListInstancesRequestT& request = {}) const
        {
            return SubmitCallable(&SupplyChainClient::ListInstances, request);
        }

        /**
         * An Async wrapper for ListInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInstancesRequestT = Model::ListInstancesRequest>
        void ListInstancesAsync(const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListInstancesRequestT& request = {}) const
        {
            return SubmitAsync(&SupplyChainClient::ListInstances, request, handler, context);
        }

        /**
         * <p>List all the tags for an Amazon Web ServicesSupply Chain resource. You can
         * list all the tags added to a resource. By listing the tags, developers can view
         * the tag level information on a resource and perform actions such as, deleting a
         * resource associated with a particular tag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Send the data payload for the event with real-time data for analysis or
         * monitoring. The real-time data events are stored in an Amazon Web Services
         * service before being processed and stored in data lake.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/SendDataIntegrationEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::SendDataIntegrationEventOutcome SendDataIntegrationEvent(const Model::SendDataIntegrationEventRequest& request) const;

        /**
         * A Callable wrapper for SendDataIntegrationEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendDataIntegrationEventRequestT = Model::SendDataIntegrationEventRequest>
        Model::SendDataIntegrationEventOutcomeCallable SendDataIntegrationEventCallable(const SendDataIntegrationEventRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::SendDataIntegrationEvent, request);
        }

        /**
         * An Async wrapper for SendDataIntegrationEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendDataIntegrationEventRequestT = Model::SendDataIntegrationEventRequest>
        void SendDataIntegrationEventAsync(const SendDataIntegrationEventRequestT& request, const SendDataIntegrationEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::SendDataIntegrationEvent, request, handler, context);
        }

        /**
         * <p>You can create tags during or after creating a resource such as instance,
         * data flow, or dataset in AWS Supply chain. During the data ingestion process,
         * you can add tags such as dev, test, or prod to data flows created during the
         * data ingestion process in the AWS Supply Chain datasets. You can use these tags
         * to identify a group of resources or a single resource used by the
         * developer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::TagResource, request, handler, context);
        }

        /**
         * <p>You can delete tags for an Amazon Web Services Supply chain resource such as
         * instance, data flow, or dataset in AWS Supply Chain. During the data ingestion
         * process, you can delete tags such as dev, test, or prod to data flows created
         * during the data ingestion process in the AWS Supply Chain datasets.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Enables you to programmatically update an existing data pipeline to ingest
         * data from the source systems such as, Amazon S3 buckets, to a predefined Amazon
         * Web Services Supply Chain dataset (product, inbound_order) or a temporary
         * dataset along with the data transformation query provided with the
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/UpdateDataIntegrationFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataIntegrationFlowOutcome UpdateDataIntegrationFlow(const Model::UpdateDataIntegrationFlowRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataIntegrationFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDataIntegrationFlowRequestT = Model::UpdateDataIntegrationFlowRequest>
        Model::UpdateDataIntegrationFlowOutcomeCallable UpdateDataIntegrationFlowCallable(const UpdateDataIntegrationFlowRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::UpdateDataIntegrationFlow, request);
        }

        /**
         * An Async wrapper for UpdateDataIntegrationFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDataIntegrationFlowRequestT = Model::UpdateDataIntegrationFlowRequest>
        void UpdateDataIntegrationFlowAsync(const UpdateDataIntegrationFlowRequestT& request, const UpdateDataIntegrationFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::UpdateDataIntegrationFlow, request, handler, context);
        }

        /**
         * <p>Enables you to programmatically update an Amazon Web Services Supply Chain
         * data lake dataset. Developers can update the description of a data lake dataset
         * for a given instance ID, namespace, and dataset name.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/UpdateDataLakeDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataLakeDatasetOutcome UpdateDataLakeDataset(const Model::UpdateDataLakeDatasetRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataLakeDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDataLakeDatasetRequestT = Model::UpdateDataLakeDatasetRequest>
        Model::UpdateDataLakeDatasetOutcomeCallable UpdateDataLakeDatasetCallable(const UpdateDataLakeDatasetRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::UpdateDataLakeDataset, request);
        }

        /**
         * An Async wrapper for UpdateDataLakeDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDataLakeDatasetRequestT = Model::UpdateDataLakeDatasetRequest>
        void UpdateDataLakeDatasetAsync(const UpdateDataLakeDatasetRequestT& request, const UpdateDataLakeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::UpdateDataLakeDataset, request, handler, context);
        }

        /**
         * <p>Enables you to programmatically update an Amazon Web Services Supply Chain
         * data lake namespace. Developers can update the description of a data lake
         * namespace for a given instance ID and namespace name.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/UpdateDataLakeNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataLakeNamespaceOutcome UpdateDataLakeNamespace(const Model::UpdateDataLakeNamespaceRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataLakeNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDataLakeNamespaceRequestT = Model::UpdateDataLakeNamespaceRequest>
        Model::UpdateDataLakeNamespaceOutcomeCallable UpdateDataLakeNamespaceCallable(const UpdateDataLakeNamespaceRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::UpdateDataLakeNamespace, request);
        }

        /**
         * An Async wrapper for UpdateDataLakeNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDataLakeNamespaceRequestT = Model::UpdateDataLakeNamespaceRequest>
        void UpdateDataLakeNamespaceAsync(const UpdateDataLakeNamespaceRequestT& request, const UpdateDataLakeNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::UpdateDataLakeNamespace, request, handler, context);
        }

        /**
         * <p>Enables you to programmatically update an Amazon Web Services Supply Chain
         * instance description by providing all the relevant information such as account
         * ID, instance ID and so on without using the AWS console.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/UpdateInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInstanceOutcome UpdateInstance(const Model::UpdateInstanceRequest& request) const;

        /**
         * A Callable wrapper for UpdateInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateInstanceRequestT = Model::UpdateInstanceRequest>
        Model::UpdateInstanceOutcomeCallable UpdateInstanceCallable(const UpdateInstanceRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::UpdateInstance, request);
        }

        /**
         * An Async wrapper for UpdateInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateInstanceRequestT = Model::UpdateInstanceRequest>
        void UpdateInstanceAsync(const UpdateInstanceRequestT& request, const UpdateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::UpdateInstance, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SupplyChainEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SupplyChainClient>;
      void init(const SupplyChainClientConfiguration& clientConfiguration);

      SupplyChainClientConfiguration m_clientConfiguration;
      std::shared_ptr<SupplyChainEndpointProviderBase> m_endpointProvider;
  };

} // namespace SupplyChain
} // namespace Aws
