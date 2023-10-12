/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/xray/XRayErrors.h>
#include <aws/xray/model/ResourceNotFoundException.h>
#include <aws/xray/model/TooManyTagsException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::XRay;
using namespace Aws::XRay::Model;

namespace Aws
{
namespace XRay
{
template<> AWS_XRAY_API ResourceNotFoundException XRayError::GetModeledError()
{
  assert(this->GetErrorType() == XRayErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_XRAY_API TooManyTagsException XRayError::GetModeledError()
{
  assert(this->GetErrorType() == XRayErrors::TOO_MANY_TAGS);
  return TooManyTagsException(this->GetJsonPayload().View());
}

namespace XRayErrorMapper
{

static constexpr uint32_t MALFORMED_POLICY_DOCUMENT_HASH = ConstExprHashingUtils::HashString("MalformedPolicyDocumentException");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTagsException");
static constexpr uint32_t LOCKOUT_PREVENTION_HASH = ConstExprHashingUtils::HashString("LockoutPreventionException");
static constexpr uint32_t POLICY_SIZE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("PolicySizeLimitExceededException");
static constexpr uint32_t INVALID_POLICY_REVISION_ID_HASH = ConstExprHashingUtils::HashString("InvalidPolicyRevisionIdException");
static constexpr uint32_t RULE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("RuleLimitExceededException");
static constexpr uint32_t POLICY_COUNT_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("PolicyCountLimitExceededException");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == MALFORMED_POLICY_DOCUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(XRayErrors::MALFORMED_POLICY_DOCUMENT), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(XRayErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == LOCKOUT_PREVENTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(XRayErrors::LOCKOUT_PREVENTION), false);
  }
  else if (hashCode == POLICY_SIZE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(XRayErrors::POLICY_SIZE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_POLICY_REVISION_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(XRayErrors::INVALID_POLICY_REVISION_ID), false);
  }
  else if (hashCode == RULE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(XRayErrors::RULE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == POLICY_COUNT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(XRayErrors::POLICY_COUNT_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(XRayErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace XRayErrorMapper
} // namespace XRay
} // namespace Aws
