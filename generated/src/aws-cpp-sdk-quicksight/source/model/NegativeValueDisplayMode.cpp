/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NegativeValueDisplayMode.h>
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
      namespace NegativeValueDisplayModeMapper
      {

        static const int POSITIVE_HASH = HashingUtils::HashString("POSITIVE");
        static const int NEGATIVE_HASH = HashingUtils::HashString("NEGATIVE");


        NegativeValueDisplayMode GetNegativeValueDisplayModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == POSITIVE_HASH)
          {
            return NegativeValueDisplayMode::POSITIVE;
          }
          else if (hashCode == NEGATIVE_HASH)
          {
            return NegativeValueDisplayMode::NEGATIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NegativeValueDisplayMode>(hashCode);
          }

          return NegativeValueDisplayMode::NOT_SET;
        }

        Aws::String GetNameForNegativeValueDisplayMode(NegativeValueDisplayMode enumValue)
        {
          switch(enumValue)
          {
          case NegativeValueDisplayMode::POSITIVE:
            return "POSITIVE";
          case NegativeValueDisplayMode::NEGATIVE:
            return "NEGATIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NegativeValueDisplayModeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
