/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Control
{
namespace Model
{
  enum class ExistingObjectReplicationStatus
  {
    NOT_SET,
    Enabled,
    Disabled
  };

namespace ExistingObjectReplicationStatusMapper
{
AWS_S3CONTROL_API ExistingObjectReplicationStatus GetExistingObjectReplicationStatusForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForExistingObjectReplicationStatus(ExistingObjectReplicationStatus value);
} // namespace ExistingObjectReplicationStatusMapper
} // namespace Model
} // namespace S3Control
} // namespace Aws
