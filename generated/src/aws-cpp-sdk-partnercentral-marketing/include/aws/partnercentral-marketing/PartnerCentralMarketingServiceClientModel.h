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
#include <aws/partnercentral-marketing/PartnerCentralMarketingEndpointProvider.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketingErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in PartnerCentralMarketingClient header */
#include <aws/core/NoResult.h>
#include <aws/partnercentral-marketing/model/BatchCreateCampaignAssetSdkResult.h>
#include <aws/partnercentral-marketing/model/CreateCampaignResult.h>
#include <aws/partnercentral-marketing/model/CreateSocialConnectionAuthorizationUrlResult.h>
#include <aws/partnercentral-marketing/model/DeactivateCampaignAssetResult.h>
#include <aws/partnercentral-marketing/model/GetCampaignAssetActivationTaskResult.h>
#include <aws/partnercentral-marketing/model/GetCampaignAssetExportTaskResult.h>
#include <aws/partnercentral-marketing/model/GetCampaignAssetResult.h>
#include <aws/partnercentral-marketing/model/GetCampaignResult.h>
#include <aws/partnercentral-marketing/model/GetCampaignTemplateResult.h>
#include <aws/partnercentral-marketing/model/ListCampaignAssetsResult.h>
#include <aws/partnercentral-marketing/model/ListCampaignsResult.h>
#include <aws/partnercentral-marketing/model/ListSocialConnectionsResult.h>
#include <aws/partnercentral-marketing/model/ListTagsForResourceResult.h>
#include <aws/partnercentral-marketing/model/SearchCampaignTemplatesResult.h>
#include <aws/partnercentral-marketing/model/StartCampaignAssetActivationTaskResult.h>
#include <aws/partnercentral-marketing/model/StartCampaignAssetExportTaskResult.h>
#include <aws/partnercentral-marketing/model/TagResourceResult.h>
#include <aws/partnercentral-marketing/model/UntagResourceResult.h>
#include <aws/partnercentral-marketing/model/UpdateCampaignAssetResult.h>
#include <aws/partnercentral-marketing/model/UpdateCampaignResult.h>
/* End of service model headers required in PartnerCentralMarketingClient header */

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

namespace PartnerCentralMarketing {
using PartnerCentralMarketingClientConfiguration = Aws::Client::GenericClientConfiguration;
using PartnerCentralMarketingEndpointProviderBase = Aws::PartnerCentralMarketing::Endpoint::PartnerCentralMarketingEndpointProviderBase;
using PartnerCentralMarketingEndpointProvider = Aws::PartnerCentralMarketing::Endpoint::PartnerCentralMarketingEndpointProvider;

namespace Model {
/* Service model forward declarations required in PartnerCentralMarketingClient header */
class BatchCreateCampaignAssetRequest;
class CreateCampaignRequest;
class CreateSocialConnectionAuthorizationUrlRequest;
class DeactivateCampaignAssetRequest;
class DeleteCampaignRequest;
class DeleteCampaignAssetRequest;
class DeleteSocialConnectionRequest;
class GetCampaignRequest;
class GetCampaignAssetRequest;
class GetCampaignAssetActivationTaskRequest;
class GetCampaignAssetExportTaskRequest;
class GetCampaignTemplateRequest;
class ListCampaignAssetsRequest;
class ListCampaignsRequest;
class ListSocialConnectionsRequest;
class ListTagsForResourceRequest;
class SearchCampaignTemplatesRequest;
class StartCampaignAssetActivationTaskRequest;
class StartCampaignAssetExportTaskRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateCampaignRequest;
class UpdateCampaignAssetRequest;
/* End of service model forward declarations required in PartnerCentralMarketingClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<BatchCreateCampaignAssetSdkResult, PartnerCentralMarketingError> BatchCreateCampaignAssetOutcome;
typedef Aws::Utils::Outcome<CreateCampaignResult, PartnerCentralMarketingError> CreateCampaignOutcome;
typedef Aws::Utils::Outcome<CreateSocialConnectionAuthorizationUrlResult, PartnerCentralMarketingError>
    CreateSocialConnectionAuthorizationUrlOutcome;
typedef Aws::Utils::Outcome<DeactivateCampaignAssetResult, PartnerCentralMarketingError> DeactivateCampaignAssetOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, PartnerCentralMarketingError> DeleteCampaignOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, PartnerCentralMarketingError> DeleteCampaignAssetOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, PartnerCentralMarketingError> DeleteSocialConnectionOutcome;
typedef Aws::Utils::Outcome<GetCampaignResult, PartnerCentralMarketingError> GetCampaignOutcome;
typedef Aws::Utils::Outcome<GetCampaignAssetResult, PartnerCentralMarketingError> GetCampaignAssetOutcome;
typedef Aws::Utils::Outcome<GetCampaignAssetActivationTaskResult, PartnerCentralMarketingError> GetCampaignAssetActivationTaskOutcome;
typedef Aws::Utils::Outcome<GetCampaignAssetExportTaskResult, PartnerCentralMarketingError> GetCampaignAssetExportTaskOutcome;
typedef Aws::Utils::Outcome<GetCampaignTemplateResult, PartnerCentralMarketingError> GetCampaignTemplateOutcome;
typedef Aws::Utils::Outcome<ListCampaignAssetsResult, PartnerCentralMarketingError> ListCampaignAssetsOutcome;
typedef Aws::Utils::Outcome<ListCampaignsResult, PartnerCentralMarketingError> ListCampaignsOutcome;
typedef Aws::Utils::Outcome<ListSocialConnectionsResult, PartnerCentralMarketingError> ListSocialConnectionsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, PartnerCentralMarketingError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<SearchCampaignTemplatesResult, PartnerCentralMarketingError> SearchCampaignTemplatesOutcome;
typedef Aws::Utils::Outcome<StartCampaignAssetActivationTaskResult, PartnerCentralMarketingError> StartCampaignAssetActivationTaskOutcome;
typedef Aws::Utils::Outcome<StartCampaignAssetExportTaskResult, PartnerCentralMarketingError> StartCampaignAssetExportTaskOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, PartnerCentralMarketingError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, PartnerCentralMarketingError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateCampaignResult, PartnerCentralMarketingError> UpdateCampaignOutcome;
typedef Aws::Utils::Outcome<UpdateCampaignAssetResult, PartnerCentralMarketingError> UpdateCampaignAssetOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<BatchCreateCampaignAssetOutcome> BatchCreateCampaignAssetOutcomeCallable;
typedef std::future<CreateCampaignOutcome> CreateCampaignOutcomeCallable;
typedef std::future<CreateSocialConnectionAuthorizationUrlOutcome> CreateSocialConnectionAuthorizationUrlOutcomeCallable;
typedef std::future<DeactivateCampaignAssetOutcome> DeactivateCampaignAssetOutcomeCallable;
typedef std::future<DeleteCampaignOutcome> DeleteCampaignOutcomeCallable;
typedef std::future<DeleteCampaignAssetOutcome> DeleteCampaignAssetOutcomeCallable;
typedef std::future<DeleteSocialConnectionOutcome> DeleteSocialConnectionOutcomeCallable;
typedef std::future<GetCampaignOutcome> GetCampaignOutcomeCallable;
typedef std::future<GetCampaignAssetOutcome> GetCampaignAssetOutcomeCallable;
typedef std::future<GetCampaignAssetActivationTaskOutcome> GetCampaignAssetActivationTaskOutcomeCallable;
typedef std::future<GetCampaignAssetExportTaskOutcome> GetCampaignAssetExportTaskOutcomeCallable;
typedef std::future<GetCampaignTemplateOutcome> GetCampaignTemplateOutcomeCallable;
typedef std::future<ListCampaignAssetsOutcome> ListCampaignAssetsOutcomeCallable;
typedef std::future<ListCampaignsOutcome> ListCampaignsOutcomeCallable;
typedef std::future<ListSocialConnectionsOutcome> ListSocialConnectionsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<SearchCampaignTemplatesOutcome> SearchCampaignTemplatesOutcomeCallable;
typedef std::future<StartCampaignAssetActivationTaskOutcome> StartCampaignAssetActivationTaskOutcomeCallable;
typedef std::future<StartCampaignAssetExportTaskOutcome> StartCampaignAssetExportTaskOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateCampaignOutcome> UpdateCampaignOutcomeCallable;
typedef std::future<UpdateCampaignAssetOutcome> UpdateCampaignAssetOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class PartnerCentralMarketingClient;

/* Service model async handlers definitions */
typedef std::function<void(const PartnerCentralMarketingClient*, const Model::BatchCreateCampaignAssetRequest&,
                           const Model::BatchCreateCampaignAssetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchCreateCampaignAssetResponseReceivedHandler;
typedef std::function<void(const PartnerCentralMarketingClient*, const Model::CreateCampaignRequest&, const Model::CreateCampaignOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateCampaignResponseReceivedHandler;
typedef std::function<void(const PartnerCentralMarketingClient*, const Model::CreateSocialConnectionAuthorizationUrlRequest&,
                           const Model::CreateSocialConnectionAuthorizationUrlOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateSocialConnectionAuthorizationUrlResponseReceivedHandler;
typedef std::function<void(const PartnerCentralMarketingClient*, const Model::DeactivateCampaignAssetRequest&,
                           const Model::DeactivateCampaignAssetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeactivateCampaignAssetResponseReceivedHandler;
typedef std::function<void(const PartnerCentralMarketingClient*, const Model::DeleteCampaignRequest&, const Model::DeleteCampaignOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteCampaignResponseReceivedHandler;
typedef std::function<void(const PartnerCentralMarketingClient*, const Model::DeleteCampaignAssetRequest&,
                           const Model::DeleteCampaignAssetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteCampaignAssetResponseReceivedHandler;
typedef std::function<void(const PartnerCentralMarketingClient*, const Model::DeleteSocialConnectionRequest&,
                           const Model::DeleteSocialConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteSocialConnectionResponseReceivedHandler;
typedef std::function<void(const PartnerCentralMarketingClient*, const Model::GetCampaignRequest&, const Model::GetCampaignOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetCampaignResponseReceivedHandler;
typedef std::function<void(const PartnerCentralMarketingClient*, const Model::GetCampaignAssetRequest&,
                           const Model::GetCampaignAssetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetCampaignAssetResponseReceivedHandler;
typedef std::function<void(const PartnerCentralMarketingClient*, const Model::GetCampaignAssetActivationTaskRequest&,
                           const Model::GetCampaignAssetActivationTaskOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetCampaignAssetActivationTaskResponseReceivedHandler;
typedef std::function<void(const PartnerCentralMarketingClient*, const Model::GetCampaignAssetExportTaskRequest&,
                           const Model::GetCampaignAssetExportTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetCampaignAssetExportTaskResponseReceivedHandler;
typedef std::function<void(const PartnerCentralMarketingClient*, const Model::GetCampaignTemplateRequest&,
                           const Model::GetCampaignTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetCampaignTemplateResponseReceivedHandler;
typedef std::function<void(const PartnerCentralMarketingClient*, const Model::ListCampaignAssetsRequest&,
                           const Model::ListCampaignAssetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListCampaignAssetsResponseReceivedHandler;
typedef std::function<void(const PartnerCentralMarketingClient*, const Model::ListCampaignsRequest&, const Model::ListCampaignsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListCampaignsResponseReceivedHandler;
typedef std::function<void(const PartnerCentralMarketingClient*, const Model::ListSocialConnectionsRequest&,
                           const Model::ListSocialConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListSocialConnectionsResponseReceivedHandler;
typedef std::function<void(const PartnerCentralMarketingClient*, const Model::ListTagsForResourceRequest&,
                           const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const PartnerCentralMarketingClient*, const Model::SearchCampaignTemplatesRequest&,
                           const Model::SearchCampaignTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SearchCampaignTemplatesResponseReceivedHandler;
typedef std::function<void(const PartnerCentralMarketingClient*, const Model::StartCampaignAssetActivationTaskRequest&,
                           const Model::StartCampaignAssetActivationTaskOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartCampaignAssetActivationTaskResponseReceivedHandler;
typedef std::function<void(const PartnerCentralMarketingClient*, const Model::StartCampaignAssetExportTaskRequest&,
                           const Model::StartCampaignAssetExportTaskOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartCampaignAssetExportTaskResponseReceivedHandler;
typedef std::function<void(const PartnerCentralMarketingClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const PartnerCentralMarketingClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const PartnerCentralMarketingClient*, const Model::UpdateCampaignRequest&, const Model::UpdateCampaignOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateCampaignResponseReceivedHandler;
typedef std::function<void(const PartnerCentralMarketingClient*, const Model::UpdateCampaignAssetRequest&,
                           const Model::UpdateCampaignAssetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateCampaignAssetResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace PartnerCentralMarketing
}  // namespace Aws
