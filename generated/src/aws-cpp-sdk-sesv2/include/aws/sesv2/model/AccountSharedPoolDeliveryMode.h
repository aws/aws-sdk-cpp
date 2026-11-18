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
enum class AccountSharedPoolDeliveryMode { NOT_SET, GLOBAL, REGIONAL };

namespace AccountSharedPoolDeliveryModeMapper {
AWS_SESV2_API AccountSharedPoolDeliveryMode GetAccountSharedPoolDeliveryModeForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForAccountSharedPoolDeliveryMode(AccountSharedPoolDeliveryMode value);
}  // namespace AccountSharedPoolDeliveryModeMapper
}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
