/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/storagegateway/StorageGatewayErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/storagegateway/StorageGatewayEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in StorageGatewayClient header */
#include <aws/storagegateway/model/ActivateGatewayResult.h>
#include <aws/storagegateway/model/AddCacheResult.h>
#include <aws/storagegateway/model/AddTagsToResourceResult.h>
#include <aws/storagegateway/model/AddUploadBufferResult.h>
#include <aws/storagegateway/model/AddWorkingStorageResult.h>
#include <aws/storagegateway/model/AssignTapePoolResult.h>
#include <aws/storagegateway/model/AssociateFileSystemResult.h>
#include <aws/storagegateway/model/AttachVolumeResult.h>
#include <aws/storagegateway/model/CancelArchivalResult.h>
#include <aws/storagegateway/model/CancelRetrievalResult.h>
#include <aws/storagegateway/model/CreateCachediSCSIVolumeResult.h>
#include <aws/storagegateway/model/CreateNFSFileShareResult.h>
#include <aws/storagegateway/model/CreateSMBFileShareResult.h>
#include <aws/storagegateway/model/CreateSnapshotResult.h>
#include <aws/storagegateway/model/CreateSnapshotFromVolumeRecoveryPointResult.h>
#include <aws/storagegateway/model/CreateStorediSCSIVolumeResult.h>
#include <aws/storagegateway/model/CreateTapePoolResult.h>
#include <aws/storagegateway/model/CreateTapeWithBarcodeResult.h>
#include <aws/storagegateway/model/CreateTapesResult.h>
#include <aws/storagegateway/model/DeleteAutomaticTapeCreationPolicyResult.h>
#include <aws/storagegateway/model/DeleteBandwidthRateLimitResult.h>
#include <aws/storagegateway/model/DeleteChapCredentialsResult.h>
#include <aws/storagegateway/model/DeleteFileShareResult.h>
#include <aws/storagegateway/model/DeleteGatewayResult.h>
#include <aws/storagegateway/model/DeleteSnapshotScheduleResult.h>
#include <aws/storagegateway/model/DeleteTapeResult.h>
#include <aws/storagegateway/model/DeleteTapeArchiveResult.h>
#include <aws/storagegateway/model/DeleteTapePoolResult.h>
#include <aws/storagegateway/model/DeleteVolumeResult.h>
#include <aws/storagegateway/model/DescribeAvailabilityMonitorTestResult.h>
#include <aws/storagegateway/model/DescribeBandwidthRateLimitResult.h>
#include <aws/storagegateway/model/DescribeBandwidthRateLimitScheduleResult.h>
#include <aws/storagegateway/model/DescribeCacheResult.h>
#include <aws/storagegateway/model/DescribeCachediSCSIVolumesResult.h>
#include <aws/storagegateway/model/DescribeChapCredentialsResult.h>
#include <aws/storagegateway/model/DescribeFileSystemAssociationsResult.h>
#include <aws/storagegateway/model/DescribeGatewayInformationResult.h>
#include <aws/storagegateway/model/DescribeMaintenanceStartTimeResult.h>
#include <aws/storagegateway/model/DescribeNFSFileSharesResult.h>
#include <aws/storagegateway/model/DescribeSMBFileSharesResult.h>
#include <aws/storagegateway/model/DescribeSMBSettingsResult.h>
#include <aws/storagegateway/model/DescribeSnapshotScheduleResult.h>
#include <aws/storagegateway/model/DescribeStorediSCSIVolumesResult.h>
#include <aws/storagegateway/model/DescribeTapeArchivesResult.h>
#include <aws/storagegateway/model/DescribeTapeRecoveryPointsResult.h>
#include <aws/storagegateway/model/DescribeTapesResult.h>
#include <aws/storagegateway/model/DescribeUploadBufferResult.h>
#include <aws/storagegateway/model/DescribeVTLDevicesResult.h>
#include <aws/storagegateway/model/DescribeWorkingStorageResult.h>
#include <aws/storagegateway/model/DetachVolumeResult.h>
#include <aws/storagegateway/model/DisableGatewayResult.h>
#include <aws/storagegateway/model/DisassociateFileSystemResult.h>
#include <aws/storagegateway/model/JoinDomainResult.h>
#include <aws/storagegateway/model/ListAutomaticTapeCreationPoliciesResult.h>
#include <aws/storagegateway/model/ListFileSharesResult.h>
#include <aws/storagegateway/model/ListFileSystemAssociationsResult.h>
#include <aws/storagegateway/model/ListGatewaysResult.h>
#include <aws/storagegateway/model/ListLocalDisksResult.h>
#include <aws/storagegateway/model/ListTagsForResourceResult.h>
#include <aws/storagegateway/model/ListTapePoolsResult.h>
#include <aws/storagegateway/model/ListTapesResult.h>
#include <aws/storagegateway/model/ListVolumeInitiatorsResult.h>
#include <aws/storagegateway/model/ListVolumeRecoveryPointsResult.h>
#include <aws/storagegateway/model/ListVolumesResult.h>
#include <aws/storagegateway/model/NotifyWhenUploadedResult.h>
#include <aws/storagegateway/model/RefreshCacheResult.h>
#include <aws/storagegateway/model/RemoveTagsFromResourceResult.h>
#include <aws/storagegateway/model/ResetCacheResult.h>
#include <aws/storagegateway/model/RetrieveTapeArchiveResult.h>
#include <aws/storagegateway/model/RetrieveTapeRecoveryPointResult.h>
#include <aws/storagegateway/model/SetLocalConsolePasswordResult.h>
#include <aws/storagegateway/model/SetSMBGuestPasswordResult.h>
#include <aws/storagegateway/model/ShutdownGatewayResult.h>
#include <aws/storagegateway/model/StartAvailabilityMonitorTestResult.h>
#include <aws/storagegateway/model/StartGatewayResult.h>
#include <aws/storagegateway/model/UpdateAutomaticTapeCreationPolicyResult.h>
#include <aws/storagegateway/model/UpdateBandwidthRateLimitResult.h>
#include <aws/storagegateway/model/UpdateBandwidthRateLimitScheduleResult.h>
#include <aws/storagegateway/model/UpdateChapCredentialsResult.h>
#include <aws/storagegateway/model/UpdateFileSystemAssociationResult.h>
#include <aws/storagegateway/model/UpdateGatewayInformationResult.h>
#include <aws/storagegateway/model/UpdateGatewaySoftwareNowResult.h>
#include <aws/storagegateway/model/UpdateMaintenanceStartTimeResult.h>
#include <aws/storagegateway/model/UpdateNFSFileShareResult.h>
#include <aws/storagegateway/model/UpdateSMBFileShareResult.h>
#include <aws/storagegateway/model/UpdateSMBFileShareVisibilityResult.h>
#include <aws/storagegateway/model/UpdateSMBLocalGroupsResult.h>
#include <aws/storagegateway/model/UpdateSMBSecurityStrategyResult.h>
#include <aws/storagegateway/model/UpdateSnapshotScheduleResult.h>
#include <aws/storagegateway/model/UpdateVTLDeviceTypeResult.h>
/* End of service model headers required in StorageGatewayClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace StorageGateway
  {
    using StorageGatewayClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using StorageGatewayEndpointProviderBase = Aws::StorageGateway::Endpoint::StorageGatewayEndpointProviderBase;
    using StorageGatewayEndpointProvider = Aws::StorageGateway::Endpoint::StorageGatewayEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in StorageGatewayClient header */
      class ActivateGatewayRequest;
      class AddCacheRequest;
      class AddTagsToResourceRequest;
      class AddUploadBufferRequest;
      class AddWorkingStorageRequest;
      class AssignTapePoolRequest;
      class AssociateFileSystemRequest;
      class AttachVolumeRequest;
      class CancelArchivalRequest;
      class CancelRetrievalRequest;
      class CreateCachediSCSIVolumeRequest;
      class CreateNFSFileShareRequest;
      class CreateSMBFileShareRequest;
      class CreateSnapshotRequest;
      class CreateSnapshotFromVolumeRecoveryPointRequest;
      class CreateStorediSCSIVolumeRequest;
      class CreateTapePoolRequest;
      class CreateTapeWithBarcodeRequest;
      class CreateTapesRequest;
      class DeleteAutomaticTapeCreationPolicyRequest;
      class DeleteBandwidthRateLimitRequest;
      class DeleteChapCredentialsRequest;
      class DeleteFileShareRequest;
      class DeleteGatewayRequest;
      class DeleteSnapshotScheduleRequest;
      class DeleteTapeRequest;
      class DeleteTapeArchiveRequest;
      class DeleteTapePoolRequest;
      class DeleteVolumeRequest;
      class DescribeAvailabilityMonitorTestRequest;
      class DescribeBandwidthRateLimitRequest;
      class DescribeBandwidthRateLimitScheduleRequest;
      class DescribeCacheRequest;
      class DescribeCachediSCSIVolumesRequest;
      class DescribeChapCredentialsRequest;
      class DescribeFileSystemAssociationsRequest;
      class DescribeGatewayInformationRequest;
      class DescribeMaintenanceStartTimeRequest;
      class DescribeNFSFileSharesRequest;
      class DescribeSMBFileSharesRequest;
      class DescribeSMBSettingsRequest;
      class DescribeSnapshotScheduleRequest;
      class DescribeStorediSCSIVolumesRequest;
      class DescribeTapeArchivesRequest;
      class DescribeTapeRecoveryPointsRequest;
      class DescribeTapesRequest;
      class DescribeUploadBufferRequest;
      class DescribeVTLDevicesRequest;
      class DescribeWorkingStorageRequest;
      class DetachVolumeRequest;
      class DisableGatewayRequest;
      class DisassociateFileSystemRequest;
      class JoinDomainRequest;
      class ListAutomaticTapeCreationPoliciesRequest;
      class ListFileSharesRequest;
      class ListFileSystemAssociationsRequest;
      class ListGatewaysRequest;
      class ListLocalDisksRequest;
      class ListTagsForResourceRequest;
      class ListTapePoolsRequest;
      class ListTapesRequest;
      class ListVolumeInitiatorsRequest;
      class ListVolumeRecoveryPointsRequest;
      class ListVolumesRequest;
      class NotifyWhenUploadedRequest;
      class RefreshCacheRequest;
      class RemoveTagsFromResourceRequest;
      class ResetCacheRequest;
      class RetrieveTapeArchiveRequest;
      class RetrieveTapeRecoveryPointRequest;
      class SetLocalConsolePasswordRequest;
      class SetSMBGuestPasswordRequest;
      class ShutdownGatewayRequest;
      class StartAvailabilityMonitorTestRequest;
      class StartGatewayRequest;
      class UpdateAutomaticTapeCreationPolicyRequest;
      class UpdateBandwidthRateLimitRequest;
      class UpdateBandwidthRateLimitScheduleRequest;
      class UpdateChapCredentialsRequest;
      class UpdateFileSystemAssociationRequest;
      class UpdateGatewayInformationRequest;
      class UpdateGatewaySoftwareNowRequest;
      class UpdateMaintenanceStartTimeRequest;
      class UpdateNFSFileShareRequest;
      class UpdateSMBFileShareRequest;
      class UpdateSMBFileShareVisibilityRequest;
      class UpdateSMBLocalGroupsRequest;
      class UpdateSMBSecurityStrategyRequest;
      class UpdateSnapshotScheduleRequest;
      class UpdateVTLDeviceTypeRequest;
      /* End of service model forward declarations required in StorageGatewayClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<ActivateGatewayResult, Aws::StorageGateway::StorageGatewayError> ActivateGatewayOutcome;
      typedef Aws::Utils::Outcome<AddCacheResult, Aws::StorageGateway::StorageGatewayError> AddCacheOutcome;
      typedef Aws::Utils::Outcome<AddTagsToResourceResult, Aws::StorageGateway::StorageGatewayError> AddTagsToResourceOutcome;
      typedef Aws::Utils::Outcome<AddUploadBufferResult, Aws::StorageGateway::StorageGatewayError> AddUploadBufferOutcome;
      typedef Aws::Utils::Outcome<AddWorkingStorageResult, Aws::StorageGateway::StorageGatewayError> AddWorkingStorageOutcome;
      typedef Aws::Utils::Outcome<AssignTapePoolResult, Aws::StorageGateway::StorageGatewayError> AssignTapePoolOutcome;
      typedef Aws::Utils::Outcome<AssociateFileSystemResult, Aws::StorageGateway::StorageGatewayError> AssociateFileSystemOutcome;
      typedef Aws::Utils::Outcome<AttachVolumeResult, Aws::StorageGateway::StorageGatewayError> AttachVolumeOutcome;
      typedef Aws::Utils::Outcome<CancelArchivalResult, Aws::StorageGateway::StorageGatewayError> CancelArchivalOutcome;
      typedef Aws::Utils::Outcome<CancelRetrievalResult, Aws::StorageGateway::StorageGatewayError> CancelRetrievalOutcome;
      typedef Aws::Utils::Outcome<CreateCachediSCSIVolumeResult, Aws::StorageGateway::StorageGatewayError> CreateCachediSCSIVolumeOutcome;
      typedef Aws::Utils::Outcome<CreateNFSFileShareResult, Aws::StorageGateway::StorageGatewayError> CreateNFSFileShareOutcome;
      typedef Aws::Utils::Outcome<CreateSMBFileShareResult, Aws::StorageGateway::StorageGatewayError> CreateSMBFileShareOutcome;
      typedef Aws::Utils::Outcome<CreateSnapshotResult, Aws::StorageGateway::StorageGatewayError> CreateSnapshotOutcome;
      typedef Aws::Utils::Outcome<CreateSnapshotFromVolumeRecoveryPointResult, Aws::StorageGateway::StorageGatewayError> CreateSnapshotFromVolumeRecoveryPointOutcome;
      typedef Aws::Utils::Outcome<CreateStorediSCSIVolumeResult, Aws::StorageGateway::StorageGatewayError> CreateStorediSCSIVolumeOutcome;
      typedef Aws::Utils::Outcome<CreateTapePoolResult, Aws::StorageGateway::StorageGatewayError> CreateTapePoolOutcome;
      typedef Aws::Utils::Outcome<CreateTapeWithBarcodeResult, Aws::StorageGateway::StorageGatewayError> CreateTapeWithBarcodeOutcome;
      typedef Aws::Utils::Outcome<CreateTapesResult, Aws::StorageGateway::StorageGatewayError> CreateTapesOutcome;
      typedef Aws::Utils::Outcome<DeleteAutomaticTapeCreationPolicyResult, Aws::StorageGateway::StorageGatewayError> DeleteAutomaticTapeCreationPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteBandwidthRateLimitResult, Aws::StorageGateway::StorageGatewayError> DeleteBandwidthRateLimitOutcome;
      typedef Aws::Utils::Outcome<DeleteChapCredentialsResult, Aws::StorageGateway::StorageGatewayError> DeleteChapCredentialsOutcome;
      typedef Aws::Utils::Outcome<DeleteFileShareResult, Aws::StorageGateway::StorageGatewayError> DeleteFileShareOutcome;
      typedef Aws::Utils::Outcome<DeleteGatewayResult, Aws::StorageGateway::StorageGatewayError> DeleteGatewayOutcome;
      typedef Aws::Utils::Outcome<DeleteSnapshotScheduleResult, Aws::StorageGateway::StorageGatewayError> DeleteSnapshotScheduleOutcome;
      typedef Aws::Utils::Outcome<DeleteTapeResult, Aws::StorageGateway::StorageGatewayError> DeleteTapeOutcome;
      typedef Aws::Utils::Outcome<DeleteTapeArchiveResult, Aws::StorageGateway::StorageGatewayError> DeleteTapeArchiveOutcome;
      typedef Aws::Utils::Outcome<DeleteTapePoolResult, Aws::StorageGateway::StorageGatewayError> DeleteTapePoolOutcome;
      typedef Aws::Utils::Outcome<DeleteVolumeResult, Aws::StorageGateway::StorageGatewayError> DeleteVolumeOutcome;
      typedef Aws::Utils::Outcome<DescribeAvailabilityMonitorTestResult, Aws::StorageGateway::StorageGatewayError> DescribeAvailabilityMonitorTestOutcome;
      typedef Aws::Utils::Outcome<DescribeBandwidthRateLimitResult, Aws::StorageGateway::StorageGatewayError> DescribeBandwidthRateLimitOutcome;
      typedef Aws::Utils::Outcome<DescribeBandwidthRateLimitScheduleResult, Aws::StorageGateway::StorageGatewayError> DescribeBandwidthRateLimitScheduleOutcome;
      typedef Aws::Utils::Outcome<DescribeCacheResult, Aws::StorageGateway::StorageGatewayError> DescribeCacheOutcome;
      typedef Aws::Utils::Outcome<DescribeCachediSCSIVolumesResult, Aws::StorageGateway::StorageGatewayError> DescribeCachediSCSIVolumesOutcome;
      typedef Aws::Utils::Outcome<DescribeChapCredentialsResult, Aws::StorageGateway::StorageGatewayError> DescribeChapCredentialsOutcome;
      typedef Aws::Utils::Outcome<DescribeFileSystemAssociationsResult, Aws::StorageGateway::StorageGatewayError> DescribeFileSystemAssociationsOutcome;
      typedef Aws::Utils::Outcome<DescribeGatewayInformationResult, Aws::StorageGateway::StorageGatewayError> DescribeGatewayInformationOutcome;
      typedef Aws::Utils::Outcome<DescribeMaintenanceStartTimeResult, Aws::StorageGateway::StorageGatewayError> DescribeMaintenanceStartTimeOutcome;
      typedef Aws::Utils::Outcome<DescribeNFSFileSharesResult, Aws::StorageGateway::StorageGatewayError> DescribeNFSFileSharesOutcome;
      typedef Aws::Utils::Outcome<DescribeSMBFileSharesResult, Aws::StorageGateway::StorageGatewayError> DescribeSMBFileSharesOutcome;
      typedef Aws::Utils::Outcome<DescribeSMBSettingsResult, Aws::StorageGateway::StorageGatewayError> DescribeSMBSettingsOutcome;
      typedef Aws::Utils::Outcome<DescribeSnapshotScheduleResult, Aws::StorageGateway::StorageGatewayError> DescribeSnapshotScheduleOutcome;
      typedef Aws::Utils::Outcome<DescribeStorediSCSIVolumesResult, Aws::StorageGateway::StorageGatewayError> DescribeStorediSCSIVolumesOutcome;
      typedef Aws::Utils::Outcome<DescribeTapeArchivesResult, Aws::StorageGateway::StorageGatewayError> DescribeTapeArchivesOutcome;
      typedef Aws::Utils::Outcome<DescribeTapeRecoveryPointsResult, Aws::StorageGateway::StorageGatewayError> DescribeTapeRecoveryPointsOutcome;
      typedef Aws::Utils::Outcome<DescribeTapesResult, Aws::StorageGateway::StorageGatewayError> DescribeTapesOutcome;
      typedef Aws::Utils::Outcome<DescribeUploadBufferResult, Aws::StorageGateway::StorageGatewayError> DescribeUploadBufferOutcome;
      typedef Aws::Utils::Outcome<DescribeVTLDevicesResult, Aws::StorageGateway::StorageGatewayError> DescribeVTLDevicesOutcome;
      typedef Aws::Utils::Outcome<DescribeWorkingStorageResult, Aws::StorageGateway::StorageGatewayError> DescribeWorkingStorageOutcome;
      typedef Aws::Utils::Outcome<DetachVolumeResult, Aws::StorageGateway::StorageGatewayError> DetachVolumeOutcome;
      typedef Aws::Utils::Outcome<DisableGatewayResult, Aws::StorageGateway::StorageGatewayError> DisableGatewayOutcome;
      typedef Aws::Utils::Outcome<DisassociateFileSystemResult, Aws::StorageGateway::StorageGatewayError> DisassociateFileSystemOutcome;
      typedef Aws::Utils::Outcome<JoinDomainResult, Aws::StorageGateway::StorageGatewayError> JoinDomainOutcome;
      typedef Aws::Utils::Outcome<ListAutomaticTapeCreationPoliciesResult, Aws::StorageGateway::StorageGatewayError> ListAutomaticTapeCreationPoliciesOutcome;
      typedef Aws::Utils::Outcome<ListFileSharesResult, Aws::StorageGateway::StorageGatewayError> ListFileSharesOutcome;
      typedef Aws::Utils::Outcome<ListFileSystemAssociationsResult, Aws::StorageGateway::StorageGatewayError> ListFileSystemAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListGatewaysResult, Aws::StorageGateway::StorageGatewayError> ListGatewaysOutcome;
      typedef Aws::Utils::Outcome<ListLocalDisksResult, Aws::StorageGateway::StorageGatewayError> ListLocalDisksOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::StorageGateway::StorageGatewayError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTapePoolsResult, Aws::StorageGateway::StorageGatewayError> ListTapePoolsOutcome;
      typedef Aws::Utils::Outcome<ListTapesResult, Aws::StorageGateway::StorageGatewayError> ListTapesOutcome;
      typedef Aws::Utils::Outcome<ListVolumeInitiatorsResult, Aws::StorageGateway::StorageGatewayError> ListVolumeInitiatorsOutcome;
      typedef Aws::Utils::Outcome<ListVolumeRecoveryPointsResult, Aws::StorageGateway::StorageGatewayError> ListVolumeRecoveryPointsOutcome;
      typedef Aws::Utils::Outcome<ListVolumesResult, Aws::StorageGateway::StorageGatewayError> ListVolumesOutcome;
      typedef Aws::Utils::Outcome<NotifyWhenUploadedResult, Aws::StorageGateway::StorageGatewayError> NotifyWhenUploadedOutcome;
      typedef Aws::Utils::Outcome<RefreshCacheResult, Aws::StorageGateway::StorageGatewayError> RefreshCacheOutcome;
      typedef Aws::Utils::Outcome<RemoveTagsFromResourceResult, Aws::StorageGateway::StorageGatewayError> RemoveTagsFromResourceOutcome;
      typedef Aws::Utils::Outcome<ResetCacheResult, Aws::StorageGateway::StorageGatewayError> ResetCacheOutcome;
      typedef Aws::Utils::Outcome<RetrieveTapeArchiveResult, Aws::StorageGateway::StorageGatewayError> RetrieveTapeArchiveOutcome;
      typedef Aws::Utils::Outcome<RetrieveTapeRecoveryPointResult, Aws::StorageGateway::StorageGatewayError> RetrieveTapeRecoveryPointOutcome;
      typedef Aws::Utils::Outcome<SetLocalConsolePasswordResult, Aws::StorageGateway::StorageGatewayError> SetLocalConsolePasswordOutcome;
      typedef Aws::Utils::Outcome<SetSMBGuestPasswordResult, Aws::StorageGateway::StorageGatewayError> SetSMBGuestPasswordOutcome;
      typedef Aws::Utils::Outcome<ShutdownGatewayResult, Aws::StorageGateway::StorageGatewayError> ShutdownGatewayOutcome;
      typedef Aws::Utils::Outcome<StartAvailabilityMonitorTestResult, Aws::StorageGateway::StorageGatewayError> StartAvailabilityMonitorTestOutcome;
      typedef Aws::Utils::Outcome<StartGatewayResult, Aws::StorageGateway::StorageGatewayError> StartGatewayOutcome;
      typedef Aws::Utils::Outcome<UpdateAutomaticTapeCreationPolicyResult, Aws::StorageGateway::StorageGatewayError> UpdateAutomaticTapeCreationPolicyOutcome;
      typedef Aws::Utils::Outcome<UpdateBandwidthRateLimitResult, Aws::StorageGateway::StorageGatewayError> UpdateBandwidthRateLimitOutcome;
      typedef Aws::Utils::Outcome<UpdateBandwidthRateLimitScheduleResult, Aws::StorageGateway::StorageGatewayError> UpdateBandwidthRateLimitScheduleOutcome;
      typedef Aws::Utils::Outcome<UpdateChapCredentialsResult, Aws::StorageGateway::StorageGatewayError> UpdateChapCredentialsOutcome;
      typedef Aws::Utils::Outcome<UpdateFileSystemAssociationResult, Aws::StorageGateway::StorageGatewayError> UpdateFileSystemAssociationOutcome;
      typedef Aws::Utils::Outcome<UpdateGatewayInformationResult, Aws::StorageGateway::StorageGatewayError> UpdateGatewayInformationOutcome;
      typedef Aws::Utils::Outcome<UpdateGatewaySoftwareNowResult, Aws::StorageGateway::StorageGatewayError> UpdateGatewaySoftwareNowOutcome;
      typedef Aws::Utils::Outcome<UpdateMaintenanceStartTimeResult, Aws::StorageGateway::StorageGatewayError> UpdateMaintenanceStartTimeOutcome;
      typedef Aws::Utils::Outcome<UpdateNFSFileShareResult, Aws::StorageGateway::StorageGatewayError> UpdateNFSFileShareOutcome;
      typedef Aws::Utils::Outcome<UpdateSMBFileShareResult, Aws::StorageGateway::StorageGatewayError> UpdateSMBFileShareOutcome;
      typedef Aws::Utils::Outcome<UpdateSMBFileShareVisibilityResult, Aws::StorageGateway::StorageGatewayError> UpdateSMBFileShareVisibilityOutcome;
      typedef Aws::Utils::Outcome<UpdateSMBLocalGroupsResult, Aws::StorageGateway::StorageGatewayError> UpdateSMBLocalGroupsOutcome;
      typedef Aws::Utils::Outcome<UpdateSMBSecurityStrategyResult, Aws::StorageGateway::StorageGatewayError> UpdateSMBSecurityStrategyOutcome;
      typedef Aws::Utils::Outcome<UpdateSnapshotScheduleResult, Aws::StorageGateway::StorageGatewayError> UpdateSnapshotScheduleOutcome;
      typedef Aws::Utils::Outcome<UpdateVTLDeviceTypeResult, Aws::StorageGateway::StorageGatewayError> UpdateVTLDeviceTypeOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<ActivateGatewayOutcome> ActivateGatewayOutcomeCallable;
      typedef std::future<AddCacheOutcome> AddCacheOutcomeCallable;
      typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
      typedef std::future<AddUploadBufferOutcome> AddUploadBufferOutcomeCallable;
      typedef std::future<AddWorkingStorageOutcome> AddWorkingStorageOutcomeCallable;
      typedef std::future<AssignTapePoolOutcome> AssignTapePoolOutcomeCallable;
      typedef std::future<AssociateFileSystemOutcome> AssociateFileSystemOutcomeCallable;
      typedef std::future<AttachVolumeOutcome> AttachVolumeOutcomeCallable;
      typedef std::future<CancelArchivalOutcome> CancelArchivalOutcomeCallable;
      typedef std::future<CancelRetrievalOutcome> CancelRetrievalOutcomeCallable;
      typedef std::future<CreateCachediSCSIVolumeOutcome> CreateCachediSCSIVolumeOutcomeCallable;
      typedef std::future<CreateNFSFileShareOutcome> CreateNFSFileShareOutcomeCallable;
      typedef std::future<CreateSMBFileShareOutcome> CreateSMBFileShareOutcomeCallable;
      typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
      typedef std::future<CreateSnapshotFromVolumeRecoveryPointOutcome> CreateSnapshotFromVolumeRecoveryPointOutcomeCallable;
      typedef std::future<CreateStorediSCSIVolumeOutcome> CreateStorediSCSIVolumeOutcomeCallable;
      typedef std::future<CreateTapePoolOutcome> CreateTapePoolOutcomeCallable;
      typedef std::future<CreateTapeWithBarcodeOutcome> CreateTapeWithBarcodeOutcomeCallable;
      typedef std::future<CreateTapesOutcome> CreateTapesOutcomeCallable;
      typedef std::future<DeleteAutomaticTapeCreationPolicyOutcome> DeleteAutomaticTapeCreationPolicyOutcomeCallable;
      typedef std::future<DeleteBandwidthRateLimitOutcome> DeleteBandwidthRateLimitOutcomeCallable;
      typedef std::future<DeleteChapCredentialsOutcome> DeleteChapCredentialsOutcomeCallable;
      typedef std::future<DeleteFileShareOutcome> DeleteFileShareOutcomeCallable;
      typedef std::future<DeleteGatewayOutcome> DeleteGatewayOutcomeCallable;
      typedef std::future<DeleteSnapshotScheduleOutcome> DeleteSnapshotScheduleOutcomeCallable;
      typedef std::future<DeleteTapeOutcome> DeleteTapeOutcomeCallable;
      typedef std::future<DeleteTapeArchiveOutcome> DeleteTapeArchiveOutcomeCallable;
      typedef std::future<DeleteTapePoolOutcome> DeleteTapePoolOutcomeCallable;
      typedef std::future<DeleteVolumeOutcome> DeleteVolumeOutcomeCallable;
      typedef std::future<DescribeAvailabilityMonitorTestOutcome> DescribeAvailabilityMonitorTestOutcomeCallable;
      typedef std::future<DescribeBandwidthRateLimitOutcome> DescribeBandwidthRateLimitOutcomeCallable;
      typedef std::future<DescribeBandwidthRateLimitScheduleOutcome> DescribeBandwidthRateLimitScheduleOutcomeCallable;
      typedef std::future<DescribeCacheOutcome> DescribeCacheOutcomeCallable;
      typedef std::future<DescribeCachediSCSIVolumesOutcome> DescribeCachediSCSIVolumesOutcomeCallable;
      typedef std::future<DescribeChapCredentialsOutcome> DescribeChapCredentialsOutcomeCallable;
      typedef std::future<DescribeFileSystemAssociationsOutcome> DescribeFileSystemAssociationsOutcomeCallable;
      typedef std::future<DescribeGatewayInformationOutcome> DescribeGatewayInformationOutcomeCallable;
      typedef std::future<DescribeMaintenanceStartTimeOutcome> DescribeMaintenanceStartTimeOutcomeCallable;
      typedef std::future<DescribeNFSFileSharesOutcome> DescribeNFSFileSharesOutcomeCallable;
      typedef std::future<DescribeSMBFileSharesOutcome> DescribeSMBFileSharesOutcomeCallable;
      typedef std::future<DescribeSMBSettingsOutcome> DescribeSMBSettingsOutcomeCallable;
      typedef std::future<DescribeSnapshotScheduleOutcome> DescribeSnapshotScheduleOutcomeCallable;
      typedef std::future<DescribeStorediSCSIVolumesOutcome> DescribeStorediSCSIVolumesOutcomeCallable;
      typedef std::future<DescribeTapeArchivesOutcome> DescribeTapeArchivesOutcomeCallable;
      typedef std::future<DescribeTapeRecoveryPointsOutcome> DescribeTapeRecoveryPointsOutcomeCallable;
      typedef std::future<DescribeTapesOutcome> DescribeTapesOutcomeCallable;
      typedef std::future<DescribeUploadBufferOutcome> DescribeUploadBufferOutcomeCallable;
      typedef std::future<DescribeVTLDevicesOutcome> DescribeVTLDevicesOutcomeCallable;
      typedef std::future<DescribeWorkingStorageOutcome> DescribeWorkingStorageOutcomeCallable;
      typedef std::future<DetachVolumeOutcome> DetachVolumeOutcomeCallable;
      typedef std::future<DisableGatewayOutcome> DisableGatewayOutcomeCallable;
      typedef std::future<DisassociateFileSystemOutcome> DisassociateFileSystemOutcomeCallable;
      typedef std::future<JoinDomainOutcome> JoinDomainOutcomeCallable;
      typedef std::future<ListAutomaticTapeCreationPoliciesOutcome> ListAutomaticTapeCreationPoliciesOutcomeCallable;
      typedef std::future<ListFileSharesOutcome> ListFileSharesOutcomeCallable;
      typedef std::future<ListFileSystemAssociationsOutcome> ListFileSystemAssociationsOutcomeCallable;
      typedef std::future<ListGatewaysOutcome> ListGatewaysOutcomeCallable;
      typedef std::future<ListLocalDisksOutcome> ListLocalDisksOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTapePoolsOutcome> ListTapePoolsOutcomeCallable;
      typedef std::future<ListTapesOutcome> ListTapesOutcomeCallable;
      typedef std::future<ListVolumeInitiatorsOutcome> ListVolumeInitiatorsOutcomeCallable;
      typedef std::future<ListVolumeRecoveryPointsOutcome> ListVolumeRecoveryPointsOutcomeCallable;
      typedef std::future<ListVolumesOutcome> ListVolumesOutcomeCallable;
      typedef std::future<NotifyWhenUploadedOutcome> NotifyWhenUploadedOutcomeCallable;
      typedef std::future<RefreshCacheOutcome> RefreshCacheOutcomeCallable;
      typedef std::future<RemoveTagsFromResourceOutcome> RemoveTagsFromResourceOutcomeCallable;
      typedef std::future<ResetCacheOutcome> ResetCacheOutcomeCallable;
      typedef std::future<RetrieveTapeArchiveOutcome> RetrieveTapeArchiveOutcomeCallable;
      typedef std::future<RetrieveTapeRecoveryPointOutcome> RetrieveTapeRecoveryPointOutcomeCallable;
      typedef std::future<SetLocalConsolePasswordOutcome> SetLocalConsolePasswordOutcomeCallable;
      typedef std::future<SetSMBGuestPasswordOutcome> SetSMBGuestPasswordOutcomeCallable;
      typedef std::future<ShutdownGatewayOutcome> ShutdownGatewayOutcomeCallable;
      typedef std::future<StartAvailabilityMonitorTestOutcome> StartAvailabilityMonitorTestOutcomeCallable;
      typedef std::future<StartGatewayOutcome> StartGatewayOutcomeCallable;
      typedef std::future<UpdateAutomaticTapeCreationPolicyOutcome> UpdateAutomaticTapeCreationPolicyOutcomeCallable;
      typedef std::future<UpdateBandwidthRateLimitOutcome> UpdateBandwidthRateLimitOutcomeCallable;
      typedef std::future<UpdateBandwidthRateLimitScheduleOutcome> UpdateBandwidthRateLimitScheduleOutcomeCallable;
      typedef std::future<UpdateChapCredentialsOutcome> UpdateChapCredentialsOutcomeCallable;
      typedef std::future<UpdateFileSystemAssociationOutcome> UpdateFileSystemAssociationOutcomeCallable;
      typedef std::future<UpdateGatewayInformationOutcome> UpdateGatewayInformationOutcomeCallable;
      typedef std::future<UpdateGatewaySoftwareNowOutcome> UpdateGatewaySoftwareNowOutcomeCallable;
      typedef std::future<UpdateMaintenanceStartTimeOutcome> UpdateMaintenanceStartTimeOutcomeCallable;
      typedef std::future<UpdateNFSFileShareOutcome> UpdateNFSFileShareOutcomeCallable;
      typedef std::future<UpdateSMBFileShareOutcome> UpdateSMBFileShareOutcomeCallable;
      typedef std::future<UpdateSMBFileShareVisibilityOutcome> UpdateSMBFileShareVisibilityOutcomeCallable;
      typedef std::future<UpdateSMBLocalGroupsOutcome> UpdateSMBLocalGroupsOutcomeCallable;
      typedef std::future<UpdateSMBSecurityStrategyOutcome> UpdateSMBSecurityStrategyOutcomeCallable;
      typedef std::future<UpdateSnapshotScheduleOutcome> UpdateSnapshotScheduleOutcomeCallable;
      typedef std::future<UpdateVTLDeviceTypeOutcome> UpdateVTLDeviceTypeOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class StorageGatewayClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const StorageGatewayClient*, const Model::ActivateGatewayRequest&, const Model::ActivateGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ActivateGatewayResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::AddCacheRequest&, const Model::AddCacheOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddCacheResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::AddTagsToResourceRequest&, const Model::AddTagsToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToResourceResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::AddUploadBufferRequest&, const Model::AddUploadBufferOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddUploadBufferResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::AddWorkingStorageRequest&, const Model::AddWorkingStorageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddWorkingStorageResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::AssignTapePoolRequest&, const Model::AssignTapePoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssignTapePoolResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::AssociateFileSystemRequest&, const Model::AssociateFileSystemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateFileSystemResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::AttachVolumeRequest&, const Model::AttachVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachVolumeResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::CancelArchivalRequest&, const Model::CancelArchivalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelArchivalResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::CancelRetrievalRequest&, const Model::CancelRetrievalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelRetrievalResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::CreateCachediSCSIVolumeRequest&, const Model::CreateCachediSCSIVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCachediSCSIVolumeResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::CreateNFSFileShareRequest&, const Model::CreateNFSFileShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNFSFileShareResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::CreateSMBFileShareRequest&, const Model::CreateSMBFileShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSMBFileShareResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::CreateSnapshotRequest&, const Model::CreateSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSnapshotResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::CreateSnapshotFromVolumeRecoveryPointRequest&, const Model::CreateSnapshotFromVolumeRecoveryPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSnapshotFromVolumeRecoveryPointResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::CreateStorediSCSIVolumeRequest&, const Model::CreateStorediSCSIVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStorediSCSIVolumeResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::CreateTapePoolRequest&, const Model::CreateTapePoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTapePoolResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::CreateTapeWithBarcodeRequest&, const Model::CreateTapeWithBarcodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTapeWithBarcodeResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::CreateTapesRequest&, const Model::CreateTapesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTapesResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DeleteAutomaticTapeCreationPolicyRequest&, const Model::DeleteAutomaticTapeCreationPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAutomaticTapeCreationPolicyResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DeleteBandwidthRateLimitRequest&, const Model::DeleteBandwidthRateLimitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBandwidthRateLimitResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DeleteChapCredentialsRequest&, const Model::DeleteChapCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChapCredentialsResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DeleteFileShareRequest&, const Model::DeleteFileShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFileShareResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DeleteGatewayRequest&, const Model::DeleteGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGatewayResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DeleteSnapshotScheduleRequest&, const Model::DeleteSnapshotScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSnapshotScheduleResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DeleteTapeRequest&, const Model::DeleteTapeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTapeResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DeleteTapeArchiveRequest&, const Model::DeleteTapeArchiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTapeArchiveResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DeleteTapePoolRequest&, const Model::DeleteTapePoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTapePoolResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DeleteVolumeRequest&, const Model::DeleteVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVolumeResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeAvailabilityMonitorTestRequest&, const Model::DescribeAvailabilityMonitorTestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAvailabilityMonitorTestResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeBandwidthRateLimitRequest&, const Model::DescribeBandwidthRateLimitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBandwidthRateLimitResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeBandwidthRateLimitScheduleRequest&, const Model::DescribeBandwidthRateLimitScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBandwidthRateLimitScheduleResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeCacheRequest&, const Model::DescribeCacheOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCacheResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeCachediSCSIVolumesRequest&, const Model::DescribeCachediSCSIVolumesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCachediSCSIVolumesResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeChapCredentialsRequest&, const Model::DescribeChapCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChapCredentialsResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeFileSystemAssociationsRequest&, const Model::DescribeFileSystemAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFileSystemAssociationsResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeGatewayInformationRequest&, const Model::DescribeGatewayInformationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGatewayInformationResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeMaintenanceStartTimeRequest&, const Model::DescribeMaintenanceStartTimeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMaintenanceStartTimeResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeNFSFileSharesRequest&, const Model::DescribeNFSFileSharesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNFSFileSharesResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeSMBFileSharesRequest&, const Model::DescribeSMBFileSharesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSMBFileSharesResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeSMBSettingsRequest&, const Model::DescribeSMBSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSMBSettingsResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeSnapshotScheduleRequest&, const Model::DescribeSnapshotScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSnapshotScheduleResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeStorediSCSIVolumesRequest&, const Model::DescribeStorediSCSIVolumesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStorediSCSIVolumesResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeTapeArchivesRequest&, const Model::DescribeTapeArchivesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTapeArchivesResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeTapeRecoveryPointsRequest&, const Model::DescribeTapeRecoveryPointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTapeRecoveryPointsResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeTapesRequest&, const Model::DescribeTapesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTapesResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeUploadBufferRequest&, const Model::DescribeUploadBufferOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUploadBufferResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeVTLDevicesRequest&, const Model::DescribeVTLDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVTLDevicesResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DescribeWorkingStorageRequest&, const Model::DescribeWorkingStorageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkingStorageResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DetachVolumeRequest&, const Model::DetachVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachVolumeResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DisableGatewayRequest&, const Model::DisableGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableGatewayResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::DisassociateFileSystemRequest&, const Model::DisassociateFileSystemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateFileSystemResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::JoinDomainRequest&, const Model::JoinDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > JoinDomainResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::ListAutomaticTapeCreationPoliciesRequest&, const Model::ListAutomaticTapeCreationPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAutomaticTapeCreationPoliciesResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::ListFileSharesRequest&, const Model::ListFileSharesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFileSharesResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::ListFileSystemAssociationsRequest&, const Model::ListFileSystemAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFileSystemAssociationsResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::ListGatewaysRequest&, const Model::ListGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGatewaysResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::ListLocalDisksRequest&, const Model::ListLocalDisksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLocalDisksResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::ListTapePoolsRequest&, const Model::ListTapePoolsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTapePoolsResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::ListTapesRequest&, const Model::ListTapesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTapesResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::ListVolumeInitiatorsRequest&, const Model::ListVolumeInitiatorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVolumeInitiatorsResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::ListVolumeRecoveryPointsRequest&, const Model::ListVolumeRecoveryPointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVolumeRecoveryPointsResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::ListVolumesRequest&, const Model::ListVolumesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVolumesResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::NotifyWhenUploadedRequest&, const Model::NotifyWhenUploadedOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > NotifyWhenUploadedResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::RefreshCacheRequest&, const Model::RefreshCacheOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RefreshCacheResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::RemoveTagsFromResourceRequest&, const Model::RemoveTagsFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromResourceResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::ResetCacheRequest&, const Model::ResetCacheOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetCacheResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::RetrieveTapeArchiveRequest&, const Model::RetrieveTapeArchiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RetrieveTapeArchiveResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::RetrieveTapeRecoveryPointRequest&, const Model::RetrieveTapeRecoveryPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RetrieveTapeRecoveryPointResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::SetLocalConsolePasswordRequest&, const Model::SetLocalConsolePasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetLocalConsolePasswordResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::SetSMBGuestPasswordRequest&, const Model::SetSMBGuestPasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetSMBGuestPasswordResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::ShutdownGatewayRequest&, const Model::ShutdownGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ShutdownGatewayResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::StartAvailabilityMonitorTestRequest&, const Model::StartAvailabilityMonitorTestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAvailabilityMonitorTestResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::StartGatewayRequest&, const Model::StartGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartGatewayResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::UpdateAutomaticTapeCreationPolicyRequest&, const Model::UpdateAutomaticTapeCreationPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAutomaticTapeCreationPolicyResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::UpdateBandwidthRateLimitRequest&, const Model::UpdateBandwidthRateLimitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBandwidthRateLimitResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::UpdateBandwidthRateLimitScheduleRequest&, const Model::UpdateBandwidthRateLimitScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBandwidthRateLimitScheduleResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::UpdateChapCredentialsRequest&, const Model::UpdateChapCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChapCredentialsResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::UpdateFileSystemAssociationRequest&, const Model::UpdateFileSystemAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFileSystemAssociationResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::UpdateGatewayInformationRequest&, const Model::UpdateGatewayInformationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGatewayInformationResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::UpdateGatewaySoftwareNowRequest&, const Model::UpdateGatewaySoftwareNowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGatewaySoftwareNowResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::UpdateMaintenanceStartTimeRequest&, const Model::UpdateMaintenanceStartTimeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMaintenanceStartTimeResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::UpdateNFSFileShareRequest&, const Model::UpdateNFSFileShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNFSFileShareResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::UpdateSMBFileShareRequest&, const Model::UpdateSMBFileShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSMBFileShareResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::UpdateSMBFileShareVisibilityRequest&, const Model::UpdateSMBFileShareVisibilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSMBFileShareVisibilityResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::UpdateSMBLocalGroupsRequest&, const Model::UpdateSMBLocalGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSMBLocalGroupsResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::UpdateSMBSecurityStrategyRequest&, const Model::UpdateSMBSecurityStrategyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSMBSecurityStrategyResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::UpdateSnapshotScheduleRequest&, const Model::UpdateSnapshotScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSnapshotScheduleResponseReceivedHandler;
    typedef std::function<void(const StorageGatewayClient*, const Model::UpdateVTLDeviceTypeRequest&, const Model::UpdateVTLDeviceTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVTLDeviceTypeResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace StorageGateway
} // namespace Aws
