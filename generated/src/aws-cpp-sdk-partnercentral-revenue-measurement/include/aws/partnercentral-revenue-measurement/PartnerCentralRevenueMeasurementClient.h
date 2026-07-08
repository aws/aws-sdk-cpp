/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementPaginationBase.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementServiceClientModel.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementWaiter.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
/**
 * <p>AWS Partner Central Revenue Measurement API for creating, managing, and
 * tracking revenue attributions and their allocations with deal entities such as
 * offers and opportunities.</p>
 */
class AWS_PARTNERCENTRALREVENUEMEASUREMENT_API PartnerCentralRevenueMeasurementClient
    : public Aws::Client::AWSRpcV2CborClient,
      public Aws::Client::ClientWithAsyncTemplateMethods<PartnerCentralRevenueMeasurementClient>,
      public PartnerCentralRevenueMeasurementPaginationBase<PartnerCentralRevenueMeasurementClient>,
      public PartnerCentralRevenueMeasurementWaiter<PartnerCentralRevenueMeasurementClient> {
 public:
  typedef Aws::Client::AWSRpcV2CborClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef PartnerCentralRevenueMeasurementClientConfiguration ClientConfigurationType;
  typedef PartnerCentralRevenueMeasurementEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  PartnerCentralRevenueMeasurementClient(
      const Aws::PartnerCentralRevenueMeasurement::PartnerCentralRevenueMeasurementClientConfiguration& clientConfiguration =
          Aws::PartnerCentralRevenueMeasurement::PartnerCentralRevenueMeasurementClientConfiguration(),
      std::shared_ptr<PartnerCentralRevenueMeasurementEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  PartnerCentralRevenueMeasurementClient(
      const Aws::Auth::AWSCredentials& credentials,
      std::shared_ptr<PartnerCentralRevenueMeasurementEndpointProviderBase> endpointProvider = nullptr,
      const Aws::PartnerCentralRevenueMeasurement::PartnerCentralRevenueMeasurementClientConfiguration& clientConfiguration =
          Aws::PartnerCentralRevenueMeasurement::PartnerCentralRevenueMeasurementClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  PartnerCentralRevenueMeasurementClient(
      const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
      std::shared_ptr<PartnerCentralRevenueMeasurementEndpointProviderBase> endpointProvider = nullptr,
      const Aws::PartnerCentralRevenueMeasurement::PartnerCentralRevenueMeasurementClientConfiguration& clientConfiguration =
          Aws::PartnerCentralRevenueMeasurement::PartnerCentralRevenueMeasurementClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  PartnerCentralRevenueMeasurementClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  PartnerCentralRevenueMeasurementClient(const Aws::Auth::AWSCredentials& credentials,
                                         const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  PartnerCentralRevenueMeasurementClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~PartnerCentralRevenueMeasurementClient();

  /**
   * <p>Creates a new marketplace revenue share resource in the specified
   * catalog.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/CreateMarketplaceRevenueShare">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateMarketplaceRevenueShareOutcome CreateMarketplaceRevenueShare(
      const Model::CreateMarketplaceRevenueShareRequest& request) const;

  /**
   * A Callable wrapper for CreateMarketplaceRevenueShare that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CreateMarketplaceRevenueShareRequestT = Model::CreateMarketplaceRevenueShareRequest>
  Model::CreateMarketplaceRevenueShareOutcomeCallable CreateMarketplaceRevenueShareCallable(
      const CreateMarketplaceRevenueShareRequestT& request) const {
    return SubmitCallable(&PartnerCentralRevenueMeasurementClient::CreateMarketplaceRevenueShare, request);
  }

  /**
   * An Async wrapper for CreateMarketplaceRevenueShare that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateMarketplaceRevenueShareRequestT = Model::CreateMarketplaceRevenueShareRequest>
  void CreateMarketplaceRevenueShareAsync(const CreateMarketplaceRevenueShareRequestT& request,
                                          const CreateMarketplaceRevenueShareResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralRevenueMeasurementClient::CreateMarketplaceRevenueShare, request, handler, context);
  }

  /**
   * <p>Creates a new marketplace revenue share allocation for the specified
   * product.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/CreateMarketplaceRevenueShareAllocation">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateMarketplaceRevenueShareAllocationOutcome CreateMarketplaceRevenueShareAllocation(
      const Model::CreateMarketplaceRevenueShareAllocationRequest& request) const;

  /**
   * A Callable wrapper for CreateMarketplaceRevenueShareAllocation that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename CreateMarketplaceRevenueShareAllocationRequestT = Model::CreateMarketplaceRevenueShareAllocationRequest>
  Model::CreateMarketplaceRevenueShareAllocationOutcomeCallable CreateMarketplaceRevenueShareAllocationCallable(
      const CreateMarketplaceRevenueShareAllocationRequestT& request) const {
    return SubmitCallable(&PartnerCentralRevenueMeasurementClient::CreateMarketplaceRevenueShareAllocation, request);
  }

  /**
   * An Async wrapper for CreateMarketplaceRevenueShareAllocation that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename CreateMarketplaceRevenueShareAllocationRequestT = Model::CreateMarketplaceRevenueShareAllocationRequest>
  void CreateMarketplaceRevenueShareAllocationAsync(const CreateMarketplaceRevenueShareAllocationRequestT& request,
                                                    const CreateMarketplaceRevenueShareAllocationResponseReceivedHandler& handler,
                                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralRevenueMeasurementClient::CreateMarketplaceRevenueShareAllocation, request, handler, context);
  }

  /**
   * <p>Creates a new revenue attribution record in the specified
   * catalog.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/CreateRevenueAttribution">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateRevenueAttributionOutcome CreateRevenueAttribution(const Model::CreateRevenueAttributionRequest& request) const;

  /**
   * A Callable wrapper for CreateRevenueAttribution that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateRevenueAttributionRequestT = Model::CreateRevenueAttributionRequest>
  Model::CreateRevenueAttributionOutcomeCallable CreateRevenueAttributionCallable(const CreateRevenueAttributionRequestT& request) const {
    return SubmitCallable(&PartnerCentralRevenueMeasurementClient::CreateRevenueAttribution, request);
  }

  /**
   * An Async wrapper for CreateRevenueAttribution that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateRevenueAttributionRequestT = Model::CreateRevenueAttributionRequest>
  void CreateRevenueAttributionAsync(const CreateRevenueAttributionRequestT& request,
                                     const CreateRevenueAttributionResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralRevenueMeasurementClient::CreateRevenueAttribution, request, handler, context);
  }

  /**
   * <p>Retrieves the details of a specific marketplace revenue share.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/GetMarketplaceRevenueShare">AWS
   * API Reference</a></p>
   */
  virtual Model::GetMarketplaceRevenueShareOutcome GetMarketplaceRevenueShare(
      const Model::GetMarketplaceRevenueShareRequest& request) const;

  /**
   * A Callable wrapper for GetMarketplaceRevenueShare that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetMarketplaceRevenueShareRequestT = Model::GetMarketplaceRevenueShareRequest>
  Model::GetMarketplaceRevenueShareOutcomeCallable GetMarketplaceRevenueShareCallable(
      const GetMarketplaceRevenueShareRequestT& request) const {
    return SubmitCallable(&PartnerCentralRevenueMeasurementClient::GetMarketplaceRevenueShare, request);
  }

  /**
   * An Async wrapper for GetMarketplaceRevenueShare that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetMarketplaceRevenueShareRequestT = Model::GetMarketplaceRevenueShareRequest>
  void GetMarketplaceRevenueShareAsync(const GetMarketplaceRevenueShareRequestT& request,
                                       const GetMarketplaceRevenueShareResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralRevenueMeasurementClient::GetMarketplaceRevenueShare, request, handler, context);
  }

  /**
   * <p>Retrieves the details of a specific marketplace revenue share
   * allocation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/GetMarketplaceRevenueShareAllocation">AWS
   * API Reference</a></p>
   */
  virtual Model::GetMarketplaceRevenueShareAllocationOutcome GetMarketplaceRevenueShareAllocation(
      const Model::GetMarketplaceRevenueShareAllocationRequest& request) const;

  /**
   * A Callable wrapper for GetMarketplaceRevenueShareAllocation that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename GetMarketplaceRevenueShareAllocationRequestT = Model::GetMarketplaceRevenueShareAllocationRequest>
  Model::GetMarketplaceRevenueShareAllocationOutcomeCallable GetMarketplaceRevenueShareAllocationCallable(
      const GetMarketplaceRevenueShareAllocationRequestT& request) const {
    return SubmitCallable(&PartnerCentralRevenueMeasurementClient::GetMarketplaceRevenueShareAllocation, request);
  }

  /**
   * An Async wrapper for GetMarketplaceRevenueShareAllocation that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename GetMarketplaceRevenueShareAllocationRequestT = Model::GetMarketplaceRevenueShareAllocationRequest>
  void GetMarketplaceRevenueShareAllocationAsync(const GetMarketplaceRevenueShareAllocationRequestT& request,
                                                 const GetMarketplaceRevenueShareAllocationResponseReceivedHandler& handler,
                                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralRevenueMeasurementClient::GetMarketplaceRevenueShareAllocation, request, handler, context);
  }

  /**
   * <p>Retrieves the details of a specific revenue attribution.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/GetRevenueAttribution">AWS
   * API Reference</a></p>
   */
  virtual Model::GetRevenueAttributionOutcome GetRevenueAttribution(const Model::GetRevenueAttributionRequest& request) const;

  /**
   * A Callable wrapper for GetRevenueAttribution that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetRevenueAttributionRequestT = Model::GetRevenueAttributionRequest>
  Model::GetRevenueAttributionOutcomeCallable GetRevenueAttributionCallable(const GetRevenueAttributionRequestT& request) const {
    return SubmitCallable(&PartnerCentralRevenueMeasurementClient::GetRevenueAttribution, request);
  }

  /**
   * An Async wrapper for GetRevenueAttribution that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetRevenueAttributionRequestT = Model::GetRevenueAttributionRequest>
  void GetRevenueAttributionAsync(const GetRevenueAttributionRequestT& request, const GetRevenueAttributionResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralRevenueMeasurementClient::GetRevenueAttribution, request, handler, context);
  }

  /**
   * <p>Retrieves a single allocation by its RevenueAttributionAllocationId. Supports
   * optional point-in-time version queries.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/GetRevenueAttributionAllocation">AWS
   * API Reference</a></p>
   */
  virtual Model::GetRevenueAttributionAllocationOutcome GetRevenueAttributionAllocation(
      const Model::GetRevenueAttributionAllocationRequest& request) const;

  /**
   * A Callable wrapper for GetRevenueAttributionAllocation that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetRevenueAttributionAllocationRequestT = Model::GetRevenueAttributionAllocationRequest>
  Model::GetRevenueAttributionAllocationOutcomeCallable GetRevenueAttributionAllocationCallable(
      const GetRevenueAttributionAllocationRequestT& request) const {
    return SubmitCallable(&PartnerCentralRevenueMeasurementClient::GetRevenueAttributionAllocation, request);
  }

  /**
   * An Async wrapper for GetRevenueAttributionAllocation that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename GetRevenueAttributionAllocationRequestT = Model::GetRevenueAttributionAllocationRequest>
  void GetRevenueAttributionAllocationAsync(const GetRevenueAttributionAllocationRequestT& request,
                                            const GetRevenueAttributionAllocationResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralRevenueMeasurementClient::GetRevenueAttributionAllocation, request, handler, context);
  }

  /**
   * <p>Retrieves the current status of a previously submitted allocations task. When
   * COMPLETE, includes the latest revision. When FAILED, includes error
   * details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/GetRevenueAttributionAllocationsTask">AWS
   * API Reference</a></p>
   */
  virtual Model::GetRevenueAttributionAllocationsTaskOutcome GetRevenueAttributionAllocationsTask(
      const Model::GetRevenueAttributionAllocationsTaskRequest& request) const;

  /**
   * A Callable wrapper for GetRevenueAttributionAllocationsTask that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename GetRevenueAttributionAllocationsTaskRequestT = Model::GetRevenueAttributionAllocationsTaskRequest>
  Model::GetRevenueAttributionAllocationsTaskOutcomeCallable GetRevenueAttributionAllocationsTaskCallable(
      const GetRevenueAttributionAllocationsTaskRequestT& request) const {
    return SubmitCallable(&PartnerCentralRevenueMeasurementClient::GetRevenueAttributionAllocationsTask, request);
  }

  /**
   * An Async wrapper for GetRevenueAttributionAllocationsTask that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename GetRevenueAttributionAllocationsTaskRequestT = Model::GetRevenueAttributionAllocationsTaskRequest>
  void GetRevenueAttributionAllocationsTaskAsync(const GetRevenueAttributionAllocationsTaskRequestT& request,
                                                 const GetRevenueAttributionAllocationsTaskResponseReceivedHandler& handler,
                                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralRevenueMeasurementClient::GetRevenueAttributionAllocationsTask, request, handler, context);
  }

  /**
   * <p>Returns a paginated list of allocations under a marketplace revenue share,
   * with optional filtering by status and effective date range. Supports historical
   * reads at a specific share revision.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/ListMarketplaceRevenueShareAllocations">AWS
   * API Reference</a></p>
   */
  virtual Model::ListMarketplaceRevenueShareAllocationsOutcome ListMarketplaceRevenueShareAllocations(
      const Model::ListMarketplaceRevenueShareAllocationsRequest& request) const;

  /**
   * A Callable wrapper for ListMarketplaceRevenueShareAllocations that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename ListMarketplaceRevenueShareAllocationsRequestT = Model::ListMarketplaceRevenueShareAllocationsRequest>
  Model::ListMarketplaceRevenueShareAllocationsOutcomeCallable ListMarketplaceRevenueShareAllocationsCallable(
      const ListMarketplaceRevenueShareAllocationsRequestT& request) const {
    return SubmitCallable(&PartnerCentralRevenueMeasurementClient::ListMarketplaceRevenueShareAllocations, request);
  }

  /**
   * An Async wrapper for ListMarketplaceRevenueShareAllocations that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename ListMarketplaceRevenueShareAllocationsRequestT = Model::ListMarketplaceRevenueShareAllocationsRequest>
  void ListMarketplaceRevenueShareAllocationsAsync(const ListMarketplaceRevenueShareAllocationsRequestT& request,
                                                   const ListMarketplaceRevenueShareAllocationsResponseReceivedHandler& handler,
                                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralRevenueMeasurementClient::ListMarketplaceRevenueShareAllocations, request, handler, context);
  }

  /**
   * <p>Returns a paginated list of marketplace revenue shares with optional
   * filters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/ListMarketplaceRevenueShares">AWS
   * API Reference</a></p>
   */
  virtual Model::ListMarketplaceRevenueSharesOutcome ListMarketplaceRevenueShares(
      const Model::ListMarketplaceRevenueSharesRequest& request) const;

  /**
   * A Callable wrapper for ListMarketplaceRevenueShares that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListMarketplaceRevenueSharesRequestT = Model::ListMarketplaceRevenueSharesRequest>
  Model::ListMarketplaceRevenueSharesOutcomeCallable ListMarketplaceRevenueSharesCallable(
      const ListMarketplaceRevenueSharesRequestT& request) const {
    return SubmitCallable(&PartnerCentralRevenueMeasurementClient::ListMarketplaceRevenueShares, request);
  }

  /**
   * An Async wrapper for ListMarketplaceRevenueShares that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListMarketplaceRevenueSharesRequestT = Model::ListMarketplaceRevenueSharesRequest>
  void ListMarketplaceRevenueSharesAsync(const ListMarketplaceRevenueSharesRequestT& request,
                                         const ListMarketplaceRevenueSharesResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralRevenueMeasurementClient::ListMarketplaceRevenueShares, request, handler, context);
  }

  /**
   * <p>Returns a paginated list of committed allocations with support for filtering
   * by entity, customer, status, or date range.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/ListRevenueAttributionAllocations">AWS
   * API Reference</a></p>
   */
  virtual Model::ListRevenueAttributionAllocationsOutcome ListRevenueAttributionAllocations(
      const Model::ListRevenueAttributionAllocationsRequest& request) const;

  /**
   * A Callable wrapper for ListRevenueAttributionAllocations that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename ListRevenueAttributionAllocationsRequestT = Model::ListRevenueAttributionAllocationsRequest>
  Model::ListRevenueAttributionAllocationsOutcomeCallable ListRevenueAttributionAllocationsCallable(
      const ListRevenueAttributionAllocationsRequestT& request) const {
    return SubmitCallable(&PartnerCentralRevenueMeasurementClient::ListRevenueAttributionAllocations, request);
  }

  /**
   * An Async wrapper for ListRevenueAttributionAllocations that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ListRevenueAttributionAllocationsRequestT = Model::ListRevenueAttributionAllocationsRequest>
  void ListRevenueAttributionAllocationsAsync(const ListRevenueAttributionAllocationsRequestT& request,
                                              const ListRevenueAttributionAllocationsResponseReceivedHandler& handler,
                                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralRevenueMeasurementClient::ListRevenueAttributionAllocations, request, handler, context);
  }

  /**
   * <p>Returns a paginated list of revenue attributions with optional
   * filters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/ListRevenueAttributions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListRevenueAttributionsOutcome ListRevenueAttributions(const Model::ListRevenueAttributionsRequest& request) const;

  /**
   * A Callable wrapper for ListRevenueAttributions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListRevenueAttributionsRequestT = Model::ListRevenueAttributionsRequest>
  Model::ListRevenueAttributionsOutcomeCallable ListRevenueAttributionsCallable(const ListRevenueAttributionsRequestT& request) const {
    return SubmitCallable(&PartnerCentralRevenueMeasurementClient::ListRevenueAttributions, request);
  }

  /**
   * An Async wrapper for ListRevenueAttributions that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListRevenueAttributionsRequestT = Model::ListRevenueAttributionsRequest>
  void ListRevenueAttributionsAsync(const ListRevenueAttributionsRequestT& request,
                                    const ListRevenueAttributionsResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralRevenueMeasurementClient::ListRevenueAttributions, request, handler, context);
  }

  /**
   * <p>Returns the tags associated with the specified resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&PartnerCentralRevenueMeasurementClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralRevenueMeasurementClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Submits a batch of up to 250 allocation changes (CREATE and/or UPDATE) for
   * asynchronous processing. Returns a TaskId for tracking.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/StartRevenueAttributionAllocationsTask">AWS
   * API Reference</a></p>
   */
  virtual Model::StartRevenueAttributionAllocationsTaskOutcome StartRevenueAttributionAllocationsTask(
      const Model::StartRevenueAttributionAllocationsTaskRequest& request) const;

  /**
   * A Callable wrapper for StartRevenueAttributionAllocationsTask that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename StartRevenueAttributionAllocationsTaskRequestT = Model::StartRevenueAttributionAllocationsTaskRequest>
  Model::StartRevenueAttributionAllocationsTaskOutcomeCallable StartRevenueAttributionAllocationsTaskCallable(
      const StartRevenueAttributionAllocationsTaskRequestT& request) const {
    return SubmitCallable(&PartnerCentralRevenueMeasurementClient::StartRevenueAttributionAllocationsTask, request);
  }

  /**
   * An Async wrapper for StartRevenueAttributionAllocationsTask that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename StartRevenueAttributionAllocationsTaskRequestT = Model::StartRevenueAttributionAllocationsTaskRequest>
  void StartRevenueAttributionAllocationsTaskAsync(const StartRevenueAttributionAllocationsTaskRequestT& request,
                                                   const StartRevenueAttributionAllocationsTaskResponseReceivedHandler& handler,
                                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralRevenueMeasurementClient::StartRevenueAttributionAllocationsTask, request, handler, context);
  }

  /**
   * <p>Adds or overwrites one or more tags for the specified resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&PartnerCentralRevenueMeasurementClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralRevenueMeasurementClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes one or more tags from the specified resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&PartnerCentralRevenueMeasurementClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralRevenueMeasurementClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates an existing marketplace revenue share allocation. Supports modifying
   * effective dates, revenue share percentage, and status with time-based mutability
   * rules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/UpdateMarketplaceRevenueShareAllocation">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateMarketplaceRevenueShareAllocationOutcome UpdateMarketplaceRevenueShareAllocation(
      const Model::UpdateMarketplaceRevenueShareAllocationRequest& request) const;

  /**
   * A Callable wrapper for UpdateMarketplaceRevenueShareAllocation that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename UpdateMarketplaceRevenueShareAllocationRequestT = Model::UpdateMarketplaceRevenueShareAllocationRequest>
  Model::UpdateMarketplaceRevenueShareAllocationOutcomeCallable UpdateMarketplaceRevenueShareAllocationCallable(
      const UpdateMarketplaceRevenueShareAllocationRequestT& request) const {
    return SubmitCallable(&PartnerCentralRevenueMeasurementClient::UpdateMarketplaceRevenueShareAllocation, request);
  }

  /**
   * An Async wrapper for UpdateMarketplaceRevenueShareAllocation that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename UpdateMarketplaceRevenueShareAllocationRequestT = Model::UpdateMarketplaceRevenueShareAllocationRequest>
  void UpdateMarketplaceRevenueShareAllocationAsync(const UpdateMarketplaceRevenueShareAllocationRequestT& request,
                                                    const UpdateMarketplaceRevenueShareAllocationResponseReceivedHandler& handler,
                                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralRevenueMeasurementClient::UpdateMarketplaceRevenueShareAllocation, request, handler, context);
  }

  /**
   * <p>Updates an existing revenue attribution record.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-revenue-measurement-2022-07-26/UpdateRevenueAttribution">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateRevenueAttributionOutcome UpdateRevenueAttribution(const Model::UpdateRevenueAttributionRequest& request) const;

  /**
   * A Callable wrapper for UpdateRevenueAttribution that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateRevenueAttributionRequestT = Model::UpdateRevenueAttributionRequest>
  Model::UpdateRevenueAttributionOutcomeCallable UpdateRevenueAttributionCallable(const UpdateRevenueAttributionRequestT& request) const {
    return SubmitCallable(&PartnerCentralRevenueMeasurementClient::UpdateRevenueAttribution, request);
  }

  /**
   * An Async wrapper for UpdateRevenueAttribution that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateRevenueAttributionRequestT = Model::UpdateRevenueAttributionRequest>
  void UpdateRevenueAttributionAsync(const UpdateRevenueAttributionRequestT& request,
                                     const UpdateRevenueAttributionResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralRevenueMeasurementClient::UpdateRevenueAttribution, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<PartnerCentralRevenueMeasurementEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<PartnerCentralRevenueMeasurementClient>;
  void init(const PartnerCentralRevenueMeasurementClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, PartnerCentralRevenueMeasurementError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const;

  PartnerCentralRevenueMeasurementClientConfiguration m_clientConfiguration;
  std::shared_ptr<PartnerCentralRevenueMeasurementEndpointProviderBase> m_endpointProvider;
};

}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
