/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rds-data/RDSDataServiceErrors.h>
#include <aws/rds-data/model/StatementTimeoutException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::RDSDataService;
using namespace Aws::RDSDataService::Model;

namespace Aws
{
namespace RDSDataService
{
template<> AWS_RDSDATASERVICE_API StatementTimeoutException RDSDataServiceError::GetModeledError()
{
  assert(this->GetErrorType() == RDSDataServiceErrors::STATEMENT_TIMEOUT);
  return StatementTimeoutException(this->GetJsonPayload().View());
}

namespace RDSDataServiceErrorMapper
{

static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int FORBIDDEN_HASH = HashingUtils::HashString("ForbiddenException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int STATEMENT_TIMEOUT_HASH = HashingUtils::HashString("StatementTimeoutException");
static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("InternalServerErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSDataServiceErrors::NOT_FOUND), false);
  }
  else if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSDataServiceErrors::FORBIDDEN), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSDataServiceErrors::BAD_REQUEST), false);
  }
  else if (hashCode == STATEMENT_TIMEOUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSDataServiceErrors::STATEMENT_TIMEOUT), false);
  }
  else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSDataServiceErrors::INTERNAL_SERVER_ERROR), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace RDSDataServiceErrorMapper
} // namespace RDSDataService
} // namespace Aws
