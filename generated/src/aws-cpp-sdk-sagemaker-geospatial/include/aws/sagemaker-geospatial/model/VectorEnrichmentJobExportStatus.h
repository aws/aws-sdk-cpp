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
  enum class VectorEnrichmentJobExportStatus
  {
    NOT_SET,
    IN_PROGRESS,
    SUCCEEDED,
    FAILED
  };

namespace VectorEnrichmentJobExportStatusMapper
{
AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobExportStatus GetVectorEnrichmentJobExportStatusForName(const Aws::String& name);

AWS_SAGEMAKERGEOSPATIAL_API Aws::String GetNameForVectorEnrichmentJobExportStatus(VectorEnrichmentJobExportStatus value);
} // namespace VectorEnrichmentJobExportStatusMapper
} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
