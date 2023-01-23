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

#include <aws/panorama/PanoramaClient.h>
#include <aws/panorama/PanoramaErrorMarshaller.h>
#include <aws/panorama/PanoramaEndpointProvider.h>
#include <aws/panorama/model/CreateApplicationInstanceRequest.h>
#include <aws/panorama/model/CreateJobForDevicesRequest.h>
#include <aws/panorama/model/CreateNodeFromTemplateJobRequest.h>
#include <aws/panorama/model/CreatePackageRequest.h>
#include <aws/panorama/model/CreatePackageImportJobRequest.h>
#include <aws/panorama/model/DeleteDeviceRequest.h>
#include <aws/panorama/model/DeletePackageRequest.h>
#include <aws/panorama/model/DeregisterPackageVersionRequest.h>
#include <aws/panorama/model/DescribeApplicationInstanceRequest.h>
#include <aws/panorama/model/DescribeApplicationInstanceDetailsRequest.h>
#include <aws/panorama/model/DescribeDeviceRequest.h>
#include <aws/panorama/model/DescribeDeviceJobRequest.h>
#include <aws/panorama/model/DescribeNodeRequest.h>
#include <aws/panorama/model/DescribeNodeFromTemplateJobRequest.h>
#include <aws/panorama/model/DescribePackageRequest.h>
#include <aws/panorama/model/DescribePackageImportJobRequest.h>
#include <aws/panorama/model/DescribePackageVersionRequest.h>
#include <aws/panorama/model/ListApplicationInstanceDependenciesRequest.h>
#include <aws/panorama/model/ListApplicationInstanceNodeInstancesRequest.h>
#include <aws/panorama/model/ListApplicationInstancesRequest.h>
#include <aws/panorama/model/ListDevicesRequest.h>
#include <aws/panorama/model/ListDevicesJobsRequest.h>
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

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Panorama;
using namespace Aws::Panorama::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* PanoramaClient::SERVICE_NAME = "panorama";
const char* PanoramaClient::ALLOCATION_TAG = "PanoramaClient";

PanoramaClient::PanoramaClient(const Panorama::PanoramaClientConfiguration& clientConfiguration,
                               std::shared_ptr<PanoramaEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PanoramaErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

PanoramaClient::PanoramaClient(const AWSCredentials& credentials,
                               std::shared_ptr<PanoramaEndpointProviderBase> endpointProvider,
                               const Panorama::PanoramaClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PanoramaErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

PanoramaClient::PanoramaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<PanoramaEndpointProviderBase> endpointProvider,
                               const Panorama::PanoramaClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PanoramaErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  PanoramaClient::PanoramaClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PanoramaErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<PanoramaEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

PanoramaClient::PanoramaClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PanoramaErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<PanoramaEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

PanoramaClient::PanoramaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PanoramaErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<PanoramaEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
PanoramaClient::~PanoramaClient()
{
}

std::shared_ptr<PanoramaEndpointProviderBase>& PanoramaClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void PanoramaClient::init(const Panorama::PanoramaClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Panorama");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void PanoramaClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateApplicationInstanceOutcome PanoramaClient::CreateApplicationInstance(const CreateApplicationInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateApplicationInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateApplicationInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/application-instances");
  return CreateApplicationInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateJobForDevicesOutcome PanoramaClient::CreateJobForDevices(const CreateJobForDevicesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateJobForDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateJobForDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  return CreateJobForDevicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNodeFromTemplateJobOutcome PanoramaClient::CreateNodeFromTemplateJob(const CreateNodeFromTemplateJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNodeFromTemplateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNodeFromTemplateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/packages/template-job");
  return CreateNodeFromTemplateJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePackageOutcome PanoramaClient::CreatePackage(const CreatePackageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/packages");
  return CreatePackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePackageImportJobOutcome PanoramaClient::CreatePackageImportJob(const CreatePackageImportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePackageImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePackageImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/packages/import-jobs");
  return CreatePackageImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDeviceOutcome PanoramaClient::DeleteDevice(const DeleteDeviceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDevice", "Required field: DeviceId, is not set");
    return DeleteDeviceOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceId());
  return DeleteDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePackageOutcome PanoramaClient::DeletePackage(const DeletePackageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PackageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePackage", "Required field: PackageId, is not set");
    return DeletePackageOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/packages/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageId());
  return DeletePackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeregisterPackageVersionOutcome PanoramaClient::DeregisterPackageVersion(const DeregisterPackageVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterPackageVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PackageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeregisterPackageVersion", "Required field: PackageId, is not set");
    return DeregisterPackageVersionOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageId]", false));
  }
  if (!request.PackageVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeregisterPackageVersion", "Required field: PackageVersion, is not set");
    return DeregisterPackageVersionOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageVersion]", false));
  }
  if (!request.PatchVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeregisterPackageVersion", "Required field: PatchVersion, is not set");
    return DeregisterPackageVersionOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PatchVersion]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterPackageVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/packages/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageVersion());
  endpointResolutionOutcome.GetResult().AddPathSegments("/patch/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPatchVersion());
  return DeregisterPackageVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DescribeApplicationInstanceOutcome PanoramaClient::DescribeApplicationInstance(const DescribeApplicationInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeApplicationInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeApplicationInstance", "Required field: ApplicationInstanceId, is not set");
    return DescribeApplicationInstanceOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationInstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeApplicationInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/application-instances/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationInstanceId());
  return DescribeApplicationInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeApplicationInstanceDetailsOutcome PanoramaClient::DescribeApplicationInstanceDetails(const DescribeApplicationInstanceDetailsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeApplicationInstanceDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeApplicationInstanceDetails", "Required field: ApplicationInstanceId, is not set");
    return DescribeApplicationInstanceDetailsOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationInstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeApplicationInstanceDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/application-instances/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/details");
  return DescribeApplicationInstanceDetailsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDeviceOutcome PanoramaClient::DescribeDevice(const DescribeDeviceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDevice", "Required field: DeviceId, is not set");
    return DescribeDeviceOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceId());
  return DescribeDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDeviceJobOutcome PanoramaClient::DescribeDeviceJob(const DescribeDeviceJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDeviceJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDeviceJob", "Required field: JobId, is not set");
    return DescribeDeviceJobOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDeviceJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  return DescribeDeviceJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeNodeOutcome PanoramaClient::DescribeNode(const DescribeNodeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NodeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeNode", "Required field: NodeId, is not set");
    return DescribeNodeOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NodeId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/nodes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNodeId());
  return DescribeNodeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeNodeFromTemplateJobOutcome PanoramaClient::DescribeNodeFromTemplateJob(const DescribeNodeFromTemplateJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNodeFromTemplateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeNodeFromTemplateJob", "Required field: JobId, is not set");
    return DescribeNodeFromTemplateJobOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNodeFromTemplateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/packages/template-job/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  return DescribeNodeFromTemplateJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribePackageOutcome PanoramaClient::DescribePackage(const DescribePackageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PackageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePackage", "Required field: PackageId, is not set");
    return DescribePackageOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/packages/metadata/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageId());
  return DescribePackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribePackageImportJobOutcome PanoramaClient::DescribePackageImportJob(const DescribePackageImportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePackageImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePackageImportJob", "Required field: JobId, is not set");
    return DescribePackageImportJobOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePackageImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/packages/import-jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  return DescribePackageImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribePackageVersionOutcome PanoramaClient::DescribePackageVersion(const DescribePackageVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePackageVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PackageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePackageVersion", "Required field: PackageId, is not set");
    return DescribePackageVersionOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageId]", false));
  }
  if (!request.PackageVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePackageVersion", "Required field: PackageVersion, is not set");
    return DescribePackageVersionOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageVersion]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePackageVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/packages/metadata/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageVersion());
  return DescribePackageVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationInstanceDependenciesOutcome PanoramaClient::ListApplicationInstanceDependencies(const ListApplicationInstanceDependenciesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListApplicationInstanceDependencies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListApplicationInstanceDependencies", "Required field: ApplicationInstanceId, is not set");
    return ListApplicationInstanceDependenciesOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationInstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListApplicationInstanceDependencies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/application-instances/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/package-dependencies");
  return ListApplicationInstanceDependenciesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationInstanceNodeInstancesOutcome PanoramaClient::ListApplicationInstanceNodeInstances(const ListApplicationInstanceNodeInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListApplicationInstanceNodeInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListApplicationInstanceNodeInstances", "Required field: ApplicationInstanceId, is not set");
    return ListApplicationInstanceNodeInstancesOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationInstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListApplicationInstanceNodeInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/application-instances/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/node-instances");
  return ListApplicationInstanceNodeInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationInstancesOutcome PanoramaClient::ListApplicationInstances(const ListApplicationInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListApplicationInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListApplicationInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/application-instances");
  return ListApplicationInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDevicesOutcome PanoramaClient::ListDevices(const ListDevicesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/devices");
  return ListDevicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDevicesJobsOutcome PanoramaClient::ListDevicesJobs(const ListDevicesJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDevicesJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDevicesJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  return ListDevicesJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListNodeFromTemplateJobsOutcome PanoramaClient::ListNodeFromTemplateJobs(const ListNodeFromTemplateJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNodeFromTemplateJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListNodeFromTemplateJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/packages/template-job");
  return ListNodeFromTemplateJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListNodesOutcome PanoramaClient::ListNodes(const ListNodesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNodes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListNodes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/nodes");
  return ListNodesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPackageImportJobsOutcome PanoramaClient::ListPackageImportJobs(const ListPackageImportJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPackageImportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPackageImportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/packages/import-jobs");
  return ListPackageImportJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPackagesOutcome PanoramaClient::ListPackages(const ListPackagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPackages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPackages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/packages");
  return ListPackagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome PanoramaClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ProvisionDeviceOutcome PanoramaClient::ProvisionDevice(const ProvisionDeviceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ProvisionDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ProvisionDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/devices");
  return ProvisionDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterPackageVersionOutcome PanoramaClient::RegisterPackageVersion(const RegisterPackageVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterPackageVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PackageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RegisterPackageVersion", "Required field: PackageId, is not set");
    return RegisterPackageVersionOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageId]", false));
  }
  if (!request.PackageVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RegisterPackageVersion", "Required field: PackageVersion, is not set");
    return RegisterPackageVersionOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageVersion]", false));
  }
  if (!request.PatchVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RegisterPackageVersion", "Required field: PatchVersion, is not set");
    return RegisterPackageVersionOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PatchVersion]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterPackageVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/packages/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageVersion());
  endpointResolutionOutcome.GetResult().AddPathSegments("/patch/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPatchVersion());
  return RegisterPackageVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

RemoveApplicationInstanceOutcome PanoramaClient::RemoveApplicationInstance(const RemoveApplicationInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveApplicationInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveApplicationInstance", "Required field: ApplicationInstanceId, is not set");
    return RemoveApplicationInstanceOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationInstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveApplicationInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/application-instances/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationInstanceId());
  return RemoveApplicationInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

SignalApplicationInstanceNodeInstancesOutcome PanoramaClient::SignalApplicationInstanceNodeInstances(const SignalApplicationInstanceNodeInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SignalApplicationInstanceNodeInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SignalApplicationInstanceNodeInstances", "Required field: ApplicationInstanceId, is not set");
    return SignalApplicationInstanceNodeInstancesOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationInstanceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SignalApplicationInstanceNodeInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/application-instances/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/node-signals");
  return SignalApplicationInstanceNodeInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome PanoramaClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome PanoramaClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateDeviceMetadataOutcome PanoramaClient::UpdateDeviceMetadata(const UpdateDeviceMetadataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDeviceMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDeviceMetadata", "Required field: DeviceId, is not set");
    return UpdateDeviceMetadataOutcome(Aws::Client::AWSError<PanoramaErrors>(PanoramaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDeviceMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceId());
  return UpdateDeviceMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

