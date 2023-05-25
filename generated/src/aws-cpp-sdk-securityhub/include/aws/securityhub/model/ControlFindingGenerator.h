/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class ControlFindingGenerator
  {
    NOT_SET,
    STANDARD_CONTROL,
    SECURITY_CONTROL
  };

namespace ControlFindingGeneratorMapper
{
AWS_SECURITYHUB_API ControlFindingGenerator GetControlFindingGeneratorForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForControlFindingGenerator(ControlFindingGenerator value);
} // namespace ControlFindingGeneratorMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
