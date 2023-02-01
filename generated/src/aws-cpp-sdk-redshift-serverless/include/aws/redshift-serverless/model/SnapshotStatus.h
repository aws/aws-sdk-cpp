/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{
  enum class SnapshotStatus
  {
    NOT_SET,
    AVAILABLE,
    CREATING,
    DELETED,
    CANCELLED,
    FAILED,
    COPYING
  };

namespace SnapshotStatusMapper
{
AWS_REDSHIFTSERVERLESS_API SnapshotStatus GetSnapshotStatusForName(const Aws::String& name);

AWS_REDSHIFTSERVERLESS_API Aws::String GetNameForSnapshotStatus(SnapshotStatus value);
} // namespace SnapshotStatusMapper
} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
