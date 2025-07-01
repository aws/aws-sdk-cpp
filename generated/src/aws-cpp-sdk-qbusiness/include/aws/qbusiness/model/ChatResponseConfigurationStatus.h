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
  enum class ChatResponseConfigurationStatus
  {
    NOT_SET,
    CREATING,
    UPDATING,
    FAILED,
    ACTIVE
  };

namespace ChatResponseConfigurationStatusMapper
{
AWS_QBUSINESS_API ChatResponseConfigurationStatus GetChatResponseConfigurationStatusForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForChatResponseConfigurationStatus(ChatResponseConfigurationStatus value);
} // namespace ChatResponseConfigurationStatusMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
