/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/SimulationAppTargetStatus.h>
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
      namespace SimulationAppTargetStatusMapper
      {

        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");
        static const int STARTED_HASH = HashingUtils::HashString("STARTED");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        SimulationAppTargetStatus GetSimulationAppTargetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNKNOWN_HASH)
          {
            return SimulationAppTargetStatus::UNKNOWN;
          }
          else if (hashCode == STARTED_HASH)
          {
            return SimulationAppTargetStatus::STARTED;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return SimulationAppTargetStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SimulationAppTargetStatus>(hashCode);
          }

          return SimulationAppTargetStatus::NOT_SET;
        }

        Aws::String GetNameForSimulationAppTargetStatus(SimulationAppTargetStatus enumValue)
        {
          switch(enumValue)
          {
          case SimulationAppTargetStatus::UNKNOWN:
            return "UNKNOWN";
          case SimulationAppTargetStatus::STARTED:
            return "STARTED";
          case SimulationAppTargetStatus::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SimulationAppTargetStatusMapper
    } // namespace Model
  } // namespace SimSpaceWeaver
} // namespace Aws
