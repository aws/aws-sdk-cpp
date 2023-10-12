/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/SimulationAppStatus.h>
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
      namespace SimulationAppStatusMapper
      {

        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t STARTED_HASH = ConstExprHashingUtils::HashString("STARTED");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");
        static constexpr uint32_t UNKNOWN_HASH = ConstExprHashingUtils::HashString("UNKNOWN");


        SimulationAppStatus GetSimulationAppStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STARTING_HASH)
          {
            return SimulationAppStatus::STARTING;
          }
          else if (hashCode == STARTED_HASH)
          {
            return SimulationAppStatus::STARTED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return SimulationAppStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return SimulationAppStatus::STOPPED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return SimulationAppStatus::ERROR_;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return SimulationAppStatus::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SimulationAppStatus>(hashCode);
          }

          return SimulationAppStatus::NOT_SET;
        }

        Aws::String GetNameForSimulationAppStatus(SimulationAppStatus enumValue)
        {
          switch(enumValue)
          {
          case SimulationAppStatus::NOT_SET:
            return {};
          case SimulationAppStatus::STARTING:
            return "STARTING";
          case SimulationAppStatus::STARTED:
            return "STARTED";
          case SimulationAppStatus::STOPPING:
            return "STOPPING";
          case SimulationAppStatus::STOPPED:
            return "STOPPED";
          case SimulationAppStatus::ERROR_:
            return "ERROR";
          case SimulationAppStatus::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SimulationAppStatusMapper
    } // namespace Model
  } // namespace SimSpaceWeaver
} // namespace Aws
