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
  enum class TargetType
  {
    NOT_SET,
    RECOMMENDATION,
    RESULT
  };

namespace TargetTypeMapper
{
AWS_QCONNECT_API TargetType GetTargetTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForTargetType(TargetType value);
} // namespace TargetTypeMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
