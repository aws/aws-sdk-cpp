/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sts/STSErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::STS;

namespace Aws
{
namespace STS
{
namespace STSErrorMapper
{

static constexpr uint32_t MALFORMED_POLICY_DOCUMENT_HASH = ConstExprHashingUtils::HashString("MalformedPolicyDocument");
static constexpr uint32_t PACKED_POLICY_TOO_LARGE_HASH = ConstExprHashingUtils::HashString("PackedPolicyTooLarge");
static constexpr uint32_t I_D_P_COMMUNICATION_ERROR_HASH = ConstExprHashingUtils::HashString("IDPCommunicationError");
static constexpr uint32_t I_D_P_REJECTED_CLAIM_HASH = ConstExprHashingUtils::HashString("IDPRejectedClaim");
static constexpr uint32_t EXPIRED_TOKEN_HASH = ConstExprHashingUtils::HashString("ExpiredTokenException");
static constexpr uint32_t INVALID_IDENTITY_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidIdentityToken");
static constexpr uint32_t INVALID_AUTHORIZATION_MESSAGE_HASH = ConstExprHashingUtils::HashString("InvalidAuthorizationMessageException");
static constexpr uint32_t REGION_DISABLED_HASH = ConstExprHashingUtils::HashString("RegionDisabledException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == MALFORMED_POLICY_DOCUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(STSErrors::MALFORMED_POLICY_DOCUMENT), false);
  }
  else if (hashCode == PACKED_POLICY_TOO_LARGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(STSErrors::PACKED_POLICY_TOO_LARGE), false);
  }
  else if (hashCode == I_D_P_COMMUNICATION_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(STSErrors::I_D_P_COMMUNICATION_ERROR), false);
  }
  else if (hashCode == I_D_P_REJECTED_CLAIM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(STSErrors::I_D_P_REJECTED_CLAIM), false);
  }
  else if (hashCode == EXPIRED_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(STSErrors::EXPIRED_TOKEN), false);
  }
  else if (hashCode == INVALID_IDENTITY_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(STSErrors::INVALID_IDENTITY_TOKEN), false);
  }
  else if (hashCode == INVALID_AUTHORIZATION_MESSAGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(STSErrors::INVALID_AUTHORIZATION_MESSAGE), false);
  }
  else if (hashCode == REGION_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(STSErrors::REGION_DISABLED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace STSErrorMapper
} // namespace STS
} // namespace Aws
