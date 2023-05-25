/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/DurationUnits.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConnect
  {
    namespace Model
    {
      namespace DurationUnitsMapper
      {

        static const int MONTHS_HASH = HashingUtils::HashString("MONTHS");


        DurationUnits GetDurationUnitsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MONTHS_HASH)
          {
            return DurationUnits::MONTHS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DurationUnits>(hashCode);
          }

          return DurationUnits::NOT_SET;
        }

        Aws::String GetNameForDurationUnits(DurationUnits enumValue)
        {
          switch(enumValue)
          {
          case DurationUnits::MONTHS:
            return "MONTHS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DurationUnitsMapper
    } // namespace Model
  } // namespace MediaConnect
} // namespace Aws
