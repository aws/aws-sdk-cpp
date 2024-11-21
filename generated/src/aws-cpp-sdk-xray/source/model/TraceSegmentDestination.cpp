/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/TraceSegmentDestination.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace XRay
  {
    namespace Model
    {
      namespace TraceSegmentDestinationMapper
      {

        static const int XRay_HASH = HashingUtils::HashString("XRay");
        static const int CloudWatchLogs_HASH = HashingUtils::HashString("CloudWatchLogs");


        TraceSegmentDestination GetTraceSegmentDestinationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == XRay_HASH)
          {
            return TraceSegmentDestination::XRay;
          }
          else if (hashCode == CloudWatchLogs_HASH)
          {
            return TraceSegmentDestination::CloudWatchLogs;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TraceSegmentDestination>(hashCode);
          }

          return TraceSegmentDestination::NOT_SET;
        }

        Aws::String GetNameForTraceSegmentDestination(TraceSegmentDestination enumValue)
        {
          switch(enumValue)
          {
          case TraceSegmentDestination::NOT_SET:
            return {};
          case TraceSegmentDestination::XRay:
            return "XRay";
          case TraceSegmentDestination::CloudWatchLogs:
            return "CloudWatchLogs";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TraceSegmentDestinationMapper
    } // namespace Model
  } // namespace XRay
} // namespace Aws
