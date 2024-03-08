/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/timestream-query/TimestreamQueryErrors.h>
#include <aws/timestream-query/model/ResourceNotFoundException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::TimestreamQuery;
using namespace Aws::TimestreamQuery::Model;

namespace Aws
{
namespace TimestreamQuery
{
template<> AWS_TIMESTREAMQUERY_API ResourceNotFoundException TimestreamQueryError::GetModeledError()
{
  assert(this->GetErrorType() == TimestreamQueryErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

namespace TimestreamQueryErrorMapper
{

static const int INVALID_ENDPOINT_HASH = HashingUtils::HashString("InvalidEndpointException");
static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int QUERY_EXECUTION_HASH = HashingUtils::HashString("QueryExecutionException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_ENDPOINT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TimestreamQueryErrors::INVALID_ENDPOINT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TimestreamQueryErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TimestreamQueryErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TimestreamQueryErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == QUERY_EXECUTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TimestreamQueryErrors::QUERY_EXECUTION), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace TimestreamQueryErrorMapper
} // namespace TimestreamQuery
} // namespace Aws
