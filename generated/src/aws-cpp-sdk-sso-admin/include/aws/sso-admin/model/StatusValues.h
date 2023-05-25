/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{
  enum class StatusValues
  {
    NOT_SET,
    IN_PROGRESS,
    FAILED,
    SUCCEEDED
  };

namespace StatusValuesMapper
{
AWS_SSOADMIN_API StatusValues GetStatusValuesForName(const Aws::String& name);

AWS_SSOADMIN_API Aws::String GetNameForStatusValues(StatusValues value);
} // namespace StatusValuesMapper
} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
