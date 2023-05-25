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
  enum class ReferenceStatus
  {
    NOT_SET,
    ACTIVE,
    DELETING,
    DELETED
  };

namespace ReferenceStatusMapper
{
AWS_OMICS_API ReferenceStatus GetReferenceStatusForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForReferenceStatus(ReferenceStatus value);
} // namespace ReferenceStatusMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
