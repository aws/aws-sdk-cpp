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
#include <aws/s3files/S3FilesClient.h>
#include <aws/s3files/S3FilesEndpointProvider.h>
#include <aws/s3files/S3FilesErrorMarshaller.h>
#include <aws/s3files/model/CreateAccessPointRequest.h>
#include <aws/s3files/model/CreateFileSystemRequest.h>
#include <aws/s3files/model/CreateMountTargetRequest.h>
#include <aws/s3files/model/DeleteAccessPointRequest.h>
#include <aws/s3files/model/DeleteFileSystemPolicyRequest.h>
#include <aws/s3files/model/DeleteFileSystemRequest.h>
#include <aws/s3files/model/DeleteMountTargetRequest.h>
#include <aws/s3files/model/GetAccessPointRequest.h>
#include <aws/s3files/model/GetFileSystemPolicyRequest.h>
#include <aws/s3files/model/GetFileSystemRequest.h>
#include <aws/s3files/model/GetMountTargetRequest.h>
#include <aws/s3files/model/GetSynchronizationConfigurationRequest.h>
#include <aws/s3files/model/ListAccessPointsRequest.h>
#include <aws/s3files/model/ListFileSystemsRequest.h>
#include <aws/s3files/model/ListMountTargetsRequest.h>
#include <aws/s3files/model/ListTagsForResourceRequest.h>
#include <aws/s3files/model/PutFileSystemPolicyRequest.h>
#include <aws/s3files/model/PutSynchronizationConfigurationRequest.h>
#include <aws/s3files/model/TagResourceRequest.h>
#include <aws/s3files/model/UntagResourceRequest.h>
#include <aws/s3files/model/UpdateMountTargetRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::S3Files;
using namespace Aws::S3Files::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace S3Files {
const char SERVICE_NAME[] = "s3files";
const char ALLOCATION_TAG[] = "S3FilesClient";
}  // namespace S3Files
}  // namespace Aws
const char* S3FilesClient::GetServiceName() { return SERVICE_NAME; }
const char* S3FilesClient::GetAllocationTag() { return ALLOCATION_TAG; }

S3FilesClient::S3FilesClient(const S3Files::S3FilesClientConfiguration& clientConfiguration,
                             std::shared_ptr<S3FilesEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<S3FilesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<S3FilesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

S3FilesClient::S3FilesClient(const AWSCredentials& credentials, std::shared_ptr<S3FilesEndpointProviderBase> endpointProvider,
                             const S3Files::S3FilesClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<S3FilesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<S3FilesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

S3FilesClient::S3FilesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<S3FilesEndpointProviderBase> endpointProvider,
                             const S3Files::S3FilesClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<S3FilesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<S3FilesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
S3FilesClient::S3FilesClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<S3FilesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<S3FilesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

S3FilesClient::S3FilesClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<S3FilesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<S3FilesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

S3FilesClient::S3FilesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<S3FilesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<S3FilesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
S3FilesClient::~S3FilesClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<S3FilesEndpointProviderBase>& S3FilesClient::accessEndpointProvider() { return m_endpointProvider; }

void S3FilesClient::init(const S3Files::S3FilesClientConfiguration& config) {
  AWSClient::SetServiceClientName("S3Files");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "s3files");
}

void S3FilesClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
S3FilesClient::InvokeOperationOutcome S3FilesClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
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

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CreateAccessPointOutcome S3FilesClient::CreateAccessPoint(const CreateAccessPointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-points");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateAccessPointOutcome(result.GetResultWithOwnership())
                            : CreateAccessPointOutcome(std::move(result.GetError()));
}

CreateFileSystemOutcome S3FilesClient::CreateFileSystem(const CreateFileSystemRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/file-systems");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateFileSystemOutcome(result.GetResultWithOwnership())
                            : CreateFileSystemOutcome(std::move(result.GetError()));
}

CreateMountTargetOutcome S3FilesClient::CreateMountTarget(const CreateMountTargetRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/mount-targets");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateMountTargetOutcome(result.GetResultWithOwnership())
                            : CreateMountTargetOutcome(std::move(result.GetError()));
}

DeleteAccessPointOutcome S3FilesClient::DeleteAccessPoint(const DeleteAccessPointRequest& request) const {
  if (!request.AccessPointIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccessPoint", "Required field: AccessPointId, is not set");
    return DeleteAccessPointOutcome(Aws::Client::AWSError<S3FilesErrors>(S3FilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AccessPointId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-points/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessPointId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAccessPointOutcome(result.GetResultWithOwnership())
                            : DeleteAccessPointOutcome(std::move(result.GetError()));
}

DeleteFileSystemOutcome S3FilesClient::DeleteFileSystem(const DeleteFileSystemRequest& request) const {
  if (!request.FileSystemIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFileSystem", "Required field: FileSystemId, is not set");
    return DeleteFileSystemOutcome(Aws::Client::AWSError<S3FilesErrors>(S3FilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [FileSystemId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/file-systems/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteFileSystemOutcome(result.GetResultWithOwnership())
                            : DeleteFileSystemOutcome(std::move(result.GetError()));
}

DeleteFileSystemPolicyOutcome S3FilesClient::DeleteFileSystemPolicy(const DeleteFileSystemPolicyRequest& request) const {
  if (!request.FileSystemIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFileSystemPolicy", "Required field: FileSystemId, is not set");
    return DeleteFileSystemPolicyOutcome(Aws::Client::AWSError<S3FilesErrors>(S3FilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [FileSystemId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/file-systems/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteFileSystemPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteFileSystemPolicyOutcome(std::move(result.GetError()));
}

DeleteMountTargetOutcome S3FilesClient::DeleteMountTarget(const DeleteMountTargetRequest& request) const {
  if (!request.MountTargetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMountTarget", "Required field: MountTargetId, is not set");
    return DeleteMountTargetOutcome(Aws::Client::AWSError<S3FilesErrors>(S3FilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [MountTargetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/mount-targets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMountTargetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMountTargetOutcome(result.GetResultWithOwnership())
                            : DeleteMountTargetOutcome(std::move(result.GetError()));
}

GetAccessPointOutcome S3FilesClient::GetAccessPoint(const GetAccessPointRequest& request) const {
  if (!request.AccessPointIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccessPoint", "Required field: AccessPointId, is not set");
    return GetAccessPointOutcome(Aws::Client::AWSError<S3FilesErrors>(S3FilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AccessPointId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-points/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessPointId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAccessPointOutcome(result.GetResultWithOwnership()) : GetAccessPointOutcome(std::move(result.GetError()));
}

GetFileSystemOutcome S3FilesClient::GetFileSystem(const GetFileSystemRequest& request) const {
  if (!request.FileSystemIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFileSystem", "Required field: FileSystemId, is not set");
    return GetFileSystemOutcome(Aws::Client::AWSError<S3FilesErrors>(S3FilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [FileSystemId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/file-systems/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFileSystemOutcome(result.GetResultWithOwnership()) : GetFileSystemOutcome(std::move(result.GetError()));
}

GetFileSystemPolicyOutcome S3FilesClient::GetFileSystemPolicy(const GetFileSystemPolicyRequest& request) const {
  if (!request.FileSystemIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFileSystemPolicy", "Required field: FileSystemId, is not set");
    return GetFileSystemPolicyOutcome(Aws::Client::AWSError<S3FilesErrors>(S3FilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [FileSystemId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/file-systems/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFileSystemPolicyOutcome(result.GetResultWithOwnership())
                            : GetFileSystemPolicyOutcome(std::move(result.GetError()));
}

GetMountTargetOutcome S3FilesClient::GetMountTarget(const GetMountTargetRequest& request) const {
  if (!request.MountTargetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMountTarget", "Required field: MountTargetId, is not set");
    return GetMountTargetOutcome(Aws::Client::AWSError<S3FilesErrors>(S3FilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [MountTargetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/mount-targets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMountTargetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMountTargetOutcome(result.GetResultWithOwnership()) : GetMountTargetOutcome(std::move(result.GetError()));
}

GetSynchronizationConfigurationOutcome S3FilesClient::GetSynchronizationConfiguration(
    const GetSynchronizationConfigurationRequest& request) const {
  if (!request.FileSystemIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSynchronizationConfiguration", "Required field: FileSystemId, is not set");
    return GetSynchronizationConfigurationOutcome(Aws::Client::AWSError<S3FilesErrors>(
        S3FilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FileSystemId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/file-systems/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/synchronization-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSynchronizationConfigurationOutcome(result.GetResultWithOwnership())
                            : GetSynchronizationConfigurationOutcome(std::move(result.GetError()));
}

ListAccessPointsOutcome S3FilesClient::ListAccessPoints(const ListAccessPointsRequest& request) const {
  if (!request.FileSystemIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAccessPoints", "Required field: FileSystemId, is not set");
    return ListAccessPointsOutcome(Aws::Client::AWSError<S3FilesErrors>(S3FilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [FileSystemId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-points");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAccessPointsOutcome(result.GetResultWithOwnership())
                            : ListAccessPointsOutcome(std::move(result.GetError()));
}

ListFileSystemsOutcome S3FilesClient::ListFileSystems(const ListFileSystemsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/file-systems");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFileSystemsOutcome(result.GetResultWithOwnership())
                            : ListFileSystemsOutcome(std::move(result.GetError()));
}

ListMountTargetsOutcome S3FilesClient::ListMountTargets(const ListMountTargetsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/mount-targets");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMountTargetsOutcome(result.GetResultWithOwnership())
                            : ListMountTargetsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome S3FilesClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceId, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<S3FilesErrors>(S3FilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resource-tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PutFileSystemPolicyOutcome S3FilesClient::PutFileSystemPolicy(const PutFileSystemPolicyRequest& request) const {
  if (!request.FileSystemIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutFileSystemPolicy", "Required field: FileSystemId, is not set");
    return PutFileSystemPolicyOutcome(Aws::Client::AWSError<S3FilesErrors>(S3FilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [FileSystemId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/file-systems/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutFileSystemPolicyOutcome(result.GetResultWithOwnership())
                            : PutFileSystemPolicyOutcome(std::move(result.GetError()));
}

PutSynchronizationConfigurationOutcome S3FilesClient::PutSynchronizationConfiguration(
    const PutSynchronizationConfigurationRequest& request) const {
  if (!request.FileSystemIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutSynchronizationConfiguration", "Required field: FileSystemId, is not set");
    return PutSynchronizationConfigurationOutcome(Aws::Client::AWSError<S3FilesErrors>(
        S3FilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FileSystemId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/file-systems/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileSystemId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/synchronization-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutSynchronizationConfigurationOutcome(result.GetResultWithOwnership())
                            : PutSynchronizationConfigurationOutcome(std::move(result.GetError()));
}

TagResourceOutcome S3FilesClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceId, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<S3FilesErrors>(S3FilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ResourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resource-tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome S3FilesClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceId, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<S3FilesErrors>(S3FilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ResourceId]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<S3FilesErrors>(S3FilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resource-tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateMountTargetOutcome S3FilesClient::UpdateMountTarget(const UpdateMountTargetRequest& request) const {
  if (!request.MountTargetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMountTarget", "Required field: MountTargetId, is not set");
    return UpdateMountTargetOutcome(Aws::Client::AWSError<S3FilesErrors>(S3FilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [MountTargetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/mount-targets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMountTargetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateMountTargetOutcome(result.GetResultWithOwnership())
                            : UpdateMountTargetOutcome(std::move(result.GetError()));
}
