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
  enum class EarthObservationJobExportStatus
  {
    NOT_SET,
    IN_PROGRESS,
    SUCCEEDED,
    FAILED
  };

namespace EarthObservationJobExportStatusMapper
{
AWS_SAGEMAKERGEOSPATIAL_API EarthObservationJobExportStatus GetEarthObservationJobExportStatusForName(const Aws::String& name);

AWS_SAGEMAKERGEOSPATIAL_API Aws::String GetNameForEarthObservationJobExportStatus(EarthObservationJobExportStatus value);
} // namespace EarthObservationJobExportStatusMapper
} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
