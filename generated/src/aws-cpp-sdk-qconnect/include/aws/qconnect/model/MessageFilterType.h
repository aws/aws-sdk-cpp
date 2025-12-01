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
enum class MessageFilterType { NOT_SET, ALL, TEXT_ONLY };

namespace MessageFilterTypeMapper {
AWS_QCONNECT_API MessageFilterType GetMessageFilterTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForMessageFilterType(MessageFilterType value);
}  // namespace MessageFilterTypeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
