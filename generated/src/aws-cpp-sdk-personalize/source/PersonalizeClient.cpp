/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/personalize/PersonalizeClient.h>
#include <aws/personalize/PersonalizeEndpointProvider.h>
#include <aws/personalize/PersonalizeErrorMarshaller.h>
#include <aws/personalize/model/CreateBatchInferenceJobRequest.h>
#include <aws/personalize/model/CreateBatchSegmentJobRequest.h>
#include <aws/personalize/model/CreateCampaignRequest.h>
#include <aws/personalize/model/CreateDataDeletionJobRequest.h>
#include <aws/personalize/model/CreateDatasetExportJobRequest.h>
#include <aws/personalize/model/CreateDatasetGroupRequest.h>
#include <aws/personalize/model/CreateDatasetImportJobRequest.h>
#include <aws/personalize/model/CreateDatasetRequest.h>
#include <aws/personalize/model/CreateEventTrackerRequest.h>
#include <aws/personalize/model/CreateFilterRequest.h>
#include <aws/personalize/model/CreateMetricAttributionRequest.h>
#include <aws/personalize/model/CreateRecommenderRequest.h>
#include <aws/personalize/model/CreateSchemaRequest.h>
#include <aws/personalize/model/CreateSolutionRequest.h>
#include <aws/personalize/model/CreateSolutionVersionRequest.h>
#include <aws/personalize/model/DeleteCampaignRequest.h>
#include <aws/personalize/model/DeleteDatasetGroupRequest.h>
#include <aws/personalize/model/DeleteDatasetRequest.h>
#include <aws/personalize/model/DeleteEventTrackerRequest.h>
#include <aws/personalize/model/DeleteFilterRequest.h>
#include <aws/personalize/model/DeleteMetricAttributionRequest.h>
#include <aws/personalize/model/DeleteRecommenderRequest.h>
#include <aws/personalize/model/DeleteSchemaRequest.h>
#include <aws/personalize/model/DeleteSolutionRequest.h>
#include <aws/personalize/model/DescribeAlgorithmRequest.h>
#include <aws/personalize/model/DescribeBatchInferenceJobRequest.h>
#include <aws/personalize/model/DescribeBatchSegmentJobRequest.h>
#include <aws/personalize/model/DescribeCampaignRequest.h>
#include <aws/personalize/model/DescribeDataDeletionJobRequest.h>
#include <aws/personalize/model/DescribeDatasetExportJobRequest.h>
#include <aws/personalize/model/DescribeDatasetGroupRequest.h>
#include <aws/personalize/model/DescribeDatasetImportJobRequest.h>
#include <aws/personalize/model/DescribeDatasetRequest.h>
#include <aws/personalize/model/DescribeEventTrackerRequest.h>
#include <aws/personalize/model/DescribeFeatureTransformationRequest.h>
#include <aws/personalize/model/DescribeFilterRequest.h>
#include <aws/personalize/model/DescribeMetricAttributionRequest.h>
#include <aws/personalize/model/DescribeRecipeRequest.h>
#include <aws/personalize/model/DescribeRecommenderRequest.h>
#include <aws/personalize/model/DescribeSchemaRequest.h>
#include <aws/personalize/model/DescribeSolutionRequest.h>
#include <aws/personalize/model/DescribeSolutionVersionRequest.h>
#include <aws/personalize/model/GetSolutionMetricsRequest.h>
#include <aws/personalize/model/ListBatchInferenceJobsRequest.h>
#include <aws/personalize/model/ListBatchSegmentJobsRequest.h>
#include <aws/personalize/model/ListCampaignsRequest.h>
#include <aws/personalize/model/ListDataDeletionJobsRequest.h>
#include <aws/personalize/model/ListDatasetExportJobsRequest.h>
#include <aws/personalize/model/ListDatasetGroupsRequest.h>
#include <aws/personalize/model/ListDatasetImportJobsRequest.h>
#include <aws/personalize/model/ListDatasetsRequest.h>
#include <aws/personalize/model/ListEventTrackersRequest.h>
#include <aws/personalize/model/ListFiltersRequest.h>
#include <aws/personalize/model/ListMetricAttributionMetricsRequest.h>
#include <aws/personalize/model/ListMetricAttributionsRequest.h>
#include <aws/personalize/model/ListRecipesRequest.h>
#include <aws/personalize/model/ListRecommendersRequest.h>
#include <aws/personalize/model/ListSchemasRequest.h>
#include <aws/personalize/model/ListSolutionVersionsRequest.h>
#include <aws/personalize/model/ListSolutionsRequest.h>
#include <aws/personalize/model/ListTagsForResourceRequest.h>
#include <aws/personalize/model/StartRecommenderRequest.h>
#include <aws/personalize/model/StopRecommenderRequest.h>
#include <aws/personalize/model/StopSolutionVersionCreationRequest.h>
#include <aws/personalize/model/TagResourceRequest.h>
#include <aws/personalize/model/UntagResourceRequest.h>
#include <aws/personalize/model/UpdateCampaignRequest.h>
#include <aws/personalize/model/UpdateDatasetRequest.h>
#include <aws/personalize/model/UpdateMetricAttributionRequest.h>
#include <aws/personalize/model/UpdateRecommenderRequest.h>
#include <aws/personalize/model/UpdateSolutionRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Personalize;
using namespace Aws::Personalize::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Personalize {
const char SERVICE_NAME[] = "personalize";
const char ALLOCATION_TAG[] = "PersonalizeClient";
}  // namespace Personalize
}  // namespace Aws
const char* PersonalizeClient::GetServiceName() { return SERVICE_NAME; }
const char* PersonalizeClient::GetAllocationTag() { return ALLOCATION_TAG; }

PersonalizeClient::PersonalizeClient(const Personalize::PersonalizeClientConfiguration& clientConfiguration,
                                     std::shared_ptr<PersonalizeEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PersonalizeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<PersonalizeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PersonalizeClient::PersonalizeClient(const AWSCredentials& credentials, std::shared_ptr<PersonalizeEndpointProviderBase> endpointProvider,
                                     const Personalize::PersonalizeClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PersonalizeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<PersonalizeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PersonalizeClient::PersonalizeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<PersonalizeEndpointProviderBase> endpointProvider,
                                     const Personalize::PersonalizeClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PersonalizeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<PersonalizeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
PersonalizeClient::PersonalizeClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PersonalizeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PersonalizeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PersonalizeClient::PersonalizeClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PersonalizeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PersonalizeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PersonalizeClient::PersonalizeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PersonalizeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PersonalizeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
PersonalizeClient::~PersonalizeClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<PersonalizeEndpointProviderBase>& PersonalizeClient::accessEndpointProvider() { return m_endpointProvider; }

void PersonalizeClient::init(const Personalize::PersonalizeClientConfiguration& config) {
  AWSClient::SetServiceClientName("Personalize");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "personalize");
}

void PersonalizeClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
PersonalizeClient::InvokeOperationOutcome PersonalizeClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                                                    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CreateBatchInferenceJobOutcome PersonalizeClient::CreateBatchInferenceJob(const CreateBatchInferenceJobRequest& request) const {
  return CreateBatchInferenceJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBatchSegmentJobOutcome PersonalizeClient::CreateBatchSegmentJob(const CreateBatchSegmentJobRequest& request) const {
  return CreateBatchSegmentJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCampaignOutcome PersonalizeClient::CreateCampaign(const CreateCampaignRequest& request) const {
  return CreateCampaignOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataDeletionJobOutcome PersonalizeClient::CreateDataDeletionJob(const CreateDataDeletionJobRequest& request) const {
  return CreateDataDeletionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDatasetOutcome PersonalizeClient::CreateDataset(const CreateDatasetRequest& request) const {
  return CreateDatasetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDatasetExportJobOutcome PersonalizeClient::CreateDatasetExportJob(const CreateDatasetExportJobRequest& request) const {
  return CreateDatasetExportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDatasetGroupOutcome PersonalizeClient::CreateDatasetGroup(const CreateDatasetGroupRequest& request) const {
  return CreateDatasetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDatasetImportJobOutcome PersonalizeClient::CreateDatasetImportJob(const CreateDatasetImportJobRequest& request) const {
  return CreateDatasetImportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEventTrackerOutcome PersonalizeClient::CreateEventTracker(const CreateEventTrackerRequest& request) const {
  return CreateEventTrackerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFilterOutcome PersonalizeClient::CreateFilter(const CreateFilterRequest& request) const {
  return CreateFilterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMetricAttributionOutcome PersonalizeClient::CreateMetricAttribution(const CreateMetricAttributionRequest& request) const {
  return CreateMetricAttributionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRecommenderOutcome PersonalizeClient::CreateRecommender(const CreateRecommenderRequest& request) const {
  return CreateRecommenderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSchemaOutcome PersonalizeClient::CreateSchema(const CreateSchemaRequest& request) const {
  return CreateSchemaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSolutionOutcome PersonalizeClient::CreateSolution(const CreateSolutionRequest& request) const {
  return CreateSolutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSolutionVersionOutcome PersonalizeClient::CreateSolutionVersion(const CreateSolutionVersionRequest& request) const {
  return CreateSolutionVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCampaignOutcome PersonalizeClient::DeleteCampaign(const DeleteCampaignRequest& request) const {
  return DeleteCampaignOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDatasetOutcome PersonalizeClient::DeleteDataset(const DeleteDatasetRequest& request) const {
  return DeleteDatasetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDatasetGroupOutcome PersonalizeClient::DeleteDatasetGroup(const DeleteDatasetGroupRequest& request) const {
  return DeleteDatasetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEventTrackerOutcome PersonalizeClient::DeleteEventTracker(const DeleteEventTrackerRequest& request) const {
  return DeleteEventTrackerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFilterOutcome PersonalizeClient::DeleteFilter(const DeleteFilterRequest& request) const {
  return DeleteFilterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMetricAttributionOutcome PersonalizeClient::DeleteMetricAttribution(const DeleteMetricAttributionRequest& request) const {
  return DeleteMetricAttributionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRecommenderOutcome PersonalizeClient::DeleteRecommender(const DeleteRecommenderRequest& request) const {
  return DeleteRecommenderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSchemaOutcome PersonalizeClient::DeleteSchema(const DeleteSchemaRequest& request) const {
  return DeleteSchemaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSolutionOutcome PersonalizeClient::DeleteSolution(const DeleteSolutionRequest& request) const {
  return DeleteSolutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAlgorithmOutcome PersonalizeClient::DescribeAlgorithm(const DescribeAlgorithmRequest& request) const {
  return DescribeAlgorithmOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeBatchInferenceJobOutcome PersonalizeClient::DescribeBatchInferenceJob(const DescribeBatchInferenceJobRequest& request) const {
  return DescribeBatchInferenceJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeBatchSegmentJobOutcome PersonalizeClient::DescribeBatchSegmentJob(const DescribeBatchSegmentJobRequest& request) const {
  return DescribeBatchSegmentJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCampaignOutcome PersonalizeClient::DescribeCampaign(const DescribeCampaignRequest& request) const {
  return DescribeCampaignOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDataDeletionJobOutcome PersonalizeClient::DescribeDataDeletionJob(const DescribeDataDeletionJobRequest& request) const {
  return DescribeDataDeletionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDatasetOutcome PersonalizeClient::DescribeDataset(const DescribeDatasetRequest& request) const {
  return DescribeDatasetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDatasetExportJobOutcome PersonalizeClient::DescribeDatasetExportJob(const DescribeDatasetExportJobRequest& request) const {
  return DescribeDatasetExportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDatasetGroupOutcome PersonalizeClient::DescribeDatasetGroup(const DescribeDatasetGroupRequest& request) const {
  return DescribeDatasetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDatasetImportJobOutcome PersonalizeClient::DescribeDatasetImportJob(const DescribeDatasetImportJobRequest& request) const {
  return DescribeDatasetImportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventTrackerOutcome PersonalizeClient::DescribeEventTracker(const DescribeEventTrackerRequest& request) const {
  return DescribeEventTrackerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFeatureTransformationOutcome PersonalizeClient::DescribeFeatureTransformation(
    const DescribeFeatureTransformationRequest& request) const {
  return DescribeFeatureTransformationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFilterOutcome PersonalizeClient::DescribeFilter(const DescribeFilterRequest& request) const {
  return DescribeFilterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMetricAttributionOutcome PersonalizeClient::DescribeMetricAttribution(const DescribeMetricAttributionRequest& request) const {
  return DescribeMetricAttributionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRecipeOutcome PersonalizeClient::DescribeRecipe(const DescribeRecipeRequest& request) const {
  return DescribeRecipeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRecommenderOutcome PersonalizeClient::DescribeRecommender(const DescribeRecommenderRequest& request) const {
  return DescribeRecommenderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSchemaOutcome PersonalizeClient::DescribeSchema(const DescribeSchemaRequest& request) const {
  return DescribeSchemaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSolutionOutcome PersonalizeClient::DescribeSolution(const DescribeSolutionRequest& request) const {
  return DescribeSolutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSolutionVersionOutcome PersonalizeClient::DescribeSolutionVersion(const DescribeSolutionVersionRequest& request) const {
  return DescribeSolutionVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSolutionMetricsOutcome PersonalizeClient::GetSolutionMetrics(const GetSolutionMetricsRequest& request) const {
  return GetSolutionMetricsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBatchInferenceJobsOutcome PersonalizeClient::ListBatchInferenceJobs(const ListBatchInferenceJobsRequest& request) const {
  return ListBatchInferenceJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBatchSegmentJobsOutcome PersonalizeClient::ListBatchSegmentJobs(const ListBatchSegmentJobsRequest& request) const {
  return ListBatchSegmentJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCampaignsOutcome PersonalizeClient::ListCampaigns(const ListCampaignsRequest& request) const {
  return ListCampaignsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDataDeletionJobsOutcome PersonalizeClient::ListDataDeletionJobs(const ListDataDeletionJobsRequest& request) const {
  return ListDataDeletionJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDatasetExportJobsOutcome PersonalizeClient::ListDatasetExportJobs(const ListDatasetExportJobsRequest& request) const {
  return ListDatasetExportJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDatasetGroupsOutcome PersonalizeClient::ListDatasetGroups(const ListDatasetGroupsRequest& request) const {
  return ListDatasetGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDatasetImportJobsOutcome PersonalizeClient::ListDatasetImportJobs(const ListDatasetImportJobsRequest& request) const {
  return ListDatasetImportJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDatasetsOutcome PersonalizeClient::ListDatasets(const ListDatasetsRequest& request) const {
  return ListDatasetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEventTrackersOutcome PersonalizeClient::ListEventTrackers(const ListEventTrackersRequest& request) const {
  return ListEventTrackersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFiltersOutcome PersonalizeClient::ListFilters(const ListFiltersRequest& request) const {
  return ListFiltersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMetricAttributionMetricsOutcome PersonalizeClient::ListMetricAttributionMetrics(
    const ListMetricAttributionMetricsRequest& request) const {
  return ListMetricAttributionMetricsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMetricAttributionsOutcome PersonalizeClient::ListMetricAttributions(const ListMetricAttributionsRequest& request) const {
  return ListMetricAttributionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRecipesOutcome PersonalizeClient::ListRecipes(const ListRecipesRequest& request) const {
  return ListRecipesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRecommendersOutcome PersonalizeClient::ListRecommenders(const ListRecommendersRequest& request) const {
  return ListRecommendersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSchemasOutcome PersonalizeClient::ListSchemas(const ListSchemasRequest& request) const {
  return ListSchemasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSolutionVersionsOutcome PersonalizeClient::ListSolutionVersions(const ListSolutionVersionsRequest& request) const {
  return ListSolutionVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSolutionsOutcome PersonalizeClient::ListSolutions(const ListSolutionsRequest& request) const {
  return ListSolutionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome PersonalizeClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartRecommenderOutcome PersonalizeClient::StartRecommender(const StartRecommenderRequest& request) const {
  return StartRecommenderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopRecommenderOutcome PersonalizeClient::StopRecommender(const StopRecommenderRequest& request) const {
  return StopRecommenderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopSolutionVersionCreationOutcome PersonalizeClient::StopSolutionVersionCreation(const StopSolutionVersionCreationRequest& request) const {
  return StopSolutionVersionCreationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome PersonalizeClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome PersonalizeClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCampaignOutcome PersonalizeClient::UpdateCampaign(const UpdateCampaignRequest& request) const {
  return UpdateCampaignOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDatasetOutcome PersonalizeClient::UpdateDataset(const UpdateDatasetRequest& request) const {
  return UpdateDatasetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateMetricAttributionOutcome PersonalizeClient::UpdateMetricAttribution(const UpdateMetricAttributionRequest& request) const {
  return UpdateMetricAttributionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRecommenderOutcome PersonalizeClient::UpdateRecommender(const UpdateRecommenderRequest& request) const {
  return UpdateRecommenderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSolutionOutcome PersonalizeClient::UpdateSolution(const UpdateSolutionRequest& request) const {
  return UpdateSolutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
