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
  enum class StandardsControlsUpdatable
  {
    NOT_SET,
    READY_FOR_UPDATES,
    NOT_READY_FOR_UPDATES
  };

namespace StandardsControlsUpdatableMapper
{
AWS_SECURITYHUB_API StandardsControlsUpdatable GetStandardsControlsUpdatableForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForStandardsControlsUpdatable(StandardsControlsUpdatable value);
} // namespace StandardsControlsUpdatableMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
