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
  enum class VisibilityStatus
  {
    NOT_SET,
    SAVED,
    PUBLISHED
  };

namespace VisibilityStatusMapper
{
AWS_QCONNECT_API VisibilityStatus GetVisibilityStatusForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForVisibilityStatus(VisibilityStatus value);
} // namespace VisibilityStatusMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
