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
  enum class OperationMode
  {
    NOT_SET,
    PRIMARY,
    LOGREPLAY,
    DELTA_DATASHIPPING,
    LOGREPLAY_READACCESS,
    NONE
  };

namespace OperationModeMapper
{
AWS_SSMSAP_API OperationMode GetOperationModeForName(const Aws::String& name);

AWS_SSMSAP_API Aws::String GetNameForOperationMode(OperationMode value);
} // namespace OperationModeMapper
} // namespace Model
} // namespace SsmSap
} // namespace Aws
