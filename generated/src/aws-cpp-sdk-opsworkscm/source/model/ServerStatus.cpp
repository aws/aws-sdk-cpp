/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworkscm/model/ServerStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpsWorksCM
  {
    namespace Model
    {
      namespace ServerStatusMapper
      {

        static constexpr uint32_t BACKING_UP_HASH = ConstExprHashingUtils::HashString("BACKING_UP");
        static constexpr uint32_t CONNECTION_LOST_HASH = ConstExprHashingUtils::HashString("CONNECTION_LOST");
        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t MODIFYING_HASH = ConstExprHashingUtils::HashString("MODIFYING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t HEALTHY_HASH = ConstExprHashingUtils::HashString("HEALTHY");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t RESTORING_HASH = ConstExprHashingUtils::HashString("RESTORING");
        static constexpr uint32_t SETUP_HASH = ConstExprHashingUtils::HashString("SETUP");
        static constexpr uint32_t UNDER_MAINTENANCE_HASH = ConstExprHashingUtils::HashString("UNDER_MAINTENANCE");
        static constexpr uint32_t UNHEALTHY_HASH = ConstExprHashingUtils::HashString("UNHEALTHY");
        static constexpr uint32_t TERMINATED_HASH = ConstExprHashingUtils::HashString("TERMINATED");


        ServerStatus GetServerStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BACKING_UP_HASH)
          {
            return ServerStatus::BACKING_UP;
          }
          else if (hashCode == CONNECTION_LOST_HASH)
          {
            return ServerStatus::CONNECTION_LOST;
          }
          else if (hashCode == CREATING_HASH)
          {
            return ServerStatus::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ServerStatus::DELETING;
          }
          else if (hashCode == MODIFYING_HASH)
          {
            return ServerStatus::MODIFYING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ServerStatus::FAILED;
          }
          else if (hashCode == HEALTHY_HASH)
          {
            return ServerStatus::HEALTHY;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return ServerStatus::RUNNING;
          }
          else if (hashCode == RESTORING_HASH)
          {
            return ServerStatus::RESTORING;
          }
          else if (hashCode == SETUP_HASH)
          {
            return ServerStatus::SETUP;
          }
          else if (hashCode == UNDER_MAINTENANCE_HASH)
          {
            return ServerStatus::UNDER_MAINTENANCE;
          }
          else if (hashCode == UNHEALTHY_HASH)
          {
            return ServerStatus::UNHEALTHY;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return ServerStatus::TERMINATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServerStatus>(hashCode);
          }

          return ServerStatus::NOT_SET;
        }

        Aws::String GetNameForServerStatus(ServerStatus enumValue)
        {
          switch(enumValue)
          {
          case ServerStatus::NOT_SET:
            return {};
          case ServerStatus::BACKING_UP:
            return "BACKING_UP";
          case ServerStatus::CONNECTION_LOST:
            return "CONNECTION_LOST";
          case ServerStatus::CREATING:
            return "CREATING";
          case ServerStatus::DELETING:
            return "DELETING";
          case ServerStatus::MODIFYING:
            return "MODIFYING";
          case ServerStatus::FAILED:
            return "FAILED";
          case ServerStatus::HEALTHY:
            return "HEALTHY";
          case ServerStatus::RUNNING:
            return "RUNNING";
          case ServerStatus::RESTORING:
            return "RESTORING";
          case ServerStatus::SETUP:
            return "SETUP";
          case ServerStatus::UNDER_MAINTENANCE:
            return "UNDER_MAINTENANCE";
          case ServerStatus::UNHEALTHY:
            return "UNHEALTHY";
          case ServerStatus::TERMINATED:
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

      } // namespace ServerStatusMapper
    } // namespace Model
  } // namespace OpsWorksCM
} // namespace Aws
