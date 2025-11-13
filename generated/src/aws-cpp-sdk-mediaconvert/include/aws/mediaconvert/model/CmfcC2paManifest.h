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
enum class CmfcC2paManifest { NOT_SET, INCLUDE, EXCLUDE };

namespace CmfcC2paManifestMapper {
AWS_MEDIACONVERT_API CmfcC2paManifest GetCmfcC2paManifestForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmfcC2paManifest(CmfcC2paManifest value);
}  // namespace CmfcC2paManifestMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
