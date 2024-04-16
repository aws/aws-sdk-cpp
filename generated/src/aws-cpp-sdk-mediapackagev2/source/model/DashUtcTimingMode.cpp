/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/DashUtcTimingMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mediapackagev2
  {
    namespace Model
    {
      namespace DashUtcTimingModeMapper
      {

        static const int HTTP_HEAD_HASH = HashingUtils::HashString("HTTP_HEAD");
        static const int HTTP_ISO_HASH = HashingUtils::HashString("HTTP_ISO");
        static const int HTTP_XSDATE_HASH = HashingUtils::HashString("HTTP_XSDATE");
        static const int UTC_DIRECT_HASH = HashingUtils::HashString("UTC_DIRECT");


        DashUtcTimingMode GetDashUtcTimingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HTTP_HEAD_HASH)
          {
            return DashUtcTimingMode::HTTP_HEAD;
          }
          else if (hashCode == HTTP_ISO_HASH)
          {
            return DashUtcTimingMode::HTTP_ISO;
          }
          else if (hashCode == HTTP_XSDATE_HASH)
          {
            return DashUtcTimingMode::HTTP_XSDATE;
          }
          else if (hashCode == UTC_DIRECT_HASH)
          {
            return DashUtcTimingMode::UTC_DIRECT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashUtcTimingMode>(hashCode);
          }

          return DashUtcTimingMode::NOT_SET;
        }

        Aws::String GetNameForDashUtcTimingMode(DashUtcTimingMode enumValue)
        {
          switch(enumValue)
          {
          case DashUtcTimingMode::NOT_SET:
            return {};
          case DashUtcTimingMode::HTTP_HEAD:
            return "HTTP_HEAD";
          case DashUtcTimingMode::HTTP_ISO:
            return "HTTP_ISO";
          case DashUtcTimingMode::HTTP_XSDATE:
            return "HTTP_XSDATE";
          case DashUtcTimingMode::UTC_DIRECT:
            return "UTC_DIRECT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DashUtcTimingModeMapper
    } // namespace Model
  } // namespace mediapackagev2
} // namespace Aws
