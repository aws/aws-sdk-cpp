/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/Omics_EXPORTS.h>

namespace Aws {
namespace Omics {
namespace Model {
enum class ScratchStorageMode { NOT_SET, LOCAL, SHARED };

namespace ScratchStorageModeMapper {
AWS_OMICS_API ScratchStorageMode GetScratchStorageModeForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForScratchStorageMode(ScratchStorageMode value);
}  // namespace ScratchStorageModeMapper
}  // namespace Model
}  // namespace Omics
}  // namespace Aws
