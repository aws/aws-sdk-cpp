/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AxisBinding.h>
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
      namespace AxisBindingMapper
      {

        static constexpr uint32_t PRIMARY_YAXIS_HASH = ConstExprHashingUtils::HashString("PRIMARY_YAXIS");
        static constexpr uint32_t SECONDARY_YAXIS_HASH = ConstExprHashingUtils::HashString("SECONDARY_YAXIS");


        AxisBinding GetAxisBindingForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRIMARY_YAXIS_HASH)
          {
            return AxisBinding::PRIMARY_YAXIS;
          }
          else if (hashCode == SECONDARY_YAXIS_HASH)
          {
            return AxisBinding::SECONDARY_YAXIS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AxisBinding>(hashCode);
          }

          return AxisBinding::NOT_SET;
        }

        Aws::String GetNameForAxisBinding(AxisBinding enumValue)
        {
          switch(enumValue)
          {
          case AxisBinding::NOT_SET:
            return {};
          case AxisBinding::PRIMARY_YAXIS:
            return "PRIMARY_YAXIS";
          case AxisBinding::SECONDARY_YAXIS:
            return "SECONDARY_YAXIS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AxisBindingMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
