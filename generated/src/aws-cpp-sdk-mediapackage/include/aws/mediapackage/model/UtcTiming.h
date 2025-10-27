/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/MediaPackage_EXPORTS.h>

namespace Aws {
namespace MediaPackage {
namespace Model {
enum class UtcTiming { NOT_SET, NONE, HTTP_HEAD, HTTP_ISO, HTTP_XSDATE };

namespace UtcTimingMapper {
AWS_MEDIAPACKAGE_API UtcTiming GetUtcTimingForName(const Aws::String& name);

AWS_MEDIAPACKAGE_API Aws::String GetNameForUtcTiming(UtcTiming value);
}  // namespace UtcTimingMapper
}  // namespace Model
}  // namespace MediaPackage
}  // namespace Aws
