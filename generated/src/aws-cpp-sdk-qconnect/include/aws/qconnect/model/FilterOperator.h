/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QConnect
{
namespace Model
{
  enum class FilterOperator
  {
    NOT_SET,
    EQUALS
  };

namespace FilterOperatorMapper
{
AWS_QCONNECT_API FilterOperator GetFilterOperatorForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForFilterOperator(FilterOperator value);
} // namespace FilterOperatorMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
