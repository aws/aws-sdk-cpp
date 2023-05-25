/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/workdocs/WorkDocs_EXPORTS.h>

namespace Aws
{
namespace WorkDocs
{
enum class WorkDocsErrors
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

  CONCURRENT_MODIFICATION= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  CONFLICTING_OPERATION,
  CUSTOM_METADATA_LIMIT_EXCEEDED,
  DEACTIVATING_LAST_SYSTEM_USER,
  DOCUMENT_LOCKED_FOR_COMMENTS,
  DRAFT_UPLOAD_OUT_OF_SYNC,
  ENTITY_ALREADY_EXISTS,
  ENTITY_NOT_EXISTS,
  FAILED_DEPENDENCY,
  ILLEGAL_USER_STATE,
  INVALID_ARGUMENT,
  INVALID_COMMENT_OPERATION,
  INVALID_OPERATION,
  INVALID_PASSWORD,
  LIMIT_EXCEEDED,
  PROHIBITED_STATE,
  REQUESTED_ENTITY_TOO_LARGE,
  RESOURCE_ALREADY_CHECKED_OUT,
  STORAGE_LIMIT_EXCEEDED,
  STORAGE_LIMIT_WILL_EXCEED,
  TOO_MANY_LABELS,
  TOO_MANY_SUBSCRIPTIONS,
  UNAUTHORIZED_OPERATION,
  UNAUTHORIZED_RESOURCE_ACCESS
};

class AWS_WORKDOCS_API WorkDocsError : public Aws::Client::AWSError<WorkDocsErrors>
{
public:
  WorkDocsError() {}
  WorkDocsError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<WorkDocsErrors>(rhs) {}
  WorkDocsError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<WorkDocsErrors>(rhs) {}
  WorkDocsError(const Aws::Client::AWSError<WorkDocsErrors>& rhs) : Aws::Client::AWSError<WorkDocsErrors>(rhs) {}
  WorkDocsError(Aws::Client::AWSError<WorkDocsErrors>&& rhs) : Aws::Client::AWSError<WorkDocsErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace WorkDocsErrorMapper
{
  AWS_WORKDOCS_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace WorkDocs
} // namespace Aws
