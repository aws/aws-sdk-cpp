/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/SmoothGroupEventIdMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace SmoothGroupEventIdModeMapper
      {

        static const int NO_EVENT_ID_HASH = HashingUtils::HashString("NO_EVENT_ID");
        static const int USE_CONFIGURED_HASH = HashingUtils::HashString("USE_CONFIGURED");
        static const int USE_TIMESTAMP_HASH = HashingUtils::HashString("USE_TIMESTAMP");


        SmoothGroupEventIdMode GetSmoothGroupEventIdModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_EVENT_ID_HASH)
          {
            return SmoothGroupEventIdMode::NO_EVENT_ID;
          }
          else if (hashCode == USE_CONFIGURED_HASH)
          {
            return SmoothGroupEventIdMode::USE_CONFIGURED;
          }
          else if (hashCode == USE_TIMESTAMP_HASH)
          {
            return SmoothGroupEventIdMode::USE_TIMESTAMP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SmoothGroupEventIdMode>(hashCode);
          }

          return SmoothGroupEventIdMode::NOT_SET;
        }

        Aws::String GetNameForSmoothGroupEventIdMode(SmoothGroupEventIdMode enumValue)
        {
          switch(enumValue)
          {
          case SmoothGroupEventIdMode::NO_EVENT_ID:
            return "NO_EVENT_ID";
          case SmoothGroupEventIdMode::USE_CONFIGURED:
            return "USE_CONFIGURED";
          case SmoothGroupEventIdMode::USE_TIMESTAMP:
            return "USE_TIMESTAMP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SmoothGroupEventIdModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
