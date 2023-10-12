/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/SimulationJobStatus.h>
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
      namespace SimulationJobStatusMapper
      {

        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t Preparing_HASH = ConstExprHashingUtils::HashString("Preparing");
        static constexpr uint32_t Running_HASH = ConstExprHashingUtils::HashString("Running");
        static constexpr uint32_t Restarting_HASH = ConstExprHashingUtils::HashString("Restarting");
        static constexpr uint32_t Completed_HASH = ConstExprHashingUtils::HashString("Completed");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t RunningFailed_HASH = ConstExprHashingUtils::HashString("RunningFailed");
        static constexpr uint32_t Terminating_HASH = ConstExprHashingUtils::HashString("Terminating");
        static constexpr uint32_t Terminated_HASH = ConstExprHashingUtils::HashString("Terminated");
        static constexpr uint32_t Canceled_HASH = ConstExprHashingUtils::HashString("Canceled");


        SimulationJobStatus GetSimulationJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return SimulationJobStatus::Pending;
          }
          else if (hashCode == Preparing_HASH)
          {
            return SimulationJobStatus::Preparing;
          }
          else if (hashCode == Running_HASH)
          {
            return SimulationJobStatus::Running;
          }
          else if (hashCode == Restarting_HASH)
          {
            return SimulationJobStatus::Restarting;
          }
          else if (hashCode == Completed_HASH)
          {
            return SimulationJobStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return SimulationJobStatus::Failed;
          }
          else if (hashCode == RunningFailed_HASH)
          {
            return SimulationJobStatus::RunningFailed;
          }
          else if (hashCode == Terminating_HASH)
          {
            return SimulationJobStatus::Terminating;
          }
          else if (hashCode == Terminated_HASH)
          {
            return SimulationJobStatus::Terminated;
          }
          else if (hashCode == Canceled_HASH)
          {
            return SimulationJobStatus::Canceled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SimulationJobStatus>(hashCode);
          }

          return SimulationJobStatus::NOT_SET;
        }

        Aws::String GetNameForSimulationJobStatus(SimulationJobStatus enumValue)
        {
          switch(enumValue)
          {
          case SimulationJobStatus::NOT_SET:
            return {};
          case SimulationJobStatus::Pending:
            return "Pending";
          case SimulationJobStatus::Preparing:
            return "Preparing";
          case SimulationJobStatus::Running:
            return "Running";
          case SimulationJobStatus::Restarting:
            return "Restarting";
          case SimulationJobStatus::Completed:
            return "Completed";
          case SimulationJobStatus::Failed:
            return "Failed";
          case SimulationJobStatus::RunningFailed:
            return "RunningFailed";
          case SimulationJobStatus::Terminating:
            return "Terminating";
          case SimulationJobStatus::Terminated:
            return "Terminated";
          case SimulationJobStatus::Canceled:
            return "Canceled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SimulationJobStatusMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws
