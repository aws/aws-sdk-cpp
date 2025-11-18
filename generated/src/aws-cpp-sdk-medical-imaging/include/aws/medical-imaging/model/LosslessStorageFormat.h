/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>

namespace Aws {
namespace MedicalImaging {
namespace Model {
enum class LosslessStorageFormat { NOT_SET, HTJ2K, JPEG_2000_LOSSLESS };

namespace LosslessStorageFormatMapper {
AWS_MEDICALIMAGING_API LosslessStorageFormat GetLosslessStorageFormatForName(const Aws::String& name);

AWS_MEDICALIMAGING_API Aws::String GetNameForLosslessStorageFormat(LosslessStorageFormat value);
}  // namespace LosslessStorageFormatMapper
}  // namespace Model
}  // namespace MedicalImaging
}  // namespace Aws
