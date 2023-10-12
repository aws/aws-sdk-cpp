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

        static constexpr uint32_t TOP_HASH = ConstExprHashingUtils::HashString("TOP");
        static constexpr uint32_t MIDDLE_HASH = ConstExprHashingUtils::HashString("MIDDLE");
        static constexpr uint32_t BOTTOM_HASH = ConstExprHashingUtils::HashString("BOTTOM");
        static constexpr uint32_t AUTO_HASH = ConstExprHashingUtils::HashString("AUTO");


        VerticalTextAlignment GetVerticalTextAlignmentForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == AUTO_HASH)
          {
            return VerticalTextAlignment::AUTO;
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
          case VerticalTextAlignment::NOT_SET:
            return {};
          case VerticalTextAlignment::TOP:
            return "TOP";
          case VerticalTextAlignment::MIDDLE:
            return "MIDDLE";
          case VerticalTextAlignment::BOTTOM:
            return "BOTTOM";
          case VerticalTextAlignment::AUTO:
            return "AUTO";
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
