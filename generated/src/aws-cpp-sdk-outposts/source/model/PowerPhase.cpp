/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/PowerPhase.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Outposts
  {
    namespace Model
    {
      namespace PowerPhaseMapper
      {

        static const int SINGLE_PHASE_HASH = HashingUtils::HashString("SINGLE_PHASE");
        static const int THREE_PHASE_HASH = HashingUtils::HashString("THREE_PHASE");


        PowerPhase GetPowerPhaseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGLE_PHASE_HASH)
          {
            return PowerPhase::SINGLE_PHASE;
          }
          else if (hashCode == THREE_PHASE_HASH)
          {
            return PowerPhase::THREE_PHASE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PowerPhase>(hashCode);
          }

          return PowerPhase::NOT_SET;
        }

        Aws::String GetNameForPowerPhase(PowerPhase enumValue)
        {
          switch(enumValue)
          {
          case PowerPhase::NOT_SET:
            return {};
          case PowerPhase::SINGLE_PHASE:
            return "SINGLE_PHASE";
          case PowerPhase::THREE_PHASE:
            return "THREE_PHASE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PowerPhaseMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws
