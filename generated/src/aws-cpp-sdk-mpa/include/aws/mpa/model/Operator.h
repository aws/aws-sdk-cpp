/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MPA
{
namespace Model
{
  enum class Operator
  {
    NOT_SET,
    EQ,
    NE,
    GT,
    LT,
    GTE,
    LTE,
    CONTAINS,
    NOT_CONTAINS,
    BETWEEN
  };

namespace OperatorMapper
{
AWS_MPA_API Operator GetOperatorForName(const Aws::String& name);

AWS_MPA_API Aws::String GetNameForOperator(Operator value);
} // namespace OperatorMapper
} // namespace Model
} // namespace MPA
} // namespace Aws
