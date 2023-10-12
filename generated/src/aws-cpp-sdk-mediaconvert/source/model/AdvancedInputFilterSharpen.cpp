/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AdvancedInputFilterSharpen.h>
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
      namespace AdvancedInputFilterSharpenMapper
      {

        static constexpr uint32_t OFF_HASH = ConstExprHashingUtils::HashString("OFF");
        static constexpr uint32_t LOW_HASH = ConstExprHashingUtils::HashString("LOW");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");


        AdvancedInputFilterSharpen GetAdvancedInputFilterSharpenForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFF_HASH)
          {
            return AdvancedInputFilterSharpen::OFF;
          }
          else if (hashCode == LOW_HASH)
          {
            return AdvancedInputFilterSharpen::LOW;
          }
          else if (hashCode == HIGH_HASH)
          {
            return AdvancedInputFilterSharpen::HIGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdvancedInputFilterSharpen>(hashCode);
          }

          return AdvancedInputFilterSharpen::NOT_SET;
        }

        Aws::String GetNameForAdvancedInputFilterSharpen(AdvancedInputFilterSharpen enumValue)
        {
          switch(enumValue)
          {
          case AdvancedInputFilterSharpen::NOT_SET:
            return {};
          case AdvancedInputFilterSharpen::OFF:
            return "OFF";
          case AdvancedInputFilterSharpen::LOW:
            return "LOW";
          case AdvancedInputFilterSharpen::HIGH:
            return "HIGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdvancedInputFilterSharpenMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
