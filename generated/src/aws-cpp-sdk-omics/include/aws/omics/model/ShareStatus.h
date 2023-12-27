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
  enum class ShareStatus
  {
    NOT_SET,
    PENDING,
    ACTIVATING,
    ACTIVE,
    DELETING,
    DELETED,
    FAILED
  };

namespace ShareStatusMapper
{
AWS_OMICS_API ShareStatus GetShareStatusForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForShareStatus(ShareStatus value);
} // namespace ShareStatusMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
