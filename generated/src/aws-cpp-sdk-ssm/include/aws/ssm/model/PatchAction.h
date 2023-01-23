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
  enum class PatchAction
  {
    NOT_SET,
    ALLOW_AS_DEPENDENCY,
    BLOCK
  };

namespace PatchActionMapper
{
AWS_SSM_API PatchAction GetPatchActionForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForPatchAction(PatchAction value);
} // namespace PatchActionMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
