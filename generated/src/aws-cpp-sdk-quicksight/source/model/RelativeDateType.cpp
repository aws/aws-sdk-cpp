/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RelativeDateType.h>
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
      namespace RelativeDateTypeMapper
      {

        static constexpr uint32_t PREVIOUS_HASH = ConstExprHashingUtils::HashString("PREVIOUS");
        static constexpr uint32_t THIS_HASH = ConstExprHashingUtils::HashString("THIS");
        static constexpr uint32_t LAST_HASH = ConstExprHashingUtils::HashString("LAST");
        static constexpr uint32_t NOW_HASH = ConstExprHashingUtils::HashString("NOW");
        static constexpr uint32_t NEXT_HASH = ConstExprHashingUtils::HashString("NEXT");


        RelativeDateType GetRelativeDateTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PREVIOUS_HASH)
          {
            return RelativeDateType::PREVIOUS;
          }
          else if (hashCode == THIS_HASH)
          {
            return RelativeDateType::THIS;
          }
          else if (hashCode == LAST_HASH)
          {
            return RelativeDateType::LAST;
          }
          else if (hashCode == NOW_HASH)
          {
            return RelativeDateType::NOW;
          }
          else if (hashCode == NEXT_HASH)
          {
            return RelativeDateType::NEXT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RelativeDateType>(hashCode);
          }

          return RelativeDateType::NOT_SET;
        }

        Aws::String GetNameForRelativeDateType(RelativeDateType enumValue)
        {
          switch(enumValue)
          {
          case RelativeDateType::NOT_SET:
            return {};
          case RelativeDateType::PREVIOUS:
            return "PREVIOUS";
          case RelativeDateType::THIS:
            return "THIS";
          case RelativeDateType::LAST:
            return "LAST";
          case RelativeDateType::NOW:
            return "NOW";
          case RelativeDateType::NEXT:
            return "NEXT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RelativeDateTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
