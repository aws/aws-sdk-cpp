/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/states/SFN_EXPORTS.h>

namespace Aws
{
namespace SFN
{
enum class SFNErrors
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

  ACTIVITY_DOES_NOT_EXIST= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  ACTIVITY_LIMIT_EXCEEDED,
  ACTIVITY_WORKER_LIMIT_EXCEEDED,
  EXECUTION_ALREADY_EXISTS,
  EXECUTION_DOES_NOT_EXIST,
  EXECUTION_LIMIT_EXCEEDED,
  INVALID_ARN,
  INVALID_DEFINITION,
  INVALID_EXECUTION_INPUT,
  INVALID_LOGGING_CONFIGURATION,
  INVALID_NAME,
  INVALID_OUTPUT,
  INVALID_TOKEN,
  INVALID_TRACING_CONFIGURATION,
  MISSING_REQUIRED_PARAMETER,
  STATE_MACHINE_ALREADY_EXISTS,
  STATE_MACHINE_DELETING,
  STATE_MACHINE_DOES_NOT_EXIST,
  STATE_MACHINE_LIMIT_EXCEEDED,
  STATE_MACHINE_TYPE_NOT_SUPPORTED,
  TASK_DOES_NOT_EXIST,
  TASK_TIMED_OUT,
  TOO_MANY_TAGS
};

class AWS_SFN_API SFNError : public Aws::Client::AWSError<SFNErrors>
{
public:
  SFNError() {}
  SFNError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<SFNErrors>(rhs) {}
  SFNError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<SFNErrors>(rhs) {}
  SFNError(const Aws::Client::AWSError<SFNErrors>& rhs) : Aws::Client::AWSError<SFNErrors>(rhs) {}
  SFNError(Aws::Client::AWSError<SFNErrors>&& rhs) : Aws::Client::AWSError<SFNErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace SFNErrorMapper
{
  AWS_SFN_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace SFN
} // namespace Aws
