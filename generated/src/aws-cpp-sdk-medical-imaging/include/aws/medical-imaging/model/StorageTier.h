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
enum class StorageTier { NOT_SET, FREQUENT_ACCESS, ARCHIVE_INSTANT_ACCESS };

namespace StorageTierMapper {
AWS_MEDICALIMAGING_API StorageTier GetStorageTierForName(const Aws::String& name);

AWS_MEDICALIMAGING_API Aws::String GetNameForStorageTier(StorageTier value);
}  // namespace StorageTierMapper
}  // namespace Model
}  // namespace MedicalImaging
}  // namespace Aws
