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
  enum class SourceReferenceType
  {
    NOT_SET,
    BRANCH,
    TAG,
    COMMIT
  };

namespace SourceReferenceTypeMapper
{
AWS_OMICS_API SourceReferenceType GetSourceReferenceTypeForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForSourceReferenceType(SourceReferenceType value);
} // namespace SourceReferenceTypeMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
