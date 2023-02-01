/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RelativeFontSize.h>
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
      namespace RelativeFontSizeMapper
      {

        static const int EXTRA_SMALL_HASH = HashingUtils::HashString("EXTRA_SMALL");
        static const int SMALL_HASH = HashingUtils::HashString("SMALL");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int LARGE_HASH = HashingUtils::HashString("LARGE");
        static const int EXTRA_LARGE_HASH = HashingUtils::HashString("EXTRA_LARGE");


        RelativeFontSize GetRelativeFontSizeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXTRA_SMALL_HASH)
          {
            return RelativeFontSize::EXTRA_SMALL;
          }
          else if (hashCode == SMALL_HASH)
          {
            return RelativeFontSize::SMALL;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return RelativeFontSize::MEDIUM;
          }
          else if (hashCode == LARGE_HASH)
          {
            return RelativeFontSize::LARGE;
          }
          else if (hashCode == EXTRA_LARGE_HASH)
          {
            return RelativeFontSize::EXTRA_LARGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RelativeFontSize>(hashCode);
          }

          return RelativeFontSize::NOT_SET;
        }

        Aws::String GetNameForRelativeFontSize(RelativeFontSize enumValue)
        {
          switch(enumValue)
          {
          case RelativeFontSize::EXTRA_SMALL:
            return "EXTRA_SMALL";
          case RelativeFontSize::SMALL:
            return "SMALL";
          case RelativeFontSize::MEDIUM:
            return "MEDIUM";
          case RelativeFontSize::LARGE:
            return "LARGE";
          case RelativeFontSize::EXTRA_LARGE:
            return "EXTRA_LARGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RelativeFontSizeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
