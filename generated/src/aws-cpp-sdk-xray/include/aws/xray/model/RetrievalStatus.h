/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace XRay
{
namespace Model
{
  enum class RetrievalStatus
  {
    NOT_SET,
    SCHEDULED,
    RUNNING,
    COMPLETE,
    FAILED,
    CANCELLED,
    TIMEOUT
  };

namespace RetrievalStatusMapper
{
AWS_XRAY_API RetrievalStatus GetRetrievalStatusForName(const Aws::String& name);

AWS_XRAY_API Aws::String GetNameForRetrievalStatus(RetrievalStatus value);
} // namespace RetrievalStatusMapper
} // namespace Model
} // namespace XRay
} // namespace Aws
