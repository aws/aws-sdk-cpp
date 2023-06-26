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
  enum class CommandFilterKey
  {
    NOT_SET,
    InvokedAfter,
    InvokedBefore,
    Status,
    ExecutionStage,
    DocumentName
  };

namespace CommandFilterKeyMapper
{
AWS_SSM_API CommandFilterKey GetCommandFilterKeyForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForCommandFilterKey(CommandFilterKey value);
} // namespace CommandFilterKeyMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
