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
  enum class ConversationStatusReason
  {
    NOT_SET,
    SUCCESS,
    FAILED,
    REJECTED
  };

namespace ConversationStatusReasonMapper
{
AWS_QCONNECT_API ConversationStatusReason GetConversationStatusReasonForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForConversationStatusReason(ConversationStatusReason value);
} // namespace ConversationStatusReasonMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
