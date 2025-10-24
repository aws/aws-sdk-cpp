/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support-app/SupportApp_EXPORTS.h>

namespace Aws {
namespace SupportApp {
namespace Model {
enum class AccountType { NOT_SET, management, member };

namespace AccountTypeMapper {
AWS_SUPPORTAPP_API AccountType GetAccountTypeForName(const Aws::String& name);

AWS_SUPPORTAPP_API Aws::String GetNameForAccountType(AccountType value);
}  // namespace AccountTypeMapper
}  // namespace Model
}  // namespace SupportApp
}  // namespace Aws
