/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopBottomComputationType.h>
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
      namespace TopBottomComputationTypeMapper
      {

        static constexpr uint32_t TOP_HASH = ConstExprHashingUtils::HashString("TOP");
        static constexpr uint32_t BOTTOM_HASH = ConstExprHashingUtils::HashString("BOTTOM");


        TopBottomComputationType GetTopBottomComputationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TOP_HASH)
          {
            return TopBottomComputationType::TOP;
          }
          else if (hashCode == BOTTOM_HASH)
          {
            return TopBottomComputationType::BOTTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TopBottomComputationType>(hashCode);
          }

          return TopBottomComputationType::NOT_SET;
        }

        Aws::String GetNameForTopBottomComputationType(TopBottomComputationType enumValue)
        {
          switch(enumValue)
          {
          case TopBottomComputationType::NOT_SET:
            return {};
          case TopBottomComputationType::TOP:
            return "TOP";
          case TopBottomComputationType::BOTTOM:
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

      } // namespace TopBottomComputationTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
