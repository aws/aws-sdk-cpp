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

        static constexpr uint32_t SHIFT_90_DEGREES_HASH = ConstExprHashingUtils::HashString("SHIFT_90_DEGREES");
        static constexpr uint32_t NO_SHIFT_HASH = ConstExprHashingUtils::HashString("NO_SHIFT");


        Eac3PhaseControl GetEac3PhaseControlForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case Eac3PhaseControl::NOT_SET:
            return {};
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
