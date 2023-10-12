/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qldb-session/QLDBSessionErrors.h>
#include <aws/qldb-session/model/InvalidSessionException.h>
#include <aws/qldb-session/model/BadRequestException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::QLDBSession;
using namespace Aws::QLDBSession::Model;

namespace Aws
{
namespace QLDBSession
{
template<> AWS_QLDBSESSION_API InvalidSessionException QLDBSessionError::GetModeledError()
{
  assert(this->GetErrorType() == QLDBSessionErrors::INVALID_SESSION);
  return InvalidSessionException(this->GetJsonPayload().View());
}

template<> AWS_QLDBSESSION_API BadRequestException QLDBSessionError::GetModeledError()
{
  assert(this->GetErrorType() == QLDBSessionErrors::BAD_REQUEST);
  return BadRequestException(this->GetJsonPayload().View());
}

namespace QLDBSessionErrorMapper
{

static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t INVALID_SESSION_HASH = ConstExprHashingUtils::HashString("InvalidSessionException");
static constexpr uint32_t BAD_REQUEST_HASH = ConstExprHashingUtils::HashString("BadRequestException");
static constexpr uint32_t CAPACITY_EXCEEDED_HASH = ConstExprHashingUtils::HashString("CapacityExceededException");
static constexpr uint32_t OCC_CONFLICT_HASH = ConstExprHashingUtils::HashString("OccConflictException");
static constexpr uint32_t RATE_EXCEEDED_HASH = ConstExprHashingUtils::HashString("RateExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBSessionErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == INVALID_SESSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBSessionErrors::INVALID_SESSION), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBSessionErrors::BAD_REQUEST), false);
  }
  else if (hashCode == CAPACITY_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBSessionErrors::CAPACITY_EXCEEDED), false);
  }
  else if (hashCode == OCC_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBSessionErrors::OCC_CONFLICT), false);
  }
  else if (hashCode == RATE_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBSessionErrors::RATE_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace QLDBSessionErrorMapper
} // namespace QLDBSession
} // namespace Aws
