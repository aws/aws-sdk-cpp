/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/neptunedata/Neptunedata_EXPORTS.h>

namespace Aws
{
namespace neptunedata
{
enum class NeptunedataErrors
{
  //From Core//
  //////////////////////////////////////////////////////////////////////////////////////////
  INCOMPLETE_SIGNATURE = 0,
  INTERNAL_FAILURE = 1,
  INVALID_ACTION = 2,
  INVALID_CLIENT_TOKEN_ID = 3,
  INVALID_PARAMETER_COMBINATION = 4,
  INVALID_QUERY_PARAMETER = 5,
  INVALID_PARAMETER_VALUE = 6,
  MISSING_ACTION = 7, // SDK should never allow
  MISSING_AUTHENTICATION_TOKEN = 8, // SDK should never allow
  MISSING_PARAMETER = 9, // SDK should never allow
  OPT_IN_REQUIRED = 10,
  REQUEST_EXPIRED = 11,
  SERVICE_UNAVAILABLE = 12,
  THROTTLING = 13,
  VALIDATION = 14,
  ACCESS_DENIED = 15,
  RESOURCE_NOT_FOUND = 16,
  UNRECOGNIZED_CLIENT = 17,
  MALFORMED_QUERY_STRING = 18,
  SLOW_DOWN = 19,
  REQUEST_TIME_TOO_SKEWED = 20,
  INVALID_SIGNATURE = 21,
  SIGNATURE_DOES_NOT_MATCH = 22,
  INVALID_ACCESS_KEY_ID = 23,
  REQUEST_TIMEOUT = 24,
  NETWORK_CONNECTION = 99,

  UNKNOWN = 100,
  ///////////////////////////////////////////////////////////////////////////////////////////

  BAD_REQUEST= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  BULK_LOAD_ID_NOT_FOUND,
  CANCELLED_BY_USER,
  CLIENT_TIMEOUT,
  CONCURRENT_MODIFICATION,
  CONSTRAINT_VIOLATION,
  EXPIRED_STREAM,
  FAILURE_BY_QUERY,
  ILLEGAL_ARGUMENT,
  INVALID_ARGUMENT,
  INVALID_NUMERIC_DATA,
  INVALID_PARAMETER,
  LOAD_URL_ACCESS_DENIED,
  MALFORMED_QUERY,
  MEMORY_LIMIT_EXCEEDED,
  METHOD_NOT_ALLOWED,
  M_L_RESOURCE_NOT_FOUND,
  PARSING,
  PRECONDITIONS_FAILED,
  QUERY_LIMIT,
  QUERY_LIMIT_EXCEEDED,
  QUERY_TOO_LARGE,
  READ_ONLY_VIOLATION,
  S3,
  SERVER_SHUTDOWN,
  STATISTICS_NOT_AVAILABLE,
  STREAM_RECORDS_NOT_FOUND,
  TIME_LIMIT_EXCEEDED,
  TOO_MANY_REQUESTS,
  UNSUPPORTED_OPERATION
};

class AWS_NEPTUNEDATA_API NeptunedataError : public Aws::Client::AWSError<NeptunedataErrors>
{
public:
  NeptunedataError() {}
  NeptunedataError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<NeptunedataErrors>(rhs) {}
  NeptunedataError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<NeptunedataErrors>(rhs) {}
  NeptunedataError(const Aws::Client::AWSError<NeptunedataErrors>& rhs) : Aws::Client::AWSError<NeptunedataErrors>(rhs) {}
  NeptunedataError(Aws::Client::AWSError<NeptunedataErrors>&& rhs) : Aws::Client::AWSError<NeptunedataErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace NeptunedataErrorMapper
{
  AWS_NEPTUNEDATA_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace neptunedata
} // namespace Aws
