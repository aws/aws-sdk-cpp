/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/personalize/PersonalizeErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Personalize;

namespace Aws
{
namespace Personalize
{
namespace PersonalizeErrorMapper
{

static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int TOO_MANY_TAG_KEYS_HASH = HashingUtils::HashString("TooManyTagKeysException");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PersonalizeErrors::RESOURCE_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PersonalizeErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PersonalizeErrors::TOO_MANY_TAGS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_TAG_KEYS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PersonalizeErrors::TOO_MANY_TAG_KEYS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PersonalizeErrors::INVALID_INPUT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PersonalizeErrors::RESOURCE_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PersonalizeErrors::INVALID_NEXT_TOKEN), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace PersonalizeErrorMapper
} // namespace Personalize
} // namespace Aws
