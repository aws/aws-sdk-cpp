/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/uxc/Uxc_EXPORTS.h>

namespace Aws {
namespace uxc {
namespace Model {
enum class AccountColor { NOT_SET, none, pink, purple, darkBlue, lightBlue, teal, green, yellow, orange, red };

namespace AccountColorMapper {
AWS_UXC_API AccountColor GetAccountColorForName(const Aws::String& name);

AWS_UXC_API Aws::String GetNameForAccountColor(AccountColor value);
}  // namespace AccountColorMapper
}  // namespace Model
}  // namespace uxc
}  // namespace Aws
