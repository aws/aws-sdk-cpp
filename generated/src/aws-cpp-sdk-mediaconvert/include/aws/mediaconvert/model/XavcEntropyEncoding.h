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
enum class XavcEntropyEncoding { NOT_SET, AUTO, CABAC, CAVLC };

namespace XavcEntropyEncodingMapper {
AWS_MEDIACONVERT_API XavcEntropyEncoding GetXavcEntropyEncodingForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForXavcEntropyEncoding(XavcEntropyEncoding value);
}  // namespace XavcEntropyEncodingMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
