/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

namespace Aws {
namespace WellArchitected {
namespace Model {
enum class GenerationStatus { NOT_SET, QUEUED, IN_PROGRESS, COMPLETED, ERROR_ };

namespace GenerationStatusMapper {
AWS_WELLARCHITECTED_API GenerationStatus GetGenerationStatusForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForGenerationStatus(GenerationStatus value);
}  // namespace GenerationStatusMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
