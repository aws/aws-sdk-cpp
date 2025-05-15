/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PCS
{
namespace Model
{
  enum class AccountingMode
  {
    NOT_SET,
    STANDARD,
    NONE
  };

namespace AccountingModeMapper
{
AWS_PCS_API AccountingMode GetAccountingModeForName(const Aws::String& name);

AWS_PCS_API Aws::String GetNameForAccountingMode(AccountingMode value);
} // namespace AccountingModeMapper
} // namespace Model
} // namespace PCS
} // namespace Aws
