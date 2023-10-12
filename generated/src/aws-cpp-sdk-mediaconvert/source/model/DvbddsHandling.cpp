/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DvbddsHandling.h>
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
      namespace DvbddsHandlingMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t SPECIFIED_HASH = ConstExprHashingUtils::HashString("SPECIFIED");
        static constexpr uint32_t NO_DISPLAY_WINDOW_HASH = ConstExprHashingUtils::HashString("NO_DISPLAY_WINDOW");


        DvbddsHandling GetDvbddsHandlingForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return DvbddsHandling::NONE;
          }
          else if (hashCode == SPECIFIED_HASH)
          {
            return DvbddsHandling::SPECIFIED;
          }
          else if (hashCode == NO_DISPLAY_WINDOW_HASH)
          {
            return DvbddsHandling::NO_DISPLAY_WINDOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbddsHandling>(hashCode);
          }

          return DvbddsHandling::NOT_SET;
        }

        Aws::String GetNameForDvbddsHandling(DvbddsHandling enumValue)
        {
          switch(enumValue)
          {
          case DvbddsHandling::NOT_SET:
            return {};
          case DvbddsHandling::NONE:
            return "NONE";
          case DvbddsHandling::SPECIFIED:
            return "SPECIFIED";
          case DvbddsHandling::NO_DISPLAY_WINDOW:
            return "NO_DISPLAY_WINDOW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DvbddsHandlingMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
