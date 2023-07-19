/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MedicalImaging
{
namespace Model
{
  enum class ImageSetWorkflowStatus
  {
    NOT_SET,
    CREATED,
    COPIED,
    COPYING,
    COPYING_WITH_READ_ONLY_ACCESS,
    COPY_FAILED,
    UPDATING,
    UPDATED,
    UPDATE_FAILED,
    DELETING,
    DELETED
  };

namespace ImageSetWorkflowStatusMapper
{
AWS_MEDICALIMAGING_API ImageSetWorkflowStatus GetImageSetWorkflowStatusForName(const Aws::String& name);

AWS_MEDICALIMAGING_API Aws::String GetNameForImageSetWorkflowStatus(ImageSetWorkflowStatus value);
} // namespace ImageSetWorkflowStatusMapper
} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
