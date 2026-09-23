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
#include <aws/network-security-manager/NetworkSecurityManagerEndpointProvider.h>
#include <aws/network-security-manager/NetworkSecurityManagerErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in NetworkSecurityManagerClient header */
#include <aws/core/NoResult.h>
#include <aws/network-security-manager/model/CreateDeploymentResult.h>
#include <aws/network-security-manager/model/CreateDeploymentSnapshotResult.h>
#include <aws/network-security-manager/model/CreatePolicyResult.h>
#include <aws/network-security-manager/model/CreatePolicySnapshotResult.h>
#include <aws/network-security-manager/model/CreateRuleResult.h>
#include <aws/network-security-manager/model/CreateRuleSnapshotResult.h>
#include <aws/network-security-manager/model/CreateScopeResult.h>
#include <aws/network-security-manager/model/CreateScopeSnapshotResult.h>
#include <aws/network-security-manager/model/CreateTemplateResult.h>
#include <aws/network-security-manager/model/CreateTemplateSnapshotResult.h>
#include <aws/network-security-manager/model/GenerateRuleConfigurationResult.h>
#include <aws/network-security-manager/model/GetAdminAccountResult.h>
#include <aws/network-security-manager/model/GetDeploymentResult.h>
#include <aws/network-security-manager/model/GetPolicyResult.h>
#include <aws/network-security-manager/model/GetRuleResult.h>
#include <aws/network-security-manager/model/GetScopeResult.h>
#include <aws/network-security-manager/model/GetTemplateResult.h>
#include <aws/network-security-manager/model/ListAdminAccountsRequest.h>
#include <aws/network-security-manager/model/ListAdminAccountsResult.h>
#include <aws/network-security-manager/model/ListAggregateResourceSynchronizationStatusesRequest.h>
#include <aws/network-security-manager/model/ListAggregateResourceSynchronizationStatusesResult.h>
#include <aws/network-security-manager/model/ListDeploymentSnapshotsResult.h>
#include <aws/network-security-manager/model/ListDeploymentsRequest.h>
#include <aws/network-security-manager/model/ListDeploymentsResult.h>
#include <aws/network-security-manager/model/ListPoliciesRequest.h>
#include <aws/network-security-manager/model/ListPoliciesResult.h>
#include <aws/network-security-manager/model/ListPolicySnapshotsResult.h>
#include <aws/network-security-manager/model/ListResourceAssociationsResult.h>
#include <aws/network-security-manager/model/ListResourceSynchronizationStatusesResult.h>
#include <aws/network-security-manager/model/ListRuleSnapshotsResult.h>
#include <aws/network-security-manager/model/ListRulesRequest.h>
#include <aws/network-security-manager/model/ListRulesResult.h>
#include <aws/network-security-manager/model/ListScopeSnapshotsResult.h>
#include <aws/network-security-manager/model/ListScopesRequest.h>
#include <aws/network-security-manager/model/ListScopesResult.h>
#include <aws/network-security-manager/model/ListTagsForResourceResult.h>
#include <aws/network-security-manager/model/ListTemplateSnapshotsResult.h>
#include <aws/network-security-manager/model/ListTemplatesRequest.h>
#include <aws/network-security-manager/model/ListTemplatesResult.h>
#include <aws/network-security-manager/model/PutAdminAccountResult.h>
#include <aws/network-security-manager/model/TagResourceResult.h>
#include <aws/network-security-manager/model/UntagResourceResult.h>
#include <aws/network-security-manager/model/UpdateDeploymentResult.h>
#include <aws/network-security-manager/model/UpdatePolicyResult.h>
#include <aws/network-security-manager/model/UpdateRuleResult.h>
#include <aws/network-security-manager/model/UpdateScopeResult.h>
#include <aws/network-security-manager/model/UpdateTemplateResult.h>
/* End of service model headers required in NetworkSecurityManagerClient header */

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

namespace NetworkSecurityManager {
using NetworkSecurityManagerClientConfiguration = Aws::Client::GenericClientConfiguration;
using NetworkSecurityManagerEndpointProviderBase = Aws::NetworkSecurityManager::Endpoint::NetworkSecurityManagerEndpointProviderBase;
using NetworkSecurityManagerEndpointProvider = Aws::NetworkSecurityManager::Endpoint::NetworkSecurityManagerEndpointProvider;

namespace Model {
/* Service model forward declarations required in NetworkSecurityManagerClient header */
class CreateDeploymentRequest;
class CreateDeploymentSnapshotRequest;
class CreatePolicyRequest;
class CreatePolicySnapshotRequest;
class CreateRuleRequest;
class CreateRuleSnapshotRequest;
class CreateScopeRequest;
class CreateScopeSnapshotRequest;
class CreateTemplateRequest;
class CreateTemplateSnapshotRequest;
class DeleteAdminAccountRequest;
class DeleteDeploymentRequest;
class DeletePolicyRequest;
class DeleteRuleRequest;
class DeleteScopeRequest;
class DeleteTemplateRequest;
class GenerateRuleConfigurationRequest;
class GetAdminAccountRequest;
class GetDeploymentRequest;
class GetPolicyRequest;
class GetRuleRequest;
class GetScopeRequest;
class GetTemplateRequest;
class ListAdminAccountsRequest;
class ListAggregateResourceSynchronizationStatusesRequest;
class ListDeploymentSnapshotsRequest;
class ListDeploymentsRequest;
class ListPoliciesRequest;
class ListPolicySnapshotsRequest;
class ListResourceAssociationsRequest;
class ListResourceSynchronizationStatusesRequest;
class ListRuleSnapshotsRequest;
class ListRulesRequest;
class ListScopeSnapshotsRequest;
class ListScopesRequest;
class ListTagsForResourceRequest;
class ListTemplateSnapshotsRequest;
class ListTemplatesRequest;
class PutAdminAccountRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateDeploymentRequest;
class UpdatePolicyRequest;
class UpdateRuleRequest;
class UpdateScopeRequest;
class UpdateTemplateRequest;
/* End of service model forward declarations required in NetworkSecurityManagerClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CreateDeploymentResult, NetworkSecurityManagerError> CreateDeploymentOutcome;
typedef Aws::Utils::Outcome<CreateDeploymentSnapshotResult, NetworkSecurityManagerError> CreateDeploymentSnapshotOutcome;
typedef Aws::Utils::Outcome<CreatePolicyResult, NetworkSecurityManagerError> CreatePolicyOutcome;
typedef Aws::Utils::Outcome<CreatePolicySnapshotResult, NetworkSecurityManagerError> CreatePolicySnapshotOutcome;
typedef Aws::Utils::Outcome<CreateRuleResult, NetworkSecurityManagerError> CreateRuleOutcome;
typedef Aws::Utils::Outcome<CreateRuleSnapshotResult, NetworkSecurityManagerError> CreateRuleSnapshotOutcome;
typedef Aws::Utils::Outcome<CreateScopeResult, NetworkSecurityManagerError> CreateScopeOutcome;
typedef Aws::Utils::Outcome<CreateScopeSnapshotResult, NetworkSecurityManagerError> CreateScopeSnapshotOutcome;
typedef Aws::Utils::Outcome<CreateTemplateResult, NetworkSecurityManagerError> CreateTemplateOutcome;
typedef Aws::Utils::Outcome<CreateTemplateSnapshotResult, NetworkSecurityManagerError> CreateTemplateSnapshotOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, NetworkSecurityManagerError> DeleteAdminAccountOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, NetworkSecurityManagerError> DeleteDeploymentOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, NetworkSecurityManagerError> DeletePolicyOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, NetworkSecurityManagerError> DeleteRuleOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, NetworkSecurityManagerError> DeleteScopeOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, NetworkSecurityManagerError> DeleteTemplateOutcome;
typedef Aws::Utils::Outcome<GenerateRuleConfigurationResult, NetworkSecurityManagerError> GenerateRuleConfigurationOutcome;
typedef Aws::Utils::Outcome<GetAdminAccountResult, NetworkSecurityManagerError> GetAdminAccountOutcome;
typedef Aws::Utils::Outcome<GetDeploymentResult, NetworkSecurityManagerError> GetDeploymentOutcome;
typedef Aws::Utils::Outcome<GetPolicyResult, NetworkSecurityManagerError> GetPolicyOutcome;
typedef Aws::Utils::Outcome<GetRuleResult, NetworkSecurityManagerError> GetRuleOutcome;
typedef Aws::Utils::Outcome<GetScopeResult, NetworkSecurityManagerError> GetScopeOutcome;
typedef Aws::Utils::Outcome<GetTemplateResult, NetworkSecurityManagerError> GetTemplateOutcome;
typedef Aws::Utils::Outcome<ListAdminAccountsResult, NetworkSecurityManagerError> ListAdminAccountsOutcome;
typedef Aws::Utils::Outcome<ListAggregateResourceSynchronizationStatusesResult, NetworkSecurityManagerError>
    ListAggregateResourceSynchronizationStatusesOutcome;
typedef Aws::Utils::Outcome<ListDeploymentSnapshotsResult, NetworkSecurityManagerError> ListDeploymentSnapshotsOutcome;
typedef Aws::Utils::Outcome<ListDeploymentsResult, NetworkSecurityManagerError> ListDeploymentsOutcome;
typedef Aws::Utils::Outcome<ListPoliciesResult, NetworkSecurityManagerError> ListPoliciesOutcome;
typedef Aws::Utils::Outcome<ListPolicySnapshotsResult, NetworkSecurityManagerError> ListPolicySnapshotsOutcome;
typedef Aws::Utils::Outcome<ListResourceAssociationsResult, NetworkSecurityManagerError> ListResourceAssociationsOutcome;
typedef Aws::Utils::Outcome<ListResourceSynchronizationStatusesResult, NetworkSecurityManagerError>
    ListResourceSynchronizationStatusesOutcome;
typedef Aws::Utils::Outcome<ListRuleSnapshotsResult, NetworkSecurityManagerError> ListRuleSnapshotsOutcome;
typedef Aws::Utils::Outcome<ListRulesResult, NetworkSecurityManagerError> ListRulesOutcome;
typedef Aws::Utils::Outcome<ListScopeSnapshotsResult, NetworkSecurityManagerError> ListScopeSnapshotsOutcome;
typedef Aws::Utils::Outcome<ListScopesResult, NetworkSecurityManagerError> ListScopesOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, NetworkSecurityManagerError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<ListTemplateSnapshotsResult, NetworkSecurityManagerError> ListTemplateSnapshotsOutcome;
typedef Aws::Utils::Outcome<ListTemplatesResult, NetworkSecurityManagerError> ListTemplatesOutcome;
typedef Aws::Utils::Outcome<PutAdminAccountResult, NetworkSecurityManagerError> PutAdminAccountOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, NetworkSecurityManagerError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, NetworkSecurityManagerError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateDeploymentResult, NetworkSecurityManagerError> UpdateDeploymentOutcome;
typedef Aws::Utils::Outcome<UpdatePolicyResult, NetworkSecurityManagerError> UpdatePolicyOutcome;
typedef Aws::Utils::Outcome<UpdateRuleResult, NetworkSecurityManagerError> UpdateRuleOutcome;
typedef Aws::Utils::Outcome<UpdateScopeResult, NetworkSecurityManagerError> UpdateScopeOutcome;
typedef Aws::Utils::Outcome<UpdateTemplateResult, NetworkSecurityManagerError> UpdateTemplateOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CreateDeploymentOutcome> CreateDeploymentOutcomeCallable;
typedef std::future<CreateDeploymentSnapshotOutcome> CreateDeploymentSnapshotOutcomeCallable;
typedef std::future<CreatePolicyOutcome> CreatePolicyOutcomeCallable;
typedef std::future<CreatePolicySnapshotOutcome> CreatePolicySnapshotOutcomeCallable;
typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
typedef std::future<CreateRuleSnapshotOutcome> CreateRuleSnapshotOutcomeCallable;
typedef std::future<CreateScopeOutcome> CreateScopeOutcomeCallable;
typedef std::future<CreateScopeSnapshotOutcome> CreateScopeSnapshotOutcomeCallable;
typedef std::future<CreateTemplateOutcome> CreateTemplateOutcomeCallable;
typedef std::future<CreateTemplateSnapshotOutcome> CreateTemplateSnapshotOutcomeCallable;
typedef std::future<DeleteAdminAccountOutcome> DeleteAdminAccountOutcomeCallable;
typedef std::future<DeleteDeploymentOutcome> DeleteDeploymentOutcomeCallable;
typedef std::future<DeletePolicyOutcome> DeletePolicyOutcomeCallable;
typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
typedef std::future<DeleteScopeOutcome> DeleteScopeOutcomeCallable;
typedef std::future<DeleteTemplateOutcome> DeleteTemplateOutcomeCallable;
typedef std::future<GenerateRuleConfigurationOutcome> GenerateRuleConfigurationOutcomeCallable;
typedef std::future<GetAdminAccountOutcome> GetAdminAccountOutcomeCallable;
typedef std::future<GetDeploymentOutcome> GetDeploymentOutcomeCallable;
typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
typedef std::future<GetRuleOutcome> GetRuleOutcomeCallable;
typedef std::future<GetScopeOutcome> GetScopeOutcomeCallable;
typedef std::future<GetTemplateOutcome> GetTemplateOutcomeCallable;
typedef std::future<ListAdminAccountsOutcome> ListAdminAccountsOutcomeCallable;
typedef std::future<ListAggregateResourceSynchronizationStatusesOutcome> ListAggregateResourceSynchronizationStatusesOutcomeCallable;
typedef std::future<ListDeploymentSnapshotsOutcome> ListDeploymentSnapshotsOutcomeCallable;
typedef std::future<ListDeploymentsOutcome> ListDeploymentsOutcomeCallable;
typedef std::future<ListPoliciesOutcome> ListPoliciesOutcomeCallable;
typedef std::future<ListPolicySnapshotsOutcome> ListPolicySnapshotsOutcomeCallable;
typedef std::future<ListResourceAssociationsOutcome> ListResourceAssociationsOutcomeCallable;
typedef std::future<ListResourceSynchronizationStatusesOutcome> ListResourceSynchronizationStatusesOutcomeCallable;
typedef std::future<ListRuleSnapshotsOutcome> ListRuleSnapshotsOutcomeCallable;
typedef std::future<ListRulesOutcome> ListRulesOutcomeCallable;
typedef std::future<ListScopeSnapshotsOutcome> ListScopeSnapshotsOutcomeCallable;
typedef std::future<ListScopesOutcome> ListScopesOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<ListTemplateSnapshotsOutcome> ListTemplateSnapshotsOutcomeCallable;
typedef std::future<ListTemplatesOutcome> ListTemplatesOutcomeCallable;
typedef std::future<PutAdminAccountOutcome> PutAdminAccountOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateDeploymentOutcome> UpdateDeploymentOutcomeCallable;
typedef std::future<UpdatePolicyOutcome> UpdatePolicyOutcomeCallable;
typedef std::future<UpdateRuleOutcome> UpdateRuleOutcomeCallable;
typedef std::future<UpdateScopeOutcome> UpdateScopeOutcomeCallable;
typedef std::future<UpdateTemplateOutcome> UpdateTemplateOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class NetworkSecurityManagerClient;

/* Service model async handlers definitions */
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::CreateDeploymentRequest&,
                           const Model::CreateDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateDeploymentResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::CreateDeploymentSnapshotRequest&,
                           const Model::CreateDeploymentSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateDeploymentSnapshotResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::CreatePolicyRequest&, const Model::CreatePolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreatePolicyResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::CreatePolicySnapshotRequest&,
                           const Model::CreatePolicySnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreatePolicySnapshotResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::CreateRuleRequest&, const Model::CreateRuleOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateRuleResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::CreateRuleSnapshotRequest&,
                           const Model::CreateRuleSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateRuleSnapshotResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::CreateScopeRequest&, const Model::CreateScopeOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateScopeResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::CreateScopeSnapshotRequest&,
                           const Model::CreateScopeSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateScopeSnapshotResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::CreateTemplateRequest&, const Model::CreateTemplateOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateTemplateResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::CreateTemplateSnapshotRequest&,
                           const Model::CreateTemplateSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateTemplateSnapshotResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::DeleteAdminAccountRequest&,
                           const Model::DeleteAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteAdminAccountResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::DeleteDeploymentRequest&,
                           const Model::DeleteDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteDeploymentResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::DeletePolicyRequest&, const Model::DeletePolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeletePolicyResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::DeleteRuleRequest&, const Model::DeleteRuleOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteRuleResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::DeleteScopeRequest&, const Model::DeleteScopeOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteScopeResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::DeleteTemplateRequest&, const Model::DeleteTemplateOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteTemplateResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::GenerateRuleConfigurationRequest&,
                           const Model::GenerateRuleConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GenerateRuleConfigurationResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::GetAdminAccountRequest&, const Model::GetAdminAccountOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAdminAccountResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::GetDeploymentRequest&, const Model::GetDeploymentOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetDeploymentResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::GetPolicyRequest&, const Model::GetPolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetPolicyResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::GetRuleRequest&, const Model::GetRuleOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetRuleResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::GetScopeRequest&, const Model::GetScopeOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetScopeResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::GetTemplateRequest&, const Model::GetTemplateOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTemplateResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::ListAdminAccountsRequest&,
                           const Model::ListAdminAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAdminAccountsResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::ListAggregateResourceSynchronizationStatusesRequest&,
                           const Model::ListAggregateResourceSynchronizationStatusesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAggregateResourceSynchronizationStatusesResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::ListDeploymentSnapshotsRequest&,
                           const Model::ListDeploymentSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListDeploymentSnapshotsResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::ListDeploymentsRequest&, const Model::ListDeploymentsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListDeploymentsResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::ListPoliciesRequest&, const Model::ListPoliciesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListPoliciesResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::ListPolicySnapshotsRequest&,
                           const Model::ListPolicySnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListPolicySnapshotsResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::ListResourceAssociationsRequest&,
                           const Model::ListResourceAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListResourceAssociationsResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::ListResourceSynchronizationStatusesRequest&,
                           const Model::ListResourceSynchronizationStatusesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListResourceSynchronizationStatusesResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::ListRuleSnapshotsRequest&,
                           const Model::ListRuleSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListRuleSnapshotsResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::ListRulesRequest&, const Model::ListRulesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListRulesResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::ListScopeSnapshotsRequest&,
                           const Model::ListScopeSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListScopeSnapshotsResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::ListScopesRequest&, const Model::ListScopesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListScopesResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::ListTagsForResourceRequest&,
                           const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::ListTemplateSnapshotsRequest&,
                           const Model::ListTemplateSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTemplateSnapshotsResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::ListTemplatesRequest&, const Model::ListTemplatesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTemplatesResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::PutAdminAccountRequest&, const Model::PutAdminAccountOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutAdminAccountResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::UpdateDeploymentRequest&,
                           const Model::UpdateDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateDeploymentResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::UpdatePolicyRequest&, const Model::UpdatePolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdatePolicyResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::UpdateRuleRequest&, const Model::UpdateRuleOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateRuleResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::UpdateScopeRequest&, const Model::UpdateScopeOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateScopeResponseReceivedHandler;
typedef std::function<void(const NetworkSecurityManagerClient*, const Model::UpdateTemplateRequest&, const Model::UpdateTemplateOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateTemplateResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace NetworkSecurityManager
}  // namespace Aws
