/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/AppReplicationStatus.h>
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
      namespace AppReplicationStatusMapper
      {

        static constexpr uint32_t READY_FOR_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("READY_FOR_CONFIGURATION");
        static constexpr uint32_t CONFIGURATION_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("CONFIGURATION_IN_PROGRESS");
        static constexpr uint32_t CONFIGURATION_INVALID_HASH = ConstExprHashingUtils::HashString("CONFIGURATION_INVALID");
        static constexpr uint32_t READY_FOR_REPLICATION_HASH = ConstExprHashingUtils::HashString("READY_FOR_REPLICATION");
        static constexpr uint32_t VALIDATION_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("VALIDATION_IN_PROGRESS");
        static constexpr uint32_t REPLICATION_PENDING_HASH = ConstExprHashingUtils::HashString("REPLICATION_PENDING");
        static constexpr uint32_t REPLICATION_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("REPLICATION_IN_PROGRESS");
        static constexpr uint32_t REPLICATED_HASH = ConstExprHashingUtils::HashString("REPLICATED");
        static constexpr uint32_t PARTIALLY_REPLICATED_HASH = ConstExprHashingUtils::HashString("PARTIALLY_REPLICATED");
        static constexpr uint32_t DELTA_REPLICATION_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("DELTA_REPLICATION_IN_PROGRESS");
        static constexpr uint32_t DELTA_REPLICATED_HASH = ConstExprHashingUtils::HashString("DELTA_REPLICATED");
        static constexpr uint32_t DELTA_REPLICATION_FAILED_HASH = ConstExprHashingUtils::HashString("DELTA_REPLICATION_FAILED");
        static constexpr uint32_t REPLICATION_FAILED_HASH = ConstExprHashingUtils::HashString("REPLICATION_FAILED");
        static constexpr uint32_t REPLICATION_STOPPING_HASH = ConstExprHashingUtils::HashString("REPLICATION_STOPPING");
        static constexpr uint32_t REPLICATION_STOP_FAILED_HASH = ConstExprHashingUtils::HashString("REPLICATION_STOP_FAILED");
        static constexpr uint32_t REPLICATION_STOPPED_HASH = ConstExprHashingUtils::HashString("REPLICATION_STOPPED");


        AppReplicationStatus GetAppReplicationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_FOR_CONFIGURATION_HASH)
          {
            return AppReplicationStatus::READY_FOR_CONFIGURATION;
          }
          else if (hashCode == CONFIGURATION_IN_PROGRESS_HASH)
          {
            return AppReplicationStatus::CONFIGURATION_IN_PROGRESS;
          }
          else if (hashCode == CONFIGURATION_INVALID_HASH)
          {
            return AppReplicationStatus::CONFIGURATION_INVALID;
          }
          else if (hashCode == READY_FOR_REPLICATION_HASH)
          {
            return AppReplicationStatus::READY_FOR_REPLICATION;
          }
          else if (hashCode == VALIDATION_IN_PROGRESS_HASH)
          {
            return AppReplicationStatus::VALIDATION_IN_PROGRESS;
          }
          else if (hashCode == REPLICATION_PENDING_HASH)
          {
            return AppReplicationStatus::REPLICATION_PENDING;
          }
          else if (hashCode == REPLICATION_IN_PROGRESS_HASH)
          {
            return AppReplicationStatus::REPLICATION_IN_PROGRESS;
          }
          else if (hashCode == REPLICATED_HASH)
          {
            return AppReplicationStatus::REPLICATED;
          }
          else if (hashCode == PARTIALLY_REPLICATED_HASH)
          {
            return AppReplicationStatus::PARTIALLY_REPLICATED;
          }
          else if (hashCode == DELTA_REPLICATION_IN_PROGRESS_HASH)
          {
            return AppReplicationStatus::DELTA_REPLICATION_IN_PROGRESS;
          }
          else if (hashCode == DELTA_REPLICATED_HASH)
          {
            return AppReplicationStatus::DELTA_REPLICATED;
          }
          else if (hashCode == DELTA_REPLICATION_FAILED_HASH)
          {
            return AppReplicationStatus::DELTA_REPLICATION_FAILED;
          }
          else if (hashCode == REPLICATION_FAILED_HASH)
          {
            return AppReplicationStatus::REPLICATION_FAILED;
          }
          else if (hashCode == REPLICATION_STOPPING_HASH)
          {
            return AppReplicationStatus::REPLICATION_STOPPING;
          }
          else if (hashCode == REPLICATION_STOP_FAILED_HASH)
          {
            return AppReplicationStatus::REPLICATION_STOP_FAILED;
          }
          else if (hashCode == REPLICATION_STOPPED_HASH)
          {
            return AppReplicationStatus::REPLICATION_STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppReplicationStatus>(hashCode);
          }

          return AppReplicationStatus::NOT_SET;
        }

        Aws::String GetNameForAppReplicationStatus(AppReplicationStatus enumValue)
        {
          switch(enumValue)
          {
          case AppReplicationStatus::NOT_SET:
            return {};
          case AppReplicationStatus::READY_FOR_CONFIGURATION:
            return "READY_FOR_CONFIGURATION";
          case AppReplicationStatus::CONFIGURATION_IN_PROGRESS:
            return "CONFIGURATION_IN_PROGRESS";
          case AppReplicationStatus::CONFIGURATION_INVALID:
            return "CONFIGURATION_INVALID";
          case AppReplicationStatus::READY_FOR_REPLICATION:
            return "READY_FOR_REPLICATION";
          case AppReplicationStatus::VALIDATION_IN_PROGRESS:
            return "VALIDATION_IN_PROGRESS";
          case AppReplicationStatus::REPLICATION_PENDING:
            return "REPLICATION_PENDING";
          case AppReplicationStatus::REPLICATION_IN_PROGRESS:
            return "REPLICATION_IN_PROGRESS";
          case AppReplicationStatus::REPLICATED:
            return "REPLICATED";
          case AppReplicationStatus::PARTIALLY_REPLICATED:
            return "PARTIALLY_REPLICATED";
          case AppReplicationStatus::DELTA_REPLICATION_IN_PROGRESS:
            return "DELTA_REPLICATION_IN_PROGRESS";
          case AppReplicationStatus::DELTA_REPLICATED:
            return "DELTA_REPLICATED";
          case AppReplicationStatus::DELTA_REPLICATION_FAILED:
            return "DELTA_REPLICATION_FAILED";
          case AppReplicationStatus::REPLICATION_FAILED:
            return "REPLICATION_FAILED";
          case AppReplicationStatus::REPLICATION_STOPPING:
            return "REPLICATION_STOPPING";
          case AppReplicationStatus::REPLICATION_STOP_FAILED:
            return "REPLICATION_STOP_FAILED";
          case AppReplicationStatus::REPLICATION_STOPPED:
            return "REPLICATION_STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppReplicationStatusMapper
    } // namespace Model
  } // namespace SMS
} // namespace Aws
