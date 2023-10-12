/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/MessageSystemAttributeName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SQS
  {
    namespace Model
    {
      namespace MessageSystemAttributeNameMapper
      {

        static constexpr uint32_t SenderId_HASH = ConstExprHashingUtils::HashString("SenderId");
        static constexpr uint32_t SentTimestamp_HASH = ConstExprHashingUtils::HashString("SentTimestamp");
        static constexpr uint32_t ApproximateReceiveCount_HASH = ConstExprHashingUtils::HashString("ApproximateReceiveCount");
        static constexpr uint32_t ApproximateFirstReceiveTimestamp_HASH = ConstExprHashingUtils::HashString("ApproximateFirstReceiveTimestamp");
        static constexpr uint32_t SequenceNumber_HASH = ConstExprHashingUtils::HashString("SequenceNumber");
        static constexpr uint32_t MessageDeduplicationId_HASH = ConstExprHashingUtils::HashString("MessageDeduplicationId");
        static constexpr uint32_t MessageGroupId_HASH = ConstExprHashingUtils::HashString("MessageGroupId");
        static constexpr uint32_t AWSTraceHeader_HASH = ConstExprHashingUtils::HashString("AWSTraceHeader");
        static constexpr uint32_t DeadLetterQueueSourceArn_HASH = ConstExprHashingUtils::HashString("DeadLetterQueueSourceArn");


        MessageSystemAttributeName GetMessageSystemAttributeNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SenderId_HASH)
          {
            return MessageSystemAttributeName::SenderId;
          }
          else if (hashCode == SentTimestamp_HASH)
          {
            return MessageSystemAttributeName::SentTimestamp;
          }
          else if (hashCode == ApproximateReceiveCount_HASH)
          {
            return MessageSystemAttributeName::ApproximateReceiveCount;
          }
          else if (hashCode == ApproximateFirstReceiveTimestamp_HASH)
          {
            return MessageSystemAttributeName::ApproximateFirstReceiveTimestamp;
          }
          else if (hashCode == SequenceNumber_HASH)
          {
            return MessageSystemAttributeName::SequenceNumber;
          }
          else if (hashCode == MessageDeduplicationId_HASH)
          {
            return MessageSystemAttributeName::MessageDeduplicationId;
          }
          else if (hashCode == MessageGroupId_HASH)
          {
            return MessageSystemAttributeName::MessageGroupId;
          }
          else if (hashCode == AWSTraceHeader_HASH)
          {
            return MessageSystemAttributeName::AWSTraceHeader;
          }
          else if (hashCode == DeadLetterQueueSourceArn_HASH)
          {
            return MessageSystemAttributeName::DeadLetterQueueSourceArn;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MessageSystemAttributeName>(hashCode);
          }

          return MessageSystemAttributeName::NOT_SET;
        }

        Aws::String GetNameForMessageSystemAttributeName(MessageSystemAttributeName enumValue)
        {
          switch(enumValue)
          {
          case MessageSystemAttributeName::NOT_SET:
            return {};
          case MessageSystemAttributeName::SenderId:
            return "SenderId";
          case MessageSystemAttributeName::SentTimestamp:
            return "SentTimestamp";
          case MessageSystemAttributeName::ApproximateReceiveCount:
            return "ApproximateReceiveCount";
          case MessageSystemAttributeName::ApproximateFirstReceiveTimestamp:
            return "ApproximateFirstReceiveTimestamp";
          case MessageSystemAttributeName::SequenceNumber:
            return "SequenceNumber";
          case MessageSystemAttributeName::MessageDeduplicationId:
            return "MessageDeduplicationId";
          case MessageSystemAttributeName::MessageGroupId:
            return "MessageGroupId";
          case MessageSystemAttributeName::AWSTraceHeader:
            return "AWSTraceHeader";
          case MessageSystemAttributeName::DeadLetterQueueSourceArn:
            return "DeadLetterQueueSourceArn";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MessageSystemAttributeNameMapper
    } // namespace Model
  } // namespace SQS
} // namespace Aws
