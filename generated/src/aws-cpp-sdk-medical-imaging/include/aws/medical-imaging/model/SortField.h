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
  enum class SortField
  {
    NOT_SET,
    updatedAt,
    createdAt,
    DICOMStudyDateAndTime
  };

namespace SortFieldMapper
{
AWS_MEDICALIMAGING_API SortField GetSortFieldForName(const Aws::String& name);

AWS_MEDICALIMAGING_API Aws::String GetNameForSortField(SortField value);
} // namespace SortFieldMapper
} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
