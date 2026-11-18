/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/SESV2_EXPORTS.h>

namespace Aws {
namespace SESV2 {
namespace Model {
enum class SharedPoolDeliveryMode { NOT_SET, GLOBAL, REGIONAL, ACCOUNT };

namespace SharedPoolDeliveryModeMapper {
AWS_SESV2_API SharedPoolDeliveryMode GetSharedPoolDeliveryModeForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForSharedPoolDeliveryMode(SharedPoolDeliveryMode value);
}  // namespace SharedPoolDeliveryModeMapper
}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
