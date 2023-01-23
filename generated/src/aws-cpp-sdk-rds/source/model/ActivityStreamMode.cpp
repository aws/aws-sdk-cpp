/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ActivityStreamMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace ActivityStreamModeMapper
      {

        static const int sync_HASH = HashingUtils::HashString("sync");
        static const int async_HASH = HashingUtils::HashString("async");


        ActivityStreamMode GetActivityStreamModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == sync_HASH)
          {
            return ActivityStreamMode::sync;
          }
          else if (hashCode == async_HASH)
          {
            return ActivityStreamMode::async;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActivityStreamMode>(hashCode);
          }

          return ActivityStreamMode::NOT_SET;
        }

        Aws::String GetNameForActivityStreamMode(ActivityStreamMode enumValue)
        {
          switch(enumValue)
          {
          case ActivityStreamMode::sync:
            return "sync";
          case ActivityStreamMode::async:
            return "async";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActivityStreamModeMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
