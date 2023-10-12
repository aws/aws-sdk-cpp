/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/Duration.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pinpoint
  {
    namespace Model
    {
      namespace DurationMapper
      {

        static constexpr uint32_t HR_24_HASH = ConstExprHashingUtils::HashString("HR_24");
        static constexpr uint32_t DAY_7_HASH = ConstExprHashingUtils::HashString("DAY_7");
        static constexpr uint32_t DAY_14_HASH = ConstExprHashingUtils::HashString("DAY_14");
        static constexpr uint32_t DAY_30_HASH = ConstExprHashingUtils::HashString("DAY_30");


        Duration GetDurationForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HR_24_HASH)
          {
            return Duration::HR_24;
          }
          else if (hashCode == DAY_7_HASH)
          {
            return Duration::DAY_7;
          }
          else if (hashCode == DAY_14_HASH)
          {
            return Duration::DAY_14;
          }
          else if (hashCode == DAY_30_HASH)
          {
            return Duration::DAY_30;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Duration>(hashCode);
          }

          return Duration::NOT_SET;
        }

        Aws::String GetNameForDuration(Duration enumValue)
        {
          switch(enumValue)
          {
          case Duration::NOT_SET:
            return {};
          case Duration::HR_24:
            return "HR_24";
          case Duration::DAY_7:
            return "DAY_7";
          case Duration::DAY_14:
            return "DAY_14";
          case Duration::DAY_30:
            return "DAY_30";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DurationMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws
