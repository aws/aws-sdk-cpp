/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/sns/SNS_EXPORTS.h>

namespace Aws
{
namespace SNS
{
enum class SNSErrors
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

  AUTHORIZATION_ERROR= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  BATCH_ENTRY_IDS_NOT_DISTINCT,
  BATCH_REQUEST_TOO_LONG,
  CONCURRENT_ACCESS,
  EMPTY_BATCH_REQUEST,
  ENDPOINT_DISABLED,
  FILTER_POLICY_LIMIT_EXCEEDED,
  INTERNAL_ERROR,
  INVALID_BATCH_ENTRY_ID,
  INVALID_PARAMETER,
  INVALID_SECURITY,
  INVALID_STATE,
  K_M_S_ACCESS_DENIED,
  K_M_S_DISABLED,
  K_M_S_INVALID_STATE,
  K_M_S_NOT_FOUND,
  K_M_S_OPT_IN_REQUIRED,
  K_M_S_THROTTLING,
  NOT_FOUND,
  OPTED_OUT,
  PLATFORM_APPLICATION_DISABLED,
  REPLAY_LIMIT_EXCEEDED,
  STALE_TAG,
  SUBSCRIPTION_LIMIT_EXCEEDED,
  TAG_LIMIT_EXCEEDED,
  TAG_POLICY,
  TOO_MANY_ENTRIES_IN_BATCH_REQUEST,
  TOPIC_LIMIT_EXCEEDED,
  USER_ERROR,
  VERIFICATION
};

class AWS_SNS_API SNSError : public Aws::Client::AWSError<SNSErrors>
{
public:
  SNSError() {}
  SNSError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<SNSErrors>(rhs) {}
  SNSError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<SNSErrors>(rhs) {}
  SNSError(const Aws::Client::AWSError<SNSErrors>& rhs) : Aws::Client::AWSError<SNSErrors>(rhs) {}
  SNSError(Aws::Client::AWSError<SNSErrors>&& rhs) : Aws::Client::AWSError<SNSErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace SNSErrorMapper
{
  AWS_SNS_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace SNS
} // namespace Aws
