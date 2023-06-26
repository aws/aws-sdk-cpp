/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/VerticalTextAlignment.h>
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
      namespace VerticalTextAlignmentMapper
      {

        static const int TOP_HASH = HashingUtils::HashString("TOP");
        static const int MIDDLE_HASH = HashingUtils::HashString("MIDDLE");
        static const int BOTTOM_HASH = HashingUtils::HashString("BOTTOM");


        VerticalTextAlignment GetVerticalTextAlignmentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TOP_HASH)
          {
            return VerticalTextAlignment::TOP;
          }
          else if (hashCode == MIDDLE_HASH)
          {
            return VerticalTextAlignment::MIDDLE;
          }
          else if (hashCode == BOTTOM_HASH)
          {
            return VerticalTextAlignment::BOTTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VerticalTextAlignment>(hashCode);
          }

          return VerticalTextAlignment::NOT_SET;
        }

        Aws::String GetNameForVerticalTextAlignment(VerticalTextAlignment enumValue)
        {
          switch(enumValue)
          {
          case VerticalTextAlignment::TOP:
            return "TOP";
          case VerticalTextAlignment::MIDDLE:
            return "MIDDLE";
          case VerticalTextAlignment::BOTTOM:
            return "BOTTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VerticalTextAlignmentMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
