/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{
  enum class EndpointEncryptionMode
  {
    NOT_SET,
    STANDARD_TLS,
    FIPS_VALIDATED
  };

namespace EndpointEncryptionModeMapper
{
AWS_WORKSPACES_API EndpointEncryptionMode GetEndpointEncryptionModeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForEndpointEncryptionMode(EndpointEncryptionMode value);
} // namespace EndpointEncryptionModeMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
