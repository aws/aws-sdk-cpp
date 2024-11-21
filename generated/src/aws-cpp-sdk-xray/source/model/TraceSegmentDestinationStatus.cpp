/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/TraceSegmentDestinationStatus.h>
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
      namespace TraceSegmentDestinationStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        TraceSegmentDestinationStatus GetTraceSegmentDestinationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return TraceSegmentDestinationStatus::PENDING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return TraceSegmentDestinationStatus::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TraceSegmentDestinationStatus>(hashCode);
          }

          return TraceSegmentDestinationStatus::NOT_SET;
        }

        Aws::String GetNameForTraceSegmentDestinationStatus(TraceSegmentDestinationStatus enumValue)
        {
          switch(enumValue)
          {
          case TraceSegmentDestinationStatus::NOT_SET:
            return {};
          case TraceSegmentDestinationStatus::PENDING:
            return "PENDING";
          case TraceSegmentDestinationStatus::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TraceSegmentDestinationStatusMapper
    } // namespace Model
  } // namespace XRay
} // namespace Aws
