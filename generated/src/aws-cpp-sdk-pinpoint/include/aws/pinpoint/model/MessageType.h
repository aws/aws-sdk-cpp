/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{
  enum class MessageType
  {
    NOT_SET,
    TRANSACTIONAL,
    PROMOTIONAL
  };

namespace MessageTypeMapper
{
AWS_PINPOINT_API MessageType GetMessageTypeForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameForMessageType(MessageType value);
} // namespace MessageTypeMapper
} // namespace Model
} // namespace Pinpoint
} // namespace Aws
