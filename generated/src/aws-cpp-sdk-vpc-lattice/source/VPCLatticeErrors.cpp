/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/vpc-lattice/VPCLatticeErrors.h>
#include <aws/vpc-lattice/model/ConflictException.h>
#include <aws/vpc-lattice/model/ThrottlingException.h>
#include <aws/vpc-lattice/model/ServiceQuotaExceededException.h>
#include <aws/vpc-lattice/model/ResourceNotFoundException.h>
#include <aws/vpc-lattice/model/InternalServerException.h>
#include <aws/vpc-lattice/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::VPCLattice;
using namespace Aws::VPCLattice::Model;

namespace Aws
{
namespace VPCLattice
{
template<> AWS_VPCLATTICE_API ConflictException VPCLatticeError::GetModeledError()
{
  assert(this->GetErrorType() == VPCLatticeErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_VPCLATTICE_API ThrottlingException VPCLatticeError::GetModeledError()
{
  assert(this->GetErrorType() == VPCLatticeErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_VPCLATTICE_API ServiceQuotaExceededException VPCLatticeError::GetModeledError()
{
  assert(this->GetErrorType() == VPCLatticeErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_VPCLATTICE_API ResourceNotFoundException VPCLatticeError::GetModeledError()
{
  assert(this->GetErrorType() == VPCLatticeErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_VPCLATTICE_API InternalServerException VPCLatticeError::GetModeledError()
{
  assert(this->GetErrorType() == VPCLatticeErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_VPCLATTICE_API ValidationException VPCLatticeError::GetModeledError()
{
  assert(this->GetErrorType() == VPCLatticeErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace VPCLatticeErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(VPCLatticeErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(VPCLatticeErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(VPCLatticeErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace VPCLatticeErrorMapper
} // namespace VPCLattice
} // namespace Aws
