/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDS
{
namespace Model
{
  enum class LifecycleSupportName
  {
    NOT_SET,
    open_source_rds_standard_support,
    open_source_rds_extended_support
  };

namespace LifecycleSupportNameMapper
{
AWS_RDS_API LifecycleSupportName GetLifecycleSupportNameForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForLifecycleSupportName(LifecycleSupportName value);
} // namespace LifecycleSupportNameMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
