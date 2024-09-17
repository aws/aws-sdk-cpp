/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{
  enum class ChatMode
  {
    NOT_SET,
    RETRIEVAL_MODE,
    CREATOR_MODE,
    PLUGIN_MODE
  };

namespace ChatModeMapper
{
AWS_QBUSINESS_API ChatMode GetChatModeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForChatMode(ChatMode value);
} // namespace ChatModeMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
