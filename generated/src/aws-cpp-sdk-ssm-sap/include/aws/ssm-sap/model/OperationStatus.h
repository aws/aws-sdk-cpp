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
  enum class OperationStatus
  {
    NOT_SET,
    INPROGRESS,
    SUCCESS,
    ERROR_
  };

namespace OperationStatusMapper
{
AWS_SSMSAP_API OperationStatus GetOperationStatusForName(const Aws::String& name);

AWS_SSMSAP_API Aws::String GetNameForOperationStatus(OperationStatus value);
} // namespace OperationStatusMapper
} // namespace Model
} // namespace SsmSap
} // namespace Aws
