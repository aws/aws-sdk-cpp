/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Organizations
{
namespace Model
{
  enum class AccountState
  {
    NOT_SET,
    PENDING_ACTIVATION,
    ACTIVE,
    SUSPENDED,
    PENDING_CLOSURE,
    CLOSED
  };

namespace AccountStateMapper
{
AWS_ORGANIZATIONS_API AccountState GetAccountStateForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForAccountState(AccountState value);
} // namespace AccountStateMapper
} // namespace Model
} // namespace Organizations
} // namespace Aws
