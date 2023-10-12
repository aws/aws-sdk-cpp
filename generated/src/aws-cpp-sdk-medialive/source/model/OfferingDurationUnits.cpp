/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/OfferingDurationUnits.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace OfferingDurationUnitsMapper
      {

        static constexpr uint32_t MONTHS_HASH = ConstExprHashingUtils::HashString("MONTHS");


        OfferingDurationUnits GetOfferingDurationUnitsForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MONTHS_HASH)
          {
            return OfferingDurationUnits::MONTHS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OfferingDurationUnits>(hashCode);
          }

          return OfferingDurationUnits::NOT_SET;
        }

        Aws::String GetNameForOfferingDurationUnits(OfferingDurationUnits enumValue)
        {
          switch(enumValue)
          {
          case OfferingDurationUnits::NOT_SET:
            return {};
          case OfferingDurationUnits::MONTHS:
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

      } // namespace OfferingDurationUnitsMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
