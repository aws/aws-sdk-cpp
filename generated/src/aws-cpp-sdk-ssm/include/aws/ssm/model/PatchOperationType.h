/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class PatchOperationType
  {
    NOT_SET,
    Scan,
    Install
  };

namespace PatchOperationTypeMapper
{
AWS_SSM_API PatchOperationType GetPatchOperationTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForPatchOperationType(PatchOperationType value);
} // namespace PatchOperationTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
