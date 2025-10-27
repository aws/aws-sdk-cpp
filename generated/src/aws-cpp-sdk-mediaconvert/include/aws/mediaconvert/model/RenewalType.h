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
enum class RenewalType { NOT_SET, AUTO_RENEW, EXPIRE };

namespace RenewalTypeMapper {
AWS_MEDIACONVERT_API RenewalType GetRenewalTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForRenewalType(RenewalType value);
}  // namespace RenewalTypeMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
