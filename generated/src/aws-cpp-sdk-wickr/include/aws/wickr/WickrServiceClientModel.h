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
#include <aws/wickr/WickrEndpointProvider.h>
#include <aws/wickr/WickrErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in WickrClient header */
#include <aws/wickr/model/BatchCreateUserResult.h>
#include <aws/wickr/model/BatchDeleteUserResult.h>
#include <aws/wickr/model/BatchLookupUserUnameResult.h>
#include <aws/wickr/model/BatchReinviteUserResult.h>
#include <aws/wickr/model/BatchResetDevicesForUserResult.h>
#include <aws/wickr/model/BatchToggleUserSuspendStatusResult.h>
#include <aws/wickr/model/CreateBotResult.h>
#include <aws/wickr/model/CreateDataRetentionBotChallengeResult.h>
#include <aws/wickr/model/CreateDataRetentionBotResult.h>
#include <aws/wickr/model/CreateNetworkResult.h>
#include <aws/wickr/model/CreateSecurityGroupResult.h>
#include <aws/wickr/model/DeleteBotResult.h>
#include <aws/wickr/model/DeleteDataRetentionBotResult.h>
#include <aws/wickr/model/DeleteNetworkResult.h>
#include <aws/wickr/model/DeleteSecurityGroupResult.h>
#include <aws/wickr/model/GetBotResult.h>
#include <aws/wickr/model/GetBotsCountResult.h>
#include <aws/wickr/model/GetDataRetentionBotResult.h>
#include <aws/wickr/model/GetGuestUserHistoryCountResult.h>
#include <aws/wickr/model/GetNetworkResult.h>
#include <aws/wickr/model/GetNetworkSettingsResult.h>
#include <aws/wickr/model/GetOidcInfoResult.h>
#include <aws/wickr/model/GetSecurityGroupResult.h>
#include <aws/wickr/model/GetUserResult.h>
#include <aws/wickr/model/GetUsersCountResult.h>
#include <aws/wickr/model/ListBlockedGuestUsersResult.h>
#include <aws/wickr/model/ListBotsResult.h>
#include <aws/wickr/model/ListDevicesForUserResult.h>
#include <aws/wickr/model/ListGuestUsersResult.h>
#include <aws/wickr/model/ListNetworksRequest.h>
#include <aws/wickr/model/ListNetworksResult.h>
#include <aws/wickr/model/ListSecurityGroupUsersResult.h>
#include <aws/wickr/model/ListSecurityGroupsResult.h>
#include <aws/wickr/model/ListUsersResult.h>
#include <aws/wickr/model/RegisterOidcConfigResult.h>
#include <aws/wickr/model/RegisterOidcConfigTestResult.h>
#include <aws/wickr/model/UpdateBotResult.h>
#include <aws/wickr/model/UpdateDataRetentionResult.h>
#include <aws/wickr/model/UpdateGuestUserResult.h>
#include <aws/wickr/model/UpdateNetworkResult.h>
#include <aws/wickr/model/UpdateNetworkSettingsResult.h>
#include <aws/wickr/model/UpdateSecurityGroupResult.h>
#include <aws/wickr/model/UpdateUserResult.h>
/* End of service model headers required in WickrClient header */

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

namespace Wickr {
using WickrClientConfiguration = Aws::Client::GenericClientConfiguration;
using WickrEndpointProviderBase = Aws::Wickr::Endpoint::WickrEndpointProviderBase;
using WickrEndpointProvider = Aws::Wickr::Endpoint::WickrEndpointProvider;

namespace Model {
/* Service model forward declarations required in WickrClient header */
class BatchCreateUserRequest;
class BatchDeleteUserRequest;
class BatchLookupUserUnameRequest;
class BatchReinviteUserRequest;
class BatchResetDevicesForUserRequest;
class BatchToggleUserSuspendStatusRequest;
class CreateBotRequest;
class CreateDataRetentionBotRequest;
class CreateDataRetentionBotChallengeRequest;
class CreateNetworkRequest;
class CreateSecurityGroupRequest;
class DeleteBotRequest;
class DeleteDataRetentionBotRequest;
class DeleteNetworkRequest;
class DeleteSecurityGroupRequest;
class GetBotRequest;
class GetBotsCountRequest;
class GetDataRetentionBotRequest;
class GetGuestUserHistoryCountRequest;
class GetNetworkRequest;
class GetNetworkSettingsRequest;
class GetOidcInfoRequest;
class GetSecurityGroupRequest;
class GetUserRequest;
class GetUsersCountRequest;
class ListBlockedGuestUsersRequest;
class ListBotsRequest;
class ListDevicesForUserRequest;
class ListGuestUsersRequest;
class ListNetworksRequest;
class ListSecurityGroupUsersRequest;
class ListSecurityGroupsRequest;
class ListUsersRequest;
class RegisterOidcConfigRequest;
class RegisterOidcConfigTestRequest;
class UpdateBotRequest;
class UpdateDataRetentionRequest;
class UpdateGuestUserRequest;
class UpdateNetworkRequest;
class UpdateNetworkSettingsRequest;
class UpdateSecurityGroupRequest;
class UpdateUserRequest;
/* End of service model forward declarations required in WickrClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<BatchCreateUserResult, WickrError> BatchCreateUserOutcome;
typedef Aws::Utils::Outcome<BatchDeleteUserResult, WickrError> BatchDeleteUserOutcome;
typedef Aws::Utils::Outcome<BatchLookupUserUnameResult, WickrError> BatchLookupUserUnameOutcome;
typedef Aws::Utils::Outcome<BatchReinviteUserResult, WickrError> BatchReinviteUserOutcome;
typedef Aws::Utils::Outcome<BatchResetDevicesForUserResult, WickrError> BatchResetDevicesForUserOutcome;
typedef Aws::Utils::Outcome<BatchToggleUserSuspendStatusResult, WickrError> BatchToggleUserSuspendStatusOutcome;
typedef Aws::Utils::Outcome<CreateBotResult, WickrError> CreateBotOutcome;
typedef Aws::Utils::Outcome<CreateDataRetentionBotResult, WickrError> CreateDataRetentionBotOutcome;
typedef Aws::Utils::Outcome<CreateDataRetentionBotChallengeResult, WickrError> CreateDataRetentionBotChallengeOutcome;
typedef Aws::Utils::Outcome<CreateNetworkResult, WickrError> CreateNetworkOutcome;
typedef Aws::Utils::Outcome<CreateSecurityGroupResult, WickrError> CreateSecurityGroupOutcome;
typedef Aws::Utils::Outcome<DeleteBotResult, WickrError> DeleteBotOutcome;
typedef Aws::Utils::Outcome<DeleteDataRetentionBotResult, WickrError> DeleteDataRetentionBotOutcome;
typedef Aws::Utils::Outcome<DeleteNetworkResult, WickrError> DeleteNetworkOutcome;
typedef Aws::Utils::Outcome<DeleteSecurityGroupResult, WickrError> DeleteSecurityGroupOutcome;
typedef Aws::Utils::Outcome<GetBotResult, WickrError> GetBotOutcome;
typedef Aws::Utils::Outcome<GetBotsCountResult, WickrError> GetBotsCountOutcome;
typedef Aws::Utils::Outcome<GetDataRetentionBotResult, WickrError> GetDataRetentionBotOutcome;
typedef Aws::Utils::Outcome<GetGuestUserHistoryCountResult, WickrError> GetGuestUserHistoryCountOutcome;
typedef Aws::Utils::Outcome<GetNetworkResult, WickrError> GetNetworkOutcome;
typedef Aws::Utils::Outcome<GetNetworkSettingsResult, WickrError> GetNetworkSettingsOutcome;
typedef Aws::Utils::Outcome<GetOidcInfoResult, WickrError> GetOidcInfoOutcome;
typedef Aws::Utils::Outcome<GetSecurityGroupResult, WickrError> GetSecurityGroupOutcome;
typedef Aws::Utils::Outcome<GetUserResult, WickrError> GetUserOutcome;
typedef Aws::Utils::Outcome<GetUsersCountResult, WickrError> GetUsersCountOutcome;
typedef Aws::Utils::Outcome<ListBlockedGuestUsersResult, WickrError> ListBlockedGuestUsersOutcome;
typedef Aws::Utils::Outcome<ListBotsResult, WickrError> ListBotsOutcome;
typedef Aws::Utils::Outcome<ListDevicesForUserResult, WickrError> ListDevicesForUserOutcome;
typedef Aws::Utils::Outcome<ListGuestUsersResult, WickrError> ListGuestUsersOutcome;
typedef Aws::Utils::Outcome<ListNetworksResult, WickrError> ListNetworksOutcome;
typedef Aws::Utils::Outcome<ListSecurityGroupUsersResult, WickrError> ListSecurityGroupUsersOutcome;
typedef Aws::Utils::Outcome<ListSecurityGroupsResult, WickrError> ListSecurityGroupsOutcome;
typedef Aws::Utils::Outcome<ListUsersResult, WickrError> ListUsersOutcome;
typedef Aws::Utils::Outcome<RegisterOidcConfigResult, WickrError> RegisterOidcConfigOutcome;
typedef Aws::Utils::Outcome<RegisterOidcConfigTestResult, WickrError> RegisterOidcConfigTestOutcome;
typedef Aws::Utils::Outcome<UpdateBotResult, WickrError> UpdateBotOutcome;
typedef Aws::Utils::Outcome<UpdateDataRetentionResult, WickrError> UpdateDataRetentionOutcome;
typedef Aws::Utils::Outcome<UpdateGuestUserResult, WickrError> UpdateGuestUserOutcome;
typedef Aws::Utils::Outcome<UpdateNetworkResult, WickrError> UpdateNetworkOutcome;
typedef Aws::Utils::Outcome<UpdateNetworkSettingsResult, WickrError> UpdateNetworkSettingsOutcome;
typedef Aws::Utils::Outcome<UpdateSecurityGroupResult, WickrError> UpdateSecurityGroupOutcome;
typedef Aws::Utils::Outcome<UpdateUserResult, WickrError> UpdateUserOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<BatchCreateUserOutcome> BatchCreateUserOutcomeCallable;
typedef std::future<BatchDeleteUserOutcome> BatchDeleteUserOutcomeCallable;
typedef std::future<BatchLookupUserUnameOutcome> BatchLookupUserUnameOutcomeCallable;
typedef std::future<BatchReinviteUserOutcome> BatchReinviteUserOutcomeCallable;
typedef std::future<BatchResetDevicesForUserOutcome> BatchResetDevicesForUserOutcomeCallable;
typedef std::future<BatchToggleUserSuspendStatusOutcome> BatchToggleUserSuspendStatusOutcomeCallable;
typedef std::future<CreateBotOutcome> CreateBotOutcomeCallable;
typedef std::future<CreateDataRetentionBotOutcome> CreateDataRetentionBotOutcomeCallable;
typedef std::future<CreateDataRetentionBotChallengeOutcome> CreateDataRetentionBotChallengeOutcomeCallable;
typedef std::future<CreateNetworkOutcome> CreateNetworkOutcomeCallable;
typedef std::future<CreateSecurityGroupOutcome> CreateSecurityGroupOutcomeCallable;
typedef std::future<DeleteBotOutcome> DeleteBotOutcomeCallable;
typedef std::future<DeleteDataRetentionBotOutcome> DeleteDataRetentionBotOutcomeCallable;
typedef std::future<DeleteNetworkOutcome> DeleteNetworkOutcomeCallable;
typedef std::future<DeleteSecurityGroupOutcome> DeleteSecurityGroupOutcomeCallable;
typedef std::future<GetBotOutcome> GetBotOutcomeCallable;
typedef std::future<GetBotsCountOutcome> GetBotsCountOutcomeCallable;
typedef std::future<GetDataRetentionBotOutcome> GetDataRetentionBotOutcomeCallable;
typedef std::future<GetGuestUserHistoryCountOutcome> GetGuestUserHistoryCountOutcomeCallable;
typedef std::future<GetNetworkOutcome> GetNetworkOutcomeCallable;
typedef std::future<GetNetworkSettingsOutcome> GetNetworkSettingsOutcomeCallable;
typedef std::future<GetOidcInfoOutcome> GetOidcInfoOutcomeCallable;
typedef std::future<GetSecurityGroupOutcome> GetSecurityGroupOutcomeCallable;
typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
typedef std::future<GetUsersCountOutcome> GetUsersCountOutcomeCallable;
typedef std::future<ListBlockedGuestUsersOutcome> ListBlockedGuestUsersOutcomeCallable;
typedef std::future<ListBotsOutcome> ListBotsOutcomeCallable;
typedef std::future<ListDevicesForUserOutcome> ListDevicesForUserOutcomeCallable;
typedef std::future<ListGuestUsersOutcome> ListGuestUsersOutcomeCallable;
typedef std::future<ListNetworksOutcome> ListNetworksOutcomeCallable;
typedef std::future<ListSecurityGroupUsersOutcome> ListSecurityGroupUsersOutcomeCallable;
typedef std::future<ListSecurityGroupsOutcome> ListSecurityGroupsOutcomeCallable;
typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
typedef std::future<RegisterOidcConfigOutcome> RegisterOidcConfigOutcomeCallable;
typedef std::future<RegisterOidcConfigTestOutcome> RegisterOidcConfigTestOutcomeCallable;
typedef std::future<UpdateBotOutcome> UpdateBotOutcomeCallable;
typedef std::future<UpdateDataRetentionOutcome> UpdateDataRetentionOutcomeCallable;
typedef std::future<UpdateGuestUserOutcome> UpdateGuestUserOutcomeCallable;
typedef std::future<UpdateNetworkOutcome> UpdateNetworkOutcomeCallable;
typedef std::future<UpdateNetworkSettingsOutcome> UpdateNetworkSettingsOutcomeCallable;
typedef std::future<UpdateSecurityGroupOutcome> UpdateSecurityGroupOutcomeCallable;
typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class WickrClient;

/* Service model async handlers definitions */
typedef std::function<void(const WickrClient*, const Model::BatchCreateUserRequest&, const Model::BatchCreateUserOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchCreateUserResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::BatchDeleteUserRequest&, const Model::BatchDeleteUserOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchDeleteUserResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::BatchLookupUserUnameRequest&, const Model::BatchLookupUserUnameOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchLookupUserUnameResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::BatchReinviteUserRequest&, const Model::BatchReinviteUserOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchReinviteUserResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::BatchResetDevicesForUserRequest&, const Model::BatchResetDevicesForUserOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchResetDevicesForUserResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::BatchToggleUserSuspendStatusRequest&,
                           const Model::BatchToggleUserSuspendStatusOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchToggleUserSuspendStatusResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::CreateBotRequest&, const Model::CreateBotOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateBotResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::CreateDataRetentionBotRequest&, const Model::CreateDataRetentionBotOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateDataRetentionBotResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::CreateDataRetentionBotChallengeRequest&,
                           const Model::CreateDataRetentionBotChallengeOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateDataRetentionBotChallengeResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::CreateNetworkRequest&, const Model::CreateNetworkOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateNetworkResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::CreateSecurityGroupRequest&, const Model::CreateSecurityGroupOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateSecurityGroupResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::DeleteBotRequest&, const Model::DeleteBotOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteBotResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::DeleteDataRetentionBotRequest&, const Model::DeleteDataRetentionBotOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteDataRetentionBotResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::DeleteNetworkRequest&, const Model::DeleteNetworkOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteNetworkResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::DeleteSecurityGroupRequest&, const Model::DeleteSecurityGroupOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteSecurityGroupResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::GetBotRequest&, const Model::GetBotOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetBotResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::GetBotsCountRequest&, const Model::GetBotsCountOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetBotsCountResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::GetDataRetentionBotRequest&, const Model::GetDataRetentionBotOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetDataRetentionBotResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::GetGuestUserHistoryCountRequest&, const Model::GetGuestUserHistoryCountOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetGuestUserHistoryCountResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::GetNetworkRequest&, const Model::GetNetworkOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetNetworkResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::GetNetworkSettingsRequest&, const Model::GetNetworkSettingsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetNetworkSettingsResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::GetOidcInfoRequest&, const Model::GetOidcInfoOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetOidcInfoResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::GetSecurityGroupRequest&, const Model::GetSecurityGroupOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetSecurityGroupResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::GetUserRequest&, const Model::GetUserOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetUserResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::GetUsersCountRequest&, const Model::GetUsersCountOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetUsersCountResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::ListBlockedGuestUsersRequest&, const Model::ListBlockedGuestUsersOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListBlockedGuestUsersResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::ListBotsRequest&, const Model::ListBotsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListBotsResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::ListDevicesForUserRequest&, const Model::ListDevicesForUserOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListDevicesForUserResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::ListGuestUsersRequest&, const Model::ListGuestUsersOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListGuestUsersResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::ListNetworksRequest&, const Model::ListNetworksOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListNetworksResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::ListSecurityGroupUsersRequest&, const Model::ListSecurityGroupUsersOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListSecurityGroupUsersResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::ListSecurityGroupsRequest&, const Model::ListSecurityGroupsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListSecurityGroupsResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListUsersResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::RegisterOidcConfigRequest&, const Model::RegisterOidcConfigOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RegisterOidcConfigResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::RegisterOidcConfigTestRequest&, const Model::RegisterOidcConfigTestOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RegisterOidcConfigTestResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::UpdateBotRequest&, const Model::UpdateBotOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateBotResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::UpdateDataRetentionRequest&, const Model::UpdateDataRetentionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateDataRetentionResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::UpdateGuestUserRequest&, const Model::UpdateGuestUserOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateGuestUserResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::UpdateNetworkRequest&, const Model::UpdateNetworkOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateNetworkResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::UpdateNetworkSettingsRequest&, const Model::UpdateNetworkSettingsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateNetworkSettingsResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::UpdateSecurityGroupRequest&, const Model::UpdateSecurityGroupOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateSecurityGroupResponseReceivedHandler;
typedef std::function<void(const WickrClient*, const Model::UpdateUserRequest&, const Model::UpdateUserOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateUserResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace Wickr
}  // namespace Aws
