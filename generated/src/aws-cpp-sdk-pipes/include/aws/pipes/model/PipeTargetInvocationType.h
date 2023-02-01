/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pipes
{
namespace Model
{
  enum class PipeTargetInvocationType
  {
    NOT_SET,
    REQUEST_RESPONSE,
    FIRE_AND_FORGET
  };

namespace PipeTargetInvocationTypeMapper
{
AWS_PIPES_API PipeTargetInvocationType GetPipeTargetInvocationTypeForName(const Aws::String& name);

AWS_PIPES_API Aws::String GetNameForPipeTargetInvocationType(PipeTargetInvocationType value);
} // namespace PipeTargetInvocationTypeMapper
} // namespace Model
} // namespace Pipes
} // namespace Aws
