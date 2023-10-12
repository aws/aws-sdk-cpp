/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medialive/MediaLiveErrors.h>
#include <aws/medialive/model/UnprocessableEntityException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MediaLive;
using namespace Aws::MediaLive::Model;

namespace Aws
{
namespace MediaLive
{
template<> AWS_MEDIALIVE_API UnprocessableEntityException MediaLiveError::GetModeledError()
{
  assert(this->GetErrorType() == MediaLiveErrors::UNPROCESSABLE_ENTITY);
  return UnprocessableEntityException(this->GetJsonPayload().View());
}

namespace MediaLiveErrorMapper
{

static constexpr uint32_t BAD_GATEWAY_HASH = ConstExprHashingUtils::HashString("BadGatewayException");
static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t NOT_FOUND_HASH = ConstExprHashingUtils::HashString("NotFoundException");
static constexpr uint32_t FORBIDDEN_HASH = ConstExprHashingUtils::HashString("ForbiddenException");
static constexpr uint32_t GATEWAY_TIMEOUT_HASH = ConstExprHashingUtils::HashString("GatewayTimeoutException");
static constexpr uint32_t TOO_MANY_REQUESTS_HASH = ConstExprHashingUtils::HashString("TooManyRequestsException");
static constexpr uint32_t UNPROCESSABLE_ENTITY_HASH = ConstExprHashingUtils::HashString("UnprocessableEntityException");
static constexpr uint32_t BAD_REQUEST_HASH = ConstExprHashingUtils::HashString("BadRequestException");
static constexpr uint32_t INTERNAL_SERVER_ERROR_HASH = ConstExprHashingUtils::HashString("InternalServerErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == BAD_GATEWAY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaLiveErrors::BAD_GATEWAY), false);
  }
  else if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaLiveErrors::CONFLICT), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaLiveErrors::NOT_FOUND), false);
  }
  else if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaLiveErrors::FORBIDDEN), false);
  }
  else if (hashCode == GATEWAY_TIMEOUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaLiveErrors::GATEWAY_TIMEOUT), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaLiveErrors::TOO_MANY_REQUESTS), true);
  }
  else if (hashCode == UNPROCESSABLE_ENTITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaLiveErrors::UNPROCESSABLE_ENTITY), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaLiveErrors::BAD_REQUEST), false);
  }
  else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MediaLiveErrors::INTERNAL_SERVER_ERROR), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MediaLiveErrorMapper
} // namespace MediaLive
} // namespace Aws
