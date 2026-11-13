/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

namespace Aws {
namespace MediaTailor {
namespace Model {
enum class HlsTagName { NOT_SET, EXT_X_DATERANGE };

namespace HlsTagNameMapper {
AWS_MEDIATAILOR_API HlsTagName GetHlsTagNameForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForHlsTagName(HlsTagName value);
}  // namespace HlsTagNameMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
