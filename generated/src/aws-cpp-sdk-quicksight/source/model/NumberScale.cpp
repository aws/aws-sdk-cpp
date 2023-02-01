/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NumberScale.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace NumberScaleMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int THOUSANDS_HASH = HashingUtils::HashString("THOUSANDS");
        static const int MILLIONS_HASH = HashingUtils::HashString("MILLIONS");
        static const int BILLIONS_HASH = HashingUtils::HashString("BILLIONS");
        static const int TRILLIONS_HASH = HashingUtils::HashString("TRILLIONS");


        NumberScale GetNumberScaleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return NumberScale::NONE;
          }
          else if (hashCode == AUTO_HASH)
          {
            return NumberScale::AUTO;
          }
          else if (hashCode == THOUSANDS_HASH)
          {
            return NumberScale::THOUSANDS;
          }
          else if (hashCode == MILLIONS_HASH)
          {
            return NumberScale::MILLIONS;
          }
          else if (hashCode == BILLIONS_HASH)
          {
            return NumberScale::BILLIONS;
          }
          else if (hashCode == TRILLIONS_HASH)
          {
            return NumberScale::TRILLIONS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NumberScale>(hashCode);
          }

          return NumberScale::NOT_SET;
        }

        Aws::String GetNameForNumberScale(NumberScale enumValue)
        {
          switch(enumValue)
          {
          case NumberScale::NONE:
            return "NONE";
          case NumberScale::AUTO:
            return "AUTO";
          case NumberScale::THOUSANDS:
            return "THOUSANDS";
          case NumberScale::MILLIONS:
            return "MILLIONS";
          case NumberScale::BILLIONS:
            return "BILLIONS";
          case NumberScale::TRILLIONS:
            return "TRILLIONS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NumberScaleMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
