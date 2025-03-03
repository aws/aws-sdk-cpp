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
  enum class VideoExtractionType
  {
    NOT_SET,
    TRANSCRIPT,
    SUMMARY
  };

namespace VideoExtractionTypeMapper
{
AWS_QBUSINESS_API VideoExtractionType GetVideoExtractionTypeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForVideoExtractionType(VideoExtractionType value);
} // namespace VideoExtractionTypeMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
