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

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t OCU_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("OcuLimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServerlessErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServerlessErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServerlessErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == OCU_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(OpenSearchServerlessErrors::OCU_LIMIT_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace OpenSearchServerlessErrorMapper
} // namespace OpenSearchServerless
} // namespace Aws
