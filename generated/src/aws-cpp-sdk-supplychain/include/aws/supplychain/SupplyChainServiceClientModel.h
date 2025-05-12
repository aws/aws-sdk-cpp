/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/supplychain/SupplyChainErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/supplychain/SupplyChainEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SupplyChainClient header */
#include <aws/supplychain/model/CreateBillOfMaterialsImportJobResult.h>
#include <aws/supplychain/model/CreateDataIntegrationFlowResult.h>
#include <aws/supplychain/model/CreateDataLakeDatasetResult.h>
#include <aws/supplychain/model/CreateDataLakeNamespaceResult.h>
#include <aws/supplychain/model/CreateInstanceResult.h>
#include <aws/supplychain/model/DeleteDataIntegrationFlowResult.h>
#include <aws/supplychain/model/DeleteDataLakeDatasetResult.h>
#include <aws/supplychain/model/DeleteDataLakeNamespaceResult.h>
#include <aws/supplychain/model/DeleteInstanceResult.h>
#include <aws/supplychain/model/GetBillOfMaterialsImportJobResult.h>
#include <aws/supplychain/model/GetDataIntegrationEventResult.h>
#include <aws/supplychain/model/GetDataIntegrationFlowResult.h>
#include <aws/supplychain/model/GetDataIntegrationFlowExecutionResult.h>
#include <aws/supplychain/model/GetDataLakeDatasetResult.h>
#include <aws/supplychain/model/GetDataLakeNamespaceResult.h>
#include <aws/supplychain/model/GetInstanceResult.h>
#include <aws/supplychain/model/ListDataIntegrationEventsResult.h>
#include <aws/supplychain/model/ListDataIntegrationFlowExecutionsResult.h>
#include <aws/supplychain/model/ListDataIntegrationFlowsResult.h>
#include <aws/supplychain/model/ListDataLakeDatasetsResult.h>
#include <aws/supplychain/model/ListDataLakeNamespacesResult.h>
#include <aws/supplychain/model/ListInstancesResult.h>
#include <aws/supplychain/model/ListTagsForResourceResult.h>
#include <aws/supplychain/model/SendDataIntegrationEventResult.h>
#include <aws/supplychain/model/TagResourceResult.h>
#include <aws/supplychain/model/UntagResourceResult.h>
#include <aws/supplychain/model/UpdateDataIntegrationFlowResult.h>
#include <aws/supplychain/model/UpdateDataLakeDatasetResult.h>
#include <aws/supplychain/model/UpdateDataLakeNamespaceResult.h>
#include <aws/supplychain/model/UpdateInstanceResult.h>
#include <aws/supplychain/model/ListInstancesRequest.h>
#include <aws/supplychain/model/CreateInstanceRequest.h>
/* End of service model headers required in SupplyChainClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace SupplyChain
  {
    using SupplyChainClientConfiguration = Aws::Client::GenericClientConfiguration;
    using SupplyChainEndpointProviderBase = Aws::SupplyChain::Endpoint::SupplyChainEndpointProviderBase;
    using SupplyChainEndpointProvider = Aws::SupplyChain::Endpoint::SupplyChainEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SupplyChainClient header */
      class CreateBillOfMaterialsImportJobRequest;
      class CreateDataIntegrationFlowRequest;
      class CreateDataLakeDatasetRequest;
      class CreateDataLakeNamespaceRequest;
      class CreateInstanceRequest;
      class DeleteDataIntegrationFlowRequest;
      class DeleteDataLakeDatasetRequest;
      class DeleteDataLakeNamespaceRequest;
      class DeleteInstanceRequest;
      class GetBillOfMaterialsImportJobRequest;
      class GetDataIntegrationEventRequest;
      class GetDataIntegrationFlowRequest;
      class GetDataIntegrationFlowExecutionRequest;
      class GetDataLakeDatasetRequest;
      class GetDataLakeNamespaceRequest;
      class GetInstanceRequest;
      class ListDataIntegrationEventsRequest;
      class ListDataIntegrationFlowExecutionsRequest;
      class ListDataIntegrationFlowsRequest;
      class ListDataLakeDatasetsRequest;
      class ListDataLakeNamespacesRequest;
      class ListInstancesRequest;
      class ListTagsForResourceRequest;
      class SendDataIntegrationEventRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateDataIntegrationFlowRequest;
      class UpdateDataLakeDatasetRequest;
      class UpdateDataLakeNamespaceRequest;
      class UpdateInstanceRequest;
      /* End of service model forward declarations required in SupplyChainClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateBillOfMaterialsImportJobResult, SupplyChainError> CreateBillOfMaterialsImportJobOutcome;
      typedef Aws::Utils::Outcome<CreateDataIntegrationFlowResult, SupplyChainError> CreateDataIntegrationFlowOutcome;
      typedef Aws::Utils::Outcome<CreateDataLakeDatasetResult, SupplyChainError> CreateDataLakeDatasetOutcome;
      typedef Aws::Utils::Outcome<CreateDataLakeNamespaceResult, SupplyChainError> CreateDataLakeNamespaceOutcome;
      typedef Aws::Utils::Outcome<CreateInstanceResult, SupplyChainError> CreateInstanceOutcome;
      typedef Aws::Utils::Outcome<DeleteDataIntegrationFlowResult, SupplyChainError> DeleteDataIntegrationFlowOutcome;
      typedef Aws::Utils::Outcome<DeleteDataLakeDatasetResult, SupplyChainError> DeleteDataLakeDatasetOutcome;
      typedef Aws::Utils::Outcome<DeleteDataLakeNamespaceResult, SupplyChainError> DeleteDataLakeNamespaceOutcome;
      typedef Aws::Utils::Outcome<DeleteInstanceResult, SupplyChainError> DeleteInstanceOutcome;
      typedef Aws::Utils::Outcome<GetBillOfMaterialsImportJobResult, SupplyChainError> GetBillOfMaterialsImportJobOutcome;
      typedef Aws::Utils::Outcome<GetDataIntegrationEventResult, SupplyChainError> GetDataIntegrationEventOutcome;
      typedef Aws::Utils::Outcome<GetDataIntegrationFlowResult, SupplyChainError> GetDataIntegrationFlowOutcome;
      typedef Aws::Utils::Outcome<GetDataIntegrationFlowExecutionResult, SupplyChainError> GetDataIntegrationFlowExecutionOutcome;
      typedef Aws::Utils::Outcome<GetDataLakeDatasetResult, SupplyChainError> GetDataLakeDatasetOutcome;
      typedef Aws::Utils::Outcome<GetDataLakeNamespaceResult, SupplyChainError> GetDataLakeNamespaceOutcome;
      typedef Aws::Utils::Outcome<GetInstanceResult, SupplyChainError> GetInstanceOutcome;
      typedef Aws::Utils::Outcome<ListDataIntegrationEventsResult, SupplyChainError> ListDataIntegrationEventsOutcome;
      typedef Aws::Utils::Outcome<ListDataIntegrationFlowExecutionsResult, SupplyChainError> ListDataIntegrationFlowExecutionsOutcome;
      typedef Aws::Utils::Outcome<ListDataIntegrationFlowsResult, SupplyChainError> ListDataIntegrationFlowsOutcome;
      typedef Aws::Utils::Outcome<ListDataLakeDatasetsResult, SupplyChainError> ListDataLakeDatasetsOutcome;
      typedef Aws::Utils::Outcome<ListDataLakeNamespacesResult, SupplyChainError> ListDataLakeNamespacesOutcome;
      typedef Aws::Utils::Outcome<ListInstancesResult, SupplyChainError> ListInstancesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, SupplyChainError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<SendDataIntegrationEventResult, SupplyChainError> SendDataIntegrationEventOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, SupplyChainError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, SupplyChainError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateDataIntegrationFlowResult, SupplyChainError> UpdateDataIntegrationFlowOutcome;
      typedef Aws::Utils::Outcome<UpdateDataLakeDatasetResult, SupplyChainError> UpdateDataLakeDatasetOutcome;
      typedef Aws::Utils::Outcome<UpdateDataLakeNamespaceResult, SupplyChainError> UpdateDataLakeNamespaceOutcome;
      typedef Aws::Utils::Outcome<UpdateInstanceResult, SupplyChainError> UpdateInstanceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateBillOfMaterialsImportJobOutcome> CreateBillOfMaterialsImportJobOutcomeCallable;
      typedef std::future<CreateDataIntegrationFlowOutcome> CreateDataIntegrationFlowOutcomeCallable;
      typedef std::future<CreateDataLakeDatasetOutcome> CreateDataLakeDatasetOutcomeCallable;
      typedef std::future<CreateDataLakeNamespaceOutcome> CreateDataLakeNamespaceOutcomeCallable;
      typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
      typedef std::future<DeleteDataIntegrationFlowOutcome> DeleteDataIntegrationFlowOutcomeCallable;
      typedef std::future<DeleteDataLakeDatasetOutcome> DeleteDataLakeDatasetOutcomeCallable;
      typedef std::future<DeleteDataLakeNamespaceOutcome> DeleteDataLakeNamespaceOutcomeCallable;
      typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
      typedef std::future<GetBillOfMaterialsImportJobOutcome> GetBillOfMaterialsImportJobOutcomeCallable;
      typedef std::future<GetDataIntegrationEventOutcome> GetDataIntegrationEventOutcomeCallable;
      typedef std::future<GetDataIntegrationFlowOutcome> GetDataIntegrationFlowOutcomeCallable;
      typedef std::future<GetDataIntegrationFlowExecutionOutcome> GetDataIntegrationFlowExecutionOutcomeCallable;
      typedef std::future<GetDataLakeDatasetOutcome> GetDataLakeDatasetOutcomeCallable;
      typedef std::future<GetDataLakeNamespaceOutcome> GetDataLakeNamespaceOutcomeCallable;
      typedef std::future<GetInstanceOutcome> GetInstanceOutcomeCallable;
      typedef std::future<ListDataIntegrationEventsOutcome> ListDataIntegrationEventsOutcomeCallable;
      typedef std::future<ListDataIntegrationFlowExecutionsOutcome> ListDataIntegrationFlowExecutionsOutcomeCallable;
      typedef std::future<ListDataIntegrationFlowsOutcome> ListDataIntegrationFlowsOutcomeCallable;
      typedef std::future<ListDataLakeDatasetsOutcome> ListDataLakeDatasetsOutcomeCallable;
      typedef std::future<ListDataLakeNamespacesOutcome> ListDataLakeNamespacesOutcomeCallable;
      typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<SendDataIntegrationEventOutcome> SendDataIntegrationEventOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateDataIntegrationFlowOutcome> UpdateDataIntegrationFlowOutcomeCallable;
      typedef std::future<UpdateDataLakeDatasetOutcome> UpdateDataLakeDatasetOutcomeCallable;
      typedef std::future<UpdateDataLakeNamespaceOutcome> UpdateDataLakeNamespaceOutcomeCallable;
      typedef std::future<UpdateInstanceOutcome> UpdateInstanceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SupplyChainClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SupplyChainClient*, const Model::CreateBillOfMaterialsImportJobRequest&, const Model::CreateBillOfMaterialsImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBillOfMaterialsImportJobResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::CreateDataIntegrationFlowRequest&, const Model::CreateDataIntegrationFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataIntegrationFlowResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::CreateDataLakeDatasetRequest&, const Model::CreateDataLakeDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataLakeDatasetResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::CreateDataLakeNamespaceRequest&, const Model::CreateDataLakeNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataLakeNamespaceResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::CreateInstanceRequest&, const Model::CreateInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInstanceResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::DeleteDataIntegrationFlowRequest&, const Model::DeleteDataIntegrationFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataIntegrationFlowResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::DeleteDataLakeDatasetRequest&, const Model::DeleteDataLakeDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataLakeDatasetResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::DeleteDataLakeNamespaceRequest&, const Model::DeleteDataLakeNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataLakeNamespaceResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::DeleteInstanceRequest&, const Model::DeleteInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInstanceResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::GetBillOfMaterialsImportJobRequest&, const Model::GetBillOfMaterialsImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBillOfMaterialsImportJobResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::GetDataIntegrationEventRequest&, const Model::GetDataIntegrationEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataIntegrationEventResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::GetDataIntegrationFlowRequest&, const Model::GetDataIntegrationFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataIntegrationFlowResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::GetDataIntegrationFlowExecutionRequest&, const Model::GetDataIntegrationFlowExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataIntegrationFlowExecutionResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::GetDataLakeDatasetRequest&, const Model::GetDataLakeDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataLakeDatasetResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::GetDataLakeNamespaceRequest&, const Model::GetDataLakeNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataLakeNamespaceResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::GetInstanceRequest&, const Model::GetInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInstanceResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::ListDataIntegrationEventsRequest&, const Model::ListDataIntegrationEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataIntegrationEventsResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::ListDataIntegrationFlowExecutionsRequest&, const Model::ListDataIntegrationFlowExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataIntegrationFlowExecutionsResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::ListDataIntegrationFlowsRequest&, const Model::ListDataIntegrationFlowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataIntegrationFlowsResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::ListDataLakeDatasetsRequest&, const Model::ListDataLakeDatasetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataLakeDatasetsResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::ListDataLakeNamespacesRequest&, const Model::ListDataLakeNamespacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataLakeNamespacesResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::ListInstancesRequest&, const Model::ListInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstancesResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::SendDataIntegrationEventRequest&, const Model::SendDataIntegrationEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendDataIntegrationEventResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::UpdateDataIntegrationFlowRequest&, const Model::UpdateDataIntegrationFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataIntegrationFlowResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::UpdateDataLakeDatasetRequest&, const Model::UpdateDataLakeDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataLakeDatasetResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::UpdateDataLakeNamespaceRequest&, const Model::UpdateDataLakeNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataLakeNamespaceResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::UpdateInstanceRequest&, const Model::UpdateInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInstanceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SupplyChain
} // namespace Aws
