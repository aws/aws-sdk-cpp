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
  enum class CreationType
  {
    NOT_SET,
    IMPORT,
    UPLOAD
  };

namespace CreationTypeMapper
{
AWS_OMICS_API CreationType GetCreationTypeForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForCreationType(CreationType value);
} // namespace CreationTypeMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
