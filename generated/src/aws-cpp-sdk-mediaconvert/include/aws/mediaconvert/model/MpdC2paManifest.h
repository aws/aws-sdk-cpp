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
enum class MpdC2paManifest { NOT_SET, INCLUDE, EXCLUDE };

namespace MpdC2paManifestMapper {
AWS_MEDIACONVERT_API MpdC2paManifest GetMpdC2paManifestForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMpdC2paManifest(MpdC2paManifest value);
}  // namespace MpdC2paManifestMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
