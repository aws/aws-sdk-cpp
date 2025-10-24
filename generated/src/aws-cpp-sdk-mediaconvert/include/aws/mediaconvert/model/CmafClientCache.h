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
enum class CmafClientCache { NOT_SET, DISABLED, ENABLED };

namespace CmafClientCacheMapper {
AWS_MEDIACONVERT_API CmafClientCache GetCmafClientCacheForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmafClientCache(CmafClientCache value);
}  // namespace CmafClientCacheMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
