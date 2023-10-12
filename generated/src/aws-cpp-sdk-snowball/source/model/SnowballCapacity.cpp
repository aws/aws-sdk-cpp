/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/SnowballCapacity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Snowball
  {
    namespace Model
    {
      namespace SnowballCapacityMapper
      {

        static constexpr uint32_t T50_HASH = ConstExprHashingUtils::HashString("T50");
        static constexpr uint32_t T80_HASH = ConstExprHashingUtils::HashString("T80");
        static constexpr uint32_t T100_HASH = ConstExprHashingUtils::HashString("T100");
        static constexpr uint32_t T42_HASH = ConstExprHashingUtils::HashString("T42");
        static constexpr uint32_t T98_HASH = ConstExprHashingUtils::HashString("T98");
        static constexpr uint32_t T8_HASH = ConstExprHashingUtils::HashString("T8");
        static constexpr uint32_t T14_HASH = ConstExprHashingUtils::HashString("T14");
        static constexpr uint32_t T32_HASH = ConstExprHashingUtils::HashString("T32");
        static constexpr uint32_t NoPreference_HASH = ConstExprHashingUtils::HashString("NoPreference");
        static constexpr uint32_t T240_HASH = ConstExprHashingUtils::HashString("T240");
        static constexpr uint32_t T13_HASH = ConstExprHashingUtils::HashString("T13");


        SnowballCapacity GetSnowballCapacityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == T50_HASH)
          {
            return SnowballCapacity::T50;
          }
          else if (hashCode == T80_HASH)
          {
            return SnowballCapacity::T80;
          }
          else if (hashCode == T100_HASH)
          {
            return SnowballCapacity::T100;
          }
          else if (hashCode == T42_HASH)
          {
            return SnowballCapacity::T42;
          }
          else if (hashCode == T98_HASH)
          {
            return SnowballCapacity::T98;
          }
          else if (hashCode == T8_HASH)
          {
            return SnowballCapacity::T8;
          }
          else if (hashCode == T14_HASH)
          {
            return SnowballCapacity::T14;
          }
          else if (hashCode == T32_HASH)
          {
            return SnowballCapacity::T32;
          }
          else if (hashCode == NoPreference_HASH)
          {
            return SnowballCapacity::NoPreference;
          }
          else if (hashCode == T240_HASH)
          {
            return SnowballCapacity::T240;
          }
          else if (hashCode == T13_HASH)
          {
            return SnowballCapacity::T13;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnowballCapacity>(hashCode);
          }

          return SnowballCapacity::NOT_SET;
        }

        Aws::String GetNameForSnowballCapacity(SnowballCapacity enumValue)
        {
          switch(enumValue)
          {
          case SnowballCapacity::NOT_SET:
            return {};
          case SnowballCapacity::T50:
            return "T50";
          case SnowballCapacity::T80:
            return "T80";
          case SnowballCapacity::T100:
            return "T100";
          case SnowballCapacity::T42:
            return "T42";
          case SnowballCapacity::T98:
            return "T98";
          case SnowballCapacity::T8:
            return "T8";
          case SnowballCapacity::T14:
            return "T14";
          case SnowballCapacity::T32:
            return "T32";
          case SnowballCapacity::NoPreference:
            return "NoPreference";
          case SnowballCapacity::T240:
            return "T240";
          case SnowballCapacity::T13:
            return "T13";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SnowballCapacityMapper
    } // namespace Model
  } // namespace Snowball
} // namespace Aws
