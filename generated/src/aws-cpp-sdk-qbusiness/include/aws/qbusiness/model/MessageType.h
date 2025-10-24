/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>

namespace Aws {
namespace QBusiness {
namespace Model {
enum class MessageType { NOT_SET, USER, SYSTEM };

namespace MessageTypeMapper {
AWS_QBUSINESS_API MessageType GetMessageTypeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForMessageType(MessageType value);
}  // namespace MessageTypeMapper
}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws
