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

        static const int HR_24_HASH = HashingUtils::HashString("HR_24");
        static const int DAY_7_HASH = HashingUtils::HashString("DAY_7");
        static const int DAY_14_HASH = HashingUtils::HashString("DAY_14");
        static const int DAY_30_HASH = HashingUtils::HashString("DAY_30");


        Duration GetDurationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
