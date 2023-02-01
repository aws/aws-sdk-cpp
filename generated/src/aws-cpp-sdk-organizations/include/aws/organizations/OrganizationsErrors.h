/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/organizations/Organizations_EXPORTS.h>

namespace Aws
{
namespace Organizations
{
enum class OrganizationsErrors
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

  ACCESS_DENIED_FOR_DEPENDENCY= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  ACCOUNT_ALREADY_CLOSED,
  ACCOUNT_ALREADY_REGISTERED,
  ACCOUNT_NOT_FOUND,
  ACCOUNT_NOT_REGISTERED,
  ACCOUNT_OWNER_NOT_VERIFIED,
  ALREADY_IN_ORGANIZATION,
  A_W_S_ORGANIZATIONS_NOT_IN_USE,
  CHILD_NOT_FOUND,
  CONCURRENT_MODIFICATION,
  CONFLICT,
  CONSTRAINT_VIOLATION,
  CREATE_ACCOUNT_STATUS_NOT_FOUND,
  DESTINATION_PARENT_NOT_FOUND,
  DUPLICATE_ACCOUNT,
  DUPLICATE_HANDSHAKE,
  DUPLICATE_ORGANIZATIONAL_UNIT,
  DUPLICATE_POLICY,
  DUPLICATE_POLICY_ATTACHMENT,
  EFFECTIVE_POLICY_NOT_FOUND,
  FINALIZING_ORGANIZATION,
  HANDSHAKE_ALREADY_IN_STATE,
  HANDSHAKE_CONSTRAINT_VIOLATION,
  HANDSHAKE_NOT_FOUND,
  INVALID_HANDSHAKE_TRANSITION,
  INVALID_INPUT,
  MALFORMED_POLICY_DOCUMENT,
  MASTER_CANNOT_LEAVE_ORGANIZATION,
  ORGANIZATIONAL_UNIT_NOT_EMPTY,
  ORGANIZATIONAL_UNIT_NOT_FOUND,
  ORGANIZATION_NOT_EMPTY,
  PARENT_NOT_FOUND,
  POLICY_CHANGES_IN_PROGRESS,
  POLICY_IN_USE,
  POLICY_NOT_ATTACHED,
  POLICY_NOT_FOUND,
  POLICY_TYPE_ALREADY_ENABLED,
  POLICY_TYPE_NOT_AVAILABLE_FOR_ORGANIZATION,
  POLICY_TYPE_NOT_ENABLED,
  RESOURCE_POLICY_NOT_FOUND,
  ROOT_NOT_FOUND,
  SERVICE,
  SOURCE_PARENT_NOT_FOUND,
  TARGET_NOT_FOUND,
  TOO_MANY_REQUESTS,
  UNSUPPORTED_A_P_I_ENDPOINT
};

class AWS_ORGANIZATIONS_API OrganizationsError : public Aws::Client::AWSError<OrganizationsErrors>
{
public:
  OrganizationsError() {}
  OrganizationsError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<OrganizationsErrors>(rhs) {}
  OrganizationsError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<OrganizationsErrors>(rhs) {}
  OrganizationsError(const Aws::Client::AWSError<OrganizationsErrors>& rhs) : Aws::Client::AWSError<OrganizationsErrors>(rhs) {}
  OrganizationsError(Aws::Client::AWSError<OrganizationsErrors>&& rhs) : Aws::Client::AWSError<OrganizationsErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace OrganizationsErrorMapper
{
  AWS_ORGANIZATIONS_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace Organizations
} // namespace Aws
