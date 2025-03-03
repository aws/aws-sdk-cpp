/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{
  enum class VideoExtractionStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace VideoExtractionStatusMapper
{
AWS_QBUSINESS_API VideoExtractionStatus GetVideoExtractionStatusForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForVideoExtractionStatus(VideoExtractionStatus value);
} // namespace VideoExtractionStatusMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
