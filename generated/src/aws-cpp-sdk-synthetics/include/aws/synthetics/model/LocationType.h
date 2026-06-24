/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/Synthetics_EXPORTS.h>

namespace Aws {
namespace Synthetics {
namespace Model {
enum class LocationType { NOT_SET, Primary, Replica };

namespace LocationTypeMapper {
AWS_SYNTHETICS_API LocationType GetLocationTypeForName(const Aws::String& name);

AWS_SYNTHETICS_API Aws::String GetNameForLocationType(LocationType value);
}  // namespace LocationTypeMapper
}  // namespace Model
}  // namespace Synthetics
}  // namespace Aws
