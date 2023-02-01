/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/SimulationTargetStatus.h>
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
      namespace SimulationTargetStatusMapper
      {

        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");
        static const int STARTED_HASH = HashingUtils::HashString("STARTED");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        SimulationTargetStatus GetSimulationTargetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNKNOWN_HASH)
          {
            return SimulationTargetStatus::UNKNOWN;
          }
          else if (hashCode == STARTED_HASH)
          {
            return SimulationTargetStatus::STARTED;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return SimulationTargetStatus::STOPPED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return SimulationTargetStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SimulationTargetStatus>(hashCode);
          }

          return SimulationTargetStatus::NOT_SET;
        }

        Aws::String GetNameForSimulationTargetStatus(SimulationTargetStatus enumValue)
        {
          switch(enumValue)
          {
          case SimulationTargetStatus::UNKNOWN:
            return "UNKNOWN";
          case SimulationTargetStatus::STARTED:
            return "STARTED";
          case SimulationTargetStatus::STOPPED:
            return "STOPPED";
          case SimulationTargetStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SimulationTargetStatusMapper
    } // namespace Model
  } // namespace SimSpaceWeaver
} // namespace Aws
