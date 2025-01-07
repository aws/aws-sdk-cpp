/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityIR
{
namespace Model
{
  enum class PendingAction
  {
    NOT_SET,
    Customer,
    None
  };

namespace PendingActionMapper
{
AWS_SECURITYIR_API PendingAction GetPendingActionForName(const Aws::String& name);

AWS_SECURITYIR_API Aws::String GetNameForPendingAction(PendingAction value);
} // namespace PendingActionMapper
} // namespace Model
} // namespace SecurityIR
} // namespace Aws
