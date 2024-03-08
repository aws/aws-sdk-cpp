/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sqs/SQSErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SQS;

namespace Aws
{
namespace SQS
{
namespace SQSErrorMapper
{

static const int OVER_LIMIT_HASH = HashingUtils::HashString("OverLimit");
static const int KMS_INVALID_STATE_HASH = HashingUtils::HashString("KmsInvalidState");
static const int KMS_NOT_FOUND_HASH = HashingUtils::HashString("KmsNotFound");
static const int KMS_INVALID_KEY_USAGE_HASH = HashingUtils::HashString("KmsInvalidKeyUsage");
static const int QUEUE_DOES_NOT_EXIST_HASH = HashingUtils::HashString("QueueDoesNotExist");
static const int KMS_DISABLED_HASH = HashingUtils::HashString("KmsDisabled");
static const int KMS_ACCESS_DENIED_HASH = HashingUtils::HashString("KmsAccessDenied");
static const int BATCH_REQUEST_TOO_LONG_HASH = HashingUtils::HashString("BatchRequestTooLong");
static const int INVALID_BATCH_ENTRY_ID_HASH = HashingUtils::HashString("InvalidBatchEntryId");
static const int KMS_OPT_IN_REQUIRED_HASH = HashingUtils::HashString("KmsOptInRequired");
static const int QUEUE_DELETED_RECENTLY_HASH = HashingUtils::HashString("QueueDeletedRecently");
static const int TOO_MANY_ENTRIES_IN_BATCH_REQUEST_HASH = HashingUtils::HashString("TooManyEntriesInBatchRequest");
static const int INVALID_ATTRIBUTE_VALUE_HASH = HashingUtils::HashString("InvalidAttributeValue");
static const int KMS_THROTTLED_HASH = HashingUtils::HashString("KmsThrottled");
static const int QUEUE_NAME_EXISTS_HASH = HashingUtils::HashString("QueueNameExists");
static const int INVALID_SECURITY_HASH = HashingUtils::HashString("InvalidSecurity");
static const int PURGE_QUEUE_IN_PROGRESS_HASH = HashingUtils::HashString("PurgeQueueInProgress");
static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("UnsupportedOperation");
static const int BATCH_ENTRY_IDS_NOT_DISTINCT_HASH = HashingUtils::HashString("BatchEntryIdsNotDistinct");
static const int MESSAGE_NOT_INFLIGHT_HASH = HashingUtils::HashString("MessageNotInflight");
static const int INVALID_ADDRESS_HASH = HashingUtils::HashString("InvalidAddress");
static const int INVALID_ATTRIBUTE_NAME_HASH = HashingUtils::HashString("InvalidAttributeName");
static const int INVALID_ID_FORMAT_HASH = HashingUtils::HashString("InvalidIdFormat");
static const int EMPTY_BATCH_REQUEST_HASH = HashingUtils::HashString("EmptyBatchRequest");
static const int INVALID_MESSAGE_CONTENTS_HASH = HashingUtils::HashString("InvalidMessageContents");
static const int RECEIPT_HANDLE_IS_INVALID_HASH = HashingUtils::HashString("ReceiptHandleIsInvalid");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == OVER_LIMIT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::OVER_LIMIT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == KMS_INVALID_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::KMS_INVALID_STATE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == KMS_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::KMS_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == KMS_INVALID_KEY_USAGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::KMS_INVALID_KEY_USAGE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == QUEUE_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::QUEUE_DOES_NOT_EXIST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == KMS_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::KMS_DISABLED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == KMS_ACCESS_DENIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::KMS_ACCESS_DENIED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BATCH_REQUEST_TOO_LONG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::BATCH_REQUEST_TOO_LONG), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_BATCH_ENTRY_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::INVALID_BATCH_ENTRY_ID), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == KMS_OPT_IN_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::KMS_OPT_IN_REQUIRED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == QUEUE_DELETED_RECENTLY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::QUEUE_DELETED_RECENTLY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_ENTRIES_IN_BATCH_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::TOO_MANY_ENTRIES_IN_BATCH_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_ATTRIBUTE_VALUE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::INVALID_ATTRIBUTE_VALUE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == KMS_THROTTLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::KMS_THROTTLED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == QUEUE_NAME_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::QUEUE_NAME_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_SECURITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::INVALID_SECURITY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PURGE_QUEUE_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::PURGE_QUEUE_IN_PROGRESS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::UNSUPPORTED_OPERATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BATCH_ENTRY_IDS_NOT_DISTINCT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::BATCH_ENTRY_IDS_NOT_DISTINCT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == MESSAGE_NOT_INFLIGHT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::MESSAGE_NOT_INFLIGHT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_ADDRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::INVALID_ADDRESS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_ATTRIBUTE_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::INVALID_ATTRIBUTE_NAME), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_ID_FORMAT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::INVALID_ID_FORMAT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == EMPTY_BATCH_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::EMPTY_BATCH_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_MESSAGE_CONTENTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::INVALID_MESSAGE_CONTENTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RECEIPT_HANDLE_IS_INVALID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::RECEIPT_HANDLE_IS_INVALID), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SQSErrorMapper
} // namespace SQS
} // namespace Aws
