/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryErrors.h>
#include <aws/serverlessrepo/model/ConflictException.h>
#include <aws/serverlessrepo/model/NotFoundException.h>
#include <aws/serverlessrepo/model/ForbiddenException.h>
#include <aws/serverlessrepo/model/TooManyRequestsException.h>
#include <aws/serverlessrepo/model/BadRequestException.h>
#include <aws/serverlessrepo/model/InternalServerErrorException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ServerlessApplicationRepository;
using namespace Aws::ServerlessApplicationRepository::Model;

namespace Aws
{
namespace ServerlessApplicationRepository
{
template<> AWS_SERVERLESSAPPLICATIONREPOSITORY_API ConflictException ServerlessApplicationRepositoryError::GetModeledError()
{
  assert(this->GetErrorType() == ServerlessApplicationRepositoryErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_SERVERLESSAPPLICATIONREPOSITORY_API NotFoundException ServerlessApplicationRepositoryError::GetModeledError()
{
  assert(this->GetErrorType() == ServerlessApplicationRepositoryErrors::NOT_FOUND);
  return NotFoundException(this->GetJsonPayload().View());
}

template<> AWS_SERVERLESSAPPLICATIONREPOSITORY_API ForbiddenException ServerlessApplicationRepositoryError::GetModeledError()
{
  assert(this->GetErrorType() == ServerlessApplicationRepositoryErrors::FORBIDDEN);
  return ForbiddenException(this->GetJsonPayload().View());
}

template<> AWS_SERVERLESSAPPLICATIONREPOSITORY_API TooManyRequestsException ServerlessApplicationRepositoryError::GetModeledError()
{
  assert(this->GetErrorType() == ServerlessApplicationRepositoryErrors::TOO_MANY_REQUESTS);
  return TooManyRequestsException(this->GetJsonPayload().View());
}

template<> AWS_SERVERLESSAPPLICATIONREPOSITORY_API BadRequestException ServerlessApplicationRepositoryError::GetModeledError()
{
  assert(this->GetErrorType() == ServerlessApplicationRepositoryErrors::BAD_REQUEST);
  return BadRequestException(this->GetJsonPayload().View());
}

template<> AWS_SERVERLESSAPPLICATIONREPOSITORY_API InternalServerErrorException ServerlessApplicationRepositoryError::GetModeledError()
{
  assert(this->GetErrorType() == ServerlessApplicationRepositoryErrors::INTERNAL_SERVER_ERROR);
  return InternalServerErrorException(this->GetJsonPayload().View());
}

namespace ServerlessApplicationRepositoryErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int FORBIDDEN_HASH = HashingUtils::HashString("ForbiddenException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("InternalServerErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServerlessApplicationRepositoryErrors::CONFLICT), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServerlessApplicationRepositoryErrors::NOT_FOUND), false);
  }
  else if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServerlessApplicationRepositoryErrors::FORBIDDEN), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServerlessApplicationRepositoryErrors::TOO_MANY_REQUESTS), true);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServerlessApplicationRepositoryErrors::BAD_REQUEST), false);
  }
  else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ServerlessApplicationRepositoryErrors::INTERNAL_SERVER_ERROR), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ServerlessApplicationRepositoryErrorMapper
} // namespace ServerlessApplicationRepository
} // namespace Aws
