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
  enum class Protocol
  {
    NOT_SET,
    PCOIP,
    WSP
  };

namespace ProtocolMapper
{
AWS_WORKSPACES_API Protocol GetProtocolForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForProtocol(Protocol value);
} // namespace ProtocolMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
