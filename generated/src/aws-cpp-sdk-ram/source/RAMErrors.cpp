/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ram/RAMErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::RAM;

namespace Aws
{
namespace RAM
{
namespace RAMErrorMapper
{

static const int RESOURCE_SHARE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ResourceShareLimitExceededException");
static const int RESOURCE_ARN_NOT_FOUND_HASH = HashingUtils::HashString("ResourceArnNotFoundException");
static const int INVALID_CLIENT_TOKEN_HASH = HashingUtils::HashString("InvalidClientTokenException");
static const int INVALID_MAX_RESULTS_HASH = HashingUtils::HashString("InvalidMaxResultsException");
static const int MISSING_REQUIRED_PARAMETER_HASH = HashingUtils::HashString("MissingRequiredParameterException");
static const int PERMISSION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("PermissionLimitExceededException");
static const int UNKNOWN_RESOURCE_HASH = HashingUtils::HashString("UnknownResourceException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int INVALID_RESOURCE_TYPE_HASH = HashingUtils::HashString("InvalidResourceTypeException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int RESOURCE_SHARE_INVITATION_EXPIRED_HASH = HashingUtils::HashString("ResourceShareInvitationExpiredException");
static const int TAG_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("TagLimitExceededException");
static const int RESOURCE_SHARE_INVITATION_ALREADY_REJECTED_HASH = HashingUtils::HashString("ResourceShareInvitationAlreadyRejectedException");
static const int INVALID_STATE_TRANSITION_HASH = HashingUtils::HashString("InvalidStateTransitionException");
static const int INVALID_POLICY_HASH = HashingUtils::HashString("InvalidPolicyException");
static const int OPERATION_NOT_PERMITTED_HASH = HashingUtils::HashString("OperationNotPermittedException");
static const int PERMISSION_VERSIONS_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("PermissionVersionsLimitExceededException");
static const int UNMATCHED_POLICY_PERMISSION_HASH = HashingUtils::HashString("UnmatchedPolicyPermissionException");
static const int PERMISSION_ALREADY_EXISTS_HASH = HashingUtils::HashString("PermissionAlreadyExistsException");
static const int IDEMPOTENT_PARAMETER_MISMATCH_HASH = HashingUtils::HashString("IdempotentParameterMismatchException");
static const int MALFORMED_ARN_HASH = HashingUtils::HashString("MalformedArnException");
static const int RESOURCE_SHARE_INVITATION_ALREADY_ACCEPTED_HASH = HashingUtils::HashString("ResourceShareInvitationAlreadyAcceptedException");
static const int RESOURCE_SHARE_INVITATION_ARN_NOT_FOUND_HASH = HashingUtils::HashString("ResourceShareInvitationArnNotFoundException");
static const int SERVER_INTERNAL_HASH = HashingUtils::HashString("ServerInternalException");
static const int TAG_POLICY_VIOLATION_HASH = HashingUtils::HashString("TagPolicyViolationException");
static const int MALFORMED_POLICY_TEMPLATE_HASH = HashingUtils::HashString("MalformedPolicyTemplateException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_SHARE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::RESOURCE_SHARE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_ARN_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::RESOURCE_ARN_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_CLIENT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::INVALID_CLIENT_TOKEN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_MAX_RESULTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::INVALID_MAX_RESULTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == MISSING_REQUIRED_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::MISSING_REQUIRED_PARAMETER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PERMISSION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::PERMISSION_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNKNOWN_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::UNKNOWN_RESOURCE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::INVALID_NEXT_TOKEN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_RESOURCE_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::INVALID_RESOURCE_TYPE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::INVALID_PARAMETER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_SHARE_INVITATION_EXPIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::RESOURCE_SHARE_INVITATION_EXPIRED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TAG_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::TAG_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_SHARE_INVITATION_ALREADY_REJECTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::RESOURCE_SHARE_INVITATION_ALREADY_REJECTED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_STATE_TRANSITION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::INVALID_STATE_TRANSITION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::INVALID_POLICY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == OPERATION_NOT_PERMITTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::OPERATION_NOT_PERMITTED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PERMISSION_VERSIONS_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::PERMISSION_VERSIONS_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNMATCHED_POLICY_PERMISSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::UNMATCHED_POLICY_PERMISSION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PERMISSION_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::PERMISSION_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == IDEMPOTENT_PARAMETER_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::IDEMPOTENT_PARAMETER_MISMATCH), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == MALFORMED_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::MALFORMED_ARN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_SHARE_INVITATION_ALREADY_ACCEPTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::RESOURCE_SHARE_INVITATION_ALREADY_ACCEPTED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_SHARE_INVITATION_ARN_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::RESOURCE_SHARE_INVITATION_ARN_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVER_INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::SERVER_INTERNAL), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TAG_POLICY_VIOLATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::TAG_POLICY_VIOLATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == MALFORMED_POLICY_TEMPLATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::MALFORMED_POLICY_TEMPLATE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace RAMErrorMapper
} // namespace RAM
} // namespace Aws
