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
  enum class OperationEventStatus
  {
    NOT_SET,
    IN_PROGRESS,
    COMPLETED,
    FAILED
  };

namespace OperationEventStatusMapper
{
AWS_SSMSAP_API OperationEventStatus GetOperationEventStatusForName(const Aws::String& name);

AWS_SSMSAP_API Aws::String GetNameForOperationEventStatus(OperationEventStatus value);
} // namespace OperationEventStatusMapper
} // namespace Model
} // namespace SsmSap
} // namespace Aws
