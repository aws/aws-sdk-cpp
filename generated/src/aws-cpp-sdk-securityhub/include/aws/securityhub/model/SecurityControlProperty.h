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
  enum class SecurityControlProperty
  {
    NOT_SET,
    Parameters
  };

namespace SecurityControlPropertyMapper
{
AWS_SECURITYHUB_API SecurityControlProperty GetSecurityControlPropertyForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForSecurityControlProperty(SecurityControlProperty value);
} // namespace SecurityControlPropertyMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
