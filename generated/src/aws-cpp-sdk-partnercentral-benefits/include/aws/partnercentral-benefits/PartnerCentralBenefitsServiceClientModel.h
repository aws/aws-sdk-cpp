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
#include <aws/partnercentral-benefits/PartnerCentralBenefitsEndpointProvider.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefitsErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in PartnerCentralBenefitsClient header */
#include <aws/partnercentral-benefits/model/AmendBenefitApplicationResult.h>
#include <aws/partnercentral-benefits/model/AssociateBenefitApplicationResourceResult.h>
#include <aws/partnercentral-benefits/model/CancelBenefitApplicationResult.h>
#include <aws/partnercentral-benefits/model/CreateBenefitApplicationResult.h>
#include <aws/partnercentral-benefits/model/DisassociateBenefitApplicationResourceResult.h>
#include <aws/partnercentral-benefits/model/GetBenefitAllocationResult.h>
#include <aws/partnercentral-benefits/model/GetBenefitApplicationResult.h>
#include <aws/partnercentral-benefits/model/GetBenefitResult.h>
#include <aws/partnercentral-benefits/model/ListBenefitAllocationsResult.h>
#include <aws/partnercentral-benefits/model/ListBenefitApplicationsResult.h>
#include <aws/partnercentral-benefits/model/ListBenefitsResult.h>
#include <aws/partnercentral-benefits/model/ListTagsForResourceResult.h>
#include <aws/partnercentral-benefits/model/RecallBenefitApplicationResult.h>
#include <aws/partnercentral-benefits/model/SubmitBenefitApplicationResult.h>
#include <aws/partnercentral-benefits/model/TagResourceResult.h>
#include <aws/partnercentral-benefits/model/UntagResourceResult.h>
#include <aws/partnercentral-benefits/model/UpdateBenefitApplicationResult.h>
/* End of service model headers required in PartnerCentralBenefitsClient header */

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

namespace PartnerCentralBenefits {
using PartnerCentralBenefitsClientConfiguration = Aws::Client::GenericClientConfiguration;
using PartnerCentralBenefitsEndpointProviderBase = Aws::PartnerCentralBenefits::Endpoint::PartnerCentralBenefitsEndpointProviderBase;
using PartnerCentralBenefitsEndpointProvider = Aws::PartnerCentralBenefits::Endpoint::PartnerCentralBenefitsEndpointProvider;

namespace Model {
/* Service model forward declarations required in PartnerCentralBenefitsClient header */
class AmendBenefitApplicationRequest;
class AssociateBenefitApplicationResourceRequest;
class CancelBenefitApplicationRequest;
class CreateBenefitApplicationRequest;
class DisassociateBenefitApplicationResourceRequest;
class GetBenefitRequest;
class GetBenefitAllocationRequest;
class GetBenefitApplicationRequest;
class ListBenefitAllocationsRequest;
class ListBenefitApplicationsRequest;
class ListBenefitsRequest;
class ListTagsForResourceRequest;
class RecallBenefitApplicationRequest;
class SubmitBenefitApplicationRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateBenefitApplicationRequest;
/* End of service model forward declarations required in PartnerCentralBenefitsClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<AmendBenefitApplicationResult, PartnerCentralBenefitsError> AmendBenefitApplicationOutcome;
typedef Aws::Utils::Outcome<AssociateBenefitApplicationResourceResult, PartnerCentralBenefitsError>
    AssociateBenefitApplicationResourceOutcome;
typedef Aws::Utils::Outcome<CancelBenefitApplicationResult, PartnerCentralBenefitsError> CancelBenefitApplicationOutcome;
typedef Aws::Utils::Outcome<CreateBenefitApplicationResult, PartnerCentralBenefitsError> CreateBenefitApplicationOutcome;
typedef Aws::Utils::Outcome<DisassociateBenefitApplicationResourceResult, PartnerCentralBenefitsError>
    DisassociateBenefitApplicationResourceOutcome;
typedef Aws::Utils::Outcome<GetBenefitResult, PartnerCentralBenefitsError> GetBenefitOutcome;
typedef Aws::Utils::Outcome<GetBenefitAllocationResult, PartnerCentralBenefitsError> GetBenefitAllocationOutcome;
typedef Aws::Utils::Outcome<GetBenefitApplicationResult, PartnerCentralBenefitsError> GetBenefitApplicationOutcome;
typedef Aws::Utils::Outcome<ListBenefitAllocationsResult, PartnerCentralBenefitsError> ListBenefitAllocationsOutcome;
typedef Aws::Utils::Outcome<ListBenefitApplicationsResult, PartnerCentralBenefitsError> ListBenefitApplicationsOutcome;
typedef Aws::Utils::Outcome<ListBenefitsResult, PartnerCentralBenefitsError> ListBenefitsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, PartnerCentralBenefitsError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<RecallBenefitApplicationResult, PartnerCentralBenefitsError> RecallBenefitApplicationOutcome;
typedef Aws::Utils::Outcome<SubmitBenefitApplicationResult, PartnerCentralBenefitsError> SubmitBenefitApplicationOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, PartnerCentralBenefitsError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, PartnerCentralBenefitsError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateBenefitApplicationResult, PartnerCentralBenefitsError> UpdateBenefitApplicationOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<AmendBenefitApplicationOutcome> AmendBenefitApplicationOutcomeCallable;
typedef std::future<AssociateBenefitApplicationResourceOutcome> AssociateBenefitApplicationResourceOutcomeCallable;
typedef std::future<CancelBenefitApplicationOutcome> CancelBenefitApplicationOutcomeCallable;
typedef std::future<CreateBenefitApplicationOutcome> CreateBenefitApplicationOutcomeCallable;
typedef std::future<DisassociateBenefitApplicationResourceOutcome> DisassociateBenefitApplicationResourceOutcomeCallable;
typedef std::future<GetBenefitOutcome> GetBenefitOutcomeCallable;
typedef std::future<GetBenefitAllocationOutcome> GetBenefitAllocationOutcomeCallable;
typedef std::future<GetBenefitApplicationOutcome> GetBenefitApplicationOutcomeCallable;
typedef std::future<ListBenefitAllocationsOutcome> ListBenefitAllocationsOutcomeCallable;
typedef std::future<ListBenefitApplicationsOutcome> ListBenefitApplicationsOutcomeCallable;
typedef std::future<ListBenefitsOutcome> ListBenefitsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<RecallBenefitApplicationOutcome> RecallBenefitApplicationOutcomeCallable;
typedef std::future<SubmitBenefitApplicationOutcome> SubmitBenefitApplicationOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateBenefitApplicationOutcome> UpdateBenefitApplicationOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class PartnerCentralBenefitsClient;

/* Service model async handlers definitions */
typedef std::function<void(const PartnerCentralBenefitsClient*, const Model::AmendBenefitApplicationRequest&,
                           const Model::AmendBenefitApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AmendBenefitApplicationResponseReceivedHandler;
typedef std::function<void(const PartnerCentralBenefitsClient*, const Model::AssociateBenefitApplicationResourceRequest&,
                           const Model::AssociateBenefitApplicationResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AssociateBenefitApplicationResourceResponseReceivedHandler;
typedef std::function<void(const PartnerCentralBenefitsClient*, const Model::CancelBenefitApplicationRequest&,
                           const Model::CancelBenefitApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CancelBenefitApplicationResponseReceivedHandler;
typedef std::function<void(const PartnerCentralBenefitsClient*, const Model::CreateBenefitApplicationRequest&,
                           const Model::CreateBenefitApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateBenefitApplicationResponseReceivedHandler;
typedef std::function<void(const PartnerCentralBenefitsClient*, const Model::DisassociateBenefitApplicationResourceRequest&,
                           const Model::DisassociateBenefitApplicationResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DisassociateBenefitApplicationResourceResponseReceivedHandler;
typedef std::function<void(const PartnerCentralBenefitsClient*, const Model::GetBenefitRequest&, const Model::GetBenefitOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetBenefitResponseReceivedHandler;
typedef std::function<void(const PartnerCentralBenefitsClient*, const Model::GetBenefitAllocationRequest&,
                           const Model::GetBenefitAllocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetBenefitAllocationResponseReceivedHandler;
typedef std::function<void(const PartnerCentralBenefitsClient*, const Model::GetBenefitApplicationRequest&,
                           const Model::GetBenefitApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetBenefitApplicationResponseReceivedHandler;
typedef std::function<void(const PartnerCentralBenefitsClient*, const Model::ListBenefitAllocationsRequest&,
                           const Model::ListBenefitAllocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListBenefitAllocationsResponseReceivedHandler;
typedef std::function<void(const PartnerCentralBenefitsClient*, const Model::ListBenefitApplicationsRequest&,
                           const Model::ListBenefitApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListBenefitApplicationsResponseReceivedHandler;
typedef std::function<void(const PartnerCentralBenefitsClient*, const Model::ListBenefitsRequest&, const Model::ListBenefitsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListBenefitsResponseReceivedHandler;
typedef std::function<void(const PartnerCentralBenefitsClient*, const Model::ListTagsForResourceRequest&,
                           const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const PartnerCentralBenefitsClient*, const Model::RecallBenefitApplicationRequest&,
                           const Model::RecallBenefitApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RecallBenefitApplicationResponseReceivedHandler;
typedef std::function<void(const PartnerCentralBenefitsClient*, const Model::SubmitBenefitApplicationRequest&,
                           const Model::SubmitBenefitApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SubmitBenefitApplicationResponseReceivedHandler;
typedef std::function<void(const PartnerCentralBenefitsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const PartnerCentralBenefitsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const PartnerCentralBenefitsClient*, const Model::UpdateBenefitApplicationRequest&,
                           const Model::UpdateBenefitApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateBenefitApplicationResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace PartnerCentralBenefits
}  // namespace Aws
