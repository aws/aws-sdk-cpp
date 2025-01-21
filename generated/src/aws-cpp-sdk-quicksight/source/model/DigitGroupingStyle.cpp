/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DigitGroupingStyle.h>
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
      namespace DigitGroupingStyleMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int LAKHS_HASH = HashingUtils::HashString("LAKHS");


        DigitGroupingStyle GetDigitGroupingStyleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return DigitGroupingStyle::DEFAULT;
          }
          else if (hashCode == LAKHS_HASH)
          {
            return DigitGroupingStyle::LAKHS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DigitGroupingStyle>(hashCode);
          }

          return DigitGroupingStyle::NOT_SET;
        }

        Aws::String GetNameForDigitGroupingStyle(DigitGroupingStyle enumValue)
        {
          switch(enumValue)
          {
          case DigitGroupingStyle::NOT_SET:
            return {};
          case DigitGroupingStyle::DEFAULT:
            return "DEFAULT";
          case DigitGroupingStyle::LAKHS:
            return "LAKHS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DigitGroupingStyleMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
