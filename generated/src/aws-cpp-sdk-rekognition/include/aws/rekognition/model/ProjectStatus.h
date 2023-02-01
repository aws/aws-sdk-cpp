/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Rekognition
{
namespace Model
{
  enum class ProjectStatus
  {
    NOT_SET,
    CREATING,
    CREATED,
    DELETING
  };

namespace ProjectStatusMapper
{
AWS_REKOGNITION_API ProjectStatus GetProjectStatusForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForProjectStatus(ProjectStatus value);
} // namespace ProjectStatusMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
