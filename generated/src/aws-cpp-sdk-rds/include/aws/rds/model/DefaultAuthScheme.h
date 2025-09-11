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
  enum class DefaultAuthScheme
  {
    NOT_SET,
    IAM_AUTH,
    NONE
  };

namespace DefaultAuthSchemeMapper
{
AWS_RDS_API DefaultAuthScheme GetDefaultAuthSchemeForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForDefaultAuthScheme(DefaultAuthScheme value);
} // namespace DefaultAuthSchemeMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
