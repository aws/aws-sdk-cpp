/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class PipelineId
  {
    NOT_SET,
    PIPELINE_0,
    PIPELINE_1
  };

namespace PipelineIdMapper
{
AWS_MEDIALIVE_API PipelineId GetPipelineIdForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForPipelineId(PipelineId value);
} // namespace PipelineIdMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
