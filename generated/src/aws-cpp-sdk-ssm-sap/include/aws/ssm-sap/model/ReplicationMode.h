/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SsmSap
{
namespace Model
{
  enum class ReplicationMode
  {
    NOT_SET,
    PRIMARY,
    NONE,
    SYNC,
    SYNCMEM,
    ASYNC
  };

namespace ReplicationModeMapper
{
AWS_SSMSAP_API ReplicationMode GetReplicationModeForName(const Aws::String& name);

AWS_SSMSAP_API Aws::String GetNameForReplicationMode(ReplicationMode value);
} // namespace ReplicationModeMapper
} // namespace Model
} // namespace SsmSap
} // namespace Aws
