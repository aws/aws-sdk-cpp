/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53domains/Route53DomainsErrors.h>
#include <aws/route53domains/model/DuplicateRequest.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Route53Domains;
using namespace Aws::Route53Domains::Model;

namespace Aws
{
namespace Route53Domains
{
template<> AWS_ROUTE53DOMAINS_API DuplicateRequest Route53DomainsError::GetModeledError()
{
  assert(this->GetErrorType() == Route53DomainsErrors::DUPLICATE_REQUEST);
  return DuplicateRequest(this->GetJsonPayload().View());
}

namespace Route53DomainsErrorMapper
{

static constexpr uint32_t INVALID_INPUT_HASH = ConstExprHashingUtils::HashString("InvalidInput");
static constexpr uint32_t DOMAIN_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("DomainLimitExceeded");
static constexpr uint32_t DUPLICATE_REQUEST_HASH = ConstExprHashingUtils::HashString("DuplicateRequest");
static constexpr uint32_t OPERATION_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("OperationLimitExceeded");
static constexpr uint32_t T_L_D_RULES_VIOLATION_HASH = ConstExprHashingUtils::HashString("TLDRulesViolation");
static constexpr uint32_t UNSUPPORTED_T_L_D_HASH = ConstExprHashingUtils::HashString("UnsupportedTLD");
static constexpr uint32_t DNSSEC_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("DnssecLimitExceeded");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53DomainsErrors::INVALID_INPUT), false);
  }
  else if (hashCode == DOMAIN_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53DomainsErrors::DOMAIN_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == DUPLICATE_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53DomainsErrors::DUPLICATE_REQUEST), false);
  }
  else if (hashCode == OPERATION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53DomainsErrors::OPERATION_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == T_L_D_RULES_VIOLATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53DomainsErrors::T_L_D_RULES_VIOLATION), false);
  }
  else if (hashCode == UNSUPPORTED_T_L_D_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53DomainsErrors::UNSUPPORTED_T_L_D), false);
  }
  else if (hashCode == DNSSEC_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53DomainsErrors::DNSSEC_LIMIT_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace Route53DomainsErrorMapper
} // namespace Route53Domains
} // namespace Aws
