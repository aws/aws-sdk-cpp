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
enum class InputFilter { NOT_SET, AUTO, DISABLED, FORCED };

namespace InputFilterMapper {
AWS_MEDIALIVE_API InputFilter GetInputFilterForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputFilter(InputFilter value);
}  // namespace InputFilterMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
