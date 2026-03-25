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
#include <aws/panorama/PanoramaClient.h>
#include <aws/panorama/PanoramaEndpointProvider.h>
#include <aws/panorama/PanoramaErrorMarshaller.h>
#include <aws/panorama/model/CreateApplicationInstanceRequest.h>
#include <aws/panorama/model/CreateJobForDevicesRequest.h>
#include <aws/panorama/model/CreateNodeFromTemplateJobRequest.h>
#include <aws/panorama/model/CreatePackageImportJobRequest.h>
#include <aws/panorama/model/CreatePackageRequest.h>
#include <aws/panorama/model/DeleteDeviceRequest.h>
#include <aws/panorama/model/DeletePackageRequest.h>
#include <aws/panorama/model/DeregisterPackageVersionRequest.h>
#include <aws/panorama/model/DescribeApplicationInstanceDetailsRequest.h>
#include <aws/panorama/model/DescribeApplicationInstanceRequest.h>
#include <aws/panorama/model/DescribeDeviceJobRequest.h>
#include <aws/panorama/model/DescribeDeviceRequest.h>
#include <aws/panorama/model/DescribeNodeFromTemplateJobRequest.h>
#include <aws/panorama/model/DescribeNodeRequest.h>
#include <aws/panorama/model/DescribePackageImportJobRequest.h>
#include <aws/panorama/model/DescribePackageRequest.h>
#include <aws/panorama/model/DescribePackageVersionRequest.h>
#include <aws/panorama/model/ListApplicationInstanceDependenciesRequest.h>
#include <aws/panorama/model/ListApplicationInstanceNodeInstancesRequest.h>
#include <aws/panorama/model/ListApplicationInstancesRequest.h>
#include <aws/panorama/model/ListDevicesJobsRequest.h>
#include <aws/panorama/model/ListDevicesRequest.h>
#include <aws/panorama/model/ListNodeFromTemplateJobsRequest.h>
#include <aws/panorama/model/ListNodesRequest.h>
#include <aws/panorama/model/ListPackageImportJobsRequest.h>
#include <aws/panorama/model/ListPackagesRequest.h>
#include <aws/panorama/model/ListTagsForResourceRequest.h>
#include <aws/panorama/model/ProvisionDeviceRequest.h>
#include <aws/panorama/model/RegisterPackageVersionRequest.h>
#include <aws/panorama/model/RemoveApplicationInstanceRequest.h>
#include <aws/panorama/model/SignalApplicationInstanceNodeInstancesRequest.h>
#include <aws/panorama/model/TagResourceRequest.h>
#include <aws/panorama/model/UntagResourceRequest.h>
#include <aws/panorama/model/UpdateDeviceMetadataRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Panorama;
using namespace Aws::Panorama::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Panorama {
const char SERVICE_NAME[] = "panorama";
const char ALLOCATION_TAG[] = "PanoramaClient";
}  // namespace Panorama
}  // namespace Aws
const char* PanoramaClient::GetServiceName() { return SERVICE_NAME; }
const char* PanoramaClient::GetAllocationTag() { return ALLOCATION_TAG; }

PanoramaClient::PanoramaClient(const Panorama::PanoramaClientConfiguration& clientConfiguration,
                               std::shared_ptr<PanoramaEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PanoramaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<PanoramaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PanoramaClient::PanoramaClient(const AWSCredentials& credentials, std::shared_ptr<PanoramaEndpointProviderBase> endpointProvider,
                               const Panorama::PanoramaClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PanoramaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<PanoramaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PanoramaClient::PanoramaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<PanoramaEndpointProviderBase> endpointProvider,
                               const Panorama::PanoramaClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PanoramaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<PanoramaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
PanoramaClient::PanoramaClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PanoramaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PanoramaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PanoramaClient::PanoramaClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PanoramaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PanoramaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PanoramaClient::PanoramaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PanoramaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PanoramaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
PanoramaClient::~PanoramaClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<PanoramaEndpointProviderBase>& PanoramaClient::accessEndpointProvider() { return m_endpointProvider; }

void PanoramaClient::init(const Panorama::PanoramaClientConfiguration& config) {
  AWSClient::SetServiceClientName("Panorama");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "panorama");
}

void PanoramaClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
PanoramaClient::InvokeOperationOutcome PanoramaClient::InvokeServiceOperation(
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

CreateApplicationInstanceOutcome PanoramaClient::CreateApplicationInstance(const CreateApplicationInstanceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/application-instances");
  };

  return CreateApplicationInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateJobForDevicesOutcome PanoramaClient::CreateJobForDevices(const CreateJobForDevicesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  };

  return CreateJobForDevicesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateNodeFromTemplateJobOutcome PanoramaClient::CreateNodeFromTemplateJob(const CreateNodeFromTemplateJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages/template-job");
  };

  return CreateNodeFromTemplateJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePackageOutcome PanoramaClient::CreatePackage(const CreatePackageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages");
  };

  return CreatePackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePackageImportJobOutcome PanoramaClient::CreatePackageImportJob(const CreatePackageImportJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages/import-jobs");
  };

  return CreatePackageImportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDeviceOutcome PanoramaClient::DeleteDevice(const DeleteDeviceRequest& request) const {
  if (!request.DeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDevice", "Required field: DeviceId, is not set");
    return DeleteDeviceOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [DeviceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceId());
  };

  return DeleteDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeletePackageOutcome PanoramaClient::DeletePackage(const DeletePackageRequest& request) const {
  if (!request.PackageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePackage", "Required field: PackageId, is not set");
    return DeletePackageOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [PackageId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageId());
  };

  return DeletePackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeregisterPackageVersionOutcome PanoramaClient::DeregisterPackageVersion(const DeregisterPackageVersionRequest& request) const {
  if (!request.PackageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeregisterPackageVersion", "Required field: PackageId, is not set");
    return DeregisterPackageVersionOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [PackageId]", false));
  }
  if (!request.PackageVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeregisterPackageVersion", "Required field: PackageVersion, is not set");
    return DeregisterPackageVersionOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [PackageVersion]", false));
  }
  if (!request.PatchVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeregisterPackageVersion", "Required field: PatchVersion, is not set");
    return DeregisterPackageVersionOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [PatchVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/patch/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPatchVersion());
  };

  return DeregisterPackageVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeApplicationInstanceOutcome PanoramaClient::DescribeApplicationInstance(const DescribeApplicationInstanceRequest& request) const {
  if (!request.ApplicationInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeApplicationInstance", "Required field: ApplicationInstanceId, is not set");
    return DescribeApplicationInstanceOutcome(Aws::Client::AWSError<PanoramaErrors>(
        PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/application-instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationInstanceId());
  };

  return DescribeApplicationInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeApplicationInstanceDetailsOutcome PanoramaClient::DescribeApplicationInstanceDetails(
    const DescribeApplicationInstanceDetailsRequest& request) const {
  if (!request.ApplicationInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeApplicationInstanceDetails", "Required field: ApplicationInstanceId, is not set");
    return DescribeApplicationInstanceDetailsOutcome(Aws::Client::AWSError<PanoramaErrors>(
        PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/application-instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/details");
  };

  return DescribeApplicationInstanceDetailsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDeviceOutcome PanoramaClient::DescribeDevice(const DescribeDeviceRequest& request) const {
  if (!request.DeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDevice", "Required field: DeviceId, is not set");
    return DescribeDeviceOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DeviceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceId());
  };

  return DescribeDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDeviceJobOutcome PanoramaClient::DescribeDeviceJob(const DescribeDeviceJobRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDeviceJob", "Required field: JobId, is not set");
    return DescribeDeviceJobOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return DescribeDeviceJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeNodeOutcome PanoramaClient::DescribeNode(const DescribeNodeRequest& request) const {
  if (!request.NodeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeNode", "Required field: NodeId, is not set");
    return DescribeNodeOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [NodeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/nodes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNodeId());
  };

  return DescribeNodeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeNodeFromTemplateJobOutcome PanoramaClient::DescribeNodeFromTemplateJob(const DescribeNodeFromTemplateJobRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeNodeFromTemplateJob", "Required field: JobId, is not set");
    return DescribeNodeFromTemplateJobOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages/template-job/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return DescribeNodeFromTemplateJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribePackageOutcome PanoramaClient::DescribePackage(const DescribePackageRequest& request) const {
  if (!request.PackageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePackage", "Required field: PackageId, is not set");
    return DescribePackageOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [PackageId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages/metadata/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageId());
  };

  return DescribePackageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribePackageImportJobOutcome PanoramaClient::DescribePackageImportJob(const DescribePackageImportJobRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePackageImportJob", "Required field: JobId, is not set");
    return DescribePackageImportJobOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages/import-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return DescribePackageImportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribePackageVersionOutcome PanoramaClient::DescribePackageVersion(const DescribePackageVersionRequest& request) const {
  if (!request.PackageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePackageVersion", "Required field: PackageId, is not set");
    return DescribePackageVersionOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [PackageId]", false));
  }
  if (!request.PackageVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePackageVersion", "Required field: PackageVersion, is not set");
    return DescribePackageVersionOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [PackageVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages/metadata/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageVersion());
  };

  return DescribePackageVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListApplicationInstanceDependenciesOutcome PanoramaClient::ListApplicationInstanceDependencies(
    const ListApplicationInstanceDependenciesRequest& request) const {
  if (!request.ApplicationInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListApplicationInstanceDependencies", "Required field: ApplicationInstanceId, is not set");
    return ListApplicationInstanceDependenciesOutcome(Aws::Client::AWSError<PanoramaErrors>(
        PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/application-instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/package-dependencies");
  };

  return ListApplicationInstanceDependenciesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListApplicationInstanceNodeInstancesOutcome PanoramaClient::ListApplicationInstanceNodeInstances(
    const ListApplicationInstanceNodeInstancesRequest& request) const {
  if (!request.ApplicationInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListApplicationInstanceNodeInstances", "Required field: ApplicationInstanceId, is not set");
    return ListApplicationInstanceNodeInstancesOutcome(Aws::Client::AWSError<PanoramaErrors>(
        PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/application-instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/node-instances");
  };

  return ListApplicationInstanceNodeInstancesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListApplicationInstancesOutcome PanoramaClient::ListApplicationInstances(const ListApplicationInstancesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/application-instances");
  };

  return ListApplicationInstancesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDevicesOutcome PanoramaClient::ListDevices(const ListDevicesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/devices");
  };

  return ListDevicesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDevicesJobsOutcome PanoramaClient::ListDevicesJobs(const ListDevicesJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  };

  return ListDevicesJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListNodeFromTemplateJobsOutcome PanoramaClient::ListNodeFromTemplateJobs(const ListNodeFromTemplateJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages/template-job");
  };

  return ListNodeFromTemplateJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListNodesOutcome PanoramaClient::ListNodes(const ListNodesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/nodes");
  };

  return ListNodesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPackageImportJobsOutcome PanoramaClient::ListPackageImportJobs(const ListPackageImportJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages/import-jobs");
  };

  return ListPackageImportJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPackagesOutcome PanoramaClient::ListPackages(const ListPackagesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages");
  };

  return ListPackagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome PanoramaClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ProvisionDeviceOutcome PanoramaClient::ProvisionDevice(const ProvisionDeviceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/devices");
  };

  return ProvisionDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterPackageVersionOutcome PanoramaClient::RegisterPackageVersion(const RegisterPackageVersionRequest& request) const {
  if (!request.PackageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RegisterPackageVersion", "Required field: PackageId, is not set");
    return RegisterPackageVersionOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [PackageId]", false));
  }
  if (!request.PackageVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RegisterPackageVersion", "Required field: PackageVersion, is not set");
    return RegisterPackageVersionOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [PackageVersion]", false));
  }
  if (!request.PatchVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RegisterPackageVersion", "Required field: PatchVersion, is not set");
    return RegisterPackageVersionOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [PatchVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageVersion());
    endpointResolutionOutcome.GetResult().AddPathSegments("/patch/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPatchVersion());
  };

  return RegisterPackageVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

RemoveApplicationInstanceOutcome PanoramaClient::RemoveApplicationInstance(const RemoveApplicationInstanceRequest& request) const {
  if (!request.ApplicationInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveApplicationInstance", "Required field: ApplicationInstanceId, is not set");
    return RemoveApplicationInstanceOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [ApplicationInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/application-instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationInstanceId());
  };

  return RemoveApplicationInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

SignalApplicationInstanceNodeInstancesOutcome PanoramaClient::SignalApplicationInstanceNodeInstances(
    const SignalApplicationInstanceNodeInstancesRequest& request) const {
  if (!request.ApplicationInstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SignalApplicationInstanceNodeInstances", "Required field: ApplicationInstanceId, is not set");
    return SignalApplicationInstanceNodeInstancesOutcome(Aws::Client::AWSError<PanoramaErrors>(
        PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationInstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/application-instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/node-signals");
  };

  return SignalApplicationInstanceNodeInstancesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

TagResourceOutcome PanoramaClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome PanoramaClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateDeviceMetadataOutcome PanoramaClient::UpdateDeviceMetadata(const UpdateDeviceMetadataRequest& request) const {
  if (!request.DeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDeviceMetadata", "Required field: DeviceId, is not set");
    return UpdateDeviceMetadataOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DeviceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceId());
  };

  return UpdateDeviceMetadataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
