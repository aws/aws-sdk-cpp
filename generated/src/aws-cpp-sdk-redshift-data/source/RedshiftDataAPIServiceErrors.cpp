/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/redshift-data/RedshiftDataAPIServiceErrors.h>
#include <aws/redshift-data/model/BatchExecuteStatementException.h>
#include <aws/redshift-data/model/ExecuteStatementException.h>
#include <aws/redshift-data/model/ResourceNotFoundException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::RedshiftDataAPIService;
using namespace Aws::RedshiftDataAPIService::Model;

namespace Aws
{
namespace RedshiftDataAPIService
{
template<> AWS_REDSHIFTDATAAPISERVICE_API BatchExecuteStatementException RedshiftDataAPIServiceError::GetModeledError()
{
  assert(this->GetErrorType() == RedshiftDataAPIServiceErrors::BATCH_EXECUTE_STATEMENT);
  return BatchExecuteStatementException(this->GetJsonPayload().View());
}

template<> AWS_REDSHIFTDATAAPISERVICE_API ExecuteStatementException RedshiftDataAPIServiceError::GetModeledError()
{
  assert(this->GetErrorType() == RedshiftDataAPIServiceErrors::EXECUTE_STATEMENT);
  return ExecuteStatementException(this->GetJsonPayload().View());
}

template<> AWS_REDSHIFTDATAAPISERVICE_API ResourceNotFoundException RedshiftDataAPIServiceError::GetModeledError()
{
  assert(this->GetErrorType() == RedshiftDataAPIServiceErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

namespace RedshiftDataAPIServiceErrorMapper
{

static constexpr uint32_t BATCH_EXECUTE_STATEMENT_HASH = ConstExprHashingUtils::HashString("BatchExecuteStatementException");
static constexpr uint32_t EXECUTE_STATEMENT_HASH = ConstExprHashingUtils::HashString("ExecuteStatementException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t DATABASE_CONNECTION_HASH = ConstExprHashingUtils::HashString("DatabaseConnectionException");
static constexpr uint32_t ACTIVE_STATEMENTS_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ActiveStatementsExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == BATCH_EXECUTE_STATEMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftDataAPIServiceErrors::BATCH_EXECUTE_STATEMENT), false);
  }
  else if (hashCode == EXECUTE_STATEMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftDataAPIServiceErrors::EXECUTE_STATEMENT), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftDataAPIServiceErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == DATABASE_CONNECTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftDataAPIServiceErrors::DATABASE_CONNECTION), false);
  }
  else if (hashCode == ACTIVE_STATEMENTS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RedshiftDataAPIServiceErrors::ACTIVE_STATEMENTS_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace RedshiftDataAPIServiceErrorMapper
} // namespace RedshiftDataAPIService
} // namespace Aws
