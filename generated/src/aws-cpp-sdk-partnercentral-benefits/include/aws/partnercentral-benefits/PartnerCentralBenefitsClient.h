/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefitsPaginationBase.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefitsServiceClientModel.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>

namespace Aws {
namespace PartnerCentralBenefits {
/**
 * <p>AWS Partner Central Benefits Service provides APIs for managing partner
 * benefits, applications, and allocations within the AWS Partner Network
 * ecosystem.</p>
 */
class AWS_PARTNERCENTRALBENEFITS_API PartnerCentralBenefitsClient
    : public Aws::Client::AWSJsonClient,
      public Aws::Client::ClientWithAsyncTemplateMethods<PartnerCentralBenefitsClient>,
      public PartnerCentralBenefitsPaginationBase<PartnerCentralBenefitsClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef PartnerCentralBenefitsClientConfiguration ClientConfigurationType;
  typedef PartnerCentralBenefitsEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  PartnerCentralBenefitsClient(const Aws::PartnerCentralBenefits::PartnerCentralBenefitsClientConfiguration& clientConfiguration =
                                   Aws::PartnerCentralBenefits::PartnerCentralBenefitsClientConfiguration(),
                               std::shared_ptr<PartnerCentralBenefitsEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  PartnerCentralBenefitsClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<PartnerCentralBenefitsEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::PartnerCentralBenefits::PartnerCentralBenefitsClientConfiguration& clientConfiguration =
                                   Aws::PartnerCentralBenefits::PartnerCentralBenefitsClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  PartnerCentralBenefitsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<PartnerCentralBenefitsEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::PartnerCentralBenefits::PartnerCentralBenefitsClientConfiguration& clientConfiguration =
                                   Aws::PartnerCentralBenefits::PartnerCentralBenefitsClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  PartnerCentralBenefitsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  PartnerCentralBenefitsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  PartnerCentralBenefitsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~PartnerCentralBenefitsClient();

  /**
   * <p>Modifies an existing benefit application by applying amendments to specific
   * fields while maintaining revision control.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/AmendBenefitApplication">AWS
   * API Reference</a></p>
   */
  virtual Model::AmendBenefitApplicationOutcome AmendBenefitApplication(const Model::AmendBenefitApplicationRequest& request) const;

  /**
   * A Callable wrapper for AmendBenefitApplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename AmendBenefitApplicationRequestT = Model::AmendBenefitApplicationRequest>
  Model::AmendBenefitApplicationOutcomeCallable AmendBenefitApplicationCallable(const AmendBenefitApplicationRequestT& request) const {
    return SubmitCallable(&PartnerCentralBenefitsClient::AmendBenefitApplication, request);
  }

  /**
   * An Async wrapper for AmendBenefitApplication that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename AmendBenefitApplicationRequestT = Model::AmendBenefitApplicationRequest>
  void AmendBenefitApplicationAsync(const AmendBenefitApplicationRequestT& request,
                                    const AmendBenefitApplicationResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralBenefitsClient::AmendBenefitApplication, request, handler, context);
  }

  /**
   * <p>Links an AWS resource to an existing benefit application for tracking and
   * management purposes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/AssociateBenefitApplicationResource">AWS
   * API Reference</a></p>
   */
  virtual Model::AssociateBenefitApplicationResourceOutcome AssociateBenefitApplicationResource(
      const Model::AssociateBenefitApplicationResourceRequest& request) const;

  /**
   * A Callable wrapper for AssociateBenefitApplicationResource that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename AssociateBenefitApplicationResourceRequestT = Model::AssociateBenefitApplicationResourceRequest>
  Model::AssociateBenefitApplicationResourceOutcomeCallable AssociateBenefitApplicationResourceCallable(
      const AssociateBenefitApplicationResourceRequestT& request) const {
    return SubmitCallable(&PartnerCentralBenefitsClient::AssociateBenefitApplicationResource, request);
  }

  /**
   * An Async wrapper for AssociateBenefitApplicationResource that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename AssociateBenefitApplicationResourceRequestT = Model::AssociateBenefitApplicationResourceRequest>
  void AssociateBenefitApplicationResourceAsync(const AssociateBenefitApplicationResourceRequestT& request,
                                                const AssociateBenefitApplicationResourceResponseReceivedHandler& handler,
                                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralBenefitsClient::AssociateBenefitApplicationResource, request, handler, context);
  }

  /**
   * <p>Cancels a benefit application that is currently in progress, preventing
   * further processing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/CancelBenefitApplication">AWS
   * API Reference</a></p>
   */
  virtual Model::CancelBenefitApplicationOutcome CancelBenefitApplication(const Model::CancelBenefitApplicationRequest& request) const;

  /**
   * A Callable wrapper for CancelBenefitApplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CancelBenefitApplicationRequestT = Model::CancelBenefitApplicationRequest>
  Model::CancelBenefitApplicationOutcomeCallable CancelBenefitApplicationCallable(const CancelBenefitApplicationRequestT& request) const {
    return SubmitCallable(&PartnerCentralBenefitsClient::CancelBenefitApplication, request);
  }

  /**
   * An Async wrapper for CancelBenefitApplication that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CancelBenefitApplicationRequestT = Model::CancelBenefitApplicationRequest>
  void CancelBenefitApplicationAsync(const CancelBenefitApplicationRequestT& request,
                                     const CancelBenefitApplicationResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralBenefitsClient::CancelBenefitApplication, request, handler, context);
  }

  /**
   * <p>Creates a new benefit application for a partner to request access to AWS
   * benefits and programs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/CreateBenefitApplication">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateBenefitApplicationOutcome CreateBenefitApplication(const Model::CreateBenefitApplicationRequest& request) const;

  /**
   * A Callable wrapper for CreateBenefitApplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateBenefitApplicationRequestT = Model::CreateBenefitApplicationRequest>
  Model::CreateBenefitApplicationOutcomeCallable CreateBenefitApplicationCallable(const CreateBenefitApplicationRequestT& request) const {
    return SubmitCallable(&PartnerCentralBenefitsClient::CreateBenefitApplication, request);
  }

  /**
   * An Async wrapper for CreateBenefitApplication that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateBenefitApplicationRequestT = Model::CreateBenefitApplicationRequest>
  void CreateBenefitApplicationAsync(const CreateBenefitApplicationRequestT& request,
                                     const CreateBenefitApplicationResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralBenefitsClient::CreateBenefitApplication, request, handler, context);
  }

  /**
   * <p>Removes the association between an AWS resource and a benefit
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/DisassociateBenefitApplicationResource">AWS
   * API Reference</a></p>
   */
  virtual Model::DisassociateBenefitApplicationResourceOutcome DisassociateBenefitApplicationResource(
      const Model::DisassociateBenefitApplicationResourceRequest& request) const;

  /**
   * A Callable wrapper for DisassociateBenefitApplicationResource that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename DisassociateBenefitApplicationResourceRequestT = Model::DisassociateBenefitApplicationResourceRequest>
  Model::DisassociateBenefitApplicationResourceOutcomeCallable DisassociateBenefitApplicationResourceCallable(
      const DisassociateBenefitApplicationResourceRequestT& request) const {
    return SubmitCallable(&PartnerCentralBenefitsClient::DisassociateBenefitApplicationResource, request);
  }

  /**
   * An Async wrapper for DisassociateBenefitApplicationResource that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename DisassociateBenefitApplicationResourceRequestT = Model::DisassociateBenefitApplicationResourceRequest>
  void DisassociateBenefitApplicationResourceAsync(const DisassociateBenefitApplicationResourceRequestT& request,
                                                   const DisassociateBenefitApplicationResourceResponseReceivedHandler& handler,
                                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralBenefitsClient::DisassociateBenefitApplicationResource, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a specific benefit available in the
   * partner catalog.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/GetBenefit">AWS
   * API Reference</a></p>
   */
  virtual Model::GetBenefitOutcome GetBenefit(const Model::GetBenefitRequest& request) const;

  /**
   * A Callable wrapper for GetBenefit that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetBenefitRequestT = Model::GetBenefitRequest>
  Model::GetBenefitOutcomeCallable GetBenefitCallable(const GetBenefitRequestT& request) const {
    return SubmitCallable(&PartnerCentralBenefitsClient::GetBenefit, request);
  }

  /**
   * An Async wrapper for GetBenefit that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetBenefitRequestT = Model::GetBenefitRequest>
  void GetBenefitAsync(const GetBenefitRequestT& request, const GetBenefitResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralBenefitsClient::GetBenefit, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a specific benefit allocation that has
   * been granted to a partner.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/GetBenefitAllocation">AWS
   * API Reference</a></p>
   */
  virtual Model::GetBenefitAllocationOutcome GetBenefitAllocation(const Model::GetBenefitAllocationRequest& request) const;

  /**
   * A Callable wrapper for GetBenefitAllocation that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetBenefitAllocationRequestT = Model::GetBenefitAllocationRequest>
  Model::GetBenefitAllocationOutcomeCallable GetBenefitAllocationCallable(const GetBenefitAllocationRequestT& request) const {
    return SubmitCallable(&PartnerCentralBenefitsClient::GetBenefitAllocation, request);
  }

  /**
   * An Async wrapper for GetBenefitAllocation that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetBenefitAllocationRequestT = Model::GetBenefitAllocationRequest>
  void GetBenefitAllocationAsync(const GetBenefitAllocationRequestT& request, const GetBenefitAllocationResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralBenefitsClient::GetBenefitAllocation, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a specific benefit
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/GetBenefitApplication">AWS
   * API Reference</a></p>
   */
  virtual Model::GetBenefitApplicationOutcome GetBenefitApplication(const Model::GetBenefitApplicationRequest& request) const;

  /**
   * A Callable wrapper for GetBenefitApplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetBenefitApplicationRequestT = Model::GetBenefitApplicationRequest>
  Model::GetBenefitApplicationOutcomeCallable GetBenefitApplicationCallable(const GetBenefitApplicationRequestT& request) const {
    return SubmitCallable(&PartnerCentralBenefitsClient::GetBenefitApplication, request);
  }

  /**
   * An Async wrapper for GetBenefitApplication that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetBenefitApplicationRequestT = Model::GetBenefitApplicationRequest>
  void GetBenefitApplicationAsync(const GetBenefitApplicationRequestT& request, const GetBenefitApplicationResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralBenefitsClient::GetBenefitApplication, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of benefit allocations based on specified filter
   * criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/ListBenefitAllocations">AWS
   * API Reference</a></p>
   */
  virtual Model::ListBenefitAllocationsOutcome ListBenefitAllocations(const Model::ListBenefitAllocationsRequest& request) const;

  /**
   * A Callable wrapper for ListBenefitAllocations that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListBenefitAllocationsRequestT = Model::ListBenefitAllocationsRequest>
  Model::ListBenefitAllocationsOutcomeCallable ListBenefitAllocationsCallable(const ListBenefitAllocationsRequestT& request) const {
    return SubmitCallable(&PartnerCentralBenefitsClient::ListBenefitAllocations, request);
  }

  /**
   * An Async wrapper for ListBenefitAllocations that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListBenefitAllocationsRequestT = Model::ListBenefitAllocationsRequest>
  void ListBenefitAllocationsAsync(const ListBenefitAllocationsRequestT& request,
                                   const ListBenefitAllocationsResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralBenefitsClient::ListBenefitAllocations, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of benefit applications based on specified filter
   * criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/ListBenefitApplications">AWS
   * API Reference</a></p>
   */
  virtual Model::ListBenefitApplicationsOutcome ListBenefitApplications(const Model::ListBenefitApplicationsRequest& request) const;

  /**
   * A Callable wrapper for ListBenefitApplications that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListBenefitApplicationsRequestT = Model::ListBenefitApplicationsRequest>
  Model::ListBenefitApplicationsOutcomeCallable ListBenefitApplicationsCallable(const ListBenefitApplicationsRequestT& request) const {
    return SubmitCallable(&PartnerCentralBenefitsClient::ListBenefitApplications, request);
  }

  /**
   * An Async wrapper for ListBenefitApplications that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListBenefitApplicationsRequestT = Model::ListBenefitApplicationsRequest>
  void ListBenefitApplicationsAsync(const ListBenefitApplicationsRequestT& request,
                                    const ListBenefitApplicationsResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralBenefitsClient::ListBenefitApplications, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of available benefits based on specified filter
   * criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/ListBenefits">AWS
   * API Reference</a></p>
   */
  virtual Model::ListBenefitsOutcome ListBenefits(const Model::ListBenefitsRequest& request) const;

  /**
   * A Callable wrapper for ListBenefits that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListBenefitsRequestT = Model::ListBenefitsRequest>
  Model::ListBenefitsOutcomeCallable ListBenefitsCallable(const ListBenefitsRequestT& request) const {
    return SubmitCallable(&PartnerCentralBenefitsClient::ListBenefits, request);
  }

  /**
   * An Async wrapper for ListBenefits that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListBenefitsRequestT = Model::ListBenefitsRequest>
  void ListBenefitsAsync(const ListBenefitsRequestT& request, const ListBenefitsResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralBenefitsClient::ListBenefits, request, handler, context);
  }

  /**
   * <p>Retrieves all tags associated with a specific resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&PartnerCentralBenefitsClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralBenefitsClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Recalls a submitted benefit application, returning it to draft status for
   * further modifications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/RecallBenefitApplication">AWS
   * API Reference</a></p>
   */
  virtual Model::RecallBenefitApplicationOutcome RecallBenefitApplication(const Model::RecallBenefitApplicationRequest& request) const;

  /**
   * A Callable wrapper for RecallBenefitApplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename RecallBenefitApplicationRequestT = Model::RecallBenefitApplicationRequest>
  Model::RecallBenefitApplicationOutcomeCallable RecallBenefitApplicationCallable(const RecallBenefitApplicationRequestT& request) const {
    return SubmitCallable(&PartnerCentralBenefitsClient::RecallBenefitApplication, request);
  }

  /**
   * An Async wrapper for RecallBenefitApplication that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename RecallBenefitApplicationRequestT = Model::RecallBenefitApplicationRequest>
  void RecallBenefitApplicationAsync(const RecallBenefitApplicationRequestT& request,
                                     const RecallBenefitApplicationResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralBenefitsClient::RecallBenefitApplication, request, handler, context);
  }

  /**
   * <p>Submits a benefit application for review and processing by AWS.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/SubmitBenefitApplication">AWS
   * API Reference</a></p>
   */
  virtual Model::SubmitBenefitApplicationOutcome SubmitBenefitApplication(const Model::SubmitBenefitApplicationRequest& request) const;

  /**
   * A Callable wrapper for SubmitBenefitApplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename SubmitBenefitApplicationRequestT = Model::SubmitBenefitApplicationRequest>
  Model::SubmitBenefitApplicationOutcomeCallable SubmitBenefitApplicationCallable(const SubmitBenefitApplicationRequestT& request) const {
    return SubmitCallable(&PartnerCentralBenefitsClient::SubmitBenefitApplication, request);
  }

  /**
   * An Async wrapper for SubmitBenefitApplication that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename SubmitBenefitApplicationRequestT = Model::SubmitBenefitApplicationRequest>
  void SubmitBenefitApplicationAsync(const SubmitBenefitApplicationRequestT& request,
                                     const SubmitBenefitApplicationResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralBenefitsClient::SubmitBenefitApplication, request, handler, context);
  }

  /**
   * <p>Adds or updates tags for a specified resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&PartnerCentralBenefitsClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralBenefitsClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&PartnerCentralBenefitsClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralBenefitsClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates an existing benefit application with new information while
   * maintaining revision control.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/UpdateBenefitApplication">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateBenefitApplicationOutcome UpdateBenefitApplication(const Model::UpdateBenefitApplicationRequest& request) const;

  /**
   * A Callable wrapper for UpdateBenefitApplication that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateBenefitApplicationRequestT = Model::UpdateBenefitApplicationRequest>
  Model::UpdateBenefitApplicationOutcomeCallable UpdateBenefitApplicationCallable(const UpdateBenefitApplicationRequestT& request) const {
    return SubmitCallable(&PartnerCentralBenefitsClient::UpdateBenefitApplication, request);
  }

  /**
   * An Async wrapper for UpdateBenefitApplication that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateBenefitApplicationRequestT = Model::UpdateBenefitApplicationRequest>
  void UpdateBenefitApplicationAsync(const UpdateBenefitApplicationRequestT& request,
                                     const UpdateBenefitApplicationResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralBenefitsClient::UpdateBenefitApplication, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<PartnerCentralBenefitsEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<PartnerCentralBenefitsClient>;
  void init(const PartnerCentralBenefitsClientConfiguration& clientConfiguration);

  PartnerCentralBenefitsClientConfiguration m_clientConfiguration;
  std::shared_ptr<PartnerCentralBenefitsEndpointProviderBase> m_endpointProvider;
};

}  // namespace PartnerCentralBenefits
}  // namespace Aws
