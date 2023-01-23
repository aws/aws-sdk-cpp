/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/CustomEventsStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchRUM
  {
    namespace Model
    {
      namespace CustomEventsStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        CustomEventsStatus GetCustomEventsStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return CustomEventsStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return CustomEventsStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomEventsStatus>(hashCode);
          }

          return CustomEventsStatus::NOT_SET;
        }

        Aws::String GetNameForCustomEventsStatus(CustomEventsStatus enumValue)
        {
          switch(enumValue)
          {
          case CustomEventsStatus::ENABLED:
            return "ENABLED";
          case CustomEventsStatus::DISABLED:
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

      } // namespace CustomEventsStatusMapper
    } // namespace Model
  } // namespace CloudWatchRUM
} // namespace Aws
