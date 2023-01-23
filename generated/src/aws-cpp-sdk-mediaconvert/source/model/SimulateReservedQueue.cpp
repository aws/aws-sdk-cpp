/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/SimulateReservedQueue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace SimulateReservedQueueMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        SimulateReservedQueue GetSimulateReservedQueueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return SimulateReservedQueue::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return SimulateReservedQueue::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SimulateReservedQueue>(hashCode);
          }

          return SimulateReservedQueue::NOT_SET;
        }

        Aws::String GetNameForSimulateReservedQueue(SimulateReservedQueue enumValue)
        {
          switch(enumValue)
          {
          case SimulateReservedQueue::DISABLED:
            return "DISABLED";
          case SimulateReservedQueue::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SimulateReservedQueueMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
