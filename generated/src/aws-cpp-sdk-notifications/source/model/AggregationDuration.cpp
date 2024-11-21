/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/AggregationDuration.h>
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
      namespace AggregationDurationMapper
      {

        static const int LONG_HASH = HashingUtils::HashString("LONG");
        static const int SHORT_HASH = HashingUtils::HashString("SHORT");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        AggregationDuration GetAggregationDurationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LONG_HASH)
          {
            return AggregationDuration::LONG;
          }
          else if (hashCode == SHORT_HASH)
          {
            return AggregationDuration::SHORT;
          }
          else if (hashCode == NONE_HASH)
          {
            return AggregationDuration::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AggregationDuration>(hashCode);
          }

          return AggregationDuration::NOT_SET;
        }

        Aws::String GetNameForAggregationDuration(AggregationDuration enumValue)
        {
          switch(enumValue)
          {
          case AggregationDuration::NOT_SET:
            return {};
          case AggregationDuration::LONG:
            return "LONG";
          case AggregationDuration::SHORT:
            return "SHORT";
          case AggregationDuration::NONE:
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

      } // namespace AggregationDurationMapper
    } // namespace Model
  } // namespace Notifications
} // namespace Aws
