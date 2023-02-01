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

static const int MALFORMED_POLICY_DOCUMENT_HASH = HashingUtils::HashString("MalformedPolicyDocumentException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int LOCKOUT_PREVENTION_HASH = HashingUtils::HashString("LockoutPreventionException");
static const int POLICY_SIZE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("PolicySizeLimitExceededException");
static const int INVALID_POLICY_REVISION_ID_HASH = HashingUtils::HashString("InvalidPolicyRevisionIdException");
static const int RULE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("RuleLimitExceededException");
static const int POLICY_COUNT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("PolicyCountLimitExceededException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

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
