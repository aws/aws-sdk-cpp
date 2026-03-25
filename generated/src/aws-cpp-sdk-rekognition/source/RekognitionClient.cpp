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
#include <aws/rekognition/RekognitionClient.h>
#include <aws/rekognition/RekognitionEndpointProvider.h>
#include <aws/rekognition/RekognitionErrorMarshaller.h>
#include <aws/rekognition/model/AssociateFacesRequest.h>
#include <aws/rekognition/model/CompareFacesRequest.h>
#include <aws/rekognition/model/CopyProjectVersionRequest.h>
#include <aws/rekognition/model/CreateCollectionRequest.h>
#include <aws/rekognition/model/CreateDatasetRequest.h>
#include <aws/rekognition/model/CreateFaceLivenessSessionRequest.h>
#include <aws/rekognition/model/CreateProjectRequest.h>
#include <aws/rekognition/model/CreateProjectVersionRequest.h>
#include <aws/rekognition/model/CreateStreamProcessorRequest.h>
#include <aws/rekognition/model/CreateUserRequest.h>
#include <aws/rekognition/model/DeleteCollectionRequest.h>
#include <aws/rekognition/model/DeleteDatasetRequest.h>
#include <aws/rekognition/model/DeleteFacesRequest.h>
#include <aws/rekognition/model/DeleteProjectPolicyRequest.h>
#include <aws/rekognition/model/DeleteProjectRequest.h>
#include <aws/rekognition/model/DeleteProjectVersionRequest.h>
#include <aws/rekognition/model/DeleteStreamProcessorRequest.h>
#include <aws/rekognition/model/DeleteUserRequest.h>
#include <aws/rekognition/model/DescribeCollectionRequest.h>
#include <aws/rekognition/model/DescribeDatasetRequest.h>
#include <aws/rekognition/model/DescribeProjectVersionsRequest.h>
#include <aws/rekognition/model/DescribeProjectsRequest.h>
#include <aws/rekognition/model/DescribeStreamProcessorRequest.h>
#include <aws/rekognition/model/DetectCustomLabelsRequest.h>
#include <aws/rekognition/model/DetectFacesRequest.h>
#include <aws/rekognition/model/DetectLabelsRequest.h>
#include <aws/rekognition/model/DetectModerationLabelsRequest.h>
#include <aws/rekognition/model/DetectProtectiveEquipmentRequest.h>
#include <aws/rekognition/model/DetectTextRequest.h>
#include <aws/rekognition/model/DisassociateFacesRequest.h>
#include <aws/rekognition/model/DistributeDatasetEntriesRequest.h>
#include <aws/rekognition/model/GetCelebrityInfoRequest.h>
#include <aws/rekognition/model/GetCelebrityRecognitionRequest.h>
#include <aws/rekognition/model/GetContentModerationRequest.h>
#include <aws/rekognition/model/GetFaceDetectionRequest.h>
#include <aws/rekognition/model/GetFaceLivenessSessionResultsRequest.h>
#include <aws/rekognition/model/GetFaceSearchRequest.h>
#include <aws/rekognition/model/GetLabelDetectionRequest.h>
#include <aws/rekognition/model/GetMediaAnalysisJobRequest.h>
#include <aws/rekognition/model/GetPersonTrackingRequest.h>
#include <aws/rekognition/model/GetSegmentDetectionRequest.h>
#include <aws/rekognition/model/GetTextDetectionRequest.h>
#include <aws/rekognition/model/IndexFacesRequest.h>
#include <aws/rekognition/model/ListCollectionsRequest.h>
#include <aws/rekognition/model/ListDatasetEntriesRequest.h>
#include <aws/rekognition/model/ListDatasetLabelsRequest.h>
#include <aws/rekognition/model/ListFacesRequest.h>
#include <aws/rekognition/model/ListMediaAnalysisJobsRequest.h>
#include <aws/rekognition/model/ListProjectPoliciesRequest.h>
#include <aws/rekognition/model/ListStreamProcessorsRequest.h>
#include <aws/rekognition/model/ListTagsForResourceRequest.h>
#include <aws/rekognition/model/ListUsersRequest.h>
#include <aws/rekognition/model/PutProjectPolicyRequest.h>
#include <aws/rekognition/model/RecognizeCelebritiesRequest.h>
#include <aws/rekognition/model/SearchFacesByImageRequest.h>
#include <aws/rekognition/model/SearchFacesRequest.h>
#include <aws/rekognition/model/SearchUsersByImageRequest.h>
#include <aws/rekognition/model/SearchUsersRequest.h>
#include <aws/rekognition/model/StartCelebrityRecognitionRequest.h>
#include <aws/rekognition/model/StartContentModerationRequest.h>
#include <aws/rekognition/model/StartFaceDetectionRequest.h>
#include <aws/rekognition/model/StartFaceSearchRequest.h>
#include <aws/rekognition/model/StartLabelDetectionRequest.h>
#include <aws/rekognition/model/StartMediaAnalysisJobRequest.h>
#include <aws/rekognition/model/StartPersonTrackingRequest.h>
#include <aws/rekognition/model/StartProjectVersionRequest.h>
#include <aws/rekognition/model/StartSegmentDetectionRequest.h>
#include <aws/rekognition/model/StartStreamProcessorRequest.h>
#include <aws/rekognition/model/StartTextDetectionRequest.h>
#include <aws/rekognition/model/StopProjectVersionRequest.h>
#include <aws/rekognition/model/StopStreamProcessorRequest.h>
#include <aws/rekognition/model/TagResourceRequest.h>
#include <aws/rekognition/model/UntagResourceRequest.h>
#include <aws/rekognition/model/UpdateDatasetEntriesRequest.h>
#include <aws/rekognition/model/UpdateStreamProcessorRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Rekognition;
using namespace Aws::Rekognition::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Rekognition {
const char SERVICE_NAME[] = "rekognition";
const char ALLOCATION_TAG[] = "RekognitionClient";
}  // namespace Rekognition
}  // namespace Aws
const char* RekognitionClient::GetServiceName() { return SERVICE_NAME; }
const char* RekognitionClient::GetAllocationTag() { return ALLOCATION_TAG; }

RekognitionClient::RekognitionClient(const Rekognition::RekognitionClientConfiguration& clientConfiguration,
                                     std::shared_ptr<RekognitionEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RekognitionErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<RekognitionEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RekognitionClient::RekognitionClient(const AWSCredentials& credentials, std::shared_ptr<RekognitionEndpointProviderBase> endpointProvider,
                                     const Rekognition::RekognitionClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RekognitionErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<RekognitionEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RekognitionClient::RekognitionClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<RekognitionEndpointProviderBase> endpointProvider,
                                     const Rekognition::RekognitionClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RekognitionErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<RekognitionEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
RekognitionClient::RekognitionClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RekognitionErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RekognitionEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RekognitionClient::RekognitionClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RekognitionErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RekognitionEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RekognitionClient::RekognitionClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RekognitionErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RekognitionEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
RekognitionClient::~RekognitionClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<RekognitionEndpointProviderBase>& RekognitionClient::accessEndpointProvider() { return m_endpointProvider; }

void RekognitionClient::init(const Rekognition::RekognitionClientConfiguration& config) {
  AWSClient::SetServiceClientName("Rekognition");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "rekognition");
}

void RekognitionClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
RekognitionClient::InvokeOperationOutcome RekognitionClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AssociateFacesOutcome RekognitionClient::AssociateFaces(const AssociateFacesRequest& request) const {
  return AssociateFacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CompareFacesOutcome RekognitionClient::CompareFaces(const CompareFacesRequest& request) const {
  return CompareFacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CopyProjectVersionOutcome RekognitionClient::CopyProjectVersion(const CopyProjectVersionRequest& request) const {
  return CopyProjectVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCollectionOutcome RekognitionClient::CreateCollection(const CreateCollectionRequest& request) const {
  return CreateCollectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDatasetOutcome RekognitionClient::CreateDataset(const CreateDatasetRequest& request) const {
  return CreateDatasetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFaceLivenessSessionOutcome RekognitionClient::CreateFaceLivenessSession(const CreateFaceLivenessSessionRequest& request) const {
  return CreateFaceLivenessSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProjectOutcome RekognitionClient::CreateProject(const CreateProjectRequest& request) const {
  return CreateProjectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProjectVersionOutcome RekognitionClient::CreateProjectVersion(const CreateProjectVersionRequest& request) const {
  return CreateProjectVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateStreamProcessorOutcome RekognitionClient::CreateStreamProcessor(const CreateStreamProcessorRequest& request) const {
  return CreateStreamProcessorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUserOutcome RekognitionClient::CreateUser(const CreateUserRequest& request) const {
  return CreateUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCollectionOutcome RekognitionClient::DeleteCollection(const DeleteCollectionRequest& request) const {
  return DeleteCollectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDatasetOutcome RekognitionClient::DeleteDataset(const DeleteDatasetRequest& request) const {
  return DeleteDatasetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFacesOutcome RekognitionClient::DeleteFaces(const DeleteFacesRequest& request) const {
  return DeleteFacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProjectOutcome RekognitionClient::DeleteProject(const DeleteProjectRequest& request) const {
  return DeleteProjectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProjectPolicyOutcome RekognitionClient::DeleteProjectPolicy(const DeleteProjectPolicyRequest& request) const {
  return DeleteProjectPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProjectVersionOutcome RekognitionClient::DeleteProjectVersion(const DeleteProjectVersionRequest& request) const {
  return DeleteProjectVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteStreamProcessorOutcome RekognitionClient::DeleteStreamProcessor(const DeleteStreamProcessorRequest& request) const {
  return DeleteStreamProcessorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteUserOutcome RekognitionClient::DeleteUser(const DeleteUserRequest& request) const {
  return DeleteUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCollectionOutcome RekognitionClient::DescribeCollection(const DescribeCollectionRequest& request) const {
  return DescribeCollectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDatasetOutcome RekognitionClient::DescribeDataset(const DescribeDatasetRequest& request) const {
  return DescribeDatasetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeProjectVersionsOutcome RekognitionClient::DescribeProjectVersions(const DescribeProjectVersionsRequest& request) const {
  return DescribeProjectVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeProjectsOutcome RekognitionClient::DescribeProjects(const DescribeProjectsRequest& request) const {
  return DescribeProjectsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStreamProcessorOutcome RekognitionClient::DescribeStreamProcessor(const DescribeStreamProcessorRequest& request) const {
  return DescribeStreamProcessorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetectCustomLabelsOutcome RekognitionClient::DetectCustomLabels(const DetectCustomLabelsRequest& request) const {
  return DetectCustomLabelsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetectFacesOutcome RekognitionClient::DetectFaces(const DetectFacesRequest& request) const {
  return DetectFacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetectLabelsOutcome RekognitionClient::DetectLabels(const DetectLabelsRequest& request) const {
  return DetectLabelsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetectModerationLabelsOutcome RekognitionClient::DetectModerationLabels(const DetectModerationLabelsRequest& request) const {
  return DetectModerationLabelsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetectProtectiveEquipmentOutcome RekognitionClient::DetectProtectiveEquipment(const DetectProtectiveEquipmentRequest& request) const {
  return DetectProtectiveEquipmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetectTextOutcome RekognitionClient::DetectText(const DetectTextRequest& request) const {
  return DetectTextOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateFacesOutcome RekognitionClient::DisassociateFaces(const DisassociateFacesRequest& request) const {
  return DisassociateFacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DistributeDatasetEntriesOutcome RekognitionClient::DistributeDatasetEntries(const DistributeDatasetEntriesRequest& request) const {
  return DistributeDatasetEntriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCelebrityInfoOutcome RekognitionClient::GetCelebrityInfo(const GetCelebrityInfoRequest& request) const {
  return GetCelebrityInfoOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCelebrityRecognitionOutcome RekognitionClient::GetCelebrityRecognition(const GetCelebrityRecognitionRequest& request) const {
  return GetCelebrityRecognitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetContentModerationOutcome RekognitionClient::GetContentModeration(const GetContentModerationRequest& request) const {
  return GetContentModerationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetFaceDetectionOutcome RekognitionClient::GetFaceDetection(const GetFaceDetectionRequest& request) const {
  return GetFaceDetectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetFaceLivenessSessionResultsOutcome RekognitionClient::GetFaceLivenessSessionResults(
    const GetFaceLivenessSessionResultsRequest& request) const {
  return GetFaceLivenessSessionResultsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetFaceSearchOutcome RekognitionClient::GetFaceSearch(const GetFaceSearchRequest& request) const {
  return GetFaceSearchOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLabelDetectionOutcome RekognitionClient::GetLabelDetection(const GetLabelDetectionRequest& request) const {
  return GetLabelDetectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMediaAnalysisJobOutcome RekognitionClient::GetMediaAnalysisJob(const GetMediaAnalysisJobRequest& request) const {
  return GetMediaAnalysisJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPersonTrackingOutcome RekognitionClient::GetPersonTracking(const GetPersonTrackingRequest& request) const {
  return GetPersonTrackingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSegmentDetectionOutcome RekognitionClient::GetSegmentDetection(const GetSegmentDetectionRequest& request) const {
  return GetSegmentDetectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTextDetectionOutcome RekognitionClient::GetTextDetection(const GetTextDetectionRequest& request) const {
  return GetTextDetectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

IndexFacesOutcome RekognitionClient::IndexFaces(const IndexFacesRequest& request) const {
  return IndexFacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCollectionsOutcome RekognitionClient::ListCollections(const ListCollectionsRequest& request) const {
  return ListCollectionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDatasetEntriesOutcome RekognitionClient::ListDatasetEntries(const ListDatasetEntriesRequest& request) const {
  return ListDatasetEntriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDatasetLabelsOutcome RekognitionClient::ListDatasetLabels(const ListDatasetLabelsRequest& request) const {
  return ListDatasetLabelsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFacesOutcome RekognitionClient::ListFaces(const ListFacesRequest& request) const {
  return ListFacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMediaAnalysisJobsOutcome RekognitionClient::ListMediaAnalysisJobs(const ListMediaAnalysisJobsRequest& request) const {
  return ListMediaAnalysisJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListProjectPoliciesOutcome RekognitionClient::ListProjectPolicies(const ListProjectPoliciesRequest& request) const {
  return ListProjectPoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStreamProcessorsOutcome RekognitionClient::ListStreamProcessors(const ListStreamProcessorsRequest& request) const {
  return ListStreamProcessorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome RekognitionClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListUsersOutcome RekognitionClient::ListUsers(const ListUsersRequest& request) const {
  return ListUsersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutProjectPolicyOutcome RekognitionClient::PutProjectPolicy(const PutProjectPolicyRequest& request) const {
  return PutProjectPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RecognizeCelebritiesOutcome RekognitionClient::RecognizeCelebrities(const RecognizeCelebritiesRequest& request) const {
  return RecognizeCelebritiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchFacesOutcome RekognitionClient::SearchFaces(const SearchFacesRequest& request) const {
  return SearchFacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchFacesByImageOutcome RekognitionClient::SearchFacesByImage(const SearchFacesByImageRequest& request) const {
  return SearchFacesByImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchUsersOutcome RekognitionClient::SearchUsers(const SearchUsersRequest& request) const {
  return SearchUsersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchUsersByImageOutcome RekognitionClient::SearchUsersByImage(const SearchUsersByImageRequest& request) const {
  return SearchUsersByImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartCelebrityRecognitionOutcome RekognitionClient::StartCelebrityRecognition(const StartCelebrityRecognitionRequest& request) const {
  return StartCelebrityRecognitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartContentModerationOutcome RekognitionClient::StartContentModeration(const StartContentModerationRequest& request) const {
  return StartContentModerationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartFaceDetectionOutcome RekognitionClient::StartFaceDetection(const StartFaceDetectionRequest& request) const {
  return StartFaceDetectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartFaceSearchOutcome RekognitionClient::StartFaceSearch(const StartFaceSearchRequest& request) const {
  return StartFaceSearchOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartLabelDetectionOutcome RekognitionClient::StartLabelDetection(const StartLabelDetectionRequest& request) const {
  return StartLabelDetectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMediaAnalysisJobOutcome RekognitionClient::StartMediaAnalysisJob(const StartMediaAnalysisJobRequest& request) const {
  return StartMediaAnalysisJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartPersonTrackingOutcome RekognitionClient::StartPersonTracking(const StartPersonTrackingRequest& request) const {
  return StartPersonTrackingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartProjectVersionOutcome RekognitionClient::StartProjectVersion(const StartProjectVersionRequest& request) const {
  return StartProjectVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartSegmentDetectionOutcome RekognitionClient::StartSegmentDetection(const StartSegmentDetectionRequest& request) const {
  return StartSegmentDetectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartStreamProcessorOutcome RekognitionClient::StartStreamProcessor(const StartStreamProcessorRequest& request) const {
  return StartStreamProcessorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartTextDetectionOutcome RekognitionClient::StartTextDetection(const StartTextDetectionRequest& request) const {
  return StartTextDetectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopProjectVersionOutcome RekognitionClient::StopProjectVersion(const StopProjectVersionRequest& request) const {
  return StopProjectVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopStreamProcessorOutcome RekognitionClient::StopStreamProcessor(const StopStreamProcessorRequest& request) const {
  return StopStreamProcessorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome RekognitionClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome RekognitionClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDatasetEntriesOutcome RekognitionClient::UpdateDatasetEntries(const UpdateDatasetEntriesRequest& request) const {
  return UpdateDatasetEntriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateStreamProcessorOutcome RekognitionClient::UpdateStreamProcessor(const UpdateStreamProcessorRequest& request) const {
  return UpdateStreamProcessorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
