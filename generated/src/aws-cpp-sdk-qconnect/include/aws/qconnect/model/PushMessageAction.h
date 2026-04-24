/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

namespace Aws {
namespace QConnect {
namespace Model {
enum class PushMessageAction { NOT_SET, OPEN_APP, DEEP_LINK, URL };

namespace PushMessageActionMapper {
AWS_QCONNECT_API PushMessageAction GetPushMessageActionForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForPushMessageAction(PushMessageAction value);
}  // namespace PushMessageActionMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
