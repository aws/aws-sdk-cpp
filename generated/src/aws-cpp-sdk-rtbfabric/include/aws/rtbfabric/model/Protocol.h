/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RTBFabric
{
namespace Model
{
  enum class Protocol
  {
    NOT_SET,
    HTTP,
    HTTPS
  };

namespace ProtocolMapper
{
AWS_RTBFABRIC_API Protocol GetProtocolForName(const Aws::String& name);

AWS_RTBFABRIC_API Aws::String GetNameForProtocol(Protocol value);
} // namespace ProtocolMapper
} // namespace Model
} // namespace RTBFabric
} // namespace Aws
