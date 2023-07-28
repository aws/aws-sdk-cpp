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
  enum class ImageSetState
  {
    NOT_SET,
    ACTIVE,
    LOCKED,
    DELETED
  };

namespace ImageSetStateMapper
{
AWS_MEDICALIMAGING_API ImageSetState GetImageSetStateForName(const Aws::String& name);

AWS_MEDICALIMAGING_API Aws::String GetNameForImageSetState(ImageSetState value);
} // namespace ImageSetStateMapper
} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
