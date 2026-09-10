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
enum class MultiviewLayoutType { NOT_SET, LAYOUT_2EH, LAYOUT_2PL, LAYOUT_3EL, LAYOUT_3PL, LAYOUT_4E, LAYOUT_4PL };

namespace MultiviewLayoutTypeMapper {
AWS_MEDIAPACKAGEV2_API MultiviewLayoutType GetMultiviewLayoutTypeForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForMultiviewLayoutType(MultiviewLayoutType value);
}  // namespace MultiviewLayoutTypeMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
