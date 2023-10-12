/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/SimulationJobErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RoboMaker
  {
    namespace Model
    {
      namespace SimulationJobErrorCodeMapper
      {

        static constexpr uint32_t InternalServiceError_HASH = ConstExprHashingUtils::HashString("InternalServiceError");
        static constexpr uint32_t RobotApplicationCrash_HASH = ConstExprHashingUtils::HashString("RobotApplicationCrash");
        static constexpr uint32_t SimulationApplicationCrash_HASH = ConstExprHashingUtils::HashString("SimulationApplicationCrash");
        static constexpr uint32_t RobotApplicationHealthCheckFailure_HASH = ConstExprHashingUtils::HashString("RobotApplicationHealthCheckFailure");
        static constexpr uint32_t SimulationApplicationHealthCheckFailure_HASH = ConstExprHashingUtils::HashString("SimulationApplicationHealthCheckFailure");
        static constexpr uint32_t BadPermissionsRobotApplication_HASH = ConstExprHashingUtils::HashString("BadPermissionsRobotApplication");
        static constexpr uint32_t BadPermissionsSimulationApplication_HASH = ConstExprHashingUtils::HashString("BadPermissionsSimulationApplication");
        static constexpr uint32_t BadPermissionsS3Object_HASH = ConstExprHashingUtils::HashString("BadPermissionsS3Object");
        static constexpr uint32_t BadPermissionsS3Output_HASH = ConstExprHashingUtils::HashString("BadPermissionsS3Output");
        static constexpr uint32_t BadPermissionsCloudwatchLogs_HASH = ConstExprHashingUtils::HashString("BadPermissionsCloudwatchLogs");
        static constexpr uint32_t SubnetIpLimitExceeded_HASH = ConstExprHashingUtils::HashString("SubnetIpLimitExceeded");
        static constexpr uint32_t ENILimitExceeded_HASH = ConstExprHashingUtils::HashString("ENILimitExceeded");
        static constexpr uint32_t BadPermissionsUserCredentials_HASH = ConstExprHashingUtils::HashString("BadPermissionsUserCredentials");
        static constexpr uint32_t InvalidBundleRobotApplication_HASH = ConstExprHashingUtils::HashString("InvalidBundleRobotApplication");
        static constexpr uint32_t InvalidBundleSimulationApplication_HASH = ConstExprHashingUtils::HashString("InvalidBundleSimulationApplication");
        static constexpr uint32_t InvalidS3Resource_HASH = ConstExprHashingUtils::HashString("InvalidS3Resource");
        static constexpr uint32_t ThrottlingError_HASH = ConstExprHashingUtils::HashString("ThrottlingError");
        static constexpr uint32_t LimitExceeded_HASH = ConstExprHashingUtils::HashString("LimitExceeded");
        static constexpr uint32_t MismatchedEtag_HASH = ConstExprHashingUtils::HashString("MismatchedEtag");
        static constexpr uint32_t RobotApplicationVersionMismatchedEtag_HASH = ConstExprHashingUtils::HashString("RobotApplicationVersionMismatchedEtag");
        static constexpr uint32_t SimulationApplicationVersionMismatchedEtag_HASH = ConstExprHashingUtils::HashString("SimulationApplicationVersionMismatchedEtag");
        static constexpr uint32_t ResourceNotFound_HASH = ConstExprHashingUtils::HashString("ResourceNotFound");
        static constexpr uint32_t RequestThrottled_HASH = ConstExprHashingUtils::HashString("RequestThrottled");
        static constexpr uint32_t BatchTimedOut_HASH = ConstExprHashingUtils::HashString("BatchTimedOut");
        static constexpr uint32_t BatchCanceled_HASH = ConstExprHashingUtils::HashString("BatchCanceled");
        static constexpr uint32_t InvalidInput_HASH = ConstExprHashingUtils::HashString("InvalidInput");
        static constexpr uint32_t WrongRegionS3Bucket_HASH = ConstExprHashingUtils::HashString("WrongRegionS3Bucket");
        static constexpr uint32_t WrongRegionS3Output_HASH = ConstExprHashingUtils::HashString("WrongRegionS3Output");
        static constexpr uint32_t WrongRegionRobotApplication_HASH = ConstExprHashingUtils::HashString("WrongRegionRobotApplication");
        static constexpr uint32_t WrongRegionSimulationApplication_HASH = ConstExprHashingUtils::HashString("WrongRegionSimulationApplication");
        static constexpr uint32_t UploadContentMismatchError_HASH = ConstExprHashingUtils::HashString("UploadContentMismatchError");


        SimulationJobErrorCode GetSimulationJobErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InternalServiceError_HASH)
          {
            return SimulationJobErrorCode::InternalServiceError;
          }
          else if (hashCode == RobotApplicationCrash_HASH)
          {
            return SimulationJobErrorCode::RobotApplicationCrash;
          }
          else if (hashCode == SimulationApplicationCrash_HASH)
          {
            return SimulationJobErrorCode::SimulationApplicationCrash;
          }
          else if (hashCode == RobotApplicationHealthCheckFailure_HASH)
          {
            return SimulationJobErrorCode::RobotApplicationHealthCheckFailure;
          }
          else if (hashCode == SimulationApplicationHealthCheckFailure_HASH)
          {
            return SimulationJobErrorCode::SimulationApplicationHealthCheckFailure;
          }
          else if (hashCode == BadPermissionsRobotApplication_HASH)
          {
            return SimulationJobErrorCode::BadPermissionsRobotApplication;
          }
          else if (hashCode == BadPermissionsSimulationApplication_HASH)
          {
            return SimulationJobErrorCode::BadPermissionsSimulationApplication;
          }
          else if (hashCode == BadPermissionsS3Object_HASH)
          {
            return SimulationJobErrorCode::BadPermissionsS3Object;
          }
          else if (hashCode == BadPermissionsS3Output_HASH)
          {
            return SimulationJobErrorCode::BadPermissionsS3Output;
          }
          else if (hashCode == BadPermissionsCloudwatchLogs_HASH)
          {
            return SimulationJobErrorCode::BadPermissionsCloudwatchLogs;
          }
          else if (hashCode == SubnetIpLimitExceeded_HASH)
          {
            return SimulationJobErrorCode::SubnetIpLimitExceeded;
          }
          else if (hashCode == ENILimitExceeded_HASH)
          {
            return SimulationJobErrorCode::ENILimitExceeded;
          }
          else if (hashCode == BadPermissionsUserCredentials_HASH)
          {
            return SimulationJobErrorCode::BadPermissionsUserCredentials;
          }
          else if (hashCode == InvalidBundleRobotApplication_HASH)
          {
            return SimulationJobErrorCode::InvalidBundleRobotApplication;
          }
          else if (hashCode == InvalidBundleSimulationApplication_HASH)
          {
            return SimulationJobErrorCode::InvalidBundleSimulationApplication;
          }
          else if (hashCode == InvalidS3Resource_HASH)
          {
            return SimulationJobErrorCode::InvalidS3Resource;
          }
          else if (hashCode == ThrottlingError_HASH)
          {
            return SimulationJobErrorCode::ThrottlingError;
          }
          else if (hashCode == LimitExceeded_HASH)
          {
            return SimulationJobErrorCode::LimitExceeded;
          }
          else if (hashCode == MismatchedEtag_HASH)
          {
            return SimulationJobErrorCode::MismatchedEtag;
          }
          else if (hashCode == RobotApplicationVersionMismatchedEtag_HASH)
          {
            return SimulationJobErrorCode::RobotApplicationVersionMismatchedEtag;
          }
          else if (hashCode == SimulationApplicationVersionMismatchedEtag_HASH)
          {
            return SimulationJobErrorCode::SimulationApplicationVersionMismatchedEtag;
          }
          else if (hashCode == ResourceNotFound_HASH)
          {
            return SimulationJobErrorCode::ResourceNotFound;
          }
          else if (hashCode == RequestThrottled_HASH)
          {
            return SimulationJobErrorCode::RequestThrottled;
          }
          else if (hashCode == BatchTimedOut_HASH)
          {
            return SimulationJobErrorCode::BatchTimedOut;
          }
          else if (hashCode == BatchCanceled_HASH)
          {
            return SimulationJobErrorCode::BatchCanceled;
          }
          else if (hashCode == InvalidInput_HASH)
          {
            return SimulationJobErrorCode::InvalidInput;
          }
          else if (hashCode == WrongRegionS3Bucket_HASH)
          {
            return SimulationJobErrorCode::WrongRegionS3Bucket;
          }
          else if (hashCode == WrongRegionS3Output_HASH)
          {
            return SimulationJobErrorCode::WrongRegionS3Output;
          }
          else if (hashCode == WrongRegionRobotApplication_HASH)
          {
            return SimulationJobErrorCode::WrongRegionRobotApplication;
          }
          else if (hashCode == WrongRegionSimulationApplication_HASH)
          {
            return SimulationJobErrorCode::WrongRegionSimulationApplication;
          }
          else if (hashCode == UploadContentMismatchError_HASH)
          {
            return SimulationJobErrorCode::UploadContentMismatchError;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SimulationJobErrorCode>(hashCode);
          }

          return SimulationJobErrorCode::NOT_SET;
        }

        Aws::String GetNameForSimulationJobErrorCode(SimulationJobErrorCode enumValue)
        {
          switch(enumValue)
          {
          case SimulationJobErrorCode::NOT_SET:
            return {};
          case SimulationJobErrorCode::InternalServiceError:
            return "InternalServiceError";
          case SimulationJobErrorCode::RobotApplicationCrash:
            return "RobotApplicationCrash";
          case SimulationJobErrorCode::SimulationApplicationCrash:
            return "SimulationApplicationCrash";
          case SimulationJobErrorCode::RobotApplicationHealthCheckFailure:
            return "RobotApplicationHealthCheckFailure";
          case SimulationJobErrorCode::SimulationApplicationHealthCheckFailure:
            return "SimulationApplicationHealthCheckFailure";
          case SimulationJobErrorCode::BadPermissionsRobotApplication:
            return "BadPermissionsRobotApplication";
          case SimulationJobErrorCode::BadPermissionsSimulationApplication:
            return "BadPermissionsSimulationApplication";
          case SimulationJobErrorCode::BadPermissionsS3Object:
            return "BadPermissionsS3Object";
          case SimulationJobErrorCode::BadPermissionsS3Output:
            return "BadPermissionsS3Output";
          case SimulationJobErrorCode::BadPermissionsCloudwatchLogs:
            return "BadPermissionsCloudwatchLogs";
          case SimulationJobErrorCode::SubnetIpLimitExceeded:
            return "SubnetIpLimitExceeded";
          case SimulationJobErrorCode::ENILimitExceeded:
            return "ENILimitExceeded";
          case SimulationJobErrorCode::BadPermissionsUserCredentials:
            return "BadPermissionsUserCredentials";
          case SimulationJobErrorCode::InvalidBundleRobotApplication:
            return "InvalidBundleRobotApplication";
          case SimulationJobErrorCode::InvalidBundleSimulationApplication:
            return "InvalidBundleSimulationApplication";
          case SimulationJobErrorCode::InvalidS3Resource:
            return "InvalidS3Resource";
          case SimulationJobErrorCode::ThrottlingError:
            return "ThrottlingError";
          case SimulationJobErrorCode::LimitExceeded:
            return "LimitExceeded";
          case SimulationJobErrorCode::MismatchedEtag:
            return "MismatchedEtag";
          case SimulationJobErrorCode::RobotApplicationVersionMismatchedEtag:
            return "RobotApplicationVersionMismatchedEtag";
          case SimulationJobErrorCode::SimulationApplicationVersionMismatchedEtag:
            return "SimulationApplicationVersionMismatchedEtag";
          case SimulationJobErrorCode::ResourceNotFound:
            return "ResourceNotFound";
          case SimulationJobErrorCode::RequestThrottled:
            return "RequestThrottled";
          case SimulationJobErrorCode::BatchTimedOut:
            return "BatchTimedOut";
          case SimulationJobErrorCode::BatchCanceled:
            return "BatchCanceled";
          case SimulationJobErrorCode::InvalidInput:
            return "InvalidInput";
          case SimulationJobErrorCode::WrongRegionS3Bucket:
            return "WrongRegionS3Bucket";
          case SimulationJobErrorCode::WrongRegionS3Output:
            return "WrongRegionS3Output";
          case SimulationJobErrorCode::WrongRegionRobotApplication:
            return "WrongRegionRobotApplication";
          case SimulationJobErrorCode::WrongRegionSimulationApplication:
            return "WrongRegionSimulationApplication";
          case SimulationJobErrorCode::UploadContentMismatchError:
            return "UploadContentMismatchError";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SimulationJobErrorCodeMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws
