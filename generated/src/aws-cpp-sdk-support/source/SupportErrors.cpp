/**
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

static constexpr uint32_t CASE_ID_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("CaseIdNotFound");
static constexpr uint32_t CASE_CREATION_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("CaseCreationLimitExceeded");
static constexpr uint32_t ATTACHMENT_SET_SIZE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("AttachmentSetSizeLimitExceeded");
static constexpr uint32_t ATTACHMENT_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("AttachmentLimitExceeded");
static constexpr uint32_t ATTACHMENT_ID_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("AttachmentIdNotFound");
static constexpr uint32_t ATTACHMENT_SET_ID_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("AttachmentSetIdNotFound");
static constexpr uint32_t ATTACHMENT_SET_EXPIRED_HASH = ConstExprHashingUtils::HashString("AttachmentSetExpired");
static constexpr uint32_t DESCRIBE_ATTACHMENT_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("DescribeAttachmentLimitExceeded");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CASE_ID_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SupportErrors::CASE_ID_NOT_FOUND), false);
  }
  else if (hashCode == CASE_CREATION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SupportErrors::CASE_CREATION_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == ATTACHMENT_SET_SIZE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SupportErrors::ATTACHMENT_SET_SIZE_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == ATTACHMENT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SupportErrors::ATTACHMENT_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == ATTACHMENT_ID_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SupportErrors::ATTACHMENT_ID_NOT_FOUND), false);
  }
  else if (hashCode == ATTACHMENT_SET_ID_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SupportErrors::ATTACHMENT_SET_ID_NOT_FOUND), false);
  }
  else if (hashCode == ATTACHMENT_SET_EXPIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SupportErrors::ATTACHMENT_SET_EXPIRED), false);
  }
  else if (hashCode == DESCRIBE_ATTACHMENT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SupportErrors::DESCRIBE_ATTACHMENT_LIMIT_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SupportErrorMapper
} // namespace Support
} // namespace Aws
