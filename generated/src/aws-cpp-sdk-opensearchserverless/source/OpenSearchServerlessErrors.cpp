/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearchserverless/OpenSearchServerlessErrors.h>
#include <aws/opensearchserverless/model/ServiceQuotaExceededException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::OpenSearchServerless;
using namespace Aws::OpenSearchServerless::Model;

namespace Aws
{
namespace OpenSearchServerless
{
template<> AWS_OPENSEARCHSERVERLESS_API ServiceQuotaExceededException OpenSearchServerlessError::GetModeledError()
{
  assert(this->GetErrorType() == OpenSearchServerlessErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

namespace OpenSearchServerlessErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int OCU_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("OcuLimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServerlessErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServerlessErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServerlessErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == OCU_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServerlessErrors::OCU_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace OpenSearchServerlessErrorMapper
} // namespace OpenSearchServerless
} // namespace Aws
