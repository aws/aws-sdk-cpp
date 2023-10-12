/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sns/SNSErrors.h>
#include <aws/sns/model/VerificationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SNS;
using namespace Aws::SNS::Model;

namespace Aws
{
namespace SNS
{
template<> AWS_SNS_API VerificationException SNSError::GetModeledError()
{
  assert(this->GetErrorType() == SNSErrors::VERIFICATION);
  return VerificationException(this->GetXmlPayload().GetRootElement());
}

namespace SNSErrorMapper
{

static constexpr uint32_t VERIFICATION_HASH = ConstExprHashingUtils::HashString("VerificationException");
static constexpr uint32_t K_M_S_INVALID_STATE_HASH = ConstExprHashingUtils::HashString("KMSInvalidState");
static constexpr uint32_t BATCH_REQUEST_TOO_LONG_HASH = ConstExprHashingUtils::HashString("BatchRequestTooLong");
static constexpr uint32_t SUBSCRIPTION_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("SubscriptionLimitExceeded");
static constexpr uint32_t TOPIC_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("TopicLimitExceeded");
static constexpr uint32_t AUTHORIZATION_ERROR_HASH = ConstExprHashingUtils::HashString("AuthorizationError");
static constexpr uint32_t INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("InternalError");
static constexpr uint32_t ENDPOINT_DISABLED_HASH = ConstExprHashingUtils::HashString("EndpointDisabled");
static constexpr uint32_t TOO_MANY_ENTRIES_IN_BATCH_REQUEST_HASH = ConstExprHashingUtils::HashString("TooManyEntriesInBatchRequest");
static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidParameter");
static constexpr uint32_t K_M_S_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("KMSNotFound");
static constexpr uint32_t FILTER_POLICY_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("FilterPolicyLimitExceeded");
static constexpr uint32_t OPTED_OUT_HASH = ConstExprHashingUtils::HashString("OptedOut");
static constexpr uint32_t TAG_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("TagLimitExceeded");
static constexpr uint32_t CONCURRENT_ACCESS_HASH = ConstExprHashingUtils::HashString("ConcurrentAccess");
static constexpr uint32_t K_M_S_THROTTLING_HASH = ConstExprHashingUtils::HashString("KMSThrottling");
static constexpr uint32_t BATCH_ENTRY_IDS_NOT_DISTINCT_HASH = ConstExprHashingUtils::HashString("BatchEntryIdsNotDistinct");
static constexpr uint32_t TAG_POLICY_HASH = ConstExprHashingUtils::HashString("TagPolicy");
static constexpr uint32_t PLATFORM_APPLICATION_DISABLED_HASH = ConstExprHashingUtils::HashString("PlatformApplicationDisabled");
static constexpr uint32_t USER_ERROR_HASH = ConstExprHashingUtils::HashString("UserError");
static constexpr uint32_t K_M_S_OPT_IN_REQUIRED_HASH = ConstExprHashingUtils::HashString("KMSOptInRequired");
static constexpr uint32_t NOT_FOUND_HASH = ConstExprHashingUtils::HashString("NotFound");
static constexpr uint32_t K_M_S_DISABLED_HASH = ConstExprHashingUtils::HashString("KMSDisabled");
static constexpr uint32_t K_M_S_ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("KMSAccessDenied");
static constexpr uint32_t INVALID_SECURITY_HASH = ConstExprHashingUtils::HashString("InvalidSecurity");
static constexpr uint32_t STALE_TAG_HASH = ConstExprHashingUtils::HashString("StaleTag");
static constexpr uint32_t EMPTY_BATCH_REQUEST_HASH = ConstExprHashingUtils::HashString("EmptyBatchRequest");
static constexpr uint32_t INVALID_BATCH_ENTRY_ID_HASH = ConstExprHashingUtils::HashString("InvalidBatchEntryId");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == VERIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::VERIFICATION), false);
  }
  else if (hashCode == K_M_S_INVALID_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::K_M_S_INVALID_STATE), false);
  }
  else if (hashCode == BATCH_REQUEST_TOO_LONG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::BATCH_REQUEST_TOO_LONG), false);
  }
  else if (hashCode == SUBSCRIPTION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::SUBSCRIPTION_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == TOPIC_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::TOPIC_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == AUTHORIZATION_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::AUTHORIZATION_ERROR), false);
  }
  else if (hashCode == INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::INTERNAL_ERROR), true);
  }
  else if (hashCode == ENDPOINT_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::ENDPOINT_DISABLED), false);
  }
  else if (hashCode == TOO_MANY_ENTRIES_IN_BATCH_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::TOO_MANY_ENTRIES_IN_BATCH_REQUEST), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == K_M_S_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::K_M_S_NOT_FOUND), false);
  }
  else if (hashCode == FILTER_POLICY_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::FILTER_POLICY_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == OPTED_OUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::OPTED_OUT), false);
  }
  else if (hashCode == TAG_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::TAG_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == CONCURRENT_ACCESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::CONCURRENT_ACCESS), false);
  }
  else if (hashCode == K_M_S_THROTTLING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::K_M_S_THROTTLING), false);
  }
  else if (hashCode == BATCH_ENTRY_IDS_NOT_DISTINCT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::BATCH_ENTRY_IDS_NOT_DISTINCT), false);
  }
  else if (hashCode == TAG_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::TAG_POLICY), false);
  }
  else if (hashCode == PLATFORM_APPLICATION_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::PLATFORM_APPLICATION_DISABLED), false);
  }
  else if (hashCode == USER_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::USER_ERROR), false);
  }
  else if (hashCode == K_M_S_OPT_IN_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::K_M_S_OPT_IN_REQUIRED), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::NOT_FOUND), false);
  }
  else if (hashCode == K_M_S_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::K_M_S_DISABLED), false);
  }
  else if (hashCode == K_M_S_ACCESS_DENIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::K_M_S_ACCESS_DENIED), false);
  }
  else if (hashCode == INVALID_SECURITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::INVALID_SECURITY), false);
  }
  else if (hashCode == STALE_TAG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::STALE_TAG), false);
  }
  else if (hashCode == EMPTY_BATCH_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::EMPTY_BATCH_REQUEST), false);
  }
  else if (hashCode == INVALID_BATCH_ENTRY_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::INVALID_BATCH_ENTRY_ID), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SNSErrorMapper
} // namespace SNS
} // namespace Aws
