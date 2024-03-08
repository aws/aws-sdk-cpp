/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/neptune-graph/NeptuneGraphErrors.h>
#include <aws/neptune-graph/model/ConflictException.h>
#include <aws/neptune-graph/model/ServiceQuotaExceededException.h>
#include <aws/neptune-graph/model/ValidationException.h>
#include <aws/neptune-graph/model/UnprocessableException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::NeptuneGraph;
using namespace Aws::NeptuneGraph::Model;

namespace Aws
{
namespace NeptuneGraph
{
template<> AWS_NEPTUNEGRAPH_API ConflictException NeptuneGraphError::GetModeledError()
{
  assert(this->GetErrorType() == NeptuneGraphErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEGRAPH_API ServiceQuotaExceededException NeptuneGraphError::GetModeledError()
{
  assert(this->GetErrorType() == NeptuneGraphErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEGRAPH_API ValidationException NeptuneGraphError::GetModeledError()
{
  assert(this->GetErrorType() == NeptuneGraphErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_NEPTUNEGRAPH_API UnprocessableException NeptuneGraphError::GetModeledError()
{
  assert(this->GetErrorType() == NeptuneGraphErrors::UNPROCESSABLE);
  return UnprocessableException(this->GetJsonPayload().View());
}

namespace NeptuneGraphErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int UNPROCESSABLE_HASH = HashingUtils::HashString("UnprocessableException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneGraphErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneGraphErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneGraphErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  else if (hashCode == UNPROCESSABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(NeptuneGraphErrors::UNPROCESSABLE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace NeptuneGraphErrorMapper
} // namespace NeptuneGraph
} // namespace Aws
