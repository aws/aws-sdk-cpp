/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/panorama/PanoramaErrors.h>
#include <aws/panorama/model/ConflictException.h>
#include <aws/panorama/model/ServiceQuotaExceededException.h>
#include <aws/panorama/model/InternalServerException.h>
#include <aws/panorama/model/ResourceNotFoundException.h>
#include <aws/panorama/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Panorama;
using namespace Aws::Panorama::Model;

namespace Aws
{
namespace Panorama
{
template<> AWS_PANORAMA_API ConflictException PanoramaError::GetModeledError()
{
  assert(this->GetErrorType() == PanoramaErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_PANORAMA_API ServiceQuotaExceededException PanoramaError::GetModeledError()
{
  assert(this->GetErrorType() == PanoramaErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_PANORAMA_API InternalServerException PanoramaError::GetModeledError()
{
  assert(this->GetErrorType() == PanoramaErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_PANORAMA_API ResourceNotFoundException PanoramaError::GetModeledError()
{
  assert(this->GetErrorType() == PanoramaErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_PANORAMA_API ValidationException PanoramaError::GetModeledError()
{
  assert(this->GetErrorType() == PanoramaErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace PanoramaErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PanoramaErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PanoramaErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PanoramaErrors::INTERNAL_SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace PanoramaErrorMapper
} // namespace Panorama
} // namespace Aws
