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
#include <aws/observabilityadmin/ObservabilityAdminEndpointProvider.h>
#include <aws/observabilityadmin/ObservabilityAdminErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in ObservabilityAdminClient header */
#include <aws/core/NoResult.h>
#include <aws/observabilityadmin/model/CreateCentralizationRuleForOrganizationResult.h>
#include <aws/observabilityadmin/model/CreateS3TableIntegrationResult.h>
#include <aws/observabilityadmin/model/CreateTelemetryPipelineResult.h>
#include <aws/observabilityadmin/model/CreateTelemetryRuleForOrganizationResult.h>
#include <aws/observabilityadmin/model/CreateTelemetryRuleResult.h>
#include <aws/observabilityadmin/model/DeleteTelemetryPipelineResult.h>
#include <aws/observabilityadmin/model/GetCentralizationRuleForOrganizationResult.h>
#include <aws/observabilityadmin/model/GetS3TableIntegrationResult.h>
#include <aws/observabilityadmin/model/GetTelemetryEnrichmentStatusRequest.h>
#include <aws/observabilityadmin/model/GetTelemetryEnrichmentStatusResult.h>
#include <aws/observabilityadmin/model/GetTelemetryEvaluationStatusForOrganizationRequest.h>
#include <aws/observabilityadmin/model/GetTelemetryEvaluationStatusForOrganizationResult.h>
#include <aws/observabilityadmin/model/GetTelemetryEvaluationStatusRequest.h>
#include <aws/observabilityadmin/model/GetTelemetryEvaluationStatusResult.h>
#include <aws/observabilityadmin/model/GetTelemetryPipelineResult.h>
#include <aws/observabilityadmin/model/GetTelemetryRuleForOrganizationResult.h>
#include <aws/observabilityadmin/model/GetTelemetryRuleResult.h>
#include <aws/observabilityadmin/model/ListCentralizationRulesForOrganizationRequest.h>
#include <aws/observabilityadmin/model/ListCentralizationRulesForOrganizationResult.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryForOrganizationRequest.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryForOrganizationResult.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryRequest.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryResult.h>
#include <aws/observabilityadmin/model/ListS3TableIntegrationsRequest.h>
#include <aws/observabilityadmin/model/ListS3TableIntegrationsResult.h>
#include <aws/observabilityadmin/model/ListTagsForResourceResult.h>
#include <aws/observabilityadmin/model/ListTelemetryPipelinesRequest.h>
#include <aws/observabilityadmin/model/ListTelemetryPipelinesResult.h>
#include <aws/observabilityadmin/model/ListTelemetryRulesForOrganizationRequest.h>
#include <aws/observabilityadmin/model/ListTelemetryRulesForOrganizationResult.h>
#include <aws/observabilityadmin/model/ListTelemetryRulesRequest.h>
#include <aws/observabilityadmin/model/ListTelemetryRulesResult.h>
#include <aws/observabilityadmin/model/StartTelemetryEnrichmentRequest.h>
#include <aws/observabilityadmin/model/StartTelemetryEnrichmentResult.h>
#include <aws/observabilityadmin/model/StartTelemetryEvaluationForOrganizationRequest.h>
#include <aws/observabilityadmin/model/StartTelemetryEvaluationRequest.h>
#include <aws/observabilityadmin/model/StopTelemetryEnrichmentRequest.h>
#include <aws/observabilityadmin/model/StopTelemetryEnrichmentResult.h>
#include <aws/observabilityadmin/model/StopTelemetryEvaluationForOrganizationRequest.h>
#include <aws/observabilityadmin/model/StopTelemetryEvaluationRequest.h>
#include <aws/observabilityadmin/model/TestTelemetryPipelineResult.h>
#include <aws/observabilityadmin/model/UpdateCentralizationRuleForOrganizationResult.h>
#include <aws/observabilityadmin/model/UpdateTelemetryPipelineResult.h>
#include <aws/observabilityadmin/model/UpdateTelemetryRuleForOrganizationResult.h>
#include <aws/observabilityadmin/model/UpdateTelemetryRuleResult.h>
#include <aws/observabilityadmin/model/ValidateTelemetryPipelineConfigurationResult.h>
/* End of service model headers required in ObservabilityAdminClient header */

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

namespace ObservabilityAdmin {
using ObservabilityAdminClientConfiguration = Aws::Client::GenericClientConfiguration;
using ObservabilityAdminEndpointProviderBase = Aws::ObservabilityAdmin::Endpoint::ObservabilityAdminEndpointProviderBase;
using ObservabilityAdminEndpointProvider = Aws::ObservabilityAdmin::Endpoint::ObservabilityAdminEndpointProvider;

namespace Model {
/* Service model forward declarations required in ObservabilityAdminClient header */
class CreateCentralizationRuleForOrganizationRequest;
class CreateS3TableIntegrationRequest;
class CreateTelemetryPipelineRequest;
class CreateTelemetryRuleRequest;
class CreateTelemetryRuleForOrganizationRequest;
class DeleteCentralizationRuleForOrganizationRequest;
class DeleteS3TableIntegrationRequest;
class DeleteTelemetryPipelineRequest;
class DeleteTelemetryRuleRequest;
class DeleteTelemetryRuleForOrganizationRequest;
class GetCentralizationRuleForOrganizationRequest;
class GetS3TableIntegrationRequest;
class GetTelemetryEnrichmentStatusRequest;
class GetTelemetryEvaluationStatusRequest;
class GetTelemetryEvaluationStatusForOrganizationRequest;
class GetTelemetryPipelineRequest;
class GetTelemetryRuleRequest;
class GetTelemetryRuleForOrganizationRequest;
class ListCentralizationRulesForOrganizationRequest;
class ListResourceTelemetryRequest;
class ListResourceTelemetryForOrganizationRequest;
class ListS3TableIntegrationsRequest;
class ListTagsForResourceRequest;
class ListTelemetryPipelinesRequest;
class ListTelemetryRulesRequest;
class ListTelemetryRulesForOrganizationRequest;
class StartTelemetryEnrichmentRequest;
class StartTelemetryEvaluationRequest;
class StartTelemetryEvaluationForOrganizationRequest;
class StopTelemetryEnrichmentRequest;
class StopTelemetryEvaluationRequest;
class StopTelemetryEvaluationForOrganizationRequest;
class TagResourceRequest;
class TestTelemetryPipelineRequest;
class UntagResourceRequest;
class UpdateCentralizationRuleForOrganizationRequest;
class UpdateTelemetryPipelineRequest;
class UpdateTelemetryRuleRequest;
class UpdateTelemetryRuleForOrganizationRequest;
class ValidateTelemetryPipelineConfigurationRequest;
/* End of service model forward declarations required in ObservabilityAdminClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CreateCentralizationRuleForOrganizationResult, ObservabilityAdminError>
    CreateCentralizationRuleForOrganizationOutcome;
typedef Aws::Utils::Outcome<CreateS3TableIntegrationResult, ObservabilityAdminError> CreateS3TableIntegrationOutcome;
typedef Aws::Utils::Outcome<CreateTelemetryPipelineResult, ObservabilityAdminError> CreateTelemetryPipelineOutcome;
typedef Aws::Utils::Outcome<CreateTelemetryRuleResult, ObservabilityAdminError> CreateTelemetryRuleOutcome;
typedef Aws::Utils::Outcome<CreateTelemetryRuleForOrganizationResult, ObservabilityAdminError> CreateTelemetryRuleForOrganizationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ObservabilityAdminError> DeleteCentralizationRuleForOrganizationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ObservabilityAdminError> DeleteS3TableIntegrationOutcome;
typedef Aws::Utils::Outcome<DeleteTelemetryPipelineResult, ObservabilityAdminError> DeleteTelemetryPipelineOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ObservabilityAdminError> DeleteTelemetryRuleOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ObservabilityAdminError> DeleteTelemetryRuleForOrganizationOutcome;
typedef Aws::Utils::Outcome<GetCentralizationRuleForOrganizationResult, ObservabilityAdminError>
    GetCentralizationRuleForOrganizationOutcome;
typedef Aws::Utils::Outcome<GetS3TableIntegrationResult, ObservabilityAdminError> GetS3TableIntegrationOutcome;
typedef Aws::Utils::Outcome<GetTelemetryEnrichmentStatusResult, ObservabilityAdminError> GetTelemetryEnrichmentStatusOutcome;
typedef Aws::Utils::Outcome<GetTelemetryEvaluationStatusResult, ObservabilityAdminError> GetTelemetryEvaluationStatusOutcome;
typedef Aws::Utils::Outcome<GetTelemetryEvaluationStatusForOrganizationResult, ObservabilityAdminError>
    GetTelemetryEvaluationStatusForOrganizationOutcome;
typedef Aws::Utils::Outcome<GetTelemetryPipelineResult, ObservabilityAdminError> GetTelemetryPipelineOutcome;
typedef Aws::Utils::Outcome<GetTelemetryRuleResult, ObservabilityAdminError> GetTelemetryRuleOutcome;
typedef Aws::Utils::Outcome<GetTelemetryRuleForOrganizationResult, ObservabilityAdminError> GetTelemetryRuleForOrganizationOutcome;
typedef Aws::Utils::Outcome<ListCentralizationRulesForOrganizationResult, ObservabilityAdminError>
    ListCentralizationRulesForOrganizationOutcome;
typedef Aws::Utils::Outcome<ListResourceTelemetryResult, ObservabilityAdminError> ListResourceTelemetryOutcome;
typedef Aws::Utils::Outcome<ListResourceTelemetryForOrganizationResult, ObservabilityAdminError>
    ListResourceTelemetryForOrganizationOutcome;
typedef Aws::Utils::Outcome<ListS3TableIntegrationsResult, ObservabilityAdminError> ListS3TableIntegrationsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, ObservabilityAdminError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<ListTelemetryPipelinesResult, ObservabilityAdminError> ListTelemetryPipelinesOutcome;
typedef Aws::Utils::Outcome<ListTelemetryRulesResult, ObservabilityAdminError> ListTelemetryRulesOutcome;
typedef Aws::Utils::Outcome<ListTelemetryRulesForOrganizationResult, ObservabilityAdminError> ListTelemetryRulesForOrganizationOutcome;
typedef Aws::Utils::Outcome<StartTelemetryEnrichmentResult, ObservabilityAdminError> StartTelemetryEnrichmentOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ObservabilityAdminError> StartTelemetryEvaluationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ObservabilityAdminError> StartTelemetryEvaluationForOrganizationOutcome;
typedef Aws::Utils::Outcome<StopTelemetryEnrichmentResult, ObservabilityAdminError> StopTelemetryEnrichmentOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ObservabilityAdminError> StopTelemetryEvaluationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ObservabilityAdminError> StopTelemetryEvaluationForOrganizationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ObservabilityAdminError> TagResourceOutcome;
typedef Aws::Utils::Outcome<TestTelemetryPipelineResult, ObservabilityAdminError> TestTelemetryPipelineOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ObservabilityAdminError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateCentralizationRuleForOrganizationResult, ObservabilityAdminError>
    UpdateCentralizationRuleForOrganizationOutcome;
typedef Aws::Utils::Outcome<UpdateTelemetryPipelineResult, ObservabilityAdminError> UpdateTelemetryPipelineOutcome;
typedef Aws::Utils::Outcome<UpdateTelemetryRuleResult, ObservabilityAdminError> UpdateTelemetryRuleOutcome;
typedef Aws::Utils::Outcome<UpdateTelemetryRuleForOrganizationResult, ObservabilityAdminError> UpdateTelemetryRuleForOrganizationOutcome;
typedef Aws::Utils::Outcome<ValidateTelemetryPipelineConfigurationResult, ObservabilityAdminError>
    ValidateTelemetryPipelineConfigurationOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CreateCentralizationRuleForOrganizationOutcome> CreateCentralizationRuleForOrganizationOutcomeCallable;
typedef std::future<CreateS3TableIntegrationOutcome> CreateS3TableIntegrationOutcomeCallable;
typedef std::future<CreateTelemetryPipelineOutcome> CreateTelemetryPipelineOutcomeCallable;
typedef std::future<CreateTelemetryRuleOutcome> CreateTelemetryRuleOutcomeCallable;
typedef std::future<CreateTelemetryRuleForOrganizationOutcome> CreateTelemetryRuleForOrganizationOutcomeCallable;
typedef std::future<DeleteCentralizationRuleForOrganizationOutcome> DeleteCentralizationRuleForOrganizationOutcomeCallable;
typedef std::future<DeleteS3TableIntegrationOutcome> DeleteS3TableIntegrationOutcomeCallable;
typedef std::future<DeleteTelemetryPipelineOutcome> DeleteTelemetryPipelineOutcomeCallable;
typedef std::future<DeleteTelemetryRuleOutcome> DeleteTelemetryRuleOutcomeCallable;
typedef std::future<DeleteTelemetryRuleForOrganizationOutcome> DeleteTelemetryRuleForOrganizationOutcomeCallable;
typedef std::future<GetCentralizationRuleForOrganizationOutcome> GetCentralizationRuleForOrganizationOutcomeCallable;
typedef std::future<GetS3TableIntegrationOutcome> GetS3TableIntegrationOutcomeCallable;
typedef std::future<GetTelemetryEnrichmentStatusOutcome> GetTelemetryEnrichmentStatusOutcomeCallable;
typedef std::future<GetTelemetryEvaluationStatusOutcome> GetTelemetryEvaluationStatusOutcomeCallable;
typedef std::future<GetTelemetryEvaluationStatusForOrganizationOutcome> GetTelemetryEvaluationStatusForOrganizationOutcomeCallable;
typedef std::future<GetTelemetryPipelineOutcome> GetTelemetryPipelineOutcomeCallable;
typedef std::future<GetTelemetryRuleOutcome> GetTelemetryRuleOutcomeCallable;
typedef std::future<GetTelemetryRuleForOrganizationOutcome> GetTelemetryRuleForOrganizationOutcomeCallable;
typedef std::future<ListCentralizationRulesForOrganizationOutcome> ListCentralizationRulesForOrganizationOutcomeCallable;
typedef std::future<ListResourceTelemetryOutcome> ListResourceTelemetryOutcomeCallable;
typedef std::future<ListResourceTelemetryForOrganizationOutcome> ListResourceTelemetryForOrganizationOutcomeCallable;
typedef std::future<ListS3TableIntegrationsOutcome> ListS3TableIntegrationsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<ListTelemetryPipelinesOutcome> ListTelemetryPipelinesOutcomeCallable;
typedef std::future<ListTelemetryRulesOutcome> ListTelemetryRulesOutcomeCallable;
typedef std::future<ListTelemetryRulesForOrganizationOutcome> ListTelemetryRulesForOrganizationOutcomeCallable;
typedef std::future<StartTelemetryEnrichmentOutcome> StartTelemetryEnrichmentOutcomeCallable;
typedef std::future<StartTelemetryEvaluationOutcome> StartTelemetryEvaluationOutcomeCallable;
typedef std::future<StartTelemetryEvaluationForOrganizationOutcome> StartTelemetryEvaluationForOrganizationOutcomeCallable;
typedef std::future<StopTelemetryEnrichmentOutcome> StopTelemetryEnrichmentOutcomeCallable;
typedef std::future<StopTelemetryEvaluationOutcome> StopTelemetryEvaluationOutcomeCallable;
typedef std::future<StopTelemetryEvaluationForOrganizationOutcome> StopTelemetryEvaluationForOrganizationOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<TestTelemetryPipelineOutcome> TestTelemetryPipelineOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateCentralizationRuleForOrganizationOutcome> UpdateCentralizationRuleForOrganizationOutcomeCallable;
typedef std::future<UpdateTelemetryPipelineOutcome> UpdateTelemetryPipelineOutcomeCallable;
typedef std::future<UpdateTelemetryRuleOutcome> UpdateTelemetryRuleOutcomeCallable;
typedef std::future<UpdateTelemetryRuleForOrganizationOutcome> UpdateTelemetryRuleForOrganizationOutcomeCallable;
typedef std::future<ValidateTelemetryPipelineConfigurationOutcome> ValidateTelemetryPipelineConfigurationOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class ObservabilityAdminClient;

/* Service model async handlers definitions */
typedef std::function<void(const ObservabilityAdminClient*, const Model::CreateCentralizationRuleForOrganizationRequest&,
                           const Model::CreateCentralizationRuleForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateCentralizationRuleForOrganizationResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::CreateS3TableIntegrationRequest&,
                           const Model::CreateS3TableIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateS3TableIntegrationResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::CreateTelemetryPipelineRequest&,
                           const Model::CreateTelemetryPipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateTelemetryPipelineResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::CreateTelemetryRuleRequest&,
                           const Model::CreateTelemetryRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateTelemetryRuleResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::CreateTelemetryRuleForOrganizationRequest&,
                           const Model::CreateTelemetryRuleForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateTelemetryRuleForOrganizationResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::DeleteCentralizationRuleForOrganizationRequest&,
                           const Model::DeleteCentralizationRuleForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteCentralizationRuleForOrganizationResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::DeleteS3TableIntegrationRequest&,
                           const Model::DeleteS3TableIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteS3TableIntegrationResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::DeleteTelemetryPipelineRequest&,
                           const Model::DeleteTelemetryPipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteTelemetryPipelineResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::DeleteTelemetryRuleRequest&,
                           const Model::DeleteTelemetryRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteTelemetryRuleResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::DeleteTelemetryRuleForOrganizationRequest&,
                           const Model::DeleteTelemetryRuleForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteTelemetryRuleForOrganizationResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::GetCentralizationRuleForOrganizationRequest&,
                           const Model::GetCentralizationRuleForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetCentralizationRuleForOrganizationResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::GetS3TableIntegrationRequest&,
                           const Model::GetS3TableIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetS3TableIntegrationResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::GetTelemetryEnrichmentStatusRequest&,
                           const Model::GetTelemetryEnrichmentStatusOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTelemetryEnrichmentStatusResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::GetTelemetryEvaluationStatusRequest&,
                           const Model::GetTelemetryEvaluationStatusOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTelemetryEvaluationStatusResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::GetTelemetryEvaluationStatusForOrganizationRequest&,
                           const Model::GetTelemetryEvaluationStatusForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTelemetryEvaluationStatusForOrganizationResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::GetTelemetryPipelineRequest&,
                           const Model::GetTelemetryPipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTelemetryPipelineResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::GetTelemetryRuleRequest&, const Model::GetTelemetryRuleOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTelemetryRuleResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::GetTelemetryRuleForOrganizationRequest&,
                           const Model::GetTelemetryRuleForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTelemetryRuleForOrganizationResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::ListCentralizationRulesForOrganizationRequest&,
                           const Model::ListCentralizationRulesForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListCentralizationRulesForOrganizationResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::ListResourceTelemetryRequest&,
                           const Model::ListResourceTelemetryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListResourceTelemetryResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::ListResourceTelemetryForOrganizationRequest&,
                           const Model::ListResourceTelemetryForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListResourceTelemetryForOrganizationResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::ListS3TableIntegrationsRequest&,
                           const Model::ListS3TableIntegrationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListS3TableIntegrationsResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::ListTagsForResourceRequest&,
                           const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::ListTelemetryPipelinesRequest&,
                           const Model::ListTelemetryPipelinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTelemetryPipelinesResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::ListTelemetryRulesRequest&,
                           const Model::ListTelemetryRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTelemetryRulesResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::ListTelemetryRulesForOrganizationRequest&,
                           const Model::ListTelemetryRulesForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTelemetryRulesForOrganizationResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::StartTelemetryEnrichmentRequest&,
                           const Model::StartTelemetryEnrichmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartTelemetryEnrichmentResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::StartTelemetryEvaluationRequest&,
                           const Model::StartTelemetryEvaluationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartTelemetryEvaluationResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::StartTelemetryEvaluationForOrganizationRequest&,
                           const Model::StartTelemetryEvaluationForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartTelemetryEvaluationForOrganizationResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::StopTelemetryEnrichmentRequest&,
                           const Model::StopTelemetryEnrichmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StopTelemetryEnrichmentResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::StopTelemetryEvaluationRequest&,
                           const Model::StopTelemetryEvaluationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StopTelemetryEvaluationResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::StopTelemetryEvaluationForOrganizationRequest&,
                           const Model::StopTelemetryEvaluationForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StopTelemetryEvaluationForOrganizationResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::TestTelemetryPipelineRequest&,
                           const Model::TestTelemetryPipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TestTelemetryPipelineResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::UpdateCentralizationRuleForOrganizationRequest&,
                           const Model::UpdateCentralizationRuleForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateCentralizationRuleForOrganizationResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::UpdateTelemetryPipelineRequest&,
                           const Model::UpdateTelemetryPipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateTelemetryPipelineResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::UpdateTelemetryRuleRequest&,
                           const Model::UpdateTelemetryRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateTelemetryRuleResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::UpdateTelemetryRuleForOrganizationRequest&,
                           const Model::UpdateTelemetryRuleForOrganizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateTelemetryRuleForOrganizationResponseReceivedHandler;
typedef std::function<void(const ObservabilityAdminClient*, const Model::ValidateTelemetryPipelineConfigurationRequest&,
                           const Model::ValidateTelemetryPipelineConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ValidateTelemetryPipelineConfigurationResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace ObservabilityAdmin
}  // namespace Aws
