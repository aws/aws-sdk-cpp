/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53domains/Route53DomainsErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Route53Domains;

namespace Aws
{
namespace Route53Domains
{
namespace Route53DomainsErrorMapper
{

static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInput");
static const int DOMAIN_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("DomainLimitExceeded");
static const int DUPLICATE_REQUEST_HASH = HashingUtils::HashString("DuplicateRequest");
static const int OPERATION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("OperationLimitExceeded");
static const int T_L_D_RULES_VIOLATION_HASH = HashingUtils::HashString("TLDRulesViolation");
static const int UNSUPPORTED_T_L_D_HASH = HashingUtils::HashString("UnsupportedTLD");
static const int DNSSEC_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("DnssecLimitExceeded");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

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
