/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/DeploymentJobErrorCode.h>
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
      namespace DeploymentJobErrorCodeMapper
      {

        static constexpr uint32_t ResourceNotFound_HASH = ConstExprHashingUtils::HashString("ResourceNotFound");
        static constexpr uint32_t EnvironmentSetupError_HASH = ConstExprHashingUtils::HashString("EnvironmentSetupError");
        static constexpr uint32_t EtagMismatch_HASH = ConstExprHashingUtils::HashString("EtagMismatch");
        static constexpr uint32_t FailureThresholdBreached_HASH = ConstExprHashingUtils::HashString("FailureThresholdBreached");
        static constexpr uint32_t RobotDeploymentAborted_HASH = ConstExprHashingUtils::HashString("RobotDeploymentAborted");
        static constexpr uint32_t RobotDeploymentNoResponse_HASH = ConstExprHashingUtils::HashString("RobotDeploymentNoResponse");
        static constexpr uint32_t RobotAgentConnectionTimeout_HASH = ConstExprHashingUtils::HashString("RobotAgentConnectionTimeout");
        static constexpr uint32_t GreengrassDeploymentFailed_HASH = ConstExprHashingUtils::HashString("GreengrassDeploymentFailed");
        static constexpr uint32_t InvalidGreengrassGroup_HASH = ConstExprHashingUtils::HashString("InvalidGreengrassGroup");
        static constexpr uint32_t MissingRobotArchitecture_HASH = ConstExprHashingUtils::HashString("MissingRobotArchitecture");
        static constexpr uint32_t MissingRobotApplicationArchitecture_HASH = ConstExprHashingUtils::HashString("MissingRobotApplicationArchitecture");
        static constexpr uint32_t MissingRobotDeploymentResource_HASH = ConstExprHashingUtils::HashString("MissingRobotDeploymentResource");
        static constexpr uint32_t GreengrassGroupVersionDoesNotExist_HASH = ConstExprHashingUtils::HashString("GreengrassGroupVersionDoesNotExist");
        static constexpr uint32_t LambdaDeleted_HASH = ConstExprHashingUtils::HashString("LambdaDeleted");
        static constexpr uint32_t ExtractingBundleFailure_HASH = ConstExprHashingUtils::HashString("ExtractingBundleFailure");
        static constexpr uint32_t PreLaunchFileFailure_HASH = ConstExprHashingUtils::HashString("PreLaunchFileFailure");
        static constexpr uint32_t PostLaunchFileFailure_HASH = ConstExprHashingUtils::HashString("PostLaunchFileFailure");
        static constexpr uint32_t BadPermissionError_HASH = ConstExprHashingUtils::HashString("BadPermissionError");
        static constexpr uint32_t DownloadConditionFailed_HASH = ConstExprHashingUtils::HashString("DownloadConditionFailed");
        static constexpr uint32_t BadLambdaAssociated_HASH = ConstExprHashingUtils::HashString("BadLambdaAssociated");
        static constexpr uint32_t InternalServerError_HASH = ConstExprHashingUtils::HashString("InternalServerError");
        static constexpr uint32_t RobotApplicationDoesNotExist_HASH = ConstExprHashingUtils::HashString("RobotApplicationDoesNotExist");
        static constexpr uint32_t DeploymentFleetDoesNotExist_HASH = ConstExprHashingUtils::HashString("DeploymentFleetDoesNotExist");
        static constexpr uint32_t FleetDeploymentTimeout_HASH = ConstExprHashingUtils::HashString("FleetDeploymentTimeout");


        DeploymentJobErrorCode GetDeploymentJobErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ResourceNotFound_HASH)
          {
            return DeploymentJobErrorCode::ResourceNotFound;
          }
          else if (hashCode == EnvironmentSetupError_HASH)
          {
            return DeploymentJobErrorCode::EnvironmentSetupError;
          }
          else if (hashCode == EtagMismatch_HASH)
          {
            return DeploymentJobErrorCode::EtagMismatch;
          }
          else if (hashCode == FailureThresholdBreached_HASH)
          {
            return DeploymentJobErrorCode::FailureThresholdBreached;
          }
          else if (hashCode == RobotDeploymentAborted_HASH)
          {
            return DeploymentJobErrorCode::RobotDeploymentAborted;
          }
          else if (hashCode == RobotDeploymentNoResponse_HASH)
          {
            return DeploymentJobErrorCode::RobotDeploymentNoResponse;
          }
          else if (hashCode == RobotAgentConnectionTimeout_HASH)
          {
            return DeploymentJobErrorCode::RobotAgentConnectionTimeout;
          }
          else if (hashCode == GreengrassDeploymentFailed_HASH)
          {
            return DeploymentJobErrorCode::GreengrassDeploymentFailed;
          }
          else if (hashCode == InvalidGreengrassGroup_HASH)
          {
            return DeploymentJobErrorCode::InvalidGreengrassGroup;
          }
          else if (hashCode == MissingRobotArchitecture_HASH)
          {
            return DeploymentJobErrorCode::MissingRobotArchitecture;
          }
          else if (hashCode == MissingRobotApplicationArchitecture_HASH)
          {
            return DeploymentJobErrorCode::MissingRobotApplicationArchitecture;
          }
          else if (hashCode == MissingRobotDeploymentResource_HASH)
          {
            return DeploymentJobErrorCode::MissingRobotDeploymentResource;
          }
          else if (hashCode == GreengrassGroupVersionDoesNotExist_HASH)
          {
            return DeploymentJobErrorCode::GreengrassGroupVersionDoesNotExist;
          }
          else if (hashCode == LambdaDeleted_HASH)
          {
            return DeploymentJobErrorCode::LambdaDeleted;
          }
          else if (hashCode == ExtractingBundleFailure_HASH)
          {
            return DeploymentJobErrorCode::ExtractingBundleFailure;
          }
          else if (hashCode == PreLaunchFileFailure_HASH)
          {
            return DeploymentJobErrorCode::PreLaunchFileFailure;
          }
          else if (hashCode == PostLaunchFileFailure_HASH)
          {
            return DeploymentJobErrorCode::PostLaunchFileFailure;
          }
          else if (hashCode == BadPermissionError_HASH)
          {
            return DeploymentJobErrorCode::BadPermissionError;
          }
          else if (hashCode == DownloadConditionFailed_HASH)
          {
            return DeploymentJobErrorCode::DownloadConditionFailed;
          }
          else if (hashCode == BadLambdaAssociated_HASH)
          {
            return DeploymentJobErrorCode::BadLambdaAssociated;
          }
          else if (hashCode == InternalServerError_HASH)
          {
            return DeploymentJobErrorCode::InternalServerError;
          }
          else if (hashCode == RobotApplicationDoesNotExist_HASH)
          {
            return DeploymentJobErrorCode::RobotApplicationDoesNotExist;
          }
          else if (hashCode == DeploymentFleetDoesNotExist_HASH)
          {
            return DeploymentJobErrorCode::DeploymentFleetDoesNotExist;
          }
          else if (hashCode == FleetDeploymentTimeout_HASH)
          {
            return DeploymentJobErrorCode::FleetDeploymentTimeout;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentJobErrorCode>(hashCode);
          }

          return DeploymentJobErrorCode::NOT_SET;
        }

        Aws::String GetNameForDeploymentJobErrorCode(DeploymentJobErrorCode enumValue)
        {
          switch(enumValue)
          {
          case DeploymentJobErrorCode::NOT_SET:
            return {};
          case DeploymentJobErrorCode::ResourceNotFound:
            return "ResourceNotFound";
          case DeploymentJobErrorCode::EnvironmentSetupError:
            return "EnvironmentSetupError";
          case DeploymentJobErrorCode::EtagMismatch:
            return "EtagMismatch";
          case DeploymentJobErrorCode::FailureThresholdBreached:
            return "FailureThresholdBreached";
          case DeploymentJobErrorCode::RobotDeploymentAborted:
            return "RobotDeploymentAborted";
          case DeploymentJobErrorCode::RobotDeploymentNoResponse:
            return "RobotDeploymentNoResponse";
          case DeploymentJobErrorCode::RobotAgentConnectionTimeout:
            return "RobotAgentConnectionTimeout";
          case DeploymentJobErrorCode::GreengrassDeploymentFailed:
            return "GreengrassDeploymentFailed";
          case DeploymentJobErrorCode::InvalidGreengrassGroup:
            return "InvalidGreengrassGroup";
          case DeploymentJobErrorCode::MissingRobotArchitecture:
            return "MissingRobotArchitecture";
          case DeploymentJobErrorCode::MissingRobotApplicationArchitecture:
            return "MissingRobotApplicationArchitecture";
          case DeploymentJobErrorCode::MissingRobotDeploymentResource:
            return "MissingRobotDeploymentResource";
          case DeploymentJobErrorCode::GreengrassGroupVersionDoesNotExist:
            return "GreengrassGroupVersionDoesNotExist";
          case DeploymentJobErrorCode::LambdaDeleted:
            return "LambdaDeleted";
          case DeploymentJobErrorCode::ExtractingBundleFailure:
            return "ExtractingBundleFailure";
          case DeploymentJobErrorCode::PreLaunchFileFailure:
            return "PreLaunchFileFailure";
          case DeploymentJobErrorCode::PostLaunchFileFailure:
            return "PostLaunchFileFailure";
          case DeploymentJobErrorCode::BadPermissionError:
            return "BadPermissionError";
          case DeploymentJobErrorCode::DownloadConditionFailed:
            return "DownloadConditionFailed";
          case DeploymentJobErrorCode::BadLambdaAssociated:
            return "BadLambdaAssociated";
          case DeploymentJobErrorCode::InternalServerError:
            return "InternalServerError";
          case DeploymentJobErrorCode::RobotApplicationDoesNotExist:
            return "RobotApplicationDoesNotExist";
          case DeploymentJobErrorCode::DeploymentFleetDoesNotExist:
            return "DeploymentFleetDoesNotExist";
          case DeploymentJobErrorCode::FleetDeploymentTimeout:
            return "FleetDeploymentTimeout";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentJobErrorCodeMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws
