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

static constexpr uint32_t RESOURCE_SHARE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ResourceShareLimitExceededException");
static constexpr uint32_t RESOURCE_ARN_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ResourceArnNotFoundException");
static constexpr uint32_t INVALID_CLIENT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidClientTokenException");
static constexpr uint32_t INVALID_MAX_RESULTS_HASH = ConstExprHashingUtils::HashString("InvalidMaxResultsException");
static constexpr uint32_t MISSING_REQUIRED_PARAMETER_HASH = ConstExprHashingUtils::HashString("MissingRequiredParameterException");
static constexpr uint32_t PERMISSION_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("PermissionLimitExceededException");
static constexpr uint32_t UNKNOWN_RESOURCE_HASH = ConstExprHashingUtils::HashString("UnknownResourceException");
static constexpr uint32_t INVALID_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidNextTokenException");
static constexpr uint32_t INVALID_RESOURCE_TYPE_HASH = ConstExprHashingUtils::HashString("InvalidResourceTypeException");
static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidParameterException");
static constexpr uint32_t RESOURCE_SHARE_INVITATION_EXPIRED_HASH = ConstExprHashingUtils::HashString("ResourceShareInvitationExpiredException");
static constexpr uint32_t TAG_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("TagLimitExceededException");
static constexpr uint32_t RESOURCE_SHARE_INVITATION_ALREADY_REJECTED_HASH = ConstExprHashingUtils::HashString("ResourceShareInvitationAlreadyRejectedException");
static constexpr uint32_t INVALID_STATE_TRANSITION_HASH = ConstExprHashingUtils::HashString("InvalidStateTransitionException");
static constexpr uint32_t INVALID_POLICY_HASH = ConstExprHashingUtils::HashString("InvalidPolicyException");
static constexpr uint32_t OPERATION_NOT_PERMITTED_HASH = ConstExprHashingUtils::HashString("OperationNotPermittedException");
static constexpr uint32_t PERMISSION_VERSIONS_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("PermissionVersionsLimitExceededException");
static constexpr uint32_t UNMATCHED_POLICY_PERMISSION_HASH = ConstExprHashingUtils::HashString("UnmatchedPolicyPermissionException");
static constexpr uint32_t PERMISSION_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("PermissionAlreadyExistsException");
static constexpr uint32_t IDEMPOTENT_PARAMETER_MISMATCH_HASH = ConstExprHashingUtils::HashString("IdempotentParameterMismatchException");
static constexpr uint32_t MALFORMED_ARN_HASH = ConstExprHashingUtils::HashString("MalformedArnException");
static constexpr uint32_t RESOURCE_SHARE_INVITATION_ALREADY_ACCEPTED_HASH = ConstExprHashingUtils::HashString("ResourceShareInvitationAlreadyAcceptedException");
static constexpr uint32_t RESOURCE_SHARE_INVITATION_ARN_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ResourceShareInvitationArnNotFoundException");
static constexpr uint32_t SERVER_INTERNAL_HASH = ConstExprHashingUtils::HashString("ServerInternalException");
static constexpr uint32_t TAG_POLICY_VIOLATION_HASH = ConstExprHashingUtils::HashString("TagPolicyViolationException");
static constexpr uint32_t MALFORMED_POLICY_TEMPLATE_HASH = ConstExprHashingUtils::HashString("MalformedPolicyTemplateException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_SHARE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::RESOURCE_SHARE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == RESOURCE_ARN_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::RESOURCE_ARN_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_CLIENT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::INVALID_CLIENT_TOKEN), false);
  }
  else if (hashCode == INVALID_MAX_RESULTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::INVALID_MAX_RESULTS), false);
  }
  else if (hashCode == MISSING_REQUIRED_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::MISSING_REQUIRED_PARAMETER), false);
  }
  else if (hashCode == PERMISSION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::PERMISSION_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == UNKNOWN_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::UNKNOWN_RESOURCE), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == INVALID_RESOURCE_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::INVALID_RESOURCE_TYPE), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == RESOURCE_SHARE_INVITATION_EXPIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::RESOURCE_SHARE_INVITATION_EXPIRED), false);
  }
  else if (hashCode == TAG_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::TAG_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == RESOURCE_SHARE_INVITATION_ALREADY_REJECTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::RESOURCE_SHARE_INVITATION_ALREADY_REJECTED), false);
  }
  else if (hashCode == INVALID_STATE_TRANSITION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::INVALID_STATE_TRANSITION), false);
  }
  else if (hashCode == INVALID_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::INVALID_POLICY), false);
  }
  else if (hashCode == OPERATION_NOT_PERMITTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::OPERATION_NOT_PERMITTED), false);
  }
  else if (hashCode == PERMISSION_VERSIONS_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::PERMISSION_VERSIONS_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == UNMATCHED_POLICY_PERMISSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::UNMATCHED_POLICY_PERMISSION), false);
  }
  else if (hashCode == PERMISSION_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::PERMISSION_ALREADY_EXISTS), false);
  }
  else if (hashCode == IDEMPOTENT_PARAMETER_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::IDEMPOTENT_PARAMETER_MISMATCH), false);
  }
  else if (hashCode == MALFORMED_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::MALFORMED_ARN), false);
  }
  else if (hashCode == RESOURCE_SHARE_INVITATION_ALREADY_ACCEPTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::RESOURCE_SHARE_INVITATION_ALREADY_ACCEPTED), false);
  }
  else if (hashCode == RESOURCE_SHARE_INVITATION_ARN_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::RESOURCE_SHARE_INVITATION_ARN_NOT_FOUND), false);
  }
  else if (hashCode == SERVER_INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::SERVER_INTERNAL), false);
  }
  else if (hashCode == TAG_POLICY_VIOLATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::TAG_POLICY_VIOLATION), false);
  }
  else if (hashCode == MALFORMED_POLICY_TEMPLATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RAMErrors::MALFORMED_POLICY_TEMPLATE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace RAMErrorMapper
} // namespace RAM
} // namespace Aws
