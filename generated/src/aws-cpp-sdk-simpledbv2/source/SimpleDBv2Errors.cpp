/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/simpledbv2/SimpleDBv2Errors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SimpleDBv2;

namespace Aws {
namespace SimpleDBv2 {
namespace SimpleDBv2ErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int NO_SUCH_DOMAIN_HASH = HashingUtils::HashString("NoSuchDomainException");
static const int NO_SUCH_EXPORT_HASH = HashingUtils::HashString("NoSuchExportException");
static const int NUMBER_EXPORTS_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("NumberExportsLimitExceeded");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBv2Errors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == NO_SUCH_DOMAIN_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBv2Errors::NO_SUCH_DOMAIN), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == NO_SUCH_EXPORT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBv2Errors::NO_SUCH_EXPORT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == NUMBER_EXPORTS_LIMIT_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBv2Errors::NUMBER_EXPORTS_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INVALID_NEXT_TOKEN_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBv2Errors::INVALID_NEXT_TOKEN), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace SimpleDBv2ErrorMapper
}  // namespace SimpleDBv2
}  // namespace Aws
