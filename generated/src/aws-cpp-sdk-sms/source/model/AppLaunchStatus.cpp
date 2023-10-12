/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/AppLaunchStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SMS
  {
    namespace Model
    {
      namespace AppLaunchStatusMapper
      {

        static constexpr uint32_t READY_FOR_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("READY_FOR_CONFIGURATION");
        static constexpr uint32_t CONFIGURATION_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("CONFIGURATION_IN_PROGRESS");
        static constexpr uint32_t CONFIGURATION_INVALID_HASH = ConstExprHashingUtils::HashString("CONFIGURATION_INVALID");
        static constexpr uint32_t READY_FOR_LAUNCH_HASH = ConstExprHashingUtils::HashString("READY_FOR_LAUNCH");
        static constexpr uint32_t VALIDATION_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("VALIDATION_IN_PROGRESS");
        static constexpr uint32_t LAUNCH_PENDING_HASH = ConstExprHashingUtils::HashString("LAUNCH_PENDING");
        static constexpr uint32_t LAUNCH_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("LAUNCH_IN_PROGRESS");
        static constexpr uint32_t LAUNCHED_HASH = ConstExprHashingUtils::HashString("LAUNCHED");
        static constexpr uint32_t PARTIALLY_LAUNCHED_HASH = ConstExprHashingUtils::HashString("PARTIALLY_LAUNCHED");
        static constexpr uint32_t DELTA_LAUNCH_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("DELTA_LAUNCH_IN_PROGRESS");
        static constexpr uint32_t DELTA_LAUNCH_FAILED_HASH = ConstExprHashingUtils::HashString("DELTA_LAUNCH_FAILED");
        static constexpr uint32_t LAUNCH_FAILED_HASH = ConstExprHashingUtils::HashString("LAUNCH_FAILED");
        static constexpr uint32_t TERMINATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("TERMINATE_IN_PROGRESS");
        static constexpr uint32_t TERMINATE_FAILED_HASH = ConstExprHashingUtils::HashString("TERMINATE_FAILED");
        static constexpr uint32_t TERMINATED_HASH = ConstExprHashingUtils::HashString("TERMINATED");


        AppLaunchStatus GetAppLaunchStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_FOR_CONFIGURATION_HASH)
          {
            return AppLaunchStatus::READY_FOR_CONFIGURATION;
          }
          else if (hashCode == CONFIGURATION_IN_PROGRESS_HASH)
          {
            return AppLaunchStatus::CONFIGURATION_IN_PROGRESS;
          }
          else if (hashCode == CONFIGURATION_INVALID_HASH)
          {
            return AppLaunchStatus::CONFIGURATION_INVALID;
          }
          else if (hashCode == READY_FOR_LAUNCH_HASH)
          {
            return AppLaunchStatus::READY_FOR_LAUNCH;
          }
          else if (hashCode == VALIDATION_IN_PROGRESS_HASH)
          {
            return AppLaunchStatus::VALIDATION_IN_PROGRESS;
          }
          else if (hashCode == LAUNCH_PENDING_HASH)
          {
            return AppLaunchStatus::LAUNCH_PENDING;
          }
          else if (hashCode == LAUNCH_IN_PROGRESS_HASH)
          {
            return AppLaunchStatus::LAUNCH_IN_PROGRESS;
          }
          else if (hashCode == LAUNCHED_HASH)
          {
            return AppLaunchStatus::LAUNCHED;
          }
          else if (hashCode == PARTIALLY_LAUNCHED_HASH)
          {
            return AppLaunchStatus::PARTIALLY_LAUNCHED;
          }
          else if (hashCode == DELTA_LAUNCH_IN_PROGRESS_HASH)
          {
            return AppLaunchStatus::DELTA_LAUNCH_IN_PROGRESS;
          }
          else if (hashCode == DELTA_LAUNCH_FAILED_HASH)
          {
            return AppLaunchStatus::DELTA_LAUNCH_FAILED;
          }
          else if (hashCode == LAUNCH_FAILED_HASH)
          {
            return AppLaunchStatus::LAUNCH_FAILED;
          }
          else if (hashCode == TERMINATE_IN_PROGRESS_HASH)
          {
            return AppLaunchStatus::TERMINATE_IN_PROGRESS;
          }
          else if (hashCode == TERMINATE_FAILED_HASH)
          {
            return AppLaunchStatus::TERMINATE_FAILED;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return AppLaunchStatus::TERMINATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppLaunchStatus>(hashCode);
          }

          return AppLaunchStatus::NOT_SET;
        }

        Aws::String GetNameForAppLaunchStatus(AppLaunchStatus enumValue)
        {
          switch(enumValue)
          {
          case AppLaunchStatus::NOT_SET:
            return {};
          case AppLaunchStatus::READY_FOR_CONFIGURATION:
            return "READY_FOR_CONFIGURATION";
          case AppLaunchStatus::CONFIGURATION_IN_PROGRESS:
            return "CONFIGURATION_IN_PROGRESS";
          case AppLaunchStatus::CONFIGURATION_INVALID:
            return "CONFIGURATION_INVALID";
          case AppLaunchStatus::READY_FOR_LAUNCH:
            return "READY_FOR_LAUNCH";
          case AppLaunchStatus::VALIDATION_IN_PROGRESS:
            return "VALIDATION_IN_PROGRESS";
          case AppLaunchStatus::LAUNCH_PENDING:
            return "LAUNCH_PENDING";
          case AppLaunchStatus::LAUNCH_IN_PROGRESS:
            return "LAUNCH_IN_PROGRESS";
          case AppLaunchStatus::LAUNCHED:
            return "LAUNCHED";
          case AppLaunchStatus::PARTIALLY_LAUNCHED:
            return "PARTIALLY_LAUNCHED";
          case AppLaunchStatus::DELTA_LAUNCH_IN_PROGRESS:
            return "DELTA_LAUNCH_IN_PROGRESS";
          case AppLaunchStatus::DELTA_LAUNCH_FAILED:
            return "DELTA_LAUNCH_FAILED";
          case AppLaunchStatus::LAUNCH_FAILED:
            return "LAUNCH_FAILED";
          case AppLaunchStatus::TERMINATE_IN_PROGRESS:
            return "TERMINATE_IN_PROGRESS";
          case AppLaunchStatus::TERMINATE_FAILED:
            return "TERMINATE_FAILED";
          case AppLaunchStatus::TERMINATED:
            return "TERMINATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppLaunchStatusMapper
    } // namespace Model
  } // namespace SMS
} // namespace Aws
