/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qldb/QLDBErrors.h>
#include <aws/qldb/model/ResourceNotFoundException.h>
#include <aws/qldb/model/InvalidParameterException.h>
#include <aws/qldb/model/ResourceAlreadyExistsException.h>
#include <aws/qldb/model/LimitExceededException.h>
#include <aws/qldb/model/ResourcePreconditionNotMetException.h>
#include <aws/qldb/model/ResourceInUseException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::QLDB;
using namespace Aws::QLDB::Model;

namespace Aws
{
namespace QLDB
{
template<> AWS_QLDB_API ResourceNotFoundException QLDBError::GetModeledError()
{
  assert(this->GetErrorType() == QLDBErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_QLDB_API InvalidParameterException QLDBError::GetModeledError()
{
  assert(this->GetErrorType() == QLDBErrors::INVALID_PARAMETER);
  return InvalidParameterException(this->GetJsonPayload().View());
}

template<> AWS_QLDB_API ResourceAlreadyExistsException QLDBError::GetModeledError()
{
  assert(this->GetErrorType() == QLDBErrors::RESOURCE_ALREADY_EXISTS);
  return ResourceAlreadyExistsException(this->GetJsonPayload().View());
}

template<> AWS_QLDB_API LimitExceededException QLDBError::GetModeledError()
{
  assert(this->GetErrorType() == QLDBErrors::LIMIT_EXCEEDED);
  return LimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_QLDB_API ResourcePreconditionNotMetException QLDBError::GetModeledError()
{
  assert(this->GetErrorType() == QLDBErrors::RESOURCE_PRECONDITION_NOT_MET);
  return ResourcePreconditionNotMetException(this->GetJsonPayload().View());
}

template<> AWS_QLDB_API ResourceInUseException QLDBError::GetModeledError()
{
  assert(this->GetErrorType() == QLDBErrors::RESOURCE_IN_USE);
  return ResourceInUseException(this->GetJsonPayload().View());
}

namespace QLDBErrorMapper
{

static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidParameterException");
static constexpr uint32_t RESOURCE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ResourceAlreadyExistsException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t RESOURCE_PRECONDITION_NOT_MET_HASH = ConstExprHashingUtils::HashString("ResourcePreconditionNotMetException");
static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUseException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == RESOURCE_PRECONDITION_NOT_MET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBErrors::RESOURCE_PRECONDITION_NOT_MET), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBErrors::RESOURCE_IN_USE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace QLDBErrorMapper
} // namespace QLDB
} // namespace Aws
