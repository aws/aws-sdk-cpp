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
  enum class OpsItemEventFilterKey
  {
    NOT_SET,
    OpsItemId
  };

namespace OpsItemEventFilterKeyMapper
{
AWS_SSM_API OpsItemEventFilterKey GetOpsItemEventFilterKeyForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForOpsItemEventFilterKey(OpsItemEventFilterKey value);
} // namespace OpsItemEventFilterKeyMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
