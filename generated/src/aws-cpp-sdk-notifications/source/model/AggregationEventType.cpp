/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/AggregationEventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Notifications
  {
    namespace Model
    {
      namespace AggregationEventTypeMapper
      {

        static const int AGGREGATE_HASH = HashingUtils::HashString("AGGREGATE");
        static const int CHILD_HASH = HashingUtils::HashString("CHILD");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        AggregationEventType GetAggregationEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AGGREGATE_HASH)
          {
            return AggregationEventType::AGGREGATE;
          }
          else if (hashCode == CHILD_HASH)
          {
            return AggregationEventType::CHILD;
          }
          else if (hashCode == NONE_HASH)
          {
            return AggregationEventType::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AggregationEventType>(hashCode);
          }

          return AggregationEventType::NOT_SET;
        }

        Aws::String GetNameForAggregationEventType(AggregationEventType enumValue)
        {
          switch(enumValue)
          {
          case AggregationEventType::NOT_SET:
            return {};
          case AggregationEventType::AGGREGATE:
            return "AGGREGATE";
          case AggregationEventType::CHILD:
            return "CHILD";
          case AggregationEventType::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AggregationEventTypeMapper
    } // namespace Model
  } // namespace Notifications
} // namespace Aws
