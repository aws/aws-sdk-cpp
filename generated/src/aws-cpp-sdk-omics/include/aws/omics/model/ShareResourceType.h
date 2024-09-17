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
  enum class ShareResourceType
  {
    NOT_SET,
    VARIANT_STORE,
    ANNOTATION_STORE,
    WORKFLOW
  };

namespace ShareResourceTypeMapper
{
AWS_OMICS_API ShareResourceType GetShareResourceTypeForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForShareResourceType(ShareResourceType value);
} // namespace ShareResourceTypeMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
