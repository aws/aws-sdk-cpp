/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/timestream-write/TimestreamWriteErrors.h>
#include <aws/timestream-write/model/RejectedRecordsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::TimestreamWrite;
using namespace Aws::TimestreamWrite::Model;

namespace Aws
{
namespace TimestreamWrite
{
template<> AWS_TIMESTREAMWRITE_API RejectedRecordsException TimestreamWriteError::GetModeledError()
{
  assert(this->GetErrorType() == TimestreamWriteErrors::REJECTED_RECORDS);
  return RejectedRecordsException(this->GetJsonPayload().View());
}

namespace TimestreamWriteErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INVALID_ENDPOINT_HASH = HashingUtils::HashString("InvalidEndpointException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int REJECTED_RECORDS_HASH = HashingUtils::HashString("RejectedRecordsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TimestreamWriteErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_ENDPOINT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TimestreamWriteErrors::INVALID_ENDPOINT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TimestreamWriteErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TimestreamWriteErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == REJECTED_RECORDS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TimestreamWriteErrors::REJECTED_RECORDS), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace TimestreamWriteErrorMapper
} // namespace TimestreamWrite
} // namespace Aws
