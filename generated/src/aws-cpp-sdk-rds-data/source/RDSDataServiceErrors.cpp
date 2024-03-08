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

static const int HTTP_ENDPOINT_NOT_ENABLED_HASH = HashingUtils::HashString("HttpEndpointNotEnabledException");
static const int FORBIDDEN_HASH = HashingUtils::HashString("ForbiddenException");
static const int INVALID_SECRET_HASH = HashingUtils::HashString("InvalidSecretException");
static const int UNSUPPORTED_RESULT_HASH = HashingUtils::HashString("UnsupportedResultException");
static const int STATEMENT_TIMEOUT_HASH = HashingUtils::HashString("StatementTimeoutException");
static const int SECRETS_ERROR_HASH = HashingUtils::HashString("SecretsErrorException");
static const int DATABASE_NOT_FOUND_HASH = HashingUtils::HashString("DatabaseNotFoundException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int TRANSACTION_NOT_FOUND_HASH = HashingUtils::HashString("TransactionNotFoundException");
static const int DATABASE_ERROR_HASH = HashingUtils::HashString("DatabaseErrorException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("InternalServerErrorException");
static const int DATABASE_UNAVAILABLE_HASH = HashingUtils::HashString("DatabaseUnavailableException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == HTTP_ENDPOINT_NOT_ENABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSDataServiceErrors::HTTP_ENDPOINT_NOT_ENABLED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSDataServiceErrors::FORBIDDEN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_SECRET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSDataServiceErrors::INVALID_SECRET), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNSUPPORTED_RESULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSDataServiceErrors::UNSUPPORTED_RESULT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == STATEMENT_TIMEOUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSDataServiceErrors::STATEMENT_TIMEOUT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SECRETS_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSDataServiceErrors::SECRETS_ERROR), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DATABASE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSDataServiceErrors::DATABASE_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSDataServiceErrors::NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TRANSACTION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSDataServiceErrors::TRANSACTION_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DATABASE_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSDataServiceErrors::DATABASE_ERROR), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSDataServiceErrors::BAD_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSDataServiceErrors::INTERNAL_SERVER_ERROR), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DATABASE_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RDSDataServiceErrors::DATABASE_UNAVAILABLE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace RDSDataServiceErrorMapper
} // namespace RDSDataService
} // namespace Aws
