/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/Range.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConnect
  {
    namespace Model
    {
      namespace RangeMapper
      {

        static constexpr uint32_t NARROW_HASH = ConstExprHashingUtils::HashString("NARROW");
        static constexpr uint32_t FULL_HASH = ConstExprHashingUtils::HashString("FULL");
        static constexpr uint32_t FULLPROTECT_HASH = ConstExprHashingUtils::HashString("FULLPROTECT");


        Range GetRangeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NARROW_HASH)
          {
            return Range::NARROW;
          }
          else if (hashCode == FULL_HASH)
          {
            return Range::FULL;
          }
          else if (hashCode == FULLPROTECT_HASH)
          {
            return Range::FULLPROTECT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Range>(hashCode);
          }

          return Range::NOT_SET;
        }

        Aws::String GetNameForRange(Range enumValue)
        {
          switch(enumValue)
          {
          case Range::NOT_SET:
            return {};
          case Range::NARROW:
            return "NARROW";
          case Range::FULL:
            return "FULL";
          case Range::FULLPROTECT:
            return "FULLPROTECT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RangeMapper
    } // namespace Model
  } // namespace MediaConnect
} // namespace Aws
