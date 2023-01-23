/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MTurk
{
namespace Model
{
  enum class Comparator
  {
    NOT_SET,
    LessThan,
    LessThanOrEqualTo,
    GreaterThan,
    GreaterThanOrEqualTo,
    EqualTo,
    NotEqualTo,
    Exists,
    DoesNotExist,
    In,
    NotIn
  };

namespace ComparatorMapper
{
AWS_MTURK_API Comparator GetComparatorForName(const Aws::String& name);

AWS_MTURK_API Aws::String GetNameForComparator(Comparator value);
} // namespace ComparatorMapper
} // namespace Model
} // namespace MTurk
} // namespace Aws
