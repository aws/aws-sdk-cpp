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
  enum class VectorEnrichmentJobErrorType
  {
    NOT_SET,
    CLIENT_ERROR,
    SERVER_ERROR
  };

namespace VectorEnrichmentJobErrorTypeMapper
{
AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobErrorType GetVectorEnrichmentJobErrorTypeForName(const Aws::String& name);

AWS_SAGEMAKERGEOSPATIAL_API Aws::String GetNameForVectorEnrichmentJobErrorType(VectorEnrichmentJobErrorType value);
} // namespace VectorEnrichmentJobErrorTypeMapper
} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
