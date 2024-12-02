/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QConnect
{
namespace Model
{
  enum class MessageType
  {
    NOT_SET,
    TEXT
  };

namespace MessageTypeMapper
{
AWS_QCONNECT_API MessageType GetMessageTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForMessageType(MessageType value);
} // namespace MessageTypeMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
