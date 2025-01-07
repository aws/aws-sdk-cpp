/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class QAResultType
  {
    NOT_SET,
    DASHBOARD_VISUAL,
    GENERATED_ANSWER,
    NO_ANSWER
  };

namespace QAResultTypeMapper
{
AWS_QUICKSIGHT_API QAResultType GetQAResultTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForQAResultType(QAResultType value);
} // namespace QAResultTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
