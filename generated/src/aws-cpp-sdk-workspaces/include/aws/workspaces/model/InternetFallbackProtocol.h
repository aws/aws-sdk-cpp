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
  enum class InternetFallbackProtocol
  {
    NOT_SET,
    PCOIP
  };

namespace InternetFallbackProtocolMapper
{
AWS_WORKSPACES_API InternetFallbackProtocol GetInternetFallbackProtocolForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForInternetFallbackProtocol(InternetFallbackProtocol value);
} // namespace InternetFallbackProtocolMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
