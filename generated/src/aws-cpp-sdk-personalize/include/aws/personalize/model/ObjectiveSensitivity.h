/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Personalize
{
namespace Model
{
  enum class ObjectiveSensitivity
  {
    NOT_SET,
    LOW,
    MEDIUM,
    HIGH,
    OFF
  };

namespace ObjectiveSensitivityMapper
{
AWS_PERSONALIZE_API ObjectiveSensitivity GetObjectiveSensitivityForName(const Aws::String& name);

AWS_PERSONALIZE_API Aws::String GetNameForObjectiveSensitivity(ObjectiveSensitivity value);
} // namespace ObjectiveSensitivityMapper
} // namespace Model
} // namespace Personalize
} // namespace Aws
