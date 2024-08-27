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
  enum class ReferenceCreationType
  {
    NOT_SET,
    IMPORT
  };

namespace ReferenceCreationTypeMapper
{
AWS_OMICS_API ReferenceCreationType GetReferenceCreationTypeForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForReferenceCreationType(ReferenceCreationType value);
} // namespace ReferenceCreationTypeMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
