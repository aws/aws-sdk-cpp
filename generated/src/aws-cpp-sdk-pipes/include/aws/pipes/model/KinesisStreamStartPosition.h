/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pipes
{
namespace Model
{
  enum class KinesisStreamStartPosition
  {
    NOT_SET,
    TRIM_HORIZON,
    LATEST,
    AT_TIMESTAMP
  };

namespace KinesisStreamStartPositionMapper
{
AWS_PIPES_API KinesisStreamStartPosition GetKinesisStreamStartPositionForName(const Aws::String& name);

AWS_PIPES_API Aws::String GetNameForKinesisStreamStartPosition(KinesisStreamStartPosition value);
} // namespace KinesisStreamStartPositionMapper
} // namespace Model
} // namespace Pipes
} // namespace Aws
