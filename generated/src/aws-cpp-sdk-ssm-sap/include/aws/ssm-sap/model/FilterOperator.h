/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SsmSap
{
namespace Model
{
  enum class FilterOperator
  {
    NOT_SET,
    Equals,
    GreaterThanOrEquals,
    LessThanOrEquals
  };

namespace FilterOperatorMapper
{
AWS_SSMSAP_API FilterOperator GetFilterOperatorForName(const Aws::String& name);

AWS_SSMSAP_API Aws::String GetNameForFilterOperator(FilterOperator value);
} // namespace FilterOperatorMapper
} // namespace Model
} // namespace SsmSap
} // namespace Aws
