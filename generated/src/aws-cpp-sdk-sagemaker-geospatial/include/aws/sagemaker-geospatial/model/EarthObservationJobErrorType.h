/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{
  enum class EarthObservationJobErrorType
  {
    NOT_SET,
    CLIENT_ERROR,
    SERVER_ERROR
  };

namespace EarthObservationJobErrorTypeMapper
{
AWS_SAGEMAKERGEOSPATIAL_API EarthObservationJobErrorType GetEarthObservationJobErrorTypeForName(const Aws::String& name);

AWS_SAGEMAKERGEOSPATIAL_API Aws::String GetNameForEarthObservationJobErrorType(EarthObservationJobErrorType value);
} // namespace EarthObservationJobErrorTypeMapper
} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
