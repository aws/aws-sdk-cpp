/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>

namespace Aws {
namespace SageMakerGeospatial {
namespace Model {
enum class VectorEnrichmentJobStatus { NOT_SET, INITIALIZING, IN_PROGRESS, STOPPING, STOPPED, COMPLETED, FAILED, DELETING, DELETED };

namespace VectorEnrichmentJobStatusMapper {
AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobStatus GetVectorEnrichmentJobStatusForName(const Aws::String& name);

AWS_SAGEMAKERGEOSPATIAL_API Aws::String GetNameForVectorEnrichmentJobStatus(VectorEnrichmentJobStatus value);
}  // namespace VectorEnrichmentJobStatusMapper
}  // namespace Model
}  // namespace SageMakerGeospatial
}  // namespace Aws
