/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/EventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MTurk
  {
    namespace Model
    {
      namespace EventTypeMapper
      {

        static constexpr uint32_t AssignmentAccepted_HASH = ConstExprHashingUtils::HashString("AssignmentAccepted");
        static constexpr uint32_t AssignmentAbandoned_HASH = ConstExprHashingUtils::HashString("AssignmentAbandoned");
        static constexpr uint32_t AssignmentReturned_HASH = ConstExprHashingUtils::HashString("AssignmentReturned");
        static constexpr uint32_t AssignmentSubmitted_HASH = ConstExprHashingUtils::HashString("AssignmentSubmitted");
        static constexpr uint32_t AssignmentRejected_HASH = ConstExprHashingUtils::HashString("AssignmentRejected");
        static constexpr uint32_t AssignmentApproved_HASH = ConstExprHashingUtils::HashString("AssignmentApproved");
        static constexpr uint32_t HITCreated_HASH = ConstExprHashingUtils::HashString("HITCreated");
        static constexpr uint32_t HITExpired_HASH = ConstExprHashingUtils::HashString("HITExpired");
        static constexpr uint32_t HITReviewable_HASH = ConstExprHashingUtils::HashString("HITReviewable");
        static constexpr uint32_t HITExtended_HASH = ConstExprHashingUtils::HashString("HITExtended");
        static constexpr uint32_t HITDisposed_HASH = ConstExprHashingUtils::HashString("HITDisposed");
        static constexpr uint32_t Ping_HASH = ConstExprHashingUtils::HashString("Ping");


        EventType GetEventTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AssignmentAccepted_HASH)
          {
            return EventType::AssignmentAccepted;
          }
          else if (hashCode == AssignmentAbandoned_HASH)
          {
            return EventType::AssignmentAbandoned;
          }
          else if (hashCode == AssignmentReturned_HASH)
          {
            return EventType::AssignmentReturned;
          }
          else if (hashCode == AssignmentSubmitted_HASH)
          {
            return EventType::AssignmentSubmitted;
          }
          else if (hashCode == AssignmentRejected_HASH)
          {
            return EventType::AssignmentRejected;
          }
          else if (hashCode == AssignmentApproved_HASH)
          {
            return EventType::AssignmentApproved;
          }
          else if (hashCode == HITCreated_HASH)
          {
            return EventType::HITCreated;
          }
          else if (hashCode == HITExpired_HASH)
          {
            return EventType::HITExpired;
          }
          else if (hashCode == HITReviewable_HASH)
          {
            return EventType::HITReviewable;
          }
          else if (hashCode == HITExtended_HASH)
          {
            return EventType::HITExtended;
          }
          else if (hashCode == HITDisposed_HASH)
          {
            return EventType::HITDisposed;
          }
          else if (hashCode == Ping_HASH)
          {
            return EventType::Ping;
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
          case EventType::AssignmentAccepted:
            return "AssignmentAccepted";
          case EventType::AssignmentAbandoned:
            return "AssignmentAbandoned";
          case EventType::AssignmentReturned:
            return "AssignmentReturned";
          case EventType::AssignmentSubmitted:
            return "AssignmentSubmitted";
          case EventType::AssignmentRejected:
            return "AssignmentRejected";
          case EventType::AssignmentApproved:
            return "AssignmentApproved";
          case EventType::HITCreated:
            return "HITCreated";
          case EventType::HITExpired:
            return "HITExpired";
          case EventType::HITReviewable:
            return "HITReviewable";
          case EventType::HITExtended:
            return "HITExtended";
          case EventType::HITDisposed:
            return "HITDisposed";
          case EventType::Ping:
            return "Ping";
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
  } // namespace MTurk
} // namespace Aws
