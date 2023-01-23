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
  enum class VectorEnrichmentJobType
  {
    NOT_SET,
    REVERSE_GEOCODING,
    MAP_MATCHING
  };

namespace VectorEnrichmentJobTypeMapper
{
AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobType GetVectorEnrichmentJobTypeForName(const Aws::String& name);

AWS_SAGEMAKERGEOSPATIAL_API Aws::String GetNameForVectorEnrichmentJobType(VectorEnrichmentJobType value);
} // namespace VectorEnrichmentJobTypeMapper
} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
