/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{
  enum class NodeAssociationStatus
  {
    NOT_SET,
    SUCCESS,
    FAILED,
    IN_PROGRESS
  };

namespace NodeAssociationStatusMapper
{
AWS_OPSWORKSCM_API NodeAssociationStatus GetNodeAssociationStatusForName(const Aws::String& name);

AWS_OPSWORKSCM_API Aws::String GetNameForNodeAssociationStatus(NodeAssociationStatus value);
} // namespace NodeAssociationStatusMapper
} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
