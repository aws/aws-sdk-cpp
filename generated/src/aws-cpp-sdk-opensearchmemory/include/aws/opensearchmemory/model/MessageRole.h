/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>

namespace Aws {
namespace OpenSearchMemory {
namespace Model {
enum class MessageRole { NOT_SET, USER, ASSISTANT, SYSTEM };

namespace MessageRoleMapper {
AWS_OPENSEARCHMEMORY_API MessageRole GetMessageRoleForName(const Aws::String& name);

AWS_OPENSEARCHMEMORY_API Aws::String GetNameForMessageRole(MessageRole value);
}  // namespace MessageRoleMapper
}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
