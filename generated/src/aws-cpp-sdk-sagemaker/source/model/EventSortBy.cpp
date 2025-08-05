/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EventSortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace EventSortByMapper
      {

        static const int EventTime_HASH = HashingUtils::HashString("EventTime");


        EventSortBy GetEventSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EventTime_HASH)
          {
            return EventSortBy::EventTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventSortBy>(hashCode);
          }

          return EventSortBy::NOT_SET;
        }

        Aws::String GetNameForEventSortBy(EventSortBy enumValue)
        {
          switch(enumValue)
          {
          case EventSortBy::NOT_SET:
            return {};
          case EventSortBy::EventTime:
            return "EventTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventSortByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
