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
  enum class QuickResponseFilterOperator
  {
    NOT_SET,
    EQUALS,
    PREFIX
  };

namespace QuickResponseFilterOperatorMapper
{
AWS_QCONNECT_API QuickResponseFilterOperator GetQuickResponseFilterOperatorForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForQuickResponseFilterOperator(QuickResponseFilterOperator value);
} // namespace QuickResponseFilterOperatorMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
