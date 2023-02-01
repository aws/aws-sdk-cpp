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
  enum class EarthObservationJobStatus
  {
    NOT_SET,
    INITIALIZING,
    IN_PROGRESS,
    STOPPING,
    COMPLETED,
    STOPPED,
    FAILED,
    DELETING,
    DELETED
  };

namespace EarthObservationJobStatusMapper
{
AWS_SAGEMAKERGEOSPATIAL_API EarthObservationJobStatus GetEarthObservationJobStatusForName(const Aws::String& name);

AWS_SAGEMAKERGEOSPATIAL_API Aws::String GetNameForEarthObservationJobStatus(EarthObservationJobStatus value);
} // namespace EarthObservationJobStatusMapper
} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
