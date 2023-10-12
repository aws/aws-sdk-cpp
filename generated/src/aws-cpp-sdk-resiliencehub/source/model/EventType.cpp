/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/EventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResilienceHub
  {
    namespace Model
    {
      namespace EventTypeMapper
      {

        static constexpr uint32_t ScheduledAssessmentFailure_HASH = ConstExprHashingUtils::HashString("ScheduledAssessmentFailure");
        static constexpr uint32_t DriftDetected_HASH = ConstExprHashingUtils::HashString("DriftDetected");


        EventType GetEventTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ScheduledAssessmentFailure_HASH)
          {
            return EventType::ScheduledAssessmentFailure;
          }
          else if (hashCode == DriftDetected_HASH)
          {
            return EventType::DriftDetected;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventType>(hashCode);
          }

          return EventType::NOT_SET;
        }

        Aws::String GetNameForEventType(EventType enumValue)
        {
          switch(enumValue)
          {
          case EventType::NOT_SET:
            return {};
          case EventType::ScheduledAssessmentFailure:
            return "ScheduledAssessmentFailure";
          case EventType::DriftDetected:
            return "DriftDetected";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventTypeMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
