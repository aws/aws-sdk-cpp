/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class VolumeAttachmentStatus
  {
    NOT_SET,
    attaching,
    attached,
    detaching,
    detached,
    busy
  };

namespace VolumeAttachmentStatusMapper
{
AWS_SAGEMAKER_API VolumeAttachmentStatus GetVolumeAttachmentStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForVolumeAttachmentStatus(VolumeAttachmentStatus value);
} // namespace VolumeAttachmentStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
