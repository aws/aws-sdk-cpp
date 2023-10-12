/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mq/MQErrors.h>
#include <aws/mq/model/ConflictException.h>
#include <aws/mq/model/NotFoundException.h>
#include <aws/mq/model/UnauthorizedException.h>
#include <aws/mq/model/ForbiddenException.h>
#include <aws/mq/model/BadRequestException.h>
#include <aws/mq/model/InternalServerErrorException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MQ;
using namespace Aws::MQ::Model;

namespace Aws
{
namespace MQ
{
template<> AWS_MQ_API ConflictException MQError::GetModeledError()
{
  assert(this->GetErrorType() == MQErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_MQ_API NotFoundException MQError::GetModeledError()
{
  assert(this->GetErrorType() == MQErrors::NOT_FOUND);
  return NotFoundException(this->GetJsonPayload().View());
}

template<> AWS_MQ_API UnauthorizedException MQError::GetModeledError()
{
  assert(this->GetErrorType() == MQErrors::UNAUTHORIZED);
  return UnauthorizedException(this->GetJsonPayload().View());
}

template<> AWS_MQ_API ForbiddenException MQError::GetModeledError()
{
  assert(this->GetErrorType() == MQErrors::FORBIDDEN);
  return ForbiddenException(this->GetJsonPayload().View());
}

template<> AWS_MQ_API BadRequestException MQError::GetModeledError()
{
  assert(this->GetErrorType() == MQErrors::BAD_REQUEST);
  return BadRequestException(this->GetJsonPayload().View());
}

template<> AWS_MQ_API InternalServerErrorException MQError::GetModeledError()
{
  assert(this->GetErrorType() == MQErrors::INTERNAL_SERVER_ERROR);
  return InternalServerErrorException(this->GetJsonPayload().View());
}

namespace MQErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t NOT_FOUND_HASH = ConstExprHashingUtils::HashString("NotFoundException");
static constexpr uint32_t UNAUTHORIZED_HASH = ConstExprHashingUtils::HashString("UnauthorizedException");
static constexpr uint32_t FORBIDDEN_HASH = ConstExprHashingUtils::HashString("ForbiddenException");
static constexpr uint32_t BAD_REQUEST_HASH = ConstExprHashingUtils::HashString("BadRequestException");
static constexpr uint32_t INTERNAL_SERVER_ERROR_HASH = ConstExprHashingUtils::HashString("InternalServerErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MQErrors::CONFLICT), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MQErrors::NOT_FOUND), false);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MQErrors::UNAUTHORIZED), false);
  }
  else if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MQErrors::FORBIDDEN), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MQErrors::BAD_REQUEST), false);
  }
  else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MQErrors::INTERNAL_SERVER_ERROR), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MQErrorMapper
} // namespace MQ
} // namespace Aws
