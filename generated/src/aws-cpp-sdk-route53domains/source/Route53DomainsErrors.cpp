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
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53DomainsErrors::INVALID_INPUT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DOMAIN_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53DomainsErrors::DOMAIN_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DUPLICATE_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53DomainsErrors::DUPLICATE_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == OPERATION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53DomainsErrors::OPERATION_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == T_L_D_RULES_VIOLATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53DomainsErrors::T_L_D_RULES_VIOLATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNSUPPORTED_T_L_D_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53DomainsErrors::UNSUPPORTED_T_L_D), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DNSSEC_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(Route53DomainsErrors::DNSSEC_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace Route53DomainsErrorMapper
} // namespace Route53Domains
} // namespace Aws
