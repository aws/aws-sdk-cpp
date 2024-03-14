/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBErrors.h>
#include <aws/timestream-influxdb/model/ConflictException.h>
#include <aws/timestream-influxdb/model/ThrottlingException.h>
#include <aws/timestream-influxdb/model/ResourceNotFoundException.h>
#include <aws/timestream-influxdb/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::TimestreamInfluxDB;
using namespace Aws::TimestreamInfluxDB::Model;

namespace Aws
{
namespace TimestreamInfluxDB
{
template<> AWS_TIMESTREAMINFLUXDB_API ConflictException TimestreamInfluxDBError::GetModeledError()
{
  assert(this->GetErrorType() == TimestreamInfluxDBErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_TIMESTREAMINFLUXDB_API ThrottlingException TimestreamInfluxDBError::GetModeledError()
{
  assert(this->GetErrorType() == TimestreamInfluxDBErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_TIMESTREAMINFLUXDB_API ResourceNotFoundException TimestreamInfluxDBError::GetModeledError()
{
  assert(this->GetErrorType() == TimestreamInfluxDBErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_TIMESTREAMINFLUXDB_API ValidationException TimestreamInfluxDBError::GetModeledError()
{
  assert(this->GetErrorType() == TimestreamInfluxDBErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace TimestreamInfluxDBErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TimestreamInfluxDBErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TimestreamInfluxDBErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TimestreamInfluxDBErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace TimestreamInfluxDBErrorMapper
} // namespace TimestreamInfluxDB
} // namespace Aws
