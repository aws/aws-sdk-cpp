/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Omics
{
namespace Model
{
  enum class AnnotationType
  {
    NOT_SET,
    GENERIC,
    CHR_POS,
    CHR_POS_REF_ALT,
    CHR_START_END_ONE_BASE,
    CHR_START_END_REF_ALT_ONE_BASE,
    CHR_START_END_ZERO_BASE,
    CHR_START_END_REF_ALT_ZERO_BASE
  };

namespace AnnotationTypeMapper
{
AWS_OMICS_API AnnotationType GetAnnotationTypeForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForAnnotationType(AnnotationType value);
} // namespace AnnotationTypeMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
