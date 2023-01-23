/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Eac3PhaseControl.h>
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
      namespace Eac3PhaseControlMapper
      {

        static const int SHIFT_90_DEGREES_HASH = HashingUtils::HashString("SHIFT_90_DEGREES");
        static const int NO_SHIFT_HASH = HashingUtils::HashString("NO_SHIFT");


        Eac3PhaseControl GetEac3PhaseControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHIFT_90_DEGREES_HASH)
          {
            return Eac3PhaseControl::SHIFT_90_DEGREES;
          }
          else if (hashCode == NO_SHIFT_HASH)
          {
            return Eac3PhaseControl::NO_SHIFT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3PhaseControl>(hashCode);
          }

          return Eac3PhaseControl::NOT_SET;
        }

        Aws::String GetNameForEac3PhaseControl(Eac3PhaseControl enumValue)
        {
          switch(enumValue)
          {
          case Eac3PhaseControl::SHIFT_90_DEGREES:
            return "SHIFT_90_DEGREES";
          case Eac3PhaseControl::NO_SHIFT:
            return "NO_SHIFT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Eac3PhaseControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
