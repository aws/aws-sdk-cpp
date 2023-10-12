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

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t INVALID_ENDPOINT_HASH = ConstExprHashingUtils::HashString("InvalidEndpointException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t REJECTED_RECORDS_HASH = ConstExprHashingUtils::HashString("RejectedRecordsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TimestreamWriteErrors::CONFLICT), false);
  }
  else if (hashCode == INVALID_ENDPOINT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TimestreamWriteErrors::INVALID_ENDPOINT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TimestreamWriteErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TimestreamWriteErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == REJECTED_RECORDS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TimestreamWriteErrors::REJECTED_RECORDS), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace TimestreamWriteErrorMapper
} // namespace TimestreamWrite
} // namespace Aws
