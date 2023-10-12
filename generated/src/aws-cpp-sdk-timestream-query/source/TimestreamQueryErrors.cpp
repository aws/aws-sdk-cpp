/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/timestream-query/TimestreamQueryErrors.h>
#include <aws/timestream-query/model/ResourceNotFoundException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::TimestreamQuery;
using namespace Aws::TimestreamQuery::Model;

namespace Aws
{
namespace TimestreamQuery
{
template<> AWS_TIMESTREAMQUERY_API ResourceNotFoundException TimestreamQueryError::GetModeledError()
{
  assert(this->GetErrorType() == TimestreamQueryErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

namespace TimestreamQueryErrorMapper
{

static constexpr uint32_t INVALID_ENDPOINT_HASH = ConstExprHashingUtils::HashString("InvalidEndpointException");
static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t QUERY_EXECUTION_HASH = ConstExprHashingUtils::HashString("QueryExecutionException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_ENDPOINT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TimestreamQueryErrors::INVALID_ENDPOINT), false);
  }
  else if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TimestreamQueryErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TimestreamQueryErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TimestreamQueryErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == QUERY_EXECUTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TimestreamQueryErrors::QUERY_EXECUTION), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace TimestreamQueryErrorMapper
} // namespace TimestreamQuery
} // namespace Aws
