/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

namespace Aws {
namespace MediaLive {
namespace Model {
enum class EbuTtDFillLineGapControl { NOT_SET, DISABLED, ENABLED };

namespace EbuTtDFillLineGapControlMapper {
AWS_MEDIALIVE_API EbuTtDFillLineGapControl GetEbuTtDFillLineGapControlForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForEbuTtDFillLineGapControl(EbuTtDFillLineGapControl value);
}  // namespace EbuTtDFillLineGapControlMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
