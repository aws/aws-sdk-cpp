﻿/**
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
#include <aws/ssm-sap/SsmSapEndpointProvider.h>
#include <aws/ssm-sap/SsmSapErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in SsmSapClient header */
#include <aws/ssm-sap/model/DeleteResourcePermissionResult.h>
#include <aws/ssm-sap/model/DeregisterApplicationResult.h>
#include <aws/ssm-sap/model/GetApplicationRequest.h>
#include <aws/ssm-sap/model/GetApplicationResult.h>
#include <aws/ssm-sap/model/GetComponentResult.h>
#include <aws/ssm-sap/model/GetConfigurationCheckOperationResult.h>
#include <aws/ssm-sap/model/GetDatabaseRequest.h>
#include <aws/ssm-sap/model/GetDatabaseResult.h>
#include <aws/ssm-sap/model/GetOperationResult.h>
#include <aws/ssm-sap/model/GetResourcePermissionResult.h>
#include <aws/ssm-sap/model/ListApplicationsRequest.h>
#include <aws/ssm-sap/model/ListApplicationsResult.h>
#include <aws/ssm-sap/model/ListComponentsRequest.h>
#include <aws/ssm-sap/model/ListComponentsResult.h>
#include <aws/ssm-sap/model/ListConfigurationCheckDefinitionsRequest.h>
#include <aws/ssm-sap/model/ListConfigurationCheckDefinitionsResult.h>
#include <aws/ssm-sap/model/ListConfigurationCheckOperationsResult.h>
#include <aws/ssm-sap/model/ListDatabasesRequest.h>
#include <aws/ssm-sap/model/ListDatabasesResult.h>
#include <aws/ssm-sap/model/ListOperationEventsResult.h>
#include <aws/ssm-sap/model/ListOperationsResult.h>
#include <aws/ssm-sap/model/ListSubCheckResultsResult.h>
#include <aws/ssm-sap/model/ListSubCheckRuleResultsResult.h>
#include <aws/ssm-sap/model/ListTagsForResourceResult.h>
#include <aws/ssm-sap/model/PutResourcePermissionResult.h>
#include <aws/ssm-sap/model/RegisterApplicationResult.h>
#include <aws/ssm-sap/model/StartApplicationRefreshResult.h>
#include <aws/ssm-sap/model/StartApplicationResult.h>
#include <aws/ssm-sap/model/StartConfigurationChecksResult.h>
#include <aws/ssm-sap/model/StopApplicationResult.h>
#include <aws/ssm-sap/model/TagResourceResult.h>
#include <aws/ssm-sap/model/UntagResourceResult.h>
#include <aws/ssm-sap/model/UpdateApplicationSettingsResult.h>
/* End of service model headers required in SsmSapClient header */

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

namespace SsmSap {
using SsmSapClientConfiguration = Aws::Client::GenericClientConfiguration;
using SsmSapEndpointProviderBase = Aws::SsmSap::Endpoint::SsmSapEndpointProviderBase;
using SsmSapEndpointProvider = Aws::SsmSap::Endpoint::SsmSapEndpointProvider;

namespace Model {
/* Service model forward declarations required in SsmSapClient header */
class DeleteResourcePermissionRequest;
class DeregisterApplicationRequest;
class GetApplicationRequest;
class GetComponentRequest;
class GetConfigurationCheckOperationRequest;
class GetDatabaseRequest;
class GetOperationRequest;
class GetResourcePermissionRequest;
class ListApplicationsRequest;
class ListComponentsRequest;
class ListConfigurationCheckDefinitionsRequest;
class ListConfigurationCheckOperationsRequest;
class ListDatabasesRequest;
class ListOperationEventsRequest;
class ListOperationsRequest;
class ListSubCheckResultsRequest;
class ListSubCheckRuleResultsRequest;
class ListTagsForResourceRequest;
class PutResourcePermissionRequest;
class RegisterApplicationRequest;
class StartApplicationRequest;
class StartApplicationRefreshRequest;
class StartConfigurationChecksRequest;
class StopApplicationRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateApplicationSettingsRequest;
/* End of service model forward declarations required in SsmSapClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<DeleteResourcePermissionResult, SsmSapError> DeleteResourcePermissionOutcome;
typedef Aws::Utils::Outcome<DeregisterApplicationResult, SsmSapError> DeregisterApplicationOutcome;
typedef Aws::Utils::Outcome<GetApplicationResult, SsmSapError> GetApplicationOutcome;
typedef Aws::Utils::Outcome<GetComponentResult, SsmSapError> GetComponentOutcome;
typedef Aws::Utils::Outcome<GetConfigurationCheckOperationResult, SsmSapError> GetConfigurationCheckOperationOutcome;
typedef Aws::Utils::Outcome<GetDatabaseResult, SsmSapError> GetDatabaseOutcome;
typedef Aws::Utils::Outcome<GetOperationResult, SsmSapError> GetOperationOutcome;
typedef Aws::Utils::Outcome<GetResourcePermissionResult, SsmSapError> GetResourcePermissionOutcome;
typedef Aws::Utils::Outcome<ListApplicationsResult, SsmSapError> ListApplicationsOutcome;
typedef Aws::Utils::Outcome<ListComponentsResult, SsmSapError> ListComponentsOutcome;
typedef Aws::Utils::Outcome<ListConfigurationCheckDefinitionsResult, SsmSapError> ListConfigurationCheckDefinitionsOutcome;
typedef Aws::Utils::Outcome<ListConfigurationCheckOperationsResult, SsmSapError> ListConfigurationCheckOperationsOutcome;
typedef Aws::Utils::Outcome<ListDatabasesResult, SsmSapError> ListDatabasesOutcome;
typedef Aws::Utils::Outcome<ListOperationEventsResult, SsmSapError> ListOperationEventsOutcome;
typedef Aws::Utils::Outcome<ListOperationsResult, SsmSapError> ListOperationsOutcome;
typedef Aws::Utils::Outcome<ListSubCheckResultsResult, SsmSapError> ListSubCheckResultsOutcome;
typedef Aws::Utils::Outcome<ListSubCheckRuleResultsResult, SsmSapError> ListSubCheckRuleResultsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, SsmSapError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<PutResourcePermissionResult, SsmSapError> PutResourcePermissionOutcome;
typedef Aws::Utils::Outcome<RegisterApplicationResult, SsmSapError> RegisterApplicationOutcome;
typedef Aws::Utils::Outcome<StartApplicationResult, SsmSapError> StartApplicationOutcome;
typedef Aws::Utils::Outcome<StartApplicationRefreshResult, SsmSapError> StartApplicationRefreshOutcome;
typedef Aws::Utils::Outcome<StartConfigurationChecksResult, SsmSapError> StartConfigurationChecksOutcome;
typedef Aws::Utils::Outcome<StopApplicationResult, SsmSapError> StopApplicationOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, SsmSapError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, SsmSapError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateApplicationSettingsResult, SsmSapError> UpdateApplicationSettingsOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<DeleteResourcePermissionOutcome> DeleteResourcePermissionOutcomeCallable;
typedef std::future<DeregisterApplicationOutcome> DeregisterApplicationOutcomeCallable;
typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
typedef std::future<GetComponentOutcome> GetComponentOutcomeCallable;
typedef std::future<GetConfigurationCheckOperationOutcome> GetConfigurationCheckOperationOutcomeCallable;
typedef std::future<GetDatabaseOutcome> GetDatabaseOutcomeCallable;
typedef std::future<GetOperationOutcome> GetOperationOutcomeCallable;
typedef std::future<GetResourcePermissionOutcome> GetResourcePermissionOutcomeCallable;
typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
typedef std::future<ListComponentsOutcome> ListComponentsOutcomeCallable;
typedef std::future<ListConfigurationCheckDefinitionsOutcome> ListConfigurationCheckDefinitionsOutcomeCallable;
typedef std::future<ListConfigurationCheckOperationsOutcome> ListConfigurationCheckOperationsOutcomeCallable;
typedef std::future<ListDatabasesOutcome> ListDatabasesOutcomeCallable;
typedef std::future<ListOperationEventsOutcome> ListOperationEventsOutcomeCallable;
typedef std::future<ListOperationsOutcome> ListOperationsOutcomeCallable;
typedef std::future<ListSubCheckResultsOutcome> ListSubCheckResultsOutcomeCallable;
typedef std::future<ListSubCheckRuleResultsOutcome> ListSubCheckRuleResultsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<PutResourcePermissionOutcome> PutResourcePermissionOutcomeCallable;
typedef std::future<RegisterApplicationOutcome> RegisterApplicationOutcomeCallable;
typedef std::future<StartApplicationOutcome> StartApplicationOutcomeCallable;
typedef std::future<StartApplicationRefreshOutcome> StartApplicationRefreshOutcomeCallable;
typedef std::future<StartConfigurationChecksOutcome> StartConfigurationChecksOutcomeCallable;
typedef std::future<StopApplicationOutcome> StopApplicationOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateApplicationSettingsOutcome> UpdateApplicationSettingsOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class SsmSapClient;

/* Service model async handlers definitions */
typedef std::function<void(const SsmSapClient*, const Model::DeleteResourcePermissionRequest&,
                           const Model::DeleteResourcePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteResourcePermissionResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::DeregisterApplicationRequest&, const Model::DeregisterApplicationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeregisterApplicationResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::GetApplicationRequest&, const Model::GetApplicationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetApplicationResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::GetComponentRequest&, const Model::GetComponentOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetComponentResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::GetConfigurationCheckOperationRequest&,
                           const Model::GetConfigurationCheckOperationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetConfigurationCheckOperationResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::GetDatabaseRequest&, const Model::GetDatabaseOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetDatabaseResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::GetOperationRequest&, const Model::GetOperationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetOperationResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::GetResourcePermissionRequest&, const Model::GetResourcePermissionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetResourcePermissionResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListApplicationsResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::ListComponentsRequest&, const Model::ListComponentsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListComponentsResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::ListConfigurationCheckDefinitionsRequest&,
                           const Model::ListConfigurationCheckDefinitionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListConfigurationCheckDefinitionsResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::ListConfigurationCheckOperationsRequest&,
                           const Model::ListConfigurationCheckOperationsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListConfigurationCheckOperationsResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::ListDatabasesRequest&, const Model::ListDatabasesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListDatabasesResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::ListOperationEventsRequest&, const Model::ListOperationEventsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListOperationEventsResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::ListOperationsRequest&, const Model::ListOperationsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListOperationsResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::ListSubCheckResultsRequest&, const Model::ListSubCheckResultsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListSubCheckResultsResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::ListSubCheckRuleResultsRequest&, const Model::ListSubCheckRuleResultsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListSubCheckRuleResultsResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::PutResourcePermissionRequest&, const Model::PutResourcePermissionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutResourcePermissionResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::RegisterApplicationRequest&, const Model::RegisterApplicationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RegisterApplicationResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::StartApplicationRequest&, const Model::StartApplicationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartApplicationResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::StartApplicationRefreshRequest&, const Model::StartApplicationRefreshOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartApplicationRefreshResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::StartConfigurationChecksRequest&,
                           const Model::StartConfigurationChecksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartConfigurationChecksResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::StopApplicationRequest&, const Model::StopApplicationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StopApplicationResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const SsmSapClient*, const Model::UpdateApplicationSettingsRequest&,
                           const Model::UpdateApplicationSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateApplicationSettingsResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace SsmSap
}  // namespace Aws
