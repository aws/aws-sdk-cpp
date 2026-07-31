/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pricing-plan-manager/PricingPlanManagerEndpointProvider.h>
#include <aws/pricing-plan-manager/PricingPlanManagerErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in PricingPlanManagerClient header */
#include <aws/pricing-plan-manager/model/ApprovePaidSubscriptionResult.h>
#include <aws/pricing-plan-manager/model/AssociateResourcesToSubscriptionResult.h>
#include <aws/pricing-plan-manager/model/CancelSubscriptionChangeResult.h>
#include <aws/pricing-plan-manager/model/CancelSubscriptionResult.h>
#include <aws/pricing-plan-manager/model/CreateSubscriptionResult.h>
#include <aws/pricing-plan-manager/model/DisassociateResourcesFromSubscriptionResult.h>
#include <aws/pricing-plan-manager/model/GetSubscriptionResult.h>
#include <aws/pricing-plan-manager/model/ListSubscriptionsRequest.h>
#include <aws/pricing-plan-manager/model/ListSubscriptionsResult.h>
#include <aws/pricing-plan-manager/model/UpdateSubscriptionResult.h>
/* End of service model headers required in PricingPlanManagerClient header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace PricingPlanManager {
using PricingPlanManagerClientConfiguration = Aws::Client::GenericClientConfiguration;
using PricingPlanManagerEndpointProviderBase = Aws::PricingPlanManager::Endpoint::PricingPlanManagerEndpointProviderBase;
using PricingPlanManagerEndpointProvider = Aws::PricingPlanManager::Endpoint::PricingPlanManagerEndpointProvider;

namespace Model {
/* Service model forward declarations required in PricingPlanManagerClient header */
class ApprovePaidSubscriptionRequest;
class AssociateResourcesToSubscriptionRequest;
class CancelSubscriptionRequest;
class CancelSubscriptionChangeRequest;
class CreateSubscriptionRequest;
class DisassociateResourcesFromSubscriptionRequest;
class GetSubscriptionRequest;
class ListSubscriptionsRequest;
class UpdateSubscriptionRequest;
/* End of service model forward declarations required in PricingPlanManagerClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<ApprovePaidSubscriptionResult, PricingPlanManagerError> ApprovePaidSubscriptionOutcome;
typedef Aws::Utils::Outcome<AssociateResourcesToSubscriptionResult, PricingPlanManagerError> AssociateResourcesToSubscriptionOutcome;
typedef Aws::Utils::Outcome<CancelSubscriptionResult, PricingPlanManagerError> CancelSubscriptionOutcome;
typedef Aws::Utils::Outcome<CancelSubscriptionChangeResult, PricingPlanManagerError> CancelSubscriptionChangeOutcome;
typedef Aws::Utils::Outcome<CreateSubscriptionResult, PricingPlanManagerError> CreateSubscriptionOutcome;
typedef Aws::Utils::Outcome<DisassociateResourcesFromSubscriptionResult, PricingPlanManagerError>
    DisassociateResourcesFromSubscriptionOutcome;
typedef Aws::Utils::Outcome<GetSubscriptionResult, PricingPlanManagerError> GetSubscriptionOutcome;
typedef Aws::Utils::Outcome<ListSubscriptionsResult, PricingPlanManagerError> ListSubscriptionsOutcome;
typedef Aws::Utils::Outcome<UpdateSubscriptionResult, PricingPlanManagerError> UpdateSubscriptionOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<ApprovePaidSubscriptionOutcome> ApprovePaidSubscriptionOutcomeCallable;
typedef std::future<AssociateResourcesToSubscriptionOutcome> AssociateResourcesToSubscriptionOutcomeCallable;
typedef std::future<CancelSubscriptionOutcome> CancelSubscriptionOutcomeCallable;
typedef std::future<CancelSubscriptionChangeOutcome> CancelSubscriptionChangeOutcomeCallable;
typedef std::future<CreateSubscriptionOutcome> CreateSubscriptionOutcomeCallable;
typedef std::future<DisassociateResourcesFromSubscriptionOutcome> DisassociateResourcesFromSubscriptionOutcomeCallable;
typedef std::future<GetSubscriptionOutcome> GetSubscriptionOutcomeCallable;
typedef std::future<ListSubscriptionsOutcome> ListSubscriptionsOutcomeCallable;
typedef std::future<UpdateSubscriptionOutcome> UpdateSubscriptionOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class PricingPlanManagerClient;

/* Service model async handlers definitions */
typedef std::function<void(const PricingPlanManagerClient*, const Model::ApprovePaidSubscriptionRequest&,
                           const Model::ApprovePaidSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ApprovePaidSubscriptionResponseReceivedHandler;
typedef std::function<void(const PricingPlanManagerClient*, const Model::AssociateResourcesToSubscriptionRequest&,
                           const Model::AssociateResourcesToSubscriptionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AssociateResourcesToSubscriptionResponseReceivedHandler;
typedef std::function<void(const PricingPlanManagerClient*, const Model::CancelSubscriptionRequest&,
                           const Model::CancelSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CancelSubscriptionResponseReceivedHandler;
typedef std::function<void(const PricingPlanManagerClient*, const Model::CancelSubscriptionChangeRequest&,
                           const Model::CancelSubscriptionChangeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CancelSubscriptionChangeResponseReceivedHandler;
typedef std::function<void(const PricingPlanManagerClient*, const Model::CreateSubscriptionRequest&,
                           const Model::CreateSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateSubscriptionResponseReceivedHandler;
typedef std::function<void(const PricingPlanManagerClient*, const Model::DisassociateResourcesFromSubscriptionRequest&,
                           const Model::DisassociateResourcesFromSubscriptionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DisassociateResourcesFromSubscriptionResponseReceivedHandler;
typedef std::function<void(const PricingPlanManagerClient*, const Model::GetSubscriptionRequest&, const Model::GetSubscriptionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetSubscriptionResponseReceivedHandler;
typedef std::function<void(const PricingPlanManagerClient*, const Model::ListSubscriptionsRequest&, const Model::ListSubscriptionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListSubscriptionsResponseReceivedHandler;
typedef std::function<void(const PricingPlanManagerClient*, const Model::UpdateSubscriptionRequest&,
                           const Model::UpdateSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateSubscriptionResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace PricingPlanManager
}  // namespace Aws
