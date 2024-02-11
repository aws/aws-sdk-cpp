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
  enum class BackintMode
  {
    NOT_SET,
    AWSBackup
  };

namespace BackintModeMapper
{
AWS_SSMSAP_API BackintMode GetBackintModeForName(const Aws::String& name);

AWS_SSMSAP_API Aws::String GetNameForBackintMode(BackintMode value);
} // namespace BackintModeMapper
} // namespace Model
} // namespace SsmSap
} // namespace Aws
