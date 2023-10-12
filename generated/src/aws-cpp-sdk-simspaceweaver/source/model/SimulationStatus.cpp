/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/SimulationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SimSpaceWeaver
  {
    namespace Model
    {
      namespace SimulationStatusMapper
      {

        static constexpr uint32_t UNKNOWN_HASH = ConstExprHashingUtils::HashString("UNKNOWN");
        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t STARTED_HASH = ConstExprHashingUtils::HashString("STARTED");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t SNAPSHOT_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("SNAPSHOT_IN_PROGRESS");


        SimulationStatus GetSimulationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNKNOWN_HASH)
          {
            return SimulationStatus::UNKNOWN;
          }
          else if (hashCode == STARTING_HASH)
          {
            return SimulationStatus::STARTING;
          }
          else if (hashCode == STARTED_HASH)
          {
            return SimulationStatus::STARTED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return SimulationStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return SimulationStatus::STOPPED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return SimulationStatus::FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return SimulationStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return SimulationStatus::DELETED;
          }
          else if (hashCode == SNAPSHOT_IN_PROGRESS_HASH)
          {
            return SimulationStatus::SNAPSHOT_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SimulationStatus>(hashCode);
          }

          return SimulationStatus::NOT_SET;
        }

        Aws::String GetNameForSimulationStatus(SimulationStatus enumValue)
        {
          switch(enumValue)
          {
          case SimulationStatus::NOT_SET:
            return {};
          case SimulationStatus::UNKNOWN:
            return "UNKNOWN";
          case SimulationStatus::STARTING:
            return "STARTING";
          case SimulationStatus::STARTED:
            return "STARTED";
          case SimulationStatus::STOPPING:
            return "STOPPING";
          case SimulationStatus::STOPPED:
            return "STOPPED";
          case SimulationStatus::FAILED:
            return "FAILED";
          case SimulationStatus::DELETING:
            return "DELETING";
          case SimulationStatus::DELETED:
            return "DELETED";
          case SimulationStatus::SNAPSHOT_IN_PROGRESS:
            return "SNAPSHOT_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SimulationStatusMapper
    } // namespace Model
  } // namespace SimSpaceWeaver
} // namespace Aws
