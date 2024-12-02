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
  enum class ClosureCode
  {
    NOT_SET,
    Investigation_Completed,
    Not_Resolved,
    False_Positive,
    Duplicate
  };

namespace ClosureCodeMapper
{
AWS_SECURITYIR_API ClosureCode GetClosureCodeForName(const Aws::String& name);

AWS_SECURITYIR_API Aws::String GetNameForClosureCode(ClosureCode value);
} // namespace ClosureCodeMapper
} // namespace Model
} // namespace SecurityIR
} // namespace Aws
