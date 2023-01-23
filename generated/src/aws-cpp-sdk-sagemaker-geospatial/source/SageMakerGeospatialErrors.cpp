/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker-geospatial/SageMakerGeospatialErrors.h>
#include <aws/sagemaker-geospatial/model/ConflictException.h>
#include <aws/sagemaker-geospatial/model/ThrottlingException.h>
#include <aws/sagemaker-geospatial/model/ServiceQuotaExceededException.h>
#include <aws/sagemaker-geospatial/model/InternalServerException.h>
#include <aws/sagemaker-geospatial/model/ResourceNotFoundException.h>
#include <aws/sagemaker-geospatial/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SageMakerGeospatial;
using namespace Aws::SageMakerGeospatial::Model;

namespace Aws
{
namespace SageMakerGeospatial
{
template<> AWS_SAGEMAKERGEOSPATIAL_API ConflictException SageMakerGeospatialError::GetModeledError()
{
  assert(this->GetErrorType() == SageMakerGeospatialErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_SAGEMAKERGEOSPATIAL_API ThrottlingException SageMakerGeospatialError::GetModeledError()
{
  assert(this->GetErrorType() == SageMakerGeospatialErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_SAGEMAKERGEOSPATIAL_API ServiceQuotaExceededException SageMakerGeospatialError::GetModeledError()
{
  assert(this->GetErrorType() == SageMakerGeospatialErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_SAGEMAKERGEOSPATIAL_API InternalServerException SageMakerGeospatialError::GetModeledError()
{
  assert(this->GetErrorType() == SageMakerGeospatialErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_SAGEMAKERGEOSPATIAL_API ResourceNotFoundException SageMakerGeospatialError::GetModeledError()
{
  assert(this->GetErrorType() == SageMakerGeospatialErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_SAGEMAKERGEOSPATIAL_API ValidationException SageMakerGeospatialError::GetModeledError()
{
  assert(this->GetErrorType() == SageMakerGeospatialErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace SageMakerGeospatialErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerGeospatialErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerGeospatialErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SageMakerGeospatialErrors::INTERNAL_SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SageMakerGeospatialErrorMapper
} // namespace SageMakerGeospatial
} // namespace Aws
