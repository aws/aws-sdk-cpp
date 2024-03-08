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
  enum class FilterField
  {
    NOT_SET,
    NAME
  };

namespace FilterFieldMapper
{
AWS_QCONNECT_API FilterField GetFilterFieldForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForFilterField(FilterField value);
} // namespace FilterFieldMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
