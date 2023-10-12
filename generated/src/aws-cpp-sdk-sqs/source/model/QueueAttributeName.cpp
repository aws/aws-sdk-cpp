/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/QueueAttributeName.h>
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
      namespace QueueAttributeNameMapper
      {

        static constexpr uint32_t All_HASH = ConstExprHashingUtils::HashString("All");
        static constexpr uint32_t Policy_HASH = ConstExprHashingUtils::HashString("Policy");
        static constexpr uint32_t VisibilityTimeout_HASH = ConstExprHashingUtils::HashString("VisibilityTimeout");
        static constexpr uint32_t MaximumMessageSize_HASH = ConstExprHashingUtils::HashString("MaximumMessageSize");
        static constexpr uint32_t MessageRetentionPeriod_HASH = ConstExprHashingUtils::HashString("MessageRetentionPeriod");
        static constexpr uint32_t ApproximateNumberOfMessages_HASH = ConstExprHashingUtils::HashString("ApproximateNumberOfMessages");
        static constexpr uint32_t ApproximateNumberOfMessagesNotVisible_HASH = ConstExprHashingUtils::HashString("ApproximateNumberOfMessagesNotVisible");
        static constexpr uint32_t CreatedTimestamp_HASH = ConstExprHashingUtils::HashString("CreatedTimestamp");
        static constexpr uint32_t LastModifiedTimestamp_HASH = ConstExprHashingUtils::HashString("LastModifiedTimestamp");
        static constexpr uint32_t QueueArn_HASH = ConstExprHashingUtils::HashString("QueueArn");
        static constexpr uint32_t ApproximateNumberOfMessagesDelayed_HASH = ConstExprHashingUtils::HashString("ApproximateNumberOfMessagesDelayed");
        static constexpr uint32_t DelaySeconds_HASH = ConstExprHashingUtils::HashString("DelaySeconds");
        static constexpr uint32_t ReceiveMessageWaitTimeSeconds_HASH = ConstExprHashingUtils::HashString("ReceiveMessageWaitTimeSeconds");
        static constexpr uint32_t RedrivePolicy_HASH = ConstExprHashingUtils::HashString("RedrivePolicy");
        static constexpr uint32_t FifoQueue_HASH = ConstExprHashingUtils::HashString("FifoQueue");
        static constexpr uint32_t ContentBasedDeduplication_HASH = ConstExprHashingUtils::HashString("ContentBasedDeduplication");
        static constexpr uint32_t KmsMasterKeyId_HASH = ConstExprHashingUtils::HashString("KmsMasterKeyId");
        static constexpr uint32_t KmsDataKeyReusePeriodSeconds_HASH = ConstExprHashingUtils::HashString("KmsDataKeyReusePeriodSeconds");
        static constexpr uint32_t DeduplicationScope_HASH = ConstExprHashingUtils::HashString("DeduplicationScope");
        static constexpr uint32_t FifoThroughputLimit_HASH = ConstExprHashingUtils::HashString("FifoThroughputLimit");
        static constexpr uint32_t RedriveAllowPolicy_HASH = ConstExprHashingUtils::HashString("RedriveAllowPolicy");
        static constexpr uint32_t SqsManagedSseEnabled_HASH = ConstExprHashingUtils::HashString("SqsManagedSseEnabled");
        static constexpr uint32_t SentTimestamp_HASH = ConstExprHashingUtils::HashString("SentTimestamp");
        static constexpr uint32_t ApproximateFirstReceiveTimestamp_HASH = ConstExprHashingUtils::HashString("ApproximateFirstReceiveTimestamp");
        static constexpr uint32_t ApproximateReceiveCount_HASH = ConstExprHashingUtils::HashString("ApproximateReceiveCount");
        static constexpr uint32_t SenderId_HASH = ConstExprHashingUtils::HashString("SenderId");


        QueueAttributeName GetQueueAttributeNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == All_HASH)
          {
            return QueueAttributeName::All;
          }
          else if (hashCode == Policy_HASH)
          {
            return QueueAttributeName::Policy;
          }
          else if (hashCode == VisibilityTimeout_HASH)
          {
            return QueueAttributeName::VisibilityTimeout;
          }
          else if (hashCode == MaximumMessageSize_HASH)
          {
            return QueueAttributeName::MaximumMessageSize;
          }
          else if (hashCode == MessageRetentionPeriod_HASH)
          {
            return QueueAttributeName::MessageRetentionPeriod;
          }
          else if (hashCode == ApproximateNumberOfMessages_HASH)
          {
            return QueueAttributeName::ApproximateNumberOfMessages;
          }
          else if (hashCode == ApproximateNumberOfMessagesNotVisible_HASH)
          {
            return QueueAttributeName::ApproximateNumberOfMessagesNotVisible;
          }
          else if (hashCode == CreatedTimestamp_HASH)
          {
            return QueueAttributeName::CreatedTimestamp;
          }
          else if (hashCode == LastModifiedTimestamp_HASH)
          {
            return QueueAttributeName::LastModifiedTimestamp;
          }
          else if (hashCode == QueueArn_HASH)
          {
            return QueueAttributeName::QueueArn;
          }
          else if (hashCode == ApproximateNumberOfMessagesDelayed_HASH)
          {
            return QueueAttributeName::ApproximateNumberOfMessagesDelayed;
          }
          else if (hashCode == DelaySeconds_HASH)
          {
            return QueueAttributeName::DelaySeconds;
          }
          else if (hashCode == ReceiveMessageWaitTimeSeconds_HASH)
          {
            return QueueAttributeName::ReceiveMessageWaitTimeSeconds;
          }
          else if (hashCode == RedrivePolicy_HASH)
          {
            return QueueAttributeName::RedrivePolicy;
          }
          else if (hashCode == FifoQueue_HASH)
          {
            return QueueAttributeName::FifoQueue;
          }
          else if (hashCode == ContentBasedDeduplication_HASH)
          {
            return QueueAttributeName::ContentBasedDeduplication;
          }
          else if (hashCode == KmsMasterKeyId_HASH)
          {
            return QueueAttributeName::KmsMasterKeyId;
          }
          else if (hashCode == KmsDataKeyReusePeriodSeconds_HASH)
          {
            return QueueAttributeName::KmsDataKeyReusePeriodSeconds;
          }
          else if (hashCode == DeduplicationScope_HASH)
          {
            return QueueAttributeName::DeduplicationScope;
          }
          else if (hashCode == FifoThroughputLimit_HASH)
          {
            return QueueAttributeName::FifoThroughputLimit;
          }
          else if (hashCode == RedriveAllowPolicy_HASH)
          {
            return QueueAttributeName::RedriveAllowPolicy;
          }
          else if (hashCode == SqsManagedSseEnabled_HASH)
          {
            return QueueAttributeName::SqsManagedSseEnabled;
          }
          else if (hashCode == SentTimestamp_HASH)
          {
            return QueueAttributeName::SentTimestamp;
          }
          else if (hashCode == ApproximateFirstReceiveTimestamp_HASH)
          {
            return QueueAttributeName::ApproximateFirstReceiveTimestamp;
          }
          else if (hashCode == ApproximateReceiveCount_HASH)
          {
            return QueueAttributeName::ApproximateReceiveCount;
          }
          else if (hashCode == SenderId_HASH)
          {
            return QueueAttributeName::SenderId;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueueAttributeName>(hashCode);
          }

          return QueueAttributeName::NOT_SET;
        }

        Aws::String GetNameForQueueAttributeName(QueueAttributeName enumValue)
        {
          switch(enumValue)
          {
          case QueueAttributeName::NOT_SET:
            return {};
          case QueueAttributeName::All:
            return "All";
          case QueueAttributeName::Policy:
            return "Policy";
          case QueueAttributeName::VisibilityTimeout:
            return "VisibilityTimeout";
          case QueueAttributeName::MaximumMessageSize:
            return "MaximumMessageSize";
          case QueueAttributeName::MessageRetentionPeriod:
            return "MessageRetentionPeriod";
          case QueueAttributeName::ApproximateNumberOfMessages:
            return "ApproximateNumberOfMessages";
          case QueueAttributeName::ApproximateNumberOfMessagesNotVisible:
            return "ApproximateNumberOfMessagesNotVisible";
          case QueueAttributeName::CreatedTimestamp:
            return "CreatedTimestamp";
          case QueueAttributeName::LastModifiedTimestamp:
            return "LastModifiedTimestamp";
          case QueueAttributeName::QueueArn:
            return "QueueArn";
          case QueueAttributeName::ApproximateNumberOfMessagesDelayed:
            return "ApproximateNumberOfMessagesDelayed";
          case QueueAttributeName::DelaySeconds:
            return "DelaySeconds";
          case QueueAttributeName::ReceiveMessageWaitTimeSeconds:
            return "ReceiveMessageWaitTimeSeconds";
          case QueueAttributeName::RedrivePolicy:
            return "RedrivePolicy";
          case QueueAttributeName::FifoQueue:
            return "FifoQueue";
          case QueueAttributeName::ContentBasedDeduplication:
            return "ContentBasedDeduplication";
          case QueueAttributeName::KmsMasterKeyId:
            return "KmsMasterKeyId";
          case QueueAttributeName::KmsDataKeyReusePeriodSeconds:
            return "KmsDataKeyReusePeriodSeconds";
          case QueueAttributeName::DeduplicationScope:
            return "DeduplicationScope";
          case QueueAttributeName::FifoThroughputLimit:
            return "FifoThroughputLimit";
          case QueueAttributeName::RedriveAllowPolicy:
            return "RedriveAllowPolicy";
          case QueueAttributeName::SqsManagedSseEnabled:
            return "SqsManagedSseEnabled";
          case QueueAttributeName::SentTimestamp:
            return "SentTimestamp";
          case QueueAttributeName::ApproximateFirstReceiveTimestamp:
            return "ApproximateFirstReceiveTimestamp";
          case QueueAttributeName::ApproximateReceiveCount:
            return "ApproximateReceiveCount";
          case QueueAttributeName::SenderId:
            return "SenderId";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueueAttributeNameMapper
    } // namespace Model
  } // namespace SQS
} // namespace Aws
