/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>

namespace Aws {
namespace mediapackagev2 {
namespace Model {
enum class SpekeVersion { NOT_SET, V2_0, V2_1 };

namespace SpekeVersionMapper {
AWS_MEDIAPACKAGEV2_API SpekeVersion GetSpekeVersionForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForSpekeVersion(SpekeVersion value);
}  // namespace SpekeVersionMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
