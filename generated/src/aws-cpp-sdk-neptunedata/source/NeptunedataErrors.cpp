/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/neptunedata/NeptunedataErrors.h>
#include <aws/neptunedata/model/QueryLimitExceededException.h>
#include <aws/neptunedata/model/ExpiredStreamException.h>
#include <aws/neptunedata/model/QueryLimitException.h>
#include <aws/neptunedata/model/ConcurrentModificationException.h>
#include <aws/neptunedata/model/CancelledByUserException.h>
#include <aws/neptunedata/model/StreamRecordsNotFoundException.h>
#include <aws/neptunedata/model/ParsingException.h>
#include <aws/neptunedata/model/InvalidParameterException.h>
#include <aws/neptunedata/model/IllegalArgumentException.h>
#include <aws/neptunedata/model/BulkLoadIdNotFoundException.h>
#include <aws/neptunedata/model/InvalidNumericDataException.h>
#include <aws/neptunedata/model/AccessDeniedException.h>
#include <aws/neptunedata/model/UnsupportedOperationException.h>
#include <aws/neptunedata/model/ConstraintViolationException.h>
#include <aws/neptunedata/model/ServerShutdownException.h>
#include <aws/neptunedata/model/InvalidArgumentException.h>
#include <aws/neptunedata/model/LoadUrlAccessDeniedException.h>
#include <aws/neptunedata/model/S3Exception.h>
#include <aws/neptunedata/model/MalformedQueryException.h>
#include <aws/neptunedata/model/QueryTooLargeException.h>
#include <aws/neptunedata/model/ReadOnlyViolationException.h>
#include <aws/neptunedata/model/ClientTimeoutException.h>
#include <aws/neptunedata/model/StatisticsNotAvailableException.h>
#include <aws/neptunedata/model/MethodNotAllowedException.h>
#include <aws/neptunedata/model/InternalFailureException.h>
#include <aws/neptunedata/model/MemoryLimitExceededException.h>
#include <aws/neptunedata/model/ThrottlingException.h>
#include <aws/neptunedata/model/MissingParameterException.h>
#include <aws/neptunedata/model/TooManyRequestsException.h>
#include <aws/neptunedata/model/MLResourceNotFoundException.h>
#include <aws/neptunedata/model/BadRequestException.h>
#include <aws/neptunedata/model/PreconditionsFailedException.h>
#include <aws/neptunedata/model/TimeLimitExceededException.h>
#include <aws/neptunedata/model/FailureByQueryException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::neptunedata;
using namespace Aws::neptunedata::Model;

namespace Aws
{
namespace neptunedata
{
template<> AWS_NEPTUNEDATA_API QueryLimitExceededException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::QUERY_LIMIT_EXCEEDED);
  return QueryLimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API ExpiredStreamException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::EXPIRED_STREAM);
  return ExpiredStreamException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API QueryLimitException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::QUERY_LIMIT);
  return QueryLimitException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API ConcurrentModificationException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::CONCURRENT_MODIFICATION);
  return ConcurrentModificationException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API CancelledByUserException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::CANCELLED_BY_USER);
  return CancelledByUserException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API StreamRecordsNotFoundException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::STREAM_RECORDS_NOT_FOUND);
  return StreamRecordsNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API ParsingException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::PARSING);
  return ParsingException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API InvalidParameterException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::INVALID_PARAMETER);
  return InvalidParameterException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API IllegalArgumentException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::ILLEGAL_ARGUMENT);
  return IllegalArgumentException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API BulkLoadIdNotFoundException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::BULK_LOAD_ID_NOT_FOUND);
  return BulkLoadIdNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API InvalidNumericDataException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::INVALID_NUMERIC_DATA);
  return InvalidNumericDataException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API AccessDeniedException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API UnsupportedOperationException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::UNSUPPORTED_OPERATION);
  return UnsupportedOperationException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API ConstraintViolationException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::CONSTRAINT_VIOLATION);
  return ConstraintViolationException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API ServerShutdownException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::SERVER_SHUTDOWN);
  return ServerShutdownException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API InvalidArgumentException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::INVALID_ARGUMENT);
  return InvalidArgumentException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API LoadUrlAccessDeniedException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::LOAD_URL_ACCESS_DENIED);
  return LoadUrlAccessDeniedException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API S3Exception NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::S3);
  return S3Exception(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API MalformedQueryException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::MALFORMED_QUERY);
  return MalformedQueryException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API QueryTooLargeException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::QUERY_TOO_LARGE);
  return QueryTooLargeException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API ReadOnlyViolationException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::READ_ONLY_VIOLATION);
  return ReadOnlyViolationException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API ClientTimeoutException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::CLIENT_TIMEOUT);
  return ClientTimeoutException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API StatisticsNotAvailableException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::STATISTICS_NOT_AVAILABLE);
  return StatisticsNotAvailableException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API MethodNotAllowedException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::METHOD_NOT_ALLOWED);
  return MethodNotAllowedException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API InternalFailureException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::INTERNAL_FAILURE);
  return InternalFailureException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API MemoryLimitExceededException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::MEMORY_LIMIT_EXCEEDED);
  return MemoryLimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API ThrottlingException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API MissingParameterException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::MISSING_PARAMETER);
  return MissingParameterException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API TooManyRequestsException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::TOO_MANY_REQUESTS);
  return TooManyRequestsException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API MLResourceNotFoundException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::M_L_RESOURCE_NOT_FOUND);
  return MLResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API BadRequestException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::BAD_REQUEST);
  return BadRequestException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API PreconditionsFailedException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::PRECONDITIONS_FAILED);
  return PreconditionsFailedException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API TimeLimitExceededException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::TIME_LIMIT_EXCEEDED);
  return TimeLimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEDATA_API FailureByQueryException NeptunedataError::GetModeledError()
{
  assert(this->GetErrorType() == NeptunedataErrors::FAILURE_BY_QUERY);
  return FailureByQueryException(this->GetJsonPayload().View());
}

namespace NeptunedataErrorMapper
{

static const int QUERY_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("QueryLimitExceededException");
static const int EXPIRED_STREAM_HASH = HashingUtils::HashString("ExpiredStreamException");
static const int QUERY_LIMIT_HASH = HashingUtils::HashString("QueryLimitException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int CANCELLED_BY_USER_HASH = HashingUtils::HashString("CancelledByUserException");
static const int STREAM_RECORDS_NOT_FOUND_HASH = HashingUtils::HashString("StreamRecordsNotFoundException");
static const int PARSING_HASH = HashingUtils::HashString("ParsingException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int ILLEGAL_ARGUMENT_HASH = HashingUtils::HashString("IllegalArgumentException");
static const int BULK_LOAD_ID_NOT_FOUND_HASH = HashingUtils::HashString("BulkLoadIdNotFoundException");
static const int INVALID_NUMERIC_DATA_HASH = HashingUtils::HashString("InvalidNumericDataException");
static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("UnsupportedOperationException");
static const int CONSTRAINT_VIOLATION_HASH = HashingUtils::HashString("ConstraintViolationException");
static const int SERVER_SHUTDOWN_HASH = HashingUtils::HashString("ServerShutdownException");
static const int INVALID_ARGUMENT_HASH = HashingUtils::HashString("InvalidArgumentException");
static const int LOAD_URL_ACCESS_DENIED_HASH = HashingUtils::HashString("LoadUrlAccessDeniedException");
static const int S3_HASH = HashingUtils::HashString("S3Exception");
static const int MALFORMED_QUERY_HASH = HashingUtils::HashString("MalformedQueryException");
static const int QUERY_TOO_LARGE_HASH = HashingUtils::HashString("QueryTooLargeException");
static const int READ_ONLY_VIOLATION_HASH = HashingUtils::HashString("ReadOnlyViolationException");
static const int CLIENT_TIMEOUT_HASH = HashingUtils::HashString("ClientTimeoutException");
static const int STATISTICS_NOT_AVAILABLE_HASH = HashingUtils::HashString("StatisticsNotAvailableException");
static const int METHOD_NOT_ALLOWED_HASH = HashingUtils::HashString("MethodNotAllowedException");
static const int MEMORY_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("MemoryLimitExceededException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int M_L_RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("MLResourceNotFoundException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int PRECONDITIONS_FAILED_HASH = HashingUtils::HashString("PreconditionsFailedException");
static const int TIME_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("TimeLimitExceededException");
static const int FAILURE_BY_QUERY_HASH = HashingUtils::HashString("FailureByQueryException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == QUERY_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::QUERY_LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == EXPIRED_STREAM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::EXPIRED_STREAM), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == QUERY_LIMIT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::QUERY_LIMIT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::CONCURRENT_MODIFICATION), RetryableType::RETRYABLE);
  }
  else if (hashCode == CANCELLED_BY_USER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::CANCELLED_BY_USER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == STREAM_RECORDS_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::STREAM_RECORDS_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PARSING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::PARSING), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::INVALID_PARAMETER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ILLEGAL_ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::ILLEGAL_ARGUMENT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BULK_LOAD_ID_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::BULK_LOAD_ID_NOT_FOUND), RetryableType::RETRYABLE);
  }
  else if (hashCode == INVALID_NUMERIC_DATA_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::INVALID_NUMERIC_DATA), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::UNSUPPORTED_OPERATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CONSTRAINT_VIOLATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::CONSTRAINT_VIOLATION), RetryableType::RETRYABLE);
  }
  else if (hashCode == SERVER_SHUTDOWN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::SERVER_SHUTDOWN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::INVALID_ARGUMENT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LOAD_URL_ACCESS_DENIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::LOAD_URL_ACCESS_DENIED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == S3_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::S3), RetryableType::RETRYABLE);
  }
  else if (hashCode == MALFORMED_QUERY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::MALFORMED_QUERY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == QUERY_TOO_LARGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::QUERY_TOO_LARGE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == READ_ONLY_VIOLATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::READ_ONLY_VIOLATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CLIENT_TIMEOUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::CLIENT_TIMEOUT), RetryableType::RETRYABLE);
  }
  else if (hashCode == STATISTICS_NOT_AVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::STATISTICS_NOT_AVAILABLE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == METHOD_NOT_ALLOWED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::METHOD_NOT_ALLOWED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == MEMORY_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::MEMORY_LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::TOO_MANY_REQUESTS), RetryableType::RETRYABLE);
  }
  else if (hashCode == M_L_RESOURCE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::M_L_RESOURCE_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::BAD_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PRECONDITIONS_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::PRECONDITIONS_FAILED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TIME_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::TIME_LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == FAILURE_BY_QUERY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptunedataErrors::FAILURE_BY_QUERY), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace NeptunedataErrorMapper
} // namespace neptunedata
} // namespace Aws
