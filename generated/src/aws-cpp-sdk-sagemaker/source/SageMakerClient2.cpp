/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/sagemaker/SageMakerClient.h>
#include <aws/sagemaker/SageMakerErrorMarshaller.h>
#include <aws/sagemaker/SageMakerEndpointProvider.h>
#include <aws/sagemaker/model/ListHubContentsRequest.h>
#include <aws/sagemaker/model/ListModelBiasJobDefinitionsRequest.h>
#include <aws/sagemaker/model/StopInferenceExperimentRequest.h>
#include <aws/sagemaker/model/UpdateHubRequest.h>
#include <aws/sagemaker/model/ListModelPackageGroupsRequest.h>
#include <aws/sagemaker/model/ListWorkforcesRequest.h>
#include <aws/sagemaker/model/StopEdgeDeploymentStageRequest.h>
#include <aws/sagemaker/model/ListModelCardVersionsRequest.h>
#include <aws/sagemaker/model/ListFlowDefinitionsRequest.h>
#include <aws/sagemaker/model/ListInferenceExperimentsRequest.h>
#include <aws/sagemaker/model/ListUserProfilesRequest.h>
#include <aws/sagemaker/model/UpdateFeatureGroupRequest.h>
#include <aws/sagemaker/model/ListTrainingJobsRequest.h>
#include <aws/sagemaker/model/ListPipelineExecutionsRequest.h>
#include <aws/sagemaker/model/ListEndpointsRequest.h>
#include <aws/sagemaker/model/ListStageDevicesRequest.h>
#include <aws/sagemaker/model/UpdateArtifactRequest.h>
#include <aws/sagemaker/model/StopNotebookInstanceRequest.h>
#include <aws/sagemaker/model/StopPipelineExecutionRequest.h>
#include <aws/sagemaker/model/ListEdgePackagingJobsRequest.h>
#include <aws/sagemaker/model/ListPipelinesRequest.h>
#include <aws/sagemaker/model/ListExperimentsRequest.h>
#include <aws/sagemaker/model/StartNotebookInstanceRequest.h>
#include <aws/sagemaker/model/StartMonitoringScheduleRequest.h>
#include <aws/sagemaker/model/RegisterDevicesRequest.h>
#include <aws/sagemaker/model/ListNotebookInstancesRequest.h>
#include <aws/sagemaker/model/ListHubContentVersionsRequest.h>
#include <aws/sagemaker/model/ListTransformJobsRequest.h>
#include <aws/sagemaker/model/StopHyperParameterTuningJobRequest.h>
#include <aws/sagemaker/model/StartPipelineExecutionRequest.h>
#include <aws/sagemaker/model/StopProcessingJobRequest.h>
#include <aws/sagemaker/model/ListTrialsRequest.h>
#include <aws/sagemaker/model/ListHyperParameterTuningJobsRequest.h>
#include <aws/sagemaker/model/ListModelQualityJobDefinitionsRequest.h>
#include <aws/sagemaker/model/RetryPipelineExecutionRequest.h>
#include <aws/sagemaker/model/ListFeatureGroupsRequest.h>
#include <aws/sagemaker/model/ListPipelineParametersForExecutionRequest.h>
#include <aws/sagemaker/model/UpdateActionRequest.h>
#include <aws/sagemaker/model/StopEdgePackagingJobRequest.h>
#include <aws/sagemaker/model/ListModelExplainabilityJobDefinitionsRequest.h>
#include <aws/sagemaker/model/ListTrialComponentsRequest.h>
#include <aws/sagemaker/model/StartEdgeDeploymentStageRequest.h>
#include <aws/sagemaker/model/ListTrainingJobsForHyperParameterTuningJobRequest.h>
#include <aws/sagemaker/model/ListLineageGroupsRequest.h>
#include <aws/sagemaker/model/UpdateEndpointRequest.h>
#include <aws/sagemaker/model/ListLabelingJobsRequest.h>
#include <aws/sagemaker/model/ListWorkteamsRequest.h>
#include <aws/sagemaker/model/ListLabelingJobsForWorkteamRequest.h>
#include <aws/sagemaker/model/ListProjectsRequest.h>
#include <aws/sagemaker/model/ListMonitoringAlertsRequest.h>
#include <aws/sagemaker/model/ListMonitoringExecutionsRequest.h>
#include <aws/sagemaker/model/ListInferenceRecommendationsJobsRequest.h>
#include <aws/sagemaker/model/StopTrainingJobRequest.h>
#include <aws/sagemaker/model/StartInferenceExperimentRequest.h>
#include <aws/sagemaker/model/StopCompilationJobRequest.h>
#include <aws/sagemaker/model/ListModelPackagesRequest.h>
#include <aws/sagemaker/model/StopLabelingJobRequest.h>
#include <aws/sagemaker/model/UpdateDeviceFleetRequest.h>
#include <aws/sagemaker/model/SearchRequest.h>
#include <aws/sagemaker/model/ListSubscribedWorkteamsRequest.h>
#include <aws/sagemaker/model/ListStudioLifecycleConfigsRequest.h>
#include <aws/sagemaker/model/QueryLineageRequest.h>
#include <aws/sagemaker/model/ListModelCardsRequest.h>
#include <aws/sagemaker/model/StopTransformJobRequest.h>
#include <aws/sagemaker/model/UpdateEndpointWeightsAndCapacitiesRequest.h>
#include <aws/sagemaker/model/UpdateClusterSoftwareRequest.h>
#include <aws/sagemaker/model/UpdateContextRequest.h>
#include <aws/sagemaker/model/ListModelMetadataRequest.h>
#include <aws/sagemaker/model/ListEndpointConfigsRequest.h>
#include <aws/sagemaker/model/RenderUiTemplateRequest.h>
#include <aws/sagemaker/model/ListProcessingJobsRequest.h>
#include <aws/sagemaker/model/ListModelCardExportJobsRequest.h>
#include <aws/sagemaker/model/UpdateCodeRepositoryRequest.h>
#include <aws/sagemaker/model/UpdateClusterRequest.h>
#include <aws/sagemaker/model/ListNotebookInstanceLifecycleConfigsRequest.h>
#include <aws/sagemaker/model/ListModelsRequest.h>
#include <aws/sagemaker/model/PutModelPackageGroupPolicyRequest.h>
#include <aws/sagemaker/model/ListInferenceComponentsRequest.h>
#include <aws/sagemaker/model/ListResourceCatalogsRequest.h>
#include <aws/sagemaker/model/UpdateAppImageConfigRequest.h>
#include <aws/sagemaker/model/UpdateFeatureMetadataRequest.h>
#include <aws/sagemaker/model/SendPipelineExecutionStepFailureRequest.h>
#include <aws/sagemaker/model/ListImagesRequest.h>
#include <aws/sagemaker/model/StopInferenceRecommendationsJobRequest.h>
#include <aws/sagemaker/model/UpdateDomainRequest.h>
#include <aws/sagemaker/model/ListInferenceRecommendationsJobStepsRequest.h>
#include <aws/sagemaker/model/ListSpacesRequest.h>
#include <aws/sagemaker/model/UpdateDevicesRequest.h>
#include <aws/sagemaker/model/SendPipelineExecutionStepSuccessRequest.h>
#include <aws/sagemaker/model/ListMonitoringSchedulesRequest.h>
#include <aws/sagemaker/model/ListHumanTaskUisRequest.h>
#include <aws/sagemaker/model/StopAutoMLJobRequest.h>
#include <aws/sagemaker/model/ListMonitoringAlertHistoryRequest.h>
#include <aws/sagemaker/model/StopMonitoringScheduleRequest.h>
#include <aws/sagemaker/model/UpdateExperimentRequest.h>
#include <aws/sagemaker/model/UpdateImageRequest.h>
#include <aws/sagemaker/model/ListPipelineExecutionStepsRequest.h>
#include <aws/sagemaker/model/ListHubsRequest.h>
#include <aws/sagemaker/model/ListImageVersionsRequest.h>
#include <aws/sagemaker/model/ListTagsRequest.h>

#include <smithy/tracing/TracingUtils.h>


using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SageMaker;
using namespace Aws::SageMaker::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;


ListHubContentsOutcome SageMakerClient::ListHubContents(const ListHubContentsRequest& request) const
{
  AWS_OPERATION_GUARD(ListHubContents);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListHubContents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListHubContents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListHubContents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListHubContents",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListHubContentsOutcome>(
    [&]()-> ListHubContentsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListHubContents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListHubContentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListModelBiasJobDefinitionsOutcome SageMakerClient::ListModelBiasJobDefinitions(const ListModelBiasJobDefinitionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListModelBiasJobDefinitions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModelBiasJobDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListModelBiasJobDefinitions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListModelBiasJobDefinitions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListModelBiasJobDefinitions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListModelBiasJobDefinitionsOutcome>(
    [&]()-> ListModelBiasJobDefinitionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListModelBiasJobDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListModelBiasJobDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopInferenceExperimentOutcome SageMakerClient::StopInferenceExperiment(const StopInferenceExperimentRequest& request) const
{
  AWS_OPERATION_GUARD(StopInferenceExperiment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopInferenceExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopInferenceExperiment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopInferenceExperiment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopInferenceExperiment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopInferenceExperimentOutcome>(
    [&]()-> StopInferenceExperimentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopInferenceExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return StopInferenceExperimentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateHubOutcome SageMakerClient::UpdateHub(const UpdateHubRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateHub);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateHub, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateHub, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateHub, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateHub",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateHubOutcome>(
    [&]()-> UpdateHubOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateHub, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateHubOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListModelPackageGroupsOutcome SageMakerClient::ListModelPackageGroups(const ListModelPackageGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(ListModelPackageGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModelPackageGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListModelPackageGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListModelPackageGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListModelPackageGroups",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListModelPackageGroupsOutcome>(
    [&]()-> ListModelPackageGroupsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListModelPackageGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListModelPackageGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListWorkforcesOutcome SageMakerClient::ListWorkforces(const ListWorkforcesRequest& request) const
{
  AWS_OPERATION_GUARD(ListWorkforces);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkforces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListWorkforces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListWorkforces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListWorkforces",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListWorkforcesOutcome>(
    [&]()-> ListWorkforcesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkforces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListWorkforcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopEdgeDeploymentStageOutcome SageMakerClient::StopEdgeDeploymentStage(const StopEdgeDeploymentStageRequest& request) const
{
  AWS_OPERATION_GUARD(StopEdgeDeploymentStage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopEdgeDeploymentStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopEdgeDeploymentStage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopEdgeDeploymentStage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopEdgeDeploymentStage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopEdgeDeploymentStageOutcome>(
    [&]()-> StopEdgeDeploymentStageOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopEdgeDeploymentStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return StopEdgeDeploymentStageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListModelCardVersionsOutcome SageMakerClient::ListModelCardVersions(const ListModelCardVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListModelCardVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModelCardVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListModelCardVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListModelCardVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListModelCardVersions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListModelCardVersionsOutcome>(
    [&]()-> ListModelCardVersionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListModelCardVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListModelCardVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFlowDefinitionsOutcome SageMakerClient::ListFlowDefinitions(const ListFlowDefinitionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListFlowDefinitions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFlowDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListFlowDefinitions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListFlowDefinitions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListFlowDefinitions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListFlowDefinitionsOutcome>(
    [&]()-> ListFlowDefinitionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFlowDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListFlowDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListInferenceExperimentsOutcome SageMakerClient::ListInferenceExperiments(const ListInferenceExperimentsRequest& request) const
{
  AWS_OPERATION_GUARD(ListInferenceExperiments);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInferenceExperiments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListInferenceExperiments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListInferenceExperiments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListInferenceExperiments",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListInferenceExperimentsOutcome>(
    [&]()-> ListInferenceExperimentsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInferenceExperiments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListInferenceExperimentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListUserProfilesOutcome SageMakerClient::ListUserProfiles(const ListUserProfilesRequest& request) const
{
  AWS_OPERATION_GUARD(ListUserProfiles);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUserProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListUserProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListUserProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListUserProfiles",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListUserProfilesOutcome>(
    [&]()-> ListUserProfilesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUserProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListUserProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateFeatureGroupOutcome SageMakerClient::UpdateFeatureGroup(const UpdateFeatureGroupRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateFeatureGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFeatureGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateFeatureGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateFeatureGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateFeatureGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateFeatureGroupOutcome>(
    [&]()-> UpdateFeatureGroupOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFeatureGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateFeatureGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTrainingJobsOutcome SageMakerClient::ListTrainingJobs(const ListTrainingJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTrainingJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTrainingJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTrainingJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTrainingJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTrainingJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTrainingJobsOutcome>(
    [&]()-> ListTrainingJobsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTrainingJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListTrainingJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPipelineExecutionsOutcome SageMakerClient::ListPipelineExecutions(const ListPipelineExecutionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListPipelineExecutions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPipelineExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListPipelineExecutions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPipelineExecutions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPipelineExecutions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPipelineExecutionsOutcome>(
    [&]()-> ListPipelineExecutionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPipelineExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListPipelineExecutionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListEndpointsOutcome SageMakerClient::ListEndpoints(const ListEndpointsRequest& request) const
{
  AWS_OPERATION_GUARD(ListEndpoints);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEndpoints",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEndpointsOutcome>(
    [&]()-> ListEndpointsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListStageDevicesOutcome SageMakerClient::ListStageDevices(const ListStageDevicesRequest& request) const
{
  AWS_OPERATION_GUARD(ListStageDevices);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStageDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListStageDevices, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListStageDevices, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListStageDevices",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListStageDevicesOutcome>(
    [&]()-> ListStageDevicesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStageDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListStageDevicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateArtifactOutcome SageMakerClient::UpdateArtifact(const UpdateArtifactRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateArtifact);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateArtifact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateArtifact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateArtifact",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateArtifactOutcome>(
    [&]()-> UpdateArtifactOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateArtifactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopNotebookInstanceOutcome SageMakerClient::StopNotebookInstance(const StopNotebookInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(StopNotebookInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopNotebookInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopNotebookInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopNotebookInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopNotebookInstance",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopNotebookInstanceOutcome>(
    [&]()-> StopNotebookInstanceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopNotebookInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return StopNotebookInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopPipelineExecutionOutcome SageMakerClient::StopPipelineExecution(const StopPipelineExecutionRequest& request) const
{
  AWS_OPERATION_GUARD(StopPipelineExecution);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopPipelineExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopPipelineExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopPipelineExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopPipelineExecution",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopPipelineExecutionOutcome>(
    [&]()-> StopPipelineExecutionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopPipelineExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return StopPipelineExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListEdgePackagingJobsOutcome SageMakerClient::ListEdgePackagingJobs(const ListEdgePackagingJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListEdgePackagingJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEdgePackagingJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListEdgePackagingJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEdgePackagingJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEdgePackagingJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEdgePackagingJobsOutcome>(
    [&]()-> ListEdgePackagingJobsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEdgePackagingJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListEdgePackagingJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPipelinesOutcome SageMakerClient::ListPipelines(const ListPipelinesRequest& request) const
{
  AWS_OPERATION_GUARD(ListPipelines);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPipelines, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListPipelines, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPipelines, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPipelines",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPipelinesOutcome>(
    [&]()-> ListPipelinesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPipelines, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListPipelinesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListExperimentsOutcome SageMakerClient::ListExperiments(const ListExperimentsRequest& request) const
{
  AWS_OPERATION_GUARD(ListExperiments);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListExperiments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListExperiments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListExperiments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListExperiments",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListExperimentsOutcome>(
    [&]()-> ListExperimentsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListExperiments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListExperimentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartNotebookInstanceOutcome SageMakerClient::StartNotebookInstance(const StartNotebookInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(StartNotebookInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartNotebookInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartNotebookInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartNotebookInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartNotebookInstance",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartNotebookInstanceOutcome>(
    [&]()-> StartNotebookInstanceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartNotebookInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return StartNotebookInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartMonitoringScheduleOutcome SageMakerClient::StartMonitoringSchedule(const StartMonitoringScheduleRequest& request) const
{
  AWS_OPERATION_GUARD(StartMonitoringSchedule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartMonitoringSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartMonitoringSchedule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartMonitoringSchedule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartMonitoringSchedule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartMonitoringScheduleOutcome>(
    [&]()-> StartMonitoringScheduleOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartMonitoringSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return StartMonitoringScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RegisterDevicesOutcome SageMakerClient::RegisterDevices(const RegisterDevicesRequest& request) const
{
  AWS_OPERATION_GUARD(RegisterDevices);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RegisterDevices, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RegisterDevices, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RegisterDevices",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RegisterDevicesOutcome>(
    [&]()-> RegisterDevicesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return RegisterDevicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListNotebookInstancesOutcome SageMakerClient::ListNotebookInstances(const ListNotebookInstancesRequest& request) const
{
  AWS_OPERATION_GUARD(ListNotebookInstances);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNotebookInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListNotebookInstances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListNotebookInstances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListNotebookInstances",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListNotebookInstancesOutcome>(
    [&]()-> ListNotebookInstancesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListNotebookInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListNotebookInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListHubContentVersionsOutcome SageMakerClient::ListHubContentVersions(const ListHubContentVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListHubContentVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListHubContentVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListHubContentVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListHubContentVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListHubContentVersions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListHubContentVersionsOutcome>(
    [&]()-> ListHubContentVersionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListHubContentVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListHubContentVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTransformJobsOutcome SageMakerClient::ListTransformJobs(const ListTransformJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTransformJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTransformJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTransformJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTransformJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTransformJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTransformJobsOutcome>(
    [&]()-> ListTransformJobsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTransformJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListTransformJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopHyperParameterTuningJobOutcome SageMakerClient::StopHyperParameterTuningJob(const StopHyperParameterTuningJobRequest& request) const
{
  AWS_OPERATION_GUARD(StopHyperParameterTuningJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopHyperParameterTuningJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopHyperParameterTuningJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopHyperParameterTuningJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopHyperParameterTuningJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopHyperParameterTuningJobOutcome>(
    [&]()-> StopHyperParameterTuningJobOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopHyperParameterTuningJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return StopHyperParameterTuningJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartPipelineExecutionOutcome SageMakerClient::StartPipelineExecution(const StartPipelineExecutionRequest& request) const
{
  AWS_OPERATION_GUARD(StartPipelineExecution);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartPipelineExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartPipelineExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartPipelineExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartPipelineExecution",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartPipelineExecutionOutcome>(
    [&]()-> StartPipelineExecutionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartPipelineExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return StartPipelineExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopProcessingJobOutcome SageMakerClient::StopProcessingJob(const StopProcessingJobRequest& request) const
{
  AWS_OPERATION_GUARD(StopProcessingJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopProcessingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopProcessingJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopProcessingJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopProcessingJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopProcessingJobOutcome>(
    [&]()-> StopProcessingJobOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopProcessingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return StopProcessingJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTrialsOutcome SageMakerClient::ListTrials(const ListTrialsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTrials);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTrials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTrials, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTrials, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTrials",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTrialsOutcome>(
    [&]()-> ListTrialsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTrials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListTrialsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListHyperParameterTuningJobsOutcome SageMakerClient::ListHyperParameterTuningJobs(const ListHyperParameterTuningJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListHyperParameterTuningJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListHyperParameterTuningJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListHyperParameterTuningJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListHyperParameterTuningJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListHyperParameterTuningJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListHyperParameterTuningJobsOutcome>(
    [&]()-> ListHyperParameterTuningJobsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListHyperParameterTuningJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListHyperParameterTuningJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListModelQualityJobDefinitionsOutcome SageMakerClient::ListModelQualityJobDefinitions(const ListModelQualityJobDefinitionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListModelQualityJobDefinitions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModelQualityJobDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListModelQualityJobDefinitions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListModelQualityJobDefinitions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListModelQualityJobDefinitions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListModelQualityJobDefinitionsOutcome>(
    [&]()-> ListModelQualityJobDefinitionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListModelQualityJobDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListModelQualityJobDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RetryPipelineExecutionOutcome SageMakerClient::RetryPipelineExecution(const RetryPipelineExecutionRequest& request) const
{
  AWS_OPERATION_GUARD(RetryPipelineExecution);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RetryPipelineExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RetryPipelineExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RetryPipelineExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RetryPipelineExecution",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RetryPipelineExecutionOutcome>(
    [&]()-> RetryPipelineExecutionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RetryPipelineExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return RetryPipelineExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFeatureGroupsOutcome SageMakerClient::ListFeatureGroups(const ListFeatureGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(ListFeatureGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFeatureGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListFeatureGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListFeatureGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListFeatureGroups",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListFeatureGroupsOutcome>(
    [&]()-> ListFeatureGroupsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFeatureGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListFeatureGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPipelineParametersForExecutionOutcome SageMakerClient::ListPipelineParametersForExecution(const ListPipelineParametersForExecutionRequest& request) const
{
  AWS_OPERATION_GUARD(ListPipelineParametersForExecution);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPipelineParametersForExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListPipelineParametersForExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPipelineParametersForExecution, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPipelineParametersForExecution",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPipelineParametersForExecutionOutcome>(
    [&]()-> ListPipelineParametersForExecutionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPipelineParametersForExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListPipelineParametersForExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateActionOutcome SageMakerClient::UpdateAction(const UpdateActionRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAction);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateAction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAction",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateActionOutcome>(
    [&]()-> UpdateActionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopEdgePackagingJobOutcome SageMakerClient::StopEdgePackagingJob(const StopEdgePackagingJobRequest& request) const
{
  AWS_OPERATION_GUARD(StopEdgePackagingJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopEdgePackagingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopEdgePackagingJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopEdgePackagingJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopEdgePackagingJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopEdgePackagingJobOutcome>(
    [&]()-> StopEdgePackagingJobOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopEdgePackagingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return StopEdgePackagingJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListModelExplainabilityJobDefinitionsOutcome SageMakerClient::ListModelExplainabilityJobDefinitions(const ListModelExplainabilityJobDefinitionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListModelExplainabilityJobDefinitions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModelExplainabilityJobDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListModelExplainabilityJobDefinitions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListModelExplainabilityJobDefinitions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListModelExplainabilityJobDefinitions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListModelExplainabilityJobDefinitionsOutcome>(
    [&]()-> ListModelExplainabilityJobDefinitionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListModelExplainabilityJobDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListModelExplainabilityJobDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTrialComponentsOutcome SageMakerClient::ListTrialComponents(const ListTrialComponentsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTrialComponents);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTrialComponents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTrialComponents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTrialComponents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTrialComponents",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTrialComponentsOutcome>(
    [&]()-> ListTrialComponentsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTrialComponents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListTrialComponentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartEdgeDeploymentStageOutcome SageMakerClient::StartEdgeDeploymentStage(const StartEdgeDeploymentStageRequest& request) const
{
  AWS_OPERATION_GUARD(StartEdgeDeploymentStage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartEdgeDeploymentStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartEdgeDeploymentStage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartEdgeDeploymentStage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartEdgeDeploymentStage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartEdgeDeploymentStageOutcome>(
    [&]()-> StartEdgeDeploymentStageOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartEdgeDeploymentStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return StartEdgeDeploymentStageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTrainingJobsForHyperParameterTuningJobOutcome SageMakerClient::ListTrainingJobsForHyperParameterTuningJob(const ListTrainingJobsForHyperParameterTuningJobRequest& request) const
{
  AWS_OPERATION_GUARD(ListTrainingJobsForHyperParameterTuningJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTrainingJobsForHyperParameterTuningJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTrainingJobsForHyperParameterTuningJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTrainingJobsForHyperParameterTuningJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTrainingJobsForHyperParameterTuningJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTrainingJobsForHyperParameterTuningJobOutcome>(
    [&]()-> ListTrainingJobsForHyperParameterTuningJobOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTrainingJobsForHyperParameterTuningJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListTrainingJobsForHyperParameterTuningJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListLineageGroupsOutcome SageMakerClient::ListLineageGroups(const ListLineageGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(ListLineageGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLineageGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListLineageGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListLineageGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListLineageGroups",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListLineageGroupsOutcome>(
    [&]()-> ListLineageGroupsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLineageGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListLineageGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateEndpointOutcome SageMakerClient::UpdateEndpoint(const UpdateEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateEndpoint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateEndpointOutcome>(
    [&]()-> UpdateEndpointOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListLabelingJobsOutcome SageMakerClient::ListLabelingJobs(const ListLabelingJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListLabelingJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLabelingJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListLabelingJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListLabelingJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListLabelingJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListLabelingJobsOutcome>(
    [&]()-> ListLabelingJobsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLabelingJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListLabelingJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListWorkteamsOutcome SageMakerClient::ListWorkteams(const ListWorkteamsRequest& request) const
{
  AWS_OPERATION_GUARD(ListWorkteams);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkteams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListWorkteams, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListWorkteams, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListWorkteams",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListWorkteamsOutcome>(
    [&]()-> ListWorkteamsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkteams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListWorkteamsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListLabelingJobsForWorkteamOutcome SageMakerClient::ListLabelingJobsForWorkteam(const ListLabelingJobsForWorkteamRequest& request) const
{
  AWS_OPERATION_GUARD(ListLabelingJobsForWorkteam);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLabelingJobsForWorkteam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListLabelingJobsForWorkteam, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListLabelingJobsForWorkteam, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListLabelingJobsForWorkteam",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListLabelingJobsForWorkteamOutcome>(
    [&]()-> ListLabelingJobsForWorkteamOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLabelingJobsForWorkteam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListLabelingJobsForWorkteamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListProjectsOutcome SageMakerClient::ListProjects(const ListProjectsRequest& request) const
{
  AWS_OPERATION_GUARD(ListProjects);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListProjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListProjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListProjects",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListProjectsOutcome>(
    [&]()-> ListProjectsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListProjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMonitoringAlertsOutcome SageMakerClient::ListMonitoringAlerts(const ListMonitoringAlertsRequest& request) const
{
  AWS_OPERATION_GUARD(ListMonitoringAlerts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMonitoringAlerts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListMonitoringAlerts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMonitoringAlerts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMonitoringAlerts",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMonitoringAlertsOutcome>(
    [&]()-> ListMonitoringAlertsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMonitoringAlerts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListMonitoringAlertsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMonitoringExecutionsOutcome SageMakerClient::ListMonitoringExecutions(const ListMonitoringExecutionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListMonitoringExecutions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMonitoringExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListMonitoringExecutions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMonitoringExecutions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMonitoringExecutions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMonitoringExecutionsOutcome>(
    [&]()-> ListMonitoringExecutionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMonitoringExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListMonitoringExecutionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListInferenceRecommendationsJobsOutcome SageMakerClient::ListInferenceRecommendationsJobs(const ListInferenceRecommendationsJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListInferenceRecommendationsJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInferenceRecommendationsJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListInferenceRecommendationsJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListInferenceRecommendationsJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListInferenceRecommendationsJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListInferenceRecommendationsJobsOutcome>(
    [&]()-> ListInferenceRecommendationsJobsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInferenceRecommendationsJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListInferenceRecommendationsJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopTrainingJobOutcome SageMakerClient::StopTrainingJob(const StopTrainingJobRequest& request) const
{
  AWS_OPERATION_GUARD(StopTrainingJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopTrainingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopTrainingJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopTrainingJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopTrainingJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopTrainingJobOutcome>(
    [&]()-> StopTrainingJobOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopTrainingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return StopTrainingJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartInferenceExperimentOutcome SageMakerClient::StartInferenceExperiment(const StartInferenceExperimentRequest& request) const
{
  AWS_OPERATION_GUARD(StartInferenceExperiment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartInferenceExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartInferenceExperiment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartInferenceExperiment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartInferenceExperiment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartInferenceExperimentOutcome>(
    [&]()-> StartInferenceExperimentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartInferenceExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return StartInferenceExperimentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopCompilationJobOutcome SageMakerClient::StopCompilationJob(const StopCompilationJobRequest& request) const
{
  AWS_OPERATION_GUARD(StopCompilationJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopCompilationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopCompilationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopCompilationJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopCompilationJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopCompilationJobOutcome>(
    [&]()-> StopCompilationJobOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopCompilationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return StopCompilationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListModelPackagesOutcome SageMakerClient::ListModelPackages(const ListModelPackagesRequest& request) const
{
  AWS_OPERATION_GUARD(ListModelPackages);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModelPackages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListModelPackages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListModelPackages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListModelPackages",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListModelPackagesOutcome>(
    [&]()-> ListModelPackagesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListModelPackages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListModelPackagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopLabelingJobOutcome SageMakerClient::StopLabelingJob(const StopLabelingJobRequest& request) const
{
  AWS_OPERATION_GUARD(StopLabelingJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopLabelingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopLabelingJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopLabelingJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopLabelingJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopLabelingJobOutcome>(
    [&]()-> StopLabelingJobOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopLabelingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return StopLabelingJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDeviceFleetOutcome SageMakerClient::UpdateDeviceFleet(const UpdateDeviceFleetRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDeviceFleet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDeviceFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateDeviceFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDeviceFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDeviceFleet",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDeviceFleetOutcome>(
    [&]()-> UpdateDeviceFleetOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDeviceFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateDeviceFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchOutcome SageMakerClient::Search(const SearchRequest& request) const
{
  AWS_OPERATION_GUARD(Search);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Search, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, Search, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, Search, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".Search",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchOutcome>(
    [&]()-> SearchOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, Search, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return SearchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSubscribedWorkteamsOutcome SageMakerClient::ListSubscribedWorkteams(const ListSubscribedWorkteamsRequest& request) const
{
  AWS_OPERATION_GUARD(ListSubscribedWorkteams);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSubscribedWorkteams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSubscribedWorkteams, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSubscribedWorkteams, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSubscribedWorkteams",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSubscribedWorkteamsOutcome>(
    [&]()-> ListSubscribedWorkteamsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSubscribedWorkteams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListSubscribedWorkteamsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListStudioLifecycleConfigsOutcome SageMakerClient::ListStudioLifecycleConfigs(const ListStudioLifecycleConfigsRequest& request) const
{
  AWS_OPERATION_GUARD(ListStudioLifecycleConfigs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStudioLifecycleConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListStudioLifecycleConfigs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListStudioLifecycleConfigs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListStudioLifecycleConfigs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListStudioLifecycleConfigsOutcome>(
    [&]()-> ListStudioLifecycleConfigsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStudioLifecycleConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListStudioLifecycleConfigsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

QueryLineageOutcome SageMakerClient::QueryLineage(const QueryLineageRequest& request) const
{
  AWS_OPERATION_GUARD(QueryLineage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, QueryLineage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, QueryLineage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, QueryLineage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".QueryLineage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<QueryLineageOutcome>(
    [&]()-> QueryLineageOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, QueryLineage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return QueryLineageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListModelCardsOutcome SageMakerClient::ListModelCards(const ListModelCardsRequest& request) const
{
  AWS_OPERATION_GUARD(ListModelCards);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModelCards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListModelCards, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListModelCards, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListModelCards",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListModelCardsOutcome>(
    [&]()-> ListModelCardsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListModelCards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListModelCardsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopTransformJobOutcome SageMakerClient::StopTransformJob(const StopTransformJobRequest& request) const
{
  AWS_OPERATION_GUARD(StopTransformJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopTransformJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopTransformJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopTransformJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopTransformJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopTransformJobOutcome>(
    [&]()-> StopTransformJobOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopTransformJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return StopTransformJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateEndpointWeightsAndCapacitiesOutcome SageMakerClient::UpdateEndpointWeightsAndCapacities(const UpdateEndpointWeightsAndCapacitiesRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateEndpointWeightsAndCapacities);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEndpointWeightsAndCapacities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateEndpointWeightsAndCapacities, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateEndpointWeightsAndCapacities, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateEndpointWeightsAndCapacities",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateEndpointWeightsAndCapacitiesOutcome>(
    [&]()-> UpdateEndpointWeightsAndCapacitiesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEndpointWeightsAndCapacities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateEndpointWeightsAndCapacitiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateClusterSoftwareOutcome SageMakerClient::UpdateClusterSoftware(const UpdateClusterSoftwareRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateClusterSoftware);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateClusterSoftware, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateClusterSoftware, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateClusterSoftware, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateClusterSoftware",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateClusterSoftwareOutcome>(
    [&]()-> UpdateClusterSoftwareOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateClusterSoftware, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateClusterSoftwareOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateContextOutcome SageMakerClient::UpdateContext(const UpdateContextRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateContext);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContext, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateContext, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateContext, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateContext",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateContextOutcome>(
    [&]()-> UpdateContextOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateContext, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateContextOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListModelMetadataOutcome SageMakerClient::ListModelMetadata(const ListModelMetadataRequest& request) const
{
  AWS_OPERATION_GUARD(ListModelMetadata);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModelMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListModelMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListModelMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListModelMetadata",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListModelMetadataOutcome>(
    [&]()-> ListModelMetadataOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListModelMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListModelMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListEndpointConfigsOutcome SageMakerClient::ListEndpointConfigs(const ListEndpointConfigsRequest& request) const
{
  AWS_OPERATION_GUARD(ListEndpointConfigs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEndpointConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListEndpointConfigs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEndpointConfigs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEndpointConfigs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEndpointConfigsOutcome>(
    [&]()-> ListEndpointConfigsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEndpointConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListEndpointConfigsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RenderUiTemplateOutcome SageMakerClient::RenderUiTemplate(const RenderUiTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(RenderUiTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RenderUiTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RenderUiTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RenderUiTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RenderUiTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RenderUiTemplateOutcome>(
    [&]()-> RenderUiTemplateOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RenderUiTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return RenderUiTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListProcessingJobsOutcome SageMakerClient::ListProcessingJobs(const ListProcessingJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListProcessingJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProcessingJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListProcessingJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListProcessingJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListProcessingJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListProcessingJobsOutcome>(
    [&]()-> ListProcessingJobsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProcessingJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListProcessingJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListModelCardExportJobsOutcome SageMakerClient::ListModelCardExportJobs(const ListModelCardExportJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListModelCardExportJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModelCardExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListModelCardExportJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListModelCardExportJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListModelCardExportJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListModelCardExportJobsOutcome>(
    [&]()-> ListModelCardExportJobsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListModelCardExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListModelCardExportJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateCodeRepositoryOutcome SageMakerClient::UpdateCodeRepository(const UpdateCodeRepositoryRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateCodeRepository);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCodeRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateCodeRepository, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateCodeRepository, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateCodeRepository",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateCodeRepositoryOutcome>(
    [&]()-> UpdateCodeRepositoryOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateCodeRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateCodeRepositoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateClusterOutcome SageMakerClient::UpdateCluster(const UpdateClusterRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateCluster);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateCluster",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateClusterOutcome>(
    [&]()-> UpdateClusterOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateClusterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListNotebookInstanceLifecycleConfigsOutcome SageMakerClient::ListNotebookInstanceLifecycleConfigs(const ListNotebookInstanceLifecycleConfigsRequest& request) const
{
  AWS_OPERATION_GUARD(ListNotebookInstanceLifecycleConfigs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNotebookInstanceLifecycleConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListNotebookInstanceLifecycleConfigs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListNotebookInstanceLifecycleConfigs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListNotebookInstanceLifecycleConfigs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListNotebookInstanceLifecycleConfigsOutcome>(
    [&]()-> ListNotebookInstanceLifecycleConfigsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListNotebookInstanceLifecycleConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListNotebookInstanceLifecycleConfigsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListModelsOutcome SageMakerClient::ListModels(const ListModelsRequest& request) const
{
  AWS_OPERATION_GUARD(ListModels);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListModels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListModels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListModels",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListModelsOutcome>(
    [&]()-> ListModelsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListModelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutModelPackageGroupPolicyOutcome SageMakerClient::PutModelPackageGroupPolicy(const PutModelPackageGroupPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(PutModelPackageGroupPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutModelPackageGroupPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutModelPackageGroupPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutModelPackageGroupPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutModelPackageGroupPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutModelPackageGroupPolicyOutcome>(
    [&]()-> PutModelPackageGroupPolicyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutModelPackageGroupPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return PutModelPackageGroupPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListInferenceComponentsOutcome SageMakerClient::ListInferenceComponents(const ListInferenceComponentsRequest& request) const
{
  AWS_OPERATION_GUARD(ListInferenceComponents);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInferenceComponents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListInferenceComponents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListInferenceComponents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListInferenceComponents",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListInferenceComponentsOutcome>(
    [&]()-> ListInferenceComponentsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInferenceComponents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListInferenceComponentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListResourceCatalogsOutcome SageMakerClient::ListResourceCatalogs(const ListResourceCatalogsRequest& request) const
{
  AWS_OPERATION_GUARD(ListResourceCatalogs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResourceCatalogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListResourceCatalogs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListResourceCatalogs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListResourceCatalogs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListResourceCatalogsOutcome>(
    [&]()-> ListResourceCatalogsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResourceCatalogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListResourceCatalogsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAppImageConfigOutcome SageMakerClient::UpdateAppImageConfig(const UpdateAppImageConfigRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAppImageConfig);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAppImageConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateAppImageConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAppImageConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAppImageConfig",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAppImageConfigOutcome>(
    [&]()-> UpdateAppImageConfigOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAppImageConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateAppImageConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateFeatureMetadataOutcome SageMakerClient::UpdateFeatureMetadata(const UpdateFeatureMetadataRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateFeatureMetadata);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFeatureMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateFeatureMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateFeatureMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateFeatureMetadata",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateFeatureMetadataOutcome>(
    [&]()-> UpdateFeatureMetadataOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFeatureMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateFeatureMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SendPipelineExecutionStepFailureOutcome SageMakerClient::SendPipelineExecutionStepFailure(const SendPipelineExecutionStepFailureRequest& request) const
{
  AWS_OPERATION_GUARD(SendPipelineExecutionStepFailure);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendPipelineExecutionStepFailure, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SendPipelineExecutionStepFailure, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SendPipelineExecutionStepFailure, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SendPipelineExecutionStepFailure",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SendPipelineExecutionStepFailureOutcome>(
    [&]()-> SendPipelineExecutionStepFailureOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendPipelineExecutionStepFailure, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return SendPipelineExecutionStepFailureOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListImagesOutcome SageMakerClient::ListImages(const ListImagesRequest& request) const
{
  AWS_OPERATION_GUARD(ListImages);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListImages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListImages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListImages",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListImagesOutcome>(
    [&]()-> ListImagesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListImagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopInferenceRecommendationsJobOutcome SageMakerClient::StopInferenceRecommendationsJob(const StopInferenceRecommendationsJobRequest& request) const
{
  AWS_OPERATION_GUARD(StopInferenceRecommendationsJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopInferenceRecommendationsJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopInferenceRecommendationsJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopInferenceRecommendationsJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopInferenceRecommendationsJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopInferenceRecommendationsJobOutcome>(
    [&]()-> StopInferenceRecommendationsJobOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopInferenceRecommendationsJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return StopInferenceRecommendationsJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDomainOutcome SageMakerClient::UpdateDomain(const UpdateDomainRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDomain",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDomainOutcome>(
    [&]()-> UpdateDomainOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListInferenceRecommendationsJobStepsOutcome SageMakerClient::ListInferenceRecommendationsJobSteps(const ListInferenceRecommendationsJobStepsRequest& request) const
{
  AWS_OPERATION_GUARD(ListInferenceRecommendationsJobSteps);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInferenceRecommendationsJobSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListInferenceRecommendationsJobSteps, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListInferenceRecommendationsJobSteps, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListInferenceRecommendationsJobSteps",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListInferenceRecommendationsJobStepsOutcome>(
    [&]()-> ListInferenceRecommendationsJobStepsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInferenceRecommendationsJobSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListInferenceRecommendationsJobStepsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSpacesOutcome SageMakerClient::ListSpaces(const ListSpacesRequest& request) const
{
  AWS_OPERATION_GUARD(ListSpaces);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSpaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSpaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSpaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSpaces",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSpacesOutcome>(
    [&]()-> ListSpacesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSpaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListSpacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDevicesOutcome SageMakerClient::UpdateDevices(const UpdateDevicesRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDevices);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateDevices, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDevices, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDevices",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDevicesOutcome>(
    [&]()-> UpdateDevicesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateDevicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SendPipelineExecutionStepSuccessOutcome SageMakerClient::SendPipelineExecutionStepSuccess(const SendPipelineExecutionStepSuccessRequest& request) const
{
  AWS_OPERATION_GUARD(SendPipelineExecutionStepSuccess);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendPipelineExecutionStepSuccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SendPipelineExecutionStepSuccess, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SendPipelineExecutionStepSuccess, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SendPipelineExecutionStepSuccess",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SendPipelineExecutionStepSuccessOutcome>(
    [&]()-> SendPipelineExecutionStepSuccessOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendPipelineExecutionStepSuccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return SendPipelineExecutionStepSuccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMonitoringSchedulesOutcome SageMakerClient::ListMonitoringSchedules(const ListMonitoringSchedulesRequest& request) const
{
  AWS_OPERATION_GUARD(ListMonitoringSchedules);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMonitoringSchedules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListMonitoringSchedules, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMonitoringSchedules, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMonitoringSchedules",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMonitoringSchedulesOutcome>(
    [&]()-> ListMonitoringSchedulesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMonitoringSchedules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListMonitoringSchedulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListHumanTaskUisOutcome SageMakerClient::ListHumanTaskUis(const ListHumanTaskUisRequest& request) const
{
  AWS_OPERATION_GUARD(ListHumanTaskUis);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListHumanTaskUis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListHumanTaskUis, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListHumanTaskUis, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListHumanTaskUis",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListHumanTaskUisOutcome>(
    [&]()-> ListHumanTaskUisOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListHumanTaskUis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListHumanTaskUisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopAutoMLJobOutcome SageMakerClient::StopAutoMLJob(const StopAutoMLJobRequest& request) const
{
  AWS_OPERATION_GUARD(StopAutoMLJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopAutoMLJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopAutoMLJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopAutoMLJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopAutoMLJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopAutoMLJobOutcome>(
    [&]()-> StopAutoMLJobOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopAutoMLJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return StopAutoMLJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMonitoringAlertHistoryOutcome SageMakerClient::ListMonitoringAlertHistory(const ListMonitoringAlertHistoryRequest& request) const
{
  AWS_OPERATION_GUARD(ListMonitoringAlertHistory);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMonitoringAlertHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListMonitoringAlertHistory, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMonitoringAlertHistory, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMonitoringAlertHistory",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMonitoringAlertHistoryOutcome>(
    [&]()-> ListMonitoringAlertHistoryOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMonitoringAlertHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListMonitoringAlertHistoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopMonitoringScheduleOutcome SageMakerClient::StopMonitoringSchedule(const StopMonitoringScheduleRequest& request) const
{
  AWS_OPERATION_GUARD(StopMonitoringSchedule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopMonitoringSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopMonitoringSchedule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopMonitoringSchedule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopMonitoringSchedule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopMonitoringScheduleOutcome>(
    [&]()-> StopMonitoringScheduleOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopMonitoringSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return StopMonitoringScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateExperimentOutcome SageMakerClient::UpdateExperiment(const UpdateExperimentRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateExperiment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateExperiment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateExperiment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateExperiment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateExperimentOutcome>(
    [&]()-> UpdateExperimentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateExperimentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateImageOutcome SageMakerClient::UpdateImage(const UpdateImageRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateImage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateImage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateImage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateImage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateImageOutcome>(
    [&]()-> UpdateImageOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPipelineExecutionStepsOutcome SageMakerClient::ListPipelineExecutionSteps(const ListPipelineExecutionStepsRequest& request) const
{
  AWS_OPERATION_GUARD(ListPipelineExecutionSteps);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPipelineExecutionSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListPipelineExecutionSteps, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPipelineExecutionSteps, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPipelineExecutionSteps",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPipelineExecutionStepsOutcome>(
    [&]()-> ListPipelineExecutionStepsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPipelineExecutionSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListPipelineExecutionStepsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListHubsOutcome SageMakerClient::ListHubs(const ListHubsRequest& request) const
{
  AWS_OPERATION_GUARD(ListHubs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListHubs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListHubs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListHubs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListHubs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListHubsOutcome>(
    [&]()-> ListHubsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListHubs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListHubsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListImageVersionsOutcome SageMakerClient::ListImageVersions(const ListImageVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListImageVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImageVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListImageVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListImageVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListImageVersions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListImageVersionsOutcome>(
    [&]()-> ListImageVersionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListImageVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListImageVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsOutcome SageMakerClient::ListTags(const ListTagsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTags);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTags, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTags, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTags",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsOutcome>(
    [&]()-> ListTagsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

