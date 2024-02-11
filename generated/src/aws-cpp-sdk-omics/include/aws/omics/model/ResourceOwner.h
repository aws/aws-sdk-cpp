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
  enum class ResourceOwner
  {
    NOT_SET,
    SELF,
    OTHER
  };

namespace ResourceOwnerMapper
{
AWS_OMICS_API ResourceOwner GetResourceOwnerForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForResourceOwner(ResourceOwner value);
} // namespace ResourceOwnerMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
