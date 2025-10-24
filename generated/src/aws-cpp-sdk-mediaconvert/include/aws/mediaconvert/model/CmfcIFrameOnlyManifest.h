/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

namespace Aws {
namespace MediaConvert {
namespace Model {
enum class CmfcIFrameOnlyManifest { NOT_SET, INCLUDE, EXCLUDE };

namespace CmfcIFrameOnlyManifestMapper {
AWS_MEDIACONVERT_API CmfcIFrameOnlyManifest GetCmfcIFrameOnlyManifestForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmfcIFrameOnlyManifest(CmfcIFrameOnlyManifest value);
}  // namespace CmfcIFrameOnlyManifestMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
