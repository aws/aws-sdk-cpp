﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/support/SupportErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Support;

namespace Aws
{
namespace Support
{
namespace SupportErrorMapper
{

static const int CASE_ID_NOT_FOUND_HASH = HashingUtils::HashString("CaseIdNotFound");
static const int CASE_CREATION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("CaseCreationLimitExceeded");
static const int ATTACHMENT_SET_SIZE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("AttachmentSetSizeLimitExceeded");
static const int ATTACHMENT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("AttachmentLimitExceeded");
static const int ATTACHMENT_ID_NOT_FOUND_HASH = HashingUtils::HashString("AttachmentIdNotFound");
static const int ATTACHMENT_SET_ID_NOT_FOUND_HASH = HashingUtils::HashString("AttachmentSetIdNotFound");
static const int ATTACHMENT_SET_EXPIRED_HASH = HashingUtils::HashString("AttachmentSetExpired");
static const int DESCRIBE_ATTACHMENT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("DescribeAttachmentLimitExceeded");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CASE_ID_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SupportErrors::CASE_ID_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CASE_CREATION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SupportErrors::CASE_CREATION_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ATTACHMENT_SET_SIZE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SupportErrors::ATTACHMENT_SET_SIZE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ATTACHMENT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SupportErrors::ATTACHMENT_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ATTACHMENT_ID_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SupportErrors::ATTACHMENT_ID_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ATTACHMENT_SET_ID_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SupportErrors::ATTACHMENT_SET_ID_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ATTACHMENT_SET_EXPIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SupportErrors::ATTACHMENT_SET_EXPIRED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DESCRIBE_ATTACHMENT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SupportErrors::DESCRIBE_ATTACHMENT_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SupportErrorMapper
} // namespace Support
} // namespace Aws
