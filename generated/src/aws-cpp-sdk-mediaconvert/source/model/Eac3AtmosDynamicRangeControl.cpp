/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Eac3AtmosDynamicRangeControl.h>
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
      namespace Eac3AtmosDynamicRangeControlMapper
      {

        static const int SPECIFIED_HASH = HashingUtils::HashString("SPECIFIED");
        static const int INITIALIZE_FROM_SOURCE_HASH = HashingUtils::HashString("INITIALIZE_FROM_SOURCE");


        Eac3AtmosDynamicRangeControl GetEac3AtmosDynamicRangeControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SPECIFIED_HASH)
          {
            return Eac3AtmosDynamicRangeControl::SPECIFIED;
          }
          else if (hashCode == INITIALIZE_FROM_SOURCE_HASH)
          {
            return Eac3AtmosDynamicRangeControl::INITIALIZE_FROM_SOURCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3AtmosDynamicRangeControl>(hashCode);
          }

          return Eac3AtmosDynamicRangeControl::NOT_SET;
        }

        Aws::String GetNameForEac3AtmosDynamicRangeControl(Eac3AtmosDynamicRangeControl enumValue)
        {
          switch(enumValue)
          {
          case Eac3AtmosDynamicRangeControl::NOT_SET:
            return {};
          case Eac3AtmosDynamicRangeControl::SPECIFIED:
            return "SPECIFIED";
          case Eac3AtmosDynamicRangeControl::INITIALIZE_FROM_SOURCE:
            return "INITIALIZE_FROM_SOURCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Eac3AtmosDynamicRangeControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
