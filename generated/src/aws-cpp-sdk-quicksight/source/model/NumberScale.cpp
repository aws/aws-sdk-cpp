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

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t AUTO_HASH = ConstExprHashingUtils::HashString("AUTO");
        static constexpr uint32_t THOUSANDS_HASH = ConstExprHashingUtils::HashString("THOUSANDS");
        static constexpr uint32_t MILLIONS_HASH = ConstExprHashingUtils::HashString("MILLIONS");
        static constexpr uint32_t BILLIONS_HASH = ConstExprHashingUtils::HashString("BILLIONS");
        static constexpr uint32_t TRILLIONS_HASH = ConstExprHashingUtils::HashString("TRILLIONS");


        NumberScale GetNumberScaleForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case NumberScale::NOT_SET:
            return {};
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
