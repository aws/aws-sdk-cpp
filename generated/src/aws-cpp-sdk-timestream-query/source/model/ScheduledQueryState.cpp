/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/ScheduledQueryState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TimestreamQuery
  {
    namespace Model
    {
      namespace ScheduledQueryStateMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ScheduledQueryState GetScheduledQueryStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ScheduledQueryState::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ScheduledQueryState::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScheduledQueryState>(hashCode);
          }

          return ScheduledQueryState::NOT_SET;
        }

        Aws::String GetNameForScheduledQueryState(ScheduledQueryState enumValue)
        {
          switch(enumValue)
          {
          case ScheduledQueryState::NOT_SET:
            return {};
          case ScheduledQueryState::ENABLED:
            return "ENABLED";
          case ScheduledQueryState::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScheduledQueryStateMapper
    } // namespace Model
  } // namespace TimestreamQuery
} // namespace Aws
