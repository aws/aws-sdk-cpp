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

static constexpr uint32_t NOT_FOUND_HASH = ConstExprHashingUtils::HashString("NotFoundException");
static constexpr uint32_t FORBIDDEN_HASH = ConstExprHashingUtils::HashString("ForbiddenException");
static constexpr uint32_t BAD_REQUEST_HASH = ConstExprHashingUtils::HashString("BadRequestException");
static constexpr uint32_t STATEMENT_TIMEOUT_HASH = ConstExprHashingUtils::HashString("StatementTimeoutException");
static constexpr uint32_t INTERNAL_SERVER_ERROR_HASH = ConstExprHashingUtils::HashString("InternalServerErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
