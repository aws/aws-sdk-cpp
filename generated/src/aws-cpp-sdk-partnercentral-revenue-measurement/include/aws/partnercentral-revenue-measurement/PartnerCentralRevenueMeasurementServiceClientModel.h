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
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementEndpointProvider.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in PartnerCentralRevenueMeasurementClient header */
#include <aws/core/NoResult.h>
#include <aws/partnercentral-revenue-measurement/model/CreateMarketplaceRevenueShareAllocationResult.h>
#include <aws/partnercentral-revenue-measurement/model/CreateMarketplaceRevenueShareResult.h>
#include <aws/partnercentral-revenue-measurement/model/CreateRevenueAttributionResult.h>
#include <aws/partnercentral-revenue-measurement/model/GetMarketplaceRevenueShareAllocationResult.h>
#include <aws/partnercentral-revenue-measurement/model/GetMarketplaceRevenueShareResult.h>
#include <aws/partnercentral-revenue-measurement/model/GetRevenueAttributionAllocationResult.h>
#include <aws/partnercentral-revenue-measurement/model/GetRevenueAttributionAllocationsTaskResult.h>
#include <aws/partnercentral-revenue-measurement/model/GetRevenueAttributionResult.h>
#include <aws/partnercentral-revenue-measurement/model/ListMarketplaceRevenueShareAllocationsResult.h>
#include <aws/partnercentral-revenue-measurement/model/ListMarketplaceRevenueSharesResult.h>
#include <aws/partnercentral-revenue-measurement/model/ListRevenueAttributionAllocationsResult.h>
#include <aws/partnercentral-revenue-measurement/model/ListRevenueAttributionsResult.h>
#include <aws/partnercentral-revenue-measurement/model/ListTagsForResourceResult.h>
#include <aws/partnercentral-revenue-measurement/model/StartRevenueAttributionAllocationsTaskResult.h>
#include <aws/partnercentral-revenue-measurement/model/UpdateMarketplaceRevenueShareAllocationResult.h>
#include <aws/partnercentral-revenue-measurement/model/UpdateRevenueAttributionResult.h>
/* End of service model headers required in PartnerCentralRevenueMeasurementClient header */

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

namespace PartnerCentralRevenueMeasurement {
using PartnerCentralRevenueMeasurementClientConfiguration = Aws::Client::GenericClientConfiguration;
using PartnerCentralRevenueMeasurementEndpointProviderBase =
    Aws::PartnerCentralRevenueMeasurement::Endpoint::PartnerCentralRevenueMeasurementEndpointProviderBase;
using PartnerCentralRevenueMeasurementEndpointProvider =
    Aws::PartnerCentralRevenueMeasurement::Endpoint::PartnerCentralRevenueMeasurementEndpointProvider;

namespace Model {
/* Service model forward declarations required in PartnerCentralRevenueMeasurementClient header */
class CreateMarketplaceRevenueShareRequest;
class CreateMarketplaceRevenueShareAllocationRequest;
class CreateRevenueAttributionRequest;
class GetMarketplaceRevenueShareRequest;
class GetMarketplaceRevenueShareAllocationRequest;
class GetRevenueAttributionRequest;
class GetRevenueAttributionAllocationRequest;
class GetRevenueAttributionAllocationsTaskRequest;
class ListMarketplaceRevenueShareAllocationsRequest;
class ListMarketplaceRevenueSharesRequest;
class ListRevenueAttributionAllocationsRequest;
class ListRevenueAttributionsRequest;
class ListTagsForResourceRequest;
class StartRevenueAttributionAllocationsTaskRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateMarketplaceRevenueShareAllocationRequest;
class UpdateRevenueAttributionRequest;
/* End of service model forward declarations required in PartnerCentralRevenueMeasurementClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CreateMarketplaceRevenueShareResult, PartnerCentralRevenueMeasurementError>
    CreateMarketplaceRevenueShareOutcome;
typedef Aws::Utils::Outcome<CreateMarketplaceRevenueShareAllocationResult, PartnerCentralRevenueMeasurementError>
    CreateMarketplaceRevenueShareAllocationOutcome;
typedef Aws::Utils::Outcome<CreateRevenueAttributionResult, PartnerCentralRevenueMeasurementError> CreateRevenueAttributionOutcome;
typedef Aws::Utils::Outcome<GetMarketplaceRevenueShareResult, PartnerCentralRevenueMeasurementError> GetMarketplaceRevenueShareOutcome;
typedef Aws::Utils::Outcome<GetMarketplaceRevenueShareAllocationResult, PartnerCentralRevenueMeasurementError>
    GetMarketplaceRevenueShareAllocationOutcome;
typedef Aws::Utils::Outcome<GetRevenueAttributionResult, PartnerCentralRevenueMeasurementError> GetRevenueAttributionOutcome;
typedef Aws::Utils::Outcome<GetRevenueAttributionAllocationResult, PartnerCentralRevenueMeasurementError>
    GetRevenueAttributionAllocationOutcome;
typedef Aws::Utils::Outcome<GetRevenueAttributionAllocationsTaskResult, PartnerCentralRevenueMeasurementError>
    GetRevenueAttributionAllocationsTaskOutcome;
typedef Aws::Utils::Outcome<ListMarketplaceRevenueShareAllocationsResult, PartnerCentralRevenueMeasurementError>
    ListMarketplaceRevenueShareAllocationsOutcome;
typedef Aws::Utils::Outcome<ListMarketplaceRevenueSharesResult, PartnerCentralRevenueMeasurementError> ListMarketplaceRevenueSharesOutcome;
typedef Aws::Utils::Outcome<ListRevenueAttributionAllocationsResult, PartnerCentralRevenueMeasurementError>
    ListRevenueAttributionAllocationsOutcome;
typedef Aws::Utils::Outcome<ListRevenueAttributionsResult, PartnerCentralRevenueMeasurementError> ListRevenueAttributionsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, PartnerCentralRevenueMeasurementError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<StartRevenueAttributionAllocationsTaskResult, PartnerCentralRevenueMeasurementError>
    StartRevenueAttributionAllocationsTaskOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, PartnerCentralRevenueMeasurementError> TagResourceOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, PartnerCentralRevenueMeasurementError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateMarketplaceRevenueShareAllocationResult, PartnerCentralRevenueMeasurementError>
    UpdateMarketplaceRevenueShareAllocationOutcome;
typedef Aws::Utils::Outcome<UpdateRevenueAttributionResult, PartnerCentralRevenueMeasurementError> UpdateRevenueAttributionOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CreateMarketplaceRevenueShareOutcome> CreateMarketplaceRevenueShareOutcomeCallable;
typedef std::future<CreateMarketplaceRevenueShareAllocationOutcome> CreateMarketplaceRevenueShareAllocationOutcomeCallable;
typedef std::future<CreateRevenueAttributionOutcome> CreateRevenueAttributionOutcomeCallable;
typedef std::future<GetMarketplaceRevenueShareOutcome> GetMarketplaceRevenueShareOutcomeCallable;
typedef std::future<GetMarketplaceRevenueShareAllocationOutcome> GetMarketplaceRevenueShareAllocationOutcomeCallable;
typedef std::future<GetRevenueAttributionOutcome> GetRevenueAttributionOutcomeCallable;
typedef std::future<GetRevenueAttributionAllocationOutcome> GetRevenueAttributionAllocationOutcomeCallable;
typedef std::future<GetRevenueAttributionAllocationsTaskOutcome> GetRevenueAttributionAllocationsTaskOutcomeCallable;
typedef std::future<ListMarketplaceRevenueShareAllocationsOutcome> ListMarketplaceRevenueShareAllocationsOutcomeCallable;
typedef std::future<ListMarketplaceRevenueSharesOutcome> ListMarketplaceRevenueSharesOutcomeCallable;
typedef std::future<ListRevenueAttributionAllocationsOutcome> ListRevenueAttributionAllocationsOutcomeCallable;
typedef std::future<ListRevenueAttributionsOutcome> ListRevenueAttributionsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<StartRevenueAttributionAllocationsTaskOutcome> StartRevenueAttributionAllocationsTaskOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateMarketplaceRevenueShareAllocationOutcome> UpdateMarketplaceRevenueShareAllocationOutcomeCallable;
typedef std::future<UpdateRevenueAttributionOutcome> UpdateRevenueAttributionOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class PartnerCentralRevenueMeasurementClient;

/* Service model async handlers definitions */
typedef std::function<void(const PartnerCentralRevenueMeasurementClient*, const Model::CreateMarketplaceRevenueShareRequest&,
                           const Model::CreateMarketplaceRevenueShareOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateMarketplaceRevenueShareResponseReceivedHandler;
typedef std::function<void(const PartnerCentralRevenueMeasurementClient*, const Model::CreateMarketplaceRevenueShareAllocationRequest&,
                           const Model::CreateMarketplaceRevenueShareAllocationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateMarketplaceRevenueShareAllocationResponseReceivedHandler;
typedef std::function<void(const PartnerCentralRevenueMeasurementClient*, const Model::CreateRevenueAttributionRequest&,
                           const Model::CreateRevenueAttributionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateRevenueAttributionResponseReceivedHandler;
typedef std::function<void(const PartnerCentralRevenueMeasurementClient*, const Model::GetMarketplaceRevenueShareRequest&,
                           const Model::GetMarketplaceRevenueShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetMarketplaceRevenueShareResponseReceivedHandler;
typedef std::function<void(const PartnerCentralRevenueMeasurementClient*, const Model::GetMarketplaceRevenueShareAllocationRequest&,
                           const Model::GetMarketplaceRevenueShareAllocationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetMarketplaceRevenueShareAllocationResponseReceivedHandler;
typedef std::function<void(const PartnerCentralRevenueMeasurementClient*, const Model::GetRevenueAttributionRequest&,
                           const Model::GetRevenueAttributionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetRevenueAttributionResponseReceivedHandler;
typedef std::function<void(const PartnerCentralRevenueMeasurementClient*, const Model::GetRevenueAttributionAllocationRequest&,
                           const Model::GetRevenueAttributionAllocationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetRevenueAttributionAllocationResponseReceivedHandler;
typedef std::function<void(const PartnerCentralRevenueMeasurementClient*, const Model::GetRevenueAttributionAllocationsTaskRequest&,
                           const Model::GetRevenueAttributionAllocationsTaskOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetRevenueAttributionAllocationsTaskResponseReceivedHandler;
typedef std::function<void(const PartnerCentralRevenueMeasurementClient*, const Model::ListMarketplaceRevenueShareAllocationsRequest&,
                           const Model::ListMarketplaceRevenueShareAllocationsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListMarketplaceRevenueShareAllocationsResponseReceivedHandler;
typedef std::function<void(const PartnerCentralRevenueMeasurementClient*, const Model::ListMarketplaceRevenueSharesRequest&,
                           const Model::ListMarketplaceRevenueSharesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListMarketplaceRevenueSharesResponseReceivedHandler;
typedef std::function<void(const PartnerCentralRevenueMeasurementClient*, const Model::ListRevenueAttributionAllocationsRequest&,
                           const Model::ListRevenueAttributionAllocationsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListRevenueAttributionAllocationsResponseReceivedHandler;
typedef std::function<void(const PartnerCentralRevenueMeasurementClient*, const Model::ListRevenueAttributionsRequest&,
                           const Model::ListRevenueAttributionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListRevenueAttributionsResponseReceivedHandler;
typedef std::function<void(const PartnerCentralRevenueMeasurementClient*, const Model::ListTagsForResourceRequest&,
                           const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const PartnerCentralRevenueMeasurementClient*, const Model::StartRevenueAttributionAllocationsTaskRequest&,
                           const Model::StartRevenueAttributionAllocationsTaskOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartRevenueAttributionAllocationsTaskResponseReceivedHandler;
typedef std::function<void(const PartnerCentralRevenueMeasurementClient*, const Model::TagResourceRequest&,
                           const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const PartnerCentralRevenueMeasurementClient*, const Model::UntagResourceRequest&,
                           const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const PartnerCentralRevenueMeasurementClient*, const Model::UpdateMarketplaceRevenueShareAllocationRequest&,
                           const Model::UpdateMarketplaceRevenueShareAllocationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateMarketplaceRevenueShareAllocationResponseReceivedHandler;
typedef std::function<void(const PartnerCentralRevenueMeasurementClient*, const Model::UpdateRevenueAttributionRequest&,
                           const Model::UpdateRevenueAttributionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateRevenueAttributionResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
