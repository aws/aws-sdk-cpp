/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/ErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace StorageGateway
  {
    namespace Model
    {
      namespace ErrorCodeMapper
      {

        static constexpr uint32_t ActivationKeyExpired_HASH = ConstExprHashingUtils::HashString("ActivationKeyExpired");
        static constexpr uint32_t ActivationKeyInvalid_HASH = ConstExprHashingUtils::HashString("ActivationKeyInvalid");
        static constexpr uint32_t ActivationKeyNotFound_HASH = ConstExprHashingUtils::HashString("ActivationKeyNotFound");
        static constexpr uint32_t GatewayInternalError_HASH = ConstExprHashingUtils::HashString("GatewayInternalError");
        static constexpr uint32_t GatewayNotConnected_HASH = ConstExprHashingUtils::HashString("GatewayNotConnected");
        static constexpr uint32_t GatewayNotFound_HASH = ConstExprHashingUtils::HashString("GatewayNotFound");
        static constexpr uint32_t GatewayProxyNetworkConnectionBusy_HASH = ConstExprHashingUtils::HashString("GatewayProxyNetworkConnectionBusy");
        static constexpr uint32_t AuthenticationFailure_HASH = ConstExprHashingUtils::HashString("AuthenticationFailure");
        static constexpr uint32_t BandwidthThrottleScheduleNotFound_HASH = ConstExprHashingUtils::HashString("BandwidthThrottleScheduleNotFound");
        static constexpr uint32_t Blocked_HASH = ConstExprHashingUtils::HashString("Blocked");
        static constexpr uint32_t CannotExportSnapshot_HASH = ConstExprHashingUtils::HashString("CannotExportSnapshot");
        static constexpr uint32_t ChapCredentialNotFound_HASH = ConstExprHashingUtils::HashString("ChapCredentialNotFound");
        static constexpr uint32_t DiskAlreadyAllocated_HASH = ConstExprHashingUtils::HashString("DiskAlreadyAllocated");
        static constexpr uint32_t DiskDoesNotExist_HASH = ConstExprHashingUtils::HashString("DiskDoesNotExist");
        static constexpr uint32_t DiskSizeGreaterThanVolumeMaxSize_HASH = ConstExprHashingUtils::HashString("DiskSizeGreaterThanVolumeMaxSize");
        static constexpr uint32_t DiskSizeLessThanVolumeSize_HASH = ConstExprHashingUtils::HashString("DiskSizeLessThanVolumeSize");
        static constexpr uint32_t DiskSizeNotGigAligned_HASH = ConstExprHashingUtils::HashString("DiskSizeNotGigAligned");
        static constexpr uint32_t DuplicateCertificateInfo_HASH = ConstExprHashingUtils::HashString("DuplicateCertificateInfo");
        static constexpr uint32_t DuplicateSchedule_HASH = ConstExprHashingUtils::HashString("DuplicateSchedule");
        static constexpr uint32_t EndpointNotFound_HASH = ConstExprHashingUtils::HashString("EndpointNotFound");
        static constexpr uint32_t IAMNotSupported_HASH = ConstExprHashingUtils::HashString("IAMNotSupported");
        static constexpr uint32_t InitiatorInvalid_HASH = ConstExprHashingUtils::HashString("InitiatorInvalid");
        static constexpr uint32_t InitiatorNotFound_HASH = ConstExprHashingUtils::HashString("InitiatorNotFound");
        static constexpr uint32_t InternalError_HASH = ConstExprHashingUtils::HashString("InternalError");
        static constexpr uint32_t InvalidGateway_HASH = ConstExprHashingUtils::HashString("InvalidGateway");
        static constexpr uint32_t InvalidEndpoint_HASH = ConstExprHashingUtils::HashString("InvalidEndpoint");
        static constexpr uint32_t InvalidParameters_HASH = ConstExprHashingUtils::HashString("InvalidParameters");
        static constexpr uint32_t InvalidSchedule_HASH = ConstExprHashingUtils::HashString("InvalidSchedule");
        static constexpr uint32_t LocalStorageLimitExceeded_HASH = ConstExprHashingUtils::HashString("LocalStorageLimitExceeded");
        static constexpr uint32_t LunAlreadyAllocated_HASH = ConstExprHashingUtils::HashString("LunAlreadyAllocated ");
        static constexpr uint32_t LunInvalid_HASH = ConstExprHashingUtils::HashString("LunInvalid");
        static constexpr uint32_t JoinDomainInProgress_HASH = ConstExprHashingUtils::HashString("JoinDomainInProgress");
        static constexpr uint32_t MaximumContentLengthExceeded_HASH = ConstExprHashingUtils::HashString("MaximumContentLengthExceeded");
        static constexpr uint32_t MaximumTapeCartridgeCountExceeded_HASH = ConstExprHashingUtils::HashString("MaximumTapeCartridgeCountExceeded");
        static constexpr uint32_t MaximumVolumeCountExceeded_HASH = ConstExprHashingUtils::HashString("MaximumVolumeCountExceeded");
        static constexpr uint32_t NetworkConfigurationChanged_HASH = ConstExprHashingUtils::HashString("NetworkConfigurationChanged");
        static constexpr uint32_t NoDisksAvailable_HASH = ConstExprHashingUtils::HashString("NoDisksAvailable");
        static constexpr uint32_t NotImplemented_HASH = ConstExprHashingUtils::HashString("NotImplemented");
        static constexpr uint32_t NotSupported_HASH = ConstExprHashingUtils::HashString("NotSupported");
        static constexpr uint32_t OperationAborted_HASH = ConstExprHashingUtils::HashString("OperationAborted");
        static constexpr uint32_t OutdatedGateway_HASH = ConstExprHashingUtils::HashString("OutdatedGateway");
        static constexpr uint32_t ParametersNotImplemented_HASH = ConstExprHashingUtils::HashString("ParametersNotImplemented");
        static constexpr uint32_t RegionInvalid_HASH = ConstExprHashingUtils::HashString("RegionInvalid");
        static constexpr uint32_t RequestTimeout_HASH = ConstExprHashingUtils::HashString("RequestTimeout");
        static constexpr uint32_t ServiceUnavailable_HASH = ConstExprHashingUtils::HashString("ServiceUnavailable");
        static constexpr uint32_t SnapshotDeleted_HASH = ConstExprHashingUtils::HashString("SnapshotDeleted");
        static constexpr uint32_t SnapshotIdInvalid_HASH = ConstExprHashingUtils::HashString("SnapshotIdInvalid");
        static constexpr uint32_t SnapshotInProgress_HASH = ConstExprHashingUtils::HashString("SnapshotInProgress");
        static constexpr uint32_t SnapshotNotFound_HASH = ConstExprHashingUtils::HashString("SnapshotNotFound");
        static constexpr uint32_t SnapshotScheduleNotFound_HASH = ConstExprHashingUtils::HashString("SnapshotScheduleNotFound");
        static constexpr uint32_t StagingAreaFull_HASH = ConstExprHashingUtils::HashString("StagingAreaFull");
        static constexpr uint32_t StorageFailure_HASH = ConstExprHashingUtils::HashString("StorageFailure");
        static constexpr uint32_t TapeCartridgeNotFound_HASH = ConstExprHashingUtils::HashString("TapeCartridgeNotFound");
        static constexpr uint32_t TargetAlreadyExists_HASH = ConstExprHashingUtils::HashString("TargetAlreadyExists");
        static constexpr uint32_t TargetInvalid_HASH = ConstExprHashingUtils::HashString("TargetInvalid");
        static constexpr uint32_t TargetNotFound_HASH = ConstExprHashingUtils::HashString("TargetNotFound");
        static constexpr uint32_t UnauthorizedOperation_HASH = ConstExprHashingUtils::HashString("UnauthorizedOperation");
        static constexpr uint32_t VolumeAlreadyExists_HASH = ConstExprHashingUtils::HashString("VolumeAlreadyExists");
        static constexpr uint32_t VolumeIdInvalid_HASH = ConstExprHashingUtils::HashString("VolumeIdInvalid");
        static constexpr uint32_t VolumeInUse_HASH = ConstExprHashingUtils::HashString("VolumeInUse");
        static constexpr uint32_t VolumeNotFound_HASH = ConstExprHashingUtils::HashString("VolumeNotFound");
        static constexpr uint32_t VolumeNotReady_HASH = ConstExprHashingUtils::HashString("VolumeNotReady");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ActivationKeyExpired_HASH)
          {
            return ErrorCode::ActivationKeyExpired;
          }
          else if (hashCode == ActivationKeyInvalid_HASH)
          {
            return ErrorCode::ActivationKeyInvalid;
          }
          else if (hashCode == ActivationKeyNotFound_HASH)
          {
            return ErrorCode::ActivationKeyNotFound;
          }
          else if (hashCode == GatewayInternalError_HASH)
          {
            return ErrorCode::GatewayInternalError;
          }
          else if (hashCode == GatewayNotConnected_HASH)
          {
            return ErrorCode::GatewayNotConnected;
          }
          else if (hashCode == GatewayNotFound_HASH)
          {
            return ErrorCode::GatewayNotFound;
          }
          else if (hashCode == GatewayProxyNetworkConnectionBusy_HASH)
          {
            return ErrorCode::GatewayProxyNetworkConnectionBusy;
          }
          else if (hashCode == AuthenticationFailure_HASH)
          {
            return ErrorCode::AuthenticationFailure;
          }
          else if (hashCode == BandwidthThrottleScheduleNotFound_HASH)
          {
            return ErrorCode::BandwidthThrottleScheduleNotFound;
          }
          else if (hashCode == Blocked_HASH)
          {
            return ErrorCode::Blocked;
          }
          else if (hashCode == CannotExportSnapshot_HASH)
          {
            return ErrorCode::CannotExportSnapshot;
          }
          else if (hashCode == ChapCredentialNotFound_HASH)
          {
            return ErrorCode::ChapCredentialNotFound;
          }
          else if (hashCode == DiskAlreadyAllocated_HASH)
          {
            return ErrorCode::DiskAlreadyAllocated;
          }
          else if (hashCode == DiskDoesNotExist_HASH)
          {
            return ErrorCode::DiskDoesNotExist;
          }
          else if (hashCode == DiskSizeGreaterThanVolumeMaxSize_HASH)
          {
            return ErrorCode::DiskSizeGreaterThanVolumeMaxSize;
          }
          else if (hashCode == DiskSizeLessThanVolumeSize_HASH)
          {
            return ErrorCode::DiskSizeLessThanVolumeSize;
          }
          else if (hashCode == DiskSizeNotGigAligned_HASH)
          {
            return ErrorCode::DiskSizeNotGigAligned;
          }
          else if (hashCode == DuplicateCertificateInfo_HASH)
          {
            return ErrorCode::DuplicateCertificateInfo;
          }
          else if (hashCode == DuplicateSchedule_HASH)
          {
            return ErrorCode::DuplicateSchedule;
          }
          else if (hashCode == EndpointNotFound_HASH)
          {
            return ErrorCode::EndpointNotFound;
          }
          else if (hashCode == IAMNotSupported_HASH)
          {
            return ErrorCode::IAMNotSupported;
          }
          else if (hashCode == InitiatorInvalid_HASH)
          {
            return ErrorCode::InitiatorInvalid;
          }
          else if (hashCode == InitiatorNotFound_HASH)
          {
            return ErrorCode::InitiatorNotFound;
          }
          else if (hashCode == InternalError_HASH)
          {
            return ErrorCode::InternalError;
          }
          else if (hashCode == InvalidGateway_HASH)
          {
            return ErrorCode::InvalidGateway;
          }
          else if (hashCode == InvalidEndpoint_HASH)
          {
            return ErrorCode::InvalidEndpoint;
          }
          else if (hashCode == InvalidParameters_HASH)
          {
            return ErrorCode::InvalidParameters;
          }
          else if (hashCode == InvalidSchedule_HASH)
          {
            return ErrorCode::InvalidSchedule;
          }
          else if (hashCode == LocalStorageLimitExceeded_HASH)
          {
            return ErrorCode::LocalStorageLimitExceeded;
          }
          else if (hashCode == LunAlreadyAllocated_HASH)
          {
            return ErrorCode::LunAlreadyAllocated;
          }
          else if (hashCode == LunInvalid_HASH)
          {
            return ErrorCode::LunInvalid;
          }
          else if (hashCode == JoinDomainInProgress_HASH)
          {
            return ErrorCode::JoinDomainInProgress;
          }
          else if (hashCode == MaximumContentLengthExceeded_HASH)
          {
            return ErrorCode::MaximumContentLengthExceeded;
          }
          else if (hashCode == MaximumTapeCartridgeCountExceeded_HASH)
          {
            return ErrorCode::MaximumTapeCartridgeCountExceeded;
          }
          else if (hashCode == MaximumVolumeCountExceeded_HASH)
          {
            return ErrorCode::MaximumVolumeCountExceeded;
          }
          else if (hashCode == NetworkConfigurationChanged_HASH)
          {
            return ErrorCode::NetworkConfigurationChanged;
          }
          else if (hashCode == NoDisksAvailable_HASH)
          {
            return ErrorCode::NoDisksAvailable;
          }
          else if (hashCode == NotImplemented_HASH)
          {
            return ErrorCode::NotImplemented;
          }
          else if (hashCode == NotSupported_HASH)
          {
            return ErrorCode::NotSupported;
          }
          else if (hashCode == OperationAborted_HASH)
          {
            return ErrorCode::OperationAborted;
          }
          else if (hashCode == OutdatedGateway_HASH)
          {
            return ErrorCode::OutdatedGateway;
          }
          else if (hashCode == ParametersNotImplemented_HASH)
          {
            return ErrorCode::ParametersNotImplemented;
          }
          else if (hashCode == RegionInvalid_HASH)
          {
            return ErrorCode::RegionInvalid;
          }
          else if (hashCode == RequestTimeout_HASH)
          {
            return ErrorCode::RequestTimeout;
          }
          else if (hashCode == ServiceUnavailable_HASH)
          {
            return ErrorCode::ServiceUnavailable;
          }
          else if (hashCode == SnapshotDeleted_HASH)
          {
            return ErrorCode::SnapshotDeleted;
          }
          else if (hashCode == SnapshotIdInvalid_HASH)
          {
            return ErrorCode::SnapshotIdInvalid;
          }
          else if (hashCode == SnapshotInProgress_HASH)
          {
            return ErrorCode::SnapshotInProgress;
          }
          else if (hashCode == SnapshotNotFound_HASH)
          {
            return ErrorCode::SnapshotNotFound;
          }
          else if (hashCode == SnapshotScheduleNotFound_HASH)
          {
            return ErrorCode::SnapshotScheduleNotFound;
          }
          else if (hashCode == StagingAreaFull_HASH)
          {
            return ErrorCode::StagingAreaFull;
          }
          else if (hashCode == StorageFailure_HASH)
          {
            return ErrorCode::StorageFailure;
          }
          else if (hashCode == TapeCartridgeNotFound_HASH)
          {
            return ErrorCode::TapeCartridgeNotFound;
          }
          else if (hashCode == TargetAlreadyExists_HASH)
          {
            return ErrorCode::TargetAlreadyExists;
          }
          else if (hashCode == TargetInvalid_HASH)
          {
            return ErrorCode::TargetInvalid;
          }
          else if (hashCode == TargetNotFound_HASH)
          {
            return ErrorCode::TargetNotFound;
          }
          else if (hashCode == UnauthorizedOperation_HASH)
          {
            return ErrorCode::UnauthorizedOperation;
          }
          else if (hashCode == VolumeAlreadyExists_HASH)
          {
            return ErrorCode::VolumeAlreadyExists;
          }
          else if (hashCode == VolumeIdInvalid_HASH)
          {
            return ErrorCode::VolumeIdInvalid;
          }
          else if (hashCode == VolumeInUse_HASH)
          {
            return ErrorCode::VolumeInUse;
          }
          else if (hashCode == VolumeNotFound_HASH)
          {
            return ErrorCode::VolumeNotFound;
          }
          else if (hashCode == VolumeNotReady_HASH)
          {
            return ErrorCode::VolumeNotReady;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ErrorCode>(hashCode);
          }

          return ErrorCode::NOT_SET;
        }

        Aws::String GetNameForErrorCode(ErrorCode enumValue)
        {
          switch(enumValue)
          {
          case ErrorCode::NOT_SET:
            return {};
          case ErrorCode::ActivationKeyExpired:
            return "ActivationKeyExpired";
          case ErrorCode::ActivationKeyInvalid:
            return "ActivationKeyInvalid";
          case ErrorCode::ActivationKeyNotFound:
            return "ActivationKeyNotFound";
          case ErrorCode::GatewayInternalError:
            return "GatewayInternalError";
          case ErrorCode::GatewayNotConnected:
            return "GatewayNotConnected";
          case ErrorCode::GatewayNotFound:
            return "GatewayNotFound";
          case ErrorCode::GatewayProxyNetworkConnectionBusy:
            return "GatewayProxyNetworkConnectionBusy";
          case ErrorCode::AuthenticationFailure:
            return "AuthenticationFailure";
          case ErrorCode::BandwidthThrottleScheduleNotFound:
            return "BandwidthThrottleScheduleNotFound";
          case ErrorCode::Blocked:
            return "Blocked";
          case ErrorCode::CannotExportSnapshot:
            return "CannotExportSnapshot";
          case ErrorCode::ChapCredentialNotFound:
            return "ChapCredentialNotFound";
          case ErrorCode::DiskAlreadyAllocated:
            return "DiskAlreadyAllocated";
          case ErrorCode::DiskDoesNotExist:
            return "DiskDoesNotExist";
          case ErrorCode::DiskSizeGreaterThanVolumeMaxSize:
            return "DiskSizeGreaterThanVolumeMaxSize";
          case ErrorCode::DiskSizeLessThanVolumeSize:
            return "DiskSizeLessThanVolumeSize";
          case ErrorCode::DiskSizeNotGigAligned:
            return "DiskSizeNotGigAligned";
          case ErrorCode::DuplicateCertificateInfo:
            return "DuplicateCertificateInfo";
          case ErrorCode::DuplicateSchedule:
            return "DuplicateSchedule";
          case ErrorCode::EndpointNotFound:
            return "EndpointNotFound";
          case ErrorCode::IAMNotSupported:
            return "IAMNotSupported";
          case ErrorCode::InitiatorInvalid:
            return "InitiatorInvalid";
          case ErrorCode::InitiatorNotFound:
            return "InitiatorNotFound";
          case ErrorCode::InternalError:
            return "InternalError";
          case ErrorCode::InvalidGateway:
            return "InvalidGateway";
          case ErrorCode::InvalidEndpoint:
            return "InvalidEndpoint";
          case ErrorCode::InvalidParameters:
            return "InvalidParameters";
          case ErrorCode::InvalidSchedule:
            return "InvalidSchedule";
          case ErrorCode::LocalStorageLimitExceeded:
            return "LocalStorageLimitExceeded";
          case ErrorCode::LunAlreadyAllocated:
            return "LunAlreadyAllocated ";
          case ErrorCode::LunInvalid:
            return "LunInvalid";
          case ErrorCode::JoinDomainInProgress:
            return "JoinDomainInProgress";
          case ErrorCode::MaximumContentLengthExceeded:
            return "MaximumContentLengthExceeded";
          case ErrorCode::MaximumTapeCartridgeCountExceeded:
            return "MaximumTapeCartridgeCountExceeded";
          case ErrorCode::MaximumVolumeCountExceeded:
            return "MaximumVolumeCountExceeded";
          case ErrorCode::NetworkConfigurationChanged:
            return "NetworkConfigurationChanged";
          case ErrorCode::NoDisksAvailable:
            return "NoDisksAvailable";
          case ErrorCode::NotImplemented:
            return "NotImplemented";
          case ErrorCode::NotSupported:
            return "NotSupported";
          case ErrorCode::OperationAborted:
            return "OperationAborted";
          case ErrorCode::OutdatedGateway:
            return "OutdatedGateway";
          case ErrorCode::ParametersNotImplemented:
            return "ParametersNotImplemented";
          case ErrorCode::RegionInvalid:
            return "RegionInvalid";
          case ErrorCode::RequestTimeout:
            return "RequestTimeout";
          case ErrorCode::ServiceUnavailable:
            return "ServiceUnavailable";
          case ErrorCode::SnapshotDeleted:
            return "SnapshotDeleted";
          case ErrorCode::SnapshotIdInvalid:
            return "SnapshotIdInvalid";
          case ErrorCode::SnapshotInProgress:
            return "SnapshotInProgress";
          case ErrorCode::SnapshotNotFound:
            return "SnapshotNotFound";
          case ErrorCode::SnapshotScheduleNotFound:
            return "SnapshotScheduleNotFound";
          case ErrorCode::StagingAreaFull:
            return "StagingAreaFull";
          case ErrorCode::StorageFailure:
            return "StorageFailure";
          case ErrorCode::TapeCartridgeNotFound:
            return "TapeCartridgeNotFound";
          case ErrorCode::TargetAlreadyExists:
            return "TargetAlreadyExists";
          case ErrorCode::TargetInvalid:
            return "TargetInvalid";
          case ErrorCode::TargetNotFound:
            return "TargetNotFound";
          case ErrorCode::UnauthorizedOperation:
            return "UnauthorizedOperation";
          case ErrorCode::VolumeAlreadyExists:
            return "VolumeAlreadyExists";
          case ErrorCode::VolumeIdInvalid:
            return "VolumeIdInvalid";
          case ErrorCode::VolumeInUse:
            return "VolumeInUse";
          case ErrorCode::VolumeNotFound:
            return "VolumeNotFound";
          case ErrorCode::VolumeNotReady:
            return "VolumeNotReady";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ErrorCodeMapper
    } // namespace Model
  } // namespace StorageGateway
} // namespace Aws
