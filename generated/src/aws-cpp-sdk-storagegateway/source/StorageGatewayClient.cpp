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
#include <aws/storagegateway/StorageGatewayClient.h>
#include <aws/storagegateway/StorageGatewayEndpointProvider.h>
#include <aws/storagegateway/StorageGatewayErrorMarshaller.h>
#include <aws/storagegateway/model/ActivateGatewayRequest.h>
#include <aws/storagegateway/model/AddCacheRequest.h>
#include <aws/storagegateway/model/AddTagsToResourceRequest.h>
#include <aws/storagegateway/model/AddUploadBufferRequest.h>
#include <aws/storagegateway/model/AddWorkingStorageRequest.h>
#include <aws/storagegateway/model/AssignTapePoolRequest.h>
#include <aws/storagegateway/model/AssociateFileSystemRequest.h>
#include <aws/storagegateway/model/AttachVolumeRequest.h>
#include <aws/storagegateway/model/CancelArchivalRequest.h>
#include <aws/storagegateway/model/CancelCacheReportRequest.h>
#include <aws/storagegateway/model/CancelRetrievalRequest.h>
#include <aws/storagegateway/model/CreateCachediSCSIVolumeRequest.h>
#include <aws/storagegateway/model/CreateNFSFileShareRequest.h>
#include <aws/storagegateway/model/CreateSMBFileShareRequest.h>
#include <aws/storagegateway/model/CreateSnapshotFromVolumeRecoveryPointRequest.h>
#include <aws/storagegateway/model/CreateSnapshotRequest.h>
#include <aws/storagegateway/model/CreateStorediSCSIVolumeRequest.h>
#include <aws/storagegateway/model/CreateTapePoolRequest.h>
#include <aws/storagegateway/model/CreateTapeWithBarcodeRequest.h>
#include <aws/storagegateway/model/CreateTapesRequest.h>
#include <aws/storagegateway/model/DeleteAutomaticTapeCreationPolicyRequest.h>
#include <aws/storagegateway/model/DeleteBandwidthRateLimitRequest.h>
#include <aws/storagegateway/model/DeleteCacheReportRequest.h>
#include <aws/storagegateway/model/DeleteChapCredentialsRequest.h>
#include <aws/storagegateway/model/DeleteFileShareRequest.h>
#include <aws/storagegateway/model/DeleteGatewayRequest.h>
#include <aws/storagegateway/model/DeleteSnapshotScheduleRequest.h>
#include <aws/storagegateway/model/DeleteTapeArchiveRequest.h>
#include <aws/storagegateway/model/DeleteTapePoolRequest.h>
#include <aws/storagegateway/model/DeleteTapeRequest.h>
#include <aws/storagegateway/model/DeleteVolumeRequest.h>
#include <aws/storagegateway/model/DescribeAvailabilityMonitorTestRequest.h>
#include <aws/storagegateway/model/DescribeBandwidthRateLimitRequest.h>
#include <aws/storagegateway/model/DescribeBandwidthRateLimitScheduleRequest.h>
#include <aws/storagegateway/model/DescribeCacheReportRequest.h>
#include <aws/storagegateway/model/DescribeCacheRequest.h>
#include <aws/storagegateway/model/DescribeCachediSCSIVolumesRequest.h>
#include <aws/storagegateway/model/DescribeChapCredentialsRequest.h>
#include <aws/storagegateway/model/DescribeFileSystemAssociationsRequest.h>
#include <aws/storagegateway/model/DescribeGatewayInformationRequest.h>
#include <aws/storagegateway/model/DescribeMaintenanceStartTimeRequest.h>
#include <aws/storagegateway/model/DescribeNFSFileSharesRequest.h>
#include <aws/storagegateway/model/DescribeSMBFileSharesRequest.h>
#include <aws/storagegateway/model/DescribeSMBSettingsRequest.h>
#include <aws/storagegateway/model/DescribeSnapshotScheduleRequest.h>
#include <aws/storagegateway/model/DescribeStorediSCSIVolumesRequest.h>
#include <aws/storagegateway/model/DescribeTapeArchivesRequest.h>
#include <aws/storagegateway/model/DescribeTapeRecoveryPointsRequest.h>
#include <aws/storagegateway/model/DescribeTapesRequest.h>
#include <aws/storagegateway/model/DescribeUploadBufferRequest.h>
#include <aws/storagegateway/model/DescribeVTLDevicesRequest.h>
#include <aws/storagegateway/model/DescribeWorkingStorageRequest.h>
#include <aws/storagegateway/model/DetachVolumeRequest.h>
#include <aws/storagegateway/model/DisableGatewayRequest.h>
#include <aws/storagegateway/model/DisassociateFileSystemRequest.h>
#include <aws/storagegateway/model/EvictFilesFailingUploadRequest.h>
#include <aws/storagegateway/model/JoinDomainRequest.h>
#include <aws/storagegateway/model/ListAutomaticTapeCreationPoliciesRequest.h>
#include <aws/storagegateway/model/ListCacheReportsRequest.h>
#include <aws/storagegateway/model/ListFileSharesRequest.h>
#include <aws/storagegateway/model/ListFileSystemAssociationsRequest.h>
#include <aws/storagegateway/model/ListGatewaysRequest.h>
#include <aws/storagegateway/model/ListLocalDisksRequest.h>
#include <aws/storagegateway/model/ListTagsForResourceRequest.h>
#include <aws/storagegateway/model/ListTapePoolsRequest.h>
#include <aws/storagegateway/model/ListTapesRequest.h>
#include <aws/storagegateway/model/ListVolumeInitiatorsRequest.h>
#include <aws/storagegateway/model/ListVolumeRecoveryPointsRequest.h>
#include <aws/storagegateway/model/ListVolumesRequest.h>
#include <aws/storagegateway/model/NotifyWhenUploadedRequest.h>
#include <aws/storagegateway/model/RefreshCacheRequest.h>
#include <aws/storagegateway/model/RemoveTagsFromResourceRequest.h>
#include <aws/storagegateway/model/ResetCacheRequest.h>
#include <aws/storagegateway/model/RetrieveTapeArchiveRequest.h>
#include <aws/storagegateway/model/RetrieveTapeRecoveryPointRequest.h>
#include <aws/storagegateway/model/SetLocalConsolePasswordRequest.h>
#include <aws/storagegateway/model/SetSMBGuestPasswordRequest.h>
#include <aws/storagegateway/model/ShutdownGatewayRequest.h>
#include <aws/storagegateway/model/StartAvailabilityMonitorTestRequest.h>
#include <aws/storagegateway/model/StartCacheReportRequest.h>
#include <aws/storagegateway/model/StartGatewayRequest.h>
#include <aws/storagegateway/model/UpdateAutomaticTapeCreationPolicyRequest.h>
#include <aws/storagegateway/model/UpdateBandwidthRateLimitRequest.h>
#include <aws/storagegateway/model/UpdateBandwidthRateLimitScheduleRequest.h>
#include <aws/storagegateway/model/UpdateChapCredentialsRequest.h>
#include <aws/storagegateway/model/UpdateFileSystemAssociationRequest.h>
#include <aws/storagegateway/model/UpdateGatewayInformationRequest.h>
#include <aws/storagegateway/model/UpdateGatewaySoftwareNowRequest.h>
#include <aws/storagegateway/model/UpdateMaintenanceStartTimeRequest.h>
#include <aws/storagegateway/model/UpdateNFSFileShareRequest.h>
#include <aws/storagegateway/model/UpdateSMBFileShareRequest.h>
#include <aws/storagegateway/model/UpdateSMBFileShareVisibilityRequest.h>
#include <aws/storagegateway/model/UpdateSMBLocalGroupsRequest.h>
#include <aws/storagegateway/model/UpdateSMBSecurityStrategyRequest.h>
#include <aws/storagegateway/model/UpdateSnapshotScheduleRequest.h>
#include <aws/storagegateway/model/UpdateVTLDeviceTypeRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::StorageGateway;
using namespace Aws::StorageGateway::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace StorageGateway {
const char SERVICE_NAME[] = "storagegateway";
const char ALLOCATION_TAG[] = "StorageGatewayClient";
}  // namespace StorageGateway
}  // namespace Aws
const char* StorageGatewayClient::GetServiceName() { return SERVICE_NAME; }
const char* StorageGatewayClient::GetAllocationTag() { return ALLOCATION_TAG; }

StorageGatewayClient::StorageGatewayClient(const StorageGateway::StorageGatewayClientConfiguration& clientConfiguration,
                                           std::shared_ptr<StorageGatewayEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<StorageGatewayErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<StorageGatewayEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

StorageGatewayClient::StorageGatewayClient(const AWSCredentials& credentials,
                                           std::shared_ptr<StorageGatewayEndpointProviderBase> endpointProvider,
                                           const StorageGateway::StorageGatewayClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<StorageGatewayErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<StorageGatewayEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

StorageGatewayClient::StorageGatewayClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<StorageGatewayEndpointProviderBase> endpointProvider,
                                           const StorageGateway::StorageGatewayClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<StorageGatewayErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<StorageGatewayEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
StorageGatewayClient::StorageGatewayClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<StorageGatewayErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<StorageGatewayEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

StorageGatewayClient::StorageGatewayClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<StorageGatewayErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<StorageGatewayEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

StorageGatewayClient::StorageGatewayClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<StorageGatewayErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<StorageGatewayEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
StorageGatewayClient::~StorageGatewayClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<StorageGatewayEndpointProviderBase>& StorageGatewayClient::accessEndpointProvider() { return m_endpointProvider; }

void StorageGatewayClient::init(const StorageGateway::StorageGatewayClientConfiguration& config) {
  AWSClient::SetServiceClientName("Storage Gateway");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "storagegateway");
}

void StorageGatewayClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
StorageGatewayClient::InvokeOperationOutcome StorageGatewayClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

ActivateGatewayOutcome StorageGatewayClient::ActivateGateway(const ActivateGatewayRequest& request) const {
  return ActivateGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddCacheOutcome StorageGatewayClient::AddCache(const AddCacheRequest& request) const {
  return AddCacheOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddTagsToResourceOutcome StorageGatewayClient::AddTagsToResource(const AddTagsToResourceRequest& request) const {
  return AddTagsToResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddUploadBufferOutcome StorageGatewayClient::AddUploadBuffer(const AddUploadBufferRequest& request) const {
  return AddUploadBufferOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddWorkingStorageOutcome StorageGatewayClient::AddWorkingStorage(const AddWorkingStorageRequest& request) const {
  return AddWorkingStorageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssignTapePoolOutcome StorageGatewayClient::AssignTapePool(const AssignTapePoolRequest& request) const {
  return AssignTapePoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateFileSystemOutcome StorageGatewayClient::AssociateFileSystem(const AssociateFileSystemRequest& request) const {
  return AssociateFileSystemOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AttachVolumeOutcome StorageGatewayClient::AttachVolume(const AttachVolumeRequest& request) const {
  return AttachVolumeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelArchivalOutcome StorageGatewayClient::CancelArchival(const CancelArchivalRequest& request) const {
  return CancelArchivalOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelCacheReportOutcome StorageGatewayClient::CancelCacheReport(const CancelCacheReportRequest& request) const {
  return CancelCacheReportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelRetrievalOutcome StorageGatewayClient::CancelRetrieval(const CancelRetrievalRequest& request) const {
  return CancelRetrievalOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCachediSCSIVolumeOutcome StorageGatewayClient::CreateCachediSCSIVolume(const CreateCachediSCSIVolumeRequest& request) const {
  return CreateCachediSCSIVolumeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateNFSFileShareOutcome StorageGatewayClient::CreateNFSFileShare(const CreateNFSFileShareRequest& request) const {
  return CreateNFSFileShareOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSMBFileShareOutcome StorageGatewayClient::CreateSMBFileShare(const CreateSMBFileShareRequest& request) const {
  return CreateSMBFileShareOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSnapshotOutcome StorageGatewayClient::CreateSnapshot(const CreateSnapshotRequest& request) const {
  return CreateSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSnapshotFromVolumeRecoveryPointOutcome StorageGatewayClient::CreateSnapshotFromVolumeRecoveryPoint(
    const CreateSnapshotFromVolumeRecoveryPointRequest& request) const {
  return CreateSnapshotFromVolumeRecoveryPointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateStorediSCSIVolumeOutcome StorageGatewayClient::CreateStorediSCSIVolume(const CreateStorediSCSIVolumeRequest& request) const {
  return CreateStorediSCSIVolumeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTapePoolOutcome StorageGatewayClient::CreateTapePool(const CreateTapePoolRequest& request) const {
  return CreateTapePoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTapeWithBarcodeOutcome StorageGatewayClient::CreateTapeWithBarcode(const CreateTapeWithBarcodeRequest& request) const {
  return CreateTapeWithBarcodeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTapesOutcome StorageGatewayClient::CreateTapes(const CreateTapesRequest& request) const {
  return CreateTapesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAutomaticTapeCreationPolicyOutcome StorageGatewayClient::DeleteAutomaticTapeCreationPolicy(
    const DeleteAutomaticTapeCreationPolicyRequest& request) const {
  return DeleteAutomaticTapeCreationPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteBandwidthRateLimitOutcome StorageGatewayClient::DeleteBandwidthRateLimit(const DeleteBandwidthRateLimitRequest& request) const {
  return DeleteBandwidthRateLimitOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCacheReportOutcome StorageGatewayClient::DeleteCacheReport(const DeleteCacheReportRequest& request) const {
  return DeleteCacheReportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteChapCredentialsOutcome StorageGatewayClient::DeleteChapCredentials(const DeleteChapCredentialsRequest& request) const {
  return DeleteChapCredentialsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFileShareOutcome StorageGatewayClient::DeleteFileShare(const DeleteFileShareRequest& request) const {
  return DeleteFileShareOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteGatewayOutcome StorageGatewayClient::DeleteGateway(const DeleteGatewayRequest& request) const {
  return DeleteGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSnapshotScheduleOutcome StorageGatewayClient::DeleteSnapshotSchedule(const DeleteSnapshotScheduleRequest& request) const {
  return DeleteSnapshotScheduleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTapeOutcome StorageGatewayClient::DeleteTape(const DeleteTapeRequest& request) const {
  return DeleteTapeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTapeArchiveOutcome StorageGatewayClient::DeleteTapeArchive(const DeleteTapeArchiveRequest& request) const {
  return DeleteTapeArchiveOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTapePoolOutcome StorageGatewayClient::DeleteTapePool(const DeleteTapePoolRequest& request) const {
  return DeleteTapePoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteVolumeOutcome StorageGatewayClient::DeleteVolume(const DeleteVolumeRequest& request) const {
  return DeleteVolumeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAvailabilityMonitorTestOutcome StorageGatewayClient::DescribeAvailabilityMonitorTest(
    const DescribeAvailabilityMonitorTestRequest& request) const {
  return DescribeAvailabilityMonitorTestOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeBandwidthRateLimitOutcome StorageGatewayClient::DescribeBandwidthRateLimit(const DescribeBandwidthRateLimitRequest& request) const {
  return DescribeBandwidthRateLimitOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeBandwidthRateLimitScheduleOutcome StorageGatewayClient::DescribeBandwidthRateLimitSchedule(
    const DescribeBandwidthRateLimitScheduleRequest& request) const {
  return DescribeBandwidthRateLimitScheduleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCacheOutcome StorageGatewayClient::DescribeCache(const DescribeCacheRequest& request) const {
  return DescribeCacheOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCacheReportOutcome StorageGatewayClient::DescribeCacheReport(const DescribeCacheReportRequest& request) const {
  return DescribeCacheReportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCachediSCSIVolumesOutcome StorageGatewayClient::DescribeCachediSCSIVolumes(const DescribeCachediSCSIVolumesRequest& request) const {
  return DescribeCachediSCSIVolumesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeChapCredentialsOutcome StorageGatewayClient::DescribeChapCredentials(const DescribeChapCredentialsRequest& request) const {
  return DescribeChapCredentialsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFileSystemAssociationsOutcome StorageGatewayClient::DescribeFileSystemAssociations(
    const DescribeFileSystemAssociationsRequest& request) const {
  return DescribeFileSystemAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeGatewayInformationOutcome StorageGatewayClient::DescribeGatewayInformation(const DescribeGatewayInformationRequest& request) const {
  return DescribeGatewayInformationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMaintenanceStartTimeOutcome StorageGatewayClient::DescribeMaintenanceStartTime(
    const DescribeMaintenanceStartTimeRequest& request) const {
  return DescribeMaintenanceStartTimeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeNFSFileSharesOutcome StorageGatewayClient::DescribeNFSFileShares(const DescribeNFSFileSharesRequest& request) const {
  return DescribeNFSFileSharesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSMBFileSharesOutcome StorageGatewayClient::DescribeSMBFileShares(const DescribeSMBFileSharesRequest& request) const {
  return DescribeSMBFileSharesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSMBSettingsOutcome StorageGatewayClient::DescribeSMBSettings(const DescribeSMBSettingsRequest& request) const {
  return DescribeSMBSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSnapshotScheduleOutcome StorageGatewayClient::DescribeSnapshotSchedule(const DescribeSnapshotScheduleRequest& request) const {
  return DescribeSnapshotScheduleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStorediSCSIVolumesOutcome StorageGatewayClient::DescribeStorediSCSIVolumes(const DescribeStorediSCSIVolumesRequest& request) const {
  return DescribeStorediSCSIVolumesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTapeArchivesOutcome StorageGatewayClient::DescribeTapeArchives(const DescribeTapeArchivesRequest& request) const {
  return DescribeTapeArchivesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTapeRecoveryPointsOutcome StorageGatewayClient::DescribeTapeRecoveryPoints(const DescribeTapeRecoveryPointsRequest& request) const {
  return DescribeTapeRecoveryPointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTapesOutcome StorageGatewayClient::DescribeTapes(const DescribeTapesRequest& request) const {
  return DescribeTapesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeUploadBufferOutcome StorageGatewayClient::DescribeUploadBuffer(const DescribeUploadBufferRequest& request) const {
  return DescribeUploadBufferOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVTLDevicesOutcome StorageGatewayClient::DescribeVTLDevices(const DescribeVTLDevicesRequest& request) const {
  return DescribeVTLDevicesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeWorkingStorageOutcome StorageGatewayClient::DescribeWorkingStorage(const DescribeWorkingStorageRequest& request) const {
  return DescribeWorkingStorageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetachVolumeOutcome StorageGatewayClient::DetachVolume(const DetachVolumeRequest& request) const {
  return DetachVolumeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableGatewayOutcome StorageGatewayClient::DisableGateway(const DisableGatewayRequest& request) const {
  return DisableGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateFileSystemOutcome StorageGatewayClient::DisassociateFileSystem(const DisassociateFileSystemRequest& request) const {
  return DisassociateFileSystemOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EvictFilesFailingUploadOutcome StorageGatewayClient::EvictFilesFailingUpload(const EvictFilesFailingUploadRequest& request) const {
  return EvictFilesFailingUploadOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

JoinDomainOutcome StorageGatewayClient::JoinDomain(const JoinDomainRequest& request) const {
  return JoinDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAutomaticTapeCreationPoliciesOutcome StorageGatewayClient::ListAutomaticTapeCreationPolicies(
    const ListAutomaticTapeCreationPoliciesRequest& request) const {
  return ListAutomaticTapeCreationPoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCacheReportsOutcome StorageGatewayClient::ListCacheReports(const ListCacheReportsRequest& request) const {
  return ListCacheReportsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFileSharesOutcome StorageGatewayClient::ListFileShares(const ListFileSharesRequest& request) const {
  return ListFileSharesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFileSystemAssociationsOutcome StorageGatewayClient::ListFileSystemAssociations(const ListFileSystemAssociationsRequest& request) const {
  return ListFileSystemAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGatewaysOutcome StorageGatewayClient::ListGateways(const ListGatewaysRequest& request) const {
  return ListGatewaysOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLocalDisksOutcome StorageGatewayClient::ListLocalDisks(const ListLocalDisksRequest& request) const {
  return ListLocalDisksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome StorageGatewayClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTapePoolsOutcome StorageGatewayClient::ListTapePools(const ListTapePoolsRequest& request) const {
  return ListTapePoolsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTapesOutcome StorageGatewayClient::ListTapes(const ListTapesRequest& request) const {
  return ListTapesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListVolumeInitiatorsOutcome StorageGatewayClient::ListVolumeInitiators(const ListVolumeInitiatorsRequest& request) const {
  return ListVolumeInitiatorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListVolumeRecoveryPointsOutcome StorageGatewayClient::ListVolumeRecoveryPoints(const ListVolumeRecoveryPointsRequest& request) const {
  return ListVolumeRecoveryPointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListVolumesOutcome StorageGatewayClient::ListVolumes(const ListVolumesRequest& request) const {
  return ListVolumesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

NotifyWhenUploadedOutcome StorageGatewayClient::NotifyWhenUploaded(const NotifyWhenUploadedRequest& request) const {
  return NotifyWhenUploadedOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RefreshCacheOutcome StorageGatewayClient::RefreshCache(const RefreshCacheRequest& request) const {
  return RefreshCacheOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveTagsFromResourceOutcome StorageGatewayClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const {
  return RemoveTagsFromResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResetCacheOutcome StorageGatewayClient::ResetCache(const ResetCacheRequest& request) const {
  return ResetCacheOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RetrieveTapeArchiveOutcome StorageGatewayClient::RetrieveTapeArchive(const RetrieveTapeArchiveRequest& request) const {
  return RetrieveTapeArchiveOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RetrieveTapeRecoveryPointOutcome StorageGatewayClient::RetrieveTapeRecoveryPoint(const RetrieveTapeRecoveryPointRequest& request) const {
  return RetrieveTapeRecoveryPointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetLocalConsolePasswordOutcome StorageGatewayClient::SetLocalConsolePassword(const SetLocalConsolePasswordRequest& request) const {
  return SetLocalConsolePasswordOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetSMBGuestPasswordOutcome StorageGatewayClient::SetSMBGuestPassword(const SetSMBGuestPasswordRequest& request) const {
  return SetSMBGuestPasswordOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ShutdownGatewayOutcome StorageGatewayClient::ShutdownGateway(const ShutdownGatewayRequest& request) const {
  return ShutdownGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartAvailabilityMonitorTestOutcome StorageGatewayClient::StartAvailabilityMonitorTest(
    const StartAvailabilityMonitorTestRequest& request) const {
  return StartAvailabilityMonitorTestOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartCacheReportOutcome StorageGatewayClient::StartCacheReport(const StartCacheReportRequest& request) const {
  return StartCacheReportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartGatewayOutcome StorageGatewayClient::StartGateway(const StartGatewayRequest& request) const {
  return StartGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAutomaticTapeCreationPolicyOutcome StorageGatewayClient::UpdateAutomaticTapeCreationPolicy(
    const UpdateAutomaticTapeCreationPolicyRequest& request) const {
  return UpdateAutomaticTapeCreationPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateBandwidthRateLimitOutcome StorageGatewayClient::UpdateBandwidthRateLimit(const UpdateBandwidthRateLimitRequest& request) const {
  return UpdateBandwidthRateLimitOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateBandwidthRateLimitScheduleOutcome StorageGatewayClient::UpdateBandwidthRateLimitSchedule(
    const UpdateBandwidthRateLimitScheduleRequest& request) const {
  return UpdateBandwidthRateLimitScheduleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateChapCredentialsOutcome StorageGatewayClient::UpdateChapCredentials(const UpdateChapCredentialsRequest& request) const {
  return UpdateChapCredentialsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFileSystemAssociationOutcome StorageGatewayClient::UpdateFileSystemAssociation(
    const UpdateFileSystemAssociationRequest& request) const {
  return UpdateFileSystemAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateGatewayInformationOutcome StorageGatewayClient::UpdateGatewayInformation(const UpdateGatewayInformationRequest& request) const {
  return UpdateGatewayInformationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateGatewaySoftwareNowOutcome StorageGatewayClient::UpdateGatewaySoftwareNow(const UpdateGatewaySoftwareNowRequest& request) const {
  return UpdateGatewaySoftwareNowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateMaintenanceStartTimeOutcome StorageGatewayClient::UpdateMaintenanceStartTime(const UpdateMaintenanceStartTimeRequest& request) const {
  return UpdateMaintenanceStartTimeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateNFSFileShareOutcome StorageGatewayClient::UpdateNFSFileShare(const UpdateNFSFileShareRequest& request) const {
  return UpdateNFSFileShareOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSMBFileShareOutcome StorageGatewayClient::UpdateSMBFileShare(const UpdateSMBFileShareRequest& request) const {
  return UpdateSMBFileShareOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSMBFileShareVisibilityOutcome StorageGatewayClient::UpdateSMBFileShareVisibility(
    const UpdateSMBFileShareVisibilityRequest& request) const {
  return UpdateSMBFileShareVisibilityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSMBLocalGroupsOutcome StorageGatewayClient::UpdateSMBLocalGroups(const UpdateSMBLocalGroupsRequest& request) const {
  return UpdateSMBLocalGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSMBSecurityStrategyOutcome StorageGatewayClient::UpdateSMBSecurityStrategy(const UpdateSMBSecurityStrategyRequest& request) const {
  return UpdateSMBSecurityStrategyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSnapshotScheduleOutcome StorageGatewayClient::UpdateSnapshotSchedule(const UpdateSnapshotScheduleRequest& request) const {
  return UpdateSnapshotScheduleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateVTLDeviceTypeOutcome StorageGatewayClient::UpdateVTLDeviceType(const UpdateVTLDeviceTypeRequest& request) const {
  return UpdateVTLDeviceTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
