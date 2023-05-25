/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Panorama
{
namespace Model
{
  enum class NodeFromTemplateJobStatus
  {
    NOT_SET,
    PENDING,
    SUCCEEDED,
    FAILED
  };

namespace NodeFromTemplateJobStatusMapper
{
AWS_PANORAMA_API NodeFromTemplateJobStatus GetNodeFromTemplateJobStatusForName(const Aws::String& name);

AWS_PANORAMA_API Aws::String GetNameForNodeFromTemplateJobStatus(NodeFromTemplateJobStatus value);
} // namespace NodeFromTemplateJobStatusMapper
} // namespace Model
} // namespace Panorama
} // namespace Aws
