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
enum class CustomAdType { NOT_SET, PROGRAM, CHAPTER, UNSCHEDULED_EVENT, ALTERNATE_CONTENT_OPPORTUNITY, NETWORK };

namespace CustomAdTypeMapper {
AWS_MEDIAPACKAGEV2_API CustomAdType GetCustomAdTypeForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForCustomAdType(CustomAdType value);
}  // namespace CustomAdTypeMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
