/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pricing-plan-manager/PricingPlanManagerPaginationBase.h>
#include <aws/pricing-plan-manager/PricingPlanManagerServiceClientModel.h>
#include <aws/pricing-plan-manager/PricingPlanManagerWaiter.h>
#include <aws/pricing-plan-manager/PricingPlanManager_EXPORTS.h>

namespace Aws {
namespace PricingPlanManager {
/**
 * <p>Manages flat-rate pricing subscriptions for supported services. Use this API
 * to create, approve, update, and cancel subscriptions; associate and disassociate
 * resources; and retrieve subscription details. With a flat-rate pricing
 * subscription, you pay a fixed recurring fee for eligible resources instead of
 * usage-based pricing.</p>
 */
class AWS_PRICINGPLANMANAGER_API PricingPlanManagerClient : public Aws::Client::AWSJsonClient,
                                                            public Aws::Client::ClientWithAsyncTemplateMethods<PricingPlanManagerClient>,
                                                            public PricingPlanManagerPaginationBase<PricingPlanManagerClient>,
                                                            public PricingPlanManagerWaiter<PricingPlanManagerClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef PricingPlanManagerClientConfiguration ClientConfigurationType;
  typedef PricingPlanManagerEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  PricingPlanManagerClient(const Aws::PricingPlanManager::PricingPlanManagerClientConfiguration& clientConfiguration =
                               Aws::PricingPlanManager::PricingPlanManagerClientConfiguration(),
                           std::shared_ptr<PricingPlanManagerEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  PricingPlanManagerClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<PricingPlanManagerEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::PricingPlanManager::PricingPlanManagerClientConfiguration& clientConfiguration =
                               Aws::PricingPlanManager::PricingPlanManagerClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  PricingPlanManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<PricingPlanManagerEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::PricingPlanManager::PricingPlanManagerClientConfiguration& clientConfiguration =
                               Aws::PricingPlanManager::PricingPlanManagerClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  PricingPlanManagerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  PricingPlanManagerClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  PricingPlanManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~PricingPlanManagerClient();

  /**
   * <p>Approves a subscription that is in <code>PENDING_APPROVAL</code> status,
   * activating it and starting billing.</p>  <p>This operation requires the
   * current <code>ETag</code> value for concurrency control. Retrieve it from a
   * previous <code>GetSubscription</code> or <code>ListSubscriptions</code>
   * response.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-plan-manager-2025-08-05/ApprovePaidSubscription">AWS
   * API Reference</a></p>
   */
  virtual Model::ApprovePaidSubscriptionOutcome ApprovePaidSubscription(const Model::ApprovePaidSubscriptionRequest& request) const;

  /**
   * A Callable wrapper for ApprovePaidSubscription that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ApprovePaidSubscriptionRequestT = Model::ApprovePaidSubscriptionRequest>
  Model::ApprovePaidSubscriptionOutcomeCallable ApprovePaidSubscriptionCallable(const ApprovePaidSubscriptionRequestT& request) const {
    return SubmitCallable(&PricingPlanManagerClient::ApprovePaidSubscription, request);
  }

  /**
   * An Async wrapper for ApprovePaidSubscription that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ApprovePaidSubscriptionRequestT = Model::ApprovePaidSubscriptionRequest>
  void ApprovePaidSubscriptionAsync(const ApprovePaidSubscriptionRequestT& request,
                                    const ApprovePaidSubscriptionResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PricingPlanManagerClient::ApprovePaidSubscription, request, handler, context);
  }

  /**
   * <p>Adds one or more resources to an existing subscription. The subscription must
   * be in an active state that is not pending other changes.</p>  <p>For
   * subscriptions in the CloudFront plan family, the associated resources must
   * include exactly one Amazon CloudFront distribution and one WAF web ACL. You can
   * also include other supported resources, such as Amazon Route 53 hosted zones,
   * and CloudFront KeyValueStores.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-plan-manager-2025-08-05/AssociateResourcesToSubscription">AWS
   * API Reference</a></p>
   */
  virtual Model::AssociateResourcesToSubscriptionOutcome AssociateResourcesToSubscription(
      const Model::AssociateResourcesToSubscriptionRequest& request) const;

  /**
   * A Callable wrapper for AssociateResourcesToSubscription that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename AssociateResourcesToSubscriptionRequestT = Model::AssociateResourcesToSubscriptionRequest>
  Model::AssociateResourcesToSubscriptionOutcomeCallable AssociateResourcesToSubscriptionCallable(
      const AssociateResourcesToSubscriptionRequestT& request) const {
    return SubmitCallable(&PricingPlanManagerClient::AssociateResourcesToSubscription, request);
  }

  /**
   * An Async wrapper for AssociateResourcesToSubscription that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename AssociateResourcesToSubscriptionRequestT = Model::AssociateResourcesToSubscriptionRequest>
  void AssociateResourcesToSubscriptionAsync(const AssociateResourcesToSubscriptionRequestT& request,
                                             const AssociateResourcesToSubscriptionResponseReceivedHandler& handler,
                                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PricingPlanManagerClient::AssociateResourcesToSubscription, request, handler, context);
  }

  /**
   * <p>Cancels a flat-rate pricing subscription.</p>  <p>For active
   * subscriptions, the cancellation is scheduled to take effect at the end of the
   * current billing period. The subscription remains active until that date. To
   * revert a pending cancellation, use <code>CancelSubscriptionChange</code>.</p>
   * <p>For subscriptions in <code>PENDING_APPROVAL</code> status, the subscription
   * is deleted immediately without scheduling.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-plan-manager-2025-08-05/CancelSubscription">AWS
   * API Reference</a></p>
   */
  virtual Model::CancelSubscriptionOutcome CancelSubscription(const Model::CancelSubscriptionRequest& request) const;

  /**
   * A Callable wrapper for CancelSubscription that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CancelSubscriptionRequestT = Model::CancelSubscriptionRequest>
  Model::CancelSubscriptionOutcomeCallable CancelSubscriptionCallable(const CancelSubscriptionRequestT& request) const {
    return SubmitCallable(&PricingPlanManagerClient::CancelSubscription, request);
  }

  /**
   * An Async wrapper for CancelSubscription that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CancelSubscriptionRequestT = Model::CancelSubscriptionRequest>
  void CancelSubscriptionAsync(const CancelSubscriptionRequestT& request, const CancelSubscriptionResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PricingPlanManagerClient::CancelSubscription, request, handler, context);
  }

  /**
   * <p>Cancels a pending scheduled change on a subscription, such as a pending
   * downgrade or cancellation. The subscription returns to its state before the
   * change was scheduled.</p>  <p>You cannot cancel a scheduled change close
   * to its effective date. If the change is within the processing window, this
   * operation returns an error.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-plan-manager-2025-08-05/CancelSubscriptionChange">AWS
   * API Reference</a></p>
   */
  virtual Model::CancelSubscriptionChangeOutcome CancelSubscriptionChange(const Model::CancelSubscriptionChangeRequest& request) const;

  /**
   * A Callable wrapper for CancelSubscriptionChange that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CancelSubscriptionChangeRequestT = Model::CancelSubscriptionChangeRequest>
  Model::CancelSubscriptionChangeOutcomeCallable CancelSubscriptionChangeCallable(const CancelSubscriptionChangeRequestT& request) const {
    return SubmitCallable(&PricingPlanManagerClient::CancelSubscriptionChange, request);
  }

  /**
   * An Async wrapper for CancelSubscriptionChange that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CancelSubscriptionChangeRequestT = Model::CancelSubscriptionChangeRequest>
  void CancelSubscriptionChangeAsync(const CancelSubscriptionChangeRequestT& request,
                                     const CancelSubscriptionChangeResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PricingPlanManagerClient::CancelSubscriptionChange, request, handler, context);
  }

  /**
   * <p>Creates a flat-rate pricing subscription for the specified resources.</p>
   *  <p>When <code>approvalMode</code> is set to <code>MANUAL</code>,
   * paid-tier subscriptions are created in <code>PENDING_APPROVAL</code> status and
   * require a separate <code>ApprovePaidSubscription</code> call before billing
   * starts. Free-tier subscriptions are always activated immediately regardless of
   * approval mode.</p> <p>When <code>approvalMode</code> is set to
   * <code>IMMEDIATE</code> or is not specified, the subscription is activated
   * immediately.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-plan-manager-2025-08-05/CreateSubscription">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateSubscriptionOutcome CreateSubscription(const Model::CreateSubscriptionRequest& request) const;

  /**
   * A Callable wrapper for CreateSubscription that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateSubscriptionRequestT = Model::CreateSubscriptionRequest>
  Model::CreateSubscriptionOutcomeCallable CreateSubscriptionCallable(const CreateSubscriptionRequestT& request) const {
    return SubmitCallable(&PricingPlanManagerClient::CreateSubscription, request);
  }

  /**
   * An Async wrapper for CreateSubscription that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateSubscriptionRequestT = Model::CreateSubscriptionRequest>
  void CreateSubscriptionAsync(const CreateSubscriptionRequestT& request, const CreateSubscriptionResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PricingPlanManagerClient::CreateSubscription, request, handler, context);
  }

  /**
   * <p>Removes one or more resources from an existing subscription.</p>
   * <p>For subscriptions in the CloudFront plan family, the associated resources
   * must always include exactly one Amazon CloudFront distribution and exactly one
   * WAF web ACL. You cannot remove these required resources.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-plan-manager-2025-08-05/DisassociateResourcesFromSubscription">AWS
   * API Reference</a></p>
   */
  virtual Model::DisassociateResourcesFromSubscriptionOutcome DisassociateResourcesFromSubscription(
      const Model::DisassociateResourcesFromSubscriptionRequest& request) const;

  /**
   * A Callable wrapper for DisassociateResourcesFromSubscription that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename DisassociateResourcesFromSubscriptionRequestT = Model::DisassociateResourcesFromSubscriptionRequest>
  Model::DisassociateResourcesFromSubscriptionOutcomeCallable DisassociateResourcesFromSubscriptionCallable(
      const DisassociateResourcesFromSubscriptionRequestT& request) const {
    return SubmitCallable(&PricingPlanManagerClient::DisassociateResourcesFromSubscription, request);
  }

  /**
   * An Async wrapper for DisassociateResourcesFromSubscription that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename DisassociateResourcesFromSubscriptionRequestT = Model::DisassociateResourcesFromSubscriptionRequest>
  void DisassociateResourcesFromSubscriptionAsync(const DisassociateResourcesFromSubscriptionRequestT& request,
                                                  const DisassociateResourcesFromSubscriptionResponseReceivedHandler& handler,
                                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PricingPlanManagerClient::DisassociateResourcesFromSubscription, request, handler, context);
  }

  /**
   * <p>Returns the details of a flat-rate pricing subscription, including its
   * current status, associated resources, and any pending scheduled
   * changes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-plan-manager-2025-08-05/GetSubscription">AWS
   * API Reference</a></p>
   */
  virtual Model::GetSubscriptionOutcome GetSubscription(const Model::GetSubscriptionRequest& request) const;

  /**
   * A Callable wrapper for GetSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetSubscriptionRequestT = Model::GetSubscriptionRequest>
  Model::GetSubscriptionOutcomeCallable GetSubscriptionCallable(const GetSubscriptionRequestT& request) const {
    return SubmitCallable(&PricingPlanManagerClient::GetSubscription, request);
  }

  /**
   * An Async wrapper for GetSubscription that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetSubscriptionRequestT = Model::GetSubscriptionRequest>
  void GetSubscriptionAsync(const GetSubscriptionRequestT& request, const GetSubscriptionResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PricingPlanManagerClient::GetSubscription, request, handler, context);
  }

  /**
   * <p>Returns a summary of all flat-rate pricing subscriptions in the calling
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-plan-manager-2025-08-05/ListSubscriptions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListSubscriptionsOutcome ListSubscriptions(const Model::ListSubscriptionsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListSubscriptions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListSubscriptionsRequestT = Model::ListSubscriptionsRequest>
  Model::ListSubscriptionsOutcomeCallable ListSubscriptionsCallable(const ListSubscriptionsRequestT& request = {}) const {
    return SubmitCallable(&PricingPlanManagerClient::ListSubscriptions, request);
  }

  /**
   * An Async wrapper for ListSubscriptions that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListSubscriptionsRequestT = Model::ListSubscriptionsRequest>
  void ListSubscriptionsAsync(const ListSubscriptionsResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const ListSubscriptionsRequestT& request = {}) const {
    return SubmitAsync(&PricingPlanManagerClient::ListSubscriptions, request, handler, context);
  }

  /**
   * <p>Changes the plan tier of an existing subscription.</p>  <p>Upgrades
   * take effect immediately. Downgrades are scheduled and the current tier remains
   * unchanged until the end of the billing cycle (calendar month). You cannot update
   * a subscription while a scheduled change is pending. To make a new change, first
   * cancel the pending change using <code>CancelSubscriptionChange</code>.</p>
   * <p>This operation replaces the plan tier value. If you omit the optional
   * <code>usageLevel</code> field, it is reset to the default.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-plan-manager-2025-08-05/UpdateSubscription">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateSubscriptionOutcome UpdateSubscription(const Model::UpdateSubscriptionRequest& request) const;

  /**
   * A Callable wrapper for UpdateSubscription that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateSubscriptionRequestT = Model::UpdateSubscriptionRequest>
  Model::UpdateSubscriptionOutcomeCallable UpdateSubscriptionCallable(const UpdateSubscriptionRequestT& request) const {
    return SubmitCallable(&PricingPlanManagerClient::UpdateSubscription, request);
  }

  /**
   * An Async wrapper for UpdateSubscription that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateSubscriptionRequestT = Model::UpdateSubscriptionRequest>
  void UpdateSubscriptionAsync(const UpdateSubscriptionRequestT& request, const UpdateSubscriptionResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PricingPlanManagerClient::UpdateSubscription, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<PricingPlanManagerEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<PricingPlanManagerClient>;
  void init(const PricingPlanManagerClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, PricingPlanManagerError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  PricingPlanManagerClientConfiguration m_clientConfiguration;
  std::shared_ptr<PricingPlanManagerEndpointProviderBase> m_endpointProvider;
};

}  // namespace PricingPlanManager
}  // namespace Aws
