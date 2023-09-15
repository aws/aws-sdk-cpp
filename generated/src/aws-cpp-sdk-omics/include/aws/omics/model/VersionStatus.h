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
  enum class VersionStatus
  {
    NOT_SET,
    CREATING,
    UPDATING,
    DELETING,
    ACTIVE,
    FAILED
  };

namespace VersionStatusMapper
{
AWS_OMICS_API VersionStatus GetVersionStatusForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForVersionStatus(VersionStatus value);
} // namespace VersionStatusMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
