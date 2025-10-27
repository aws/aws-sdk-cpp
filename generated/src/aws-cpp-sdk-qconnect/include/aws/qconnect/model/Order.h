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
enum class Order { NOT_SET, ASC, DESC };

namespace OrderMapper {
AWS_QCONNECT_API Order GetOrderForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForOrder(Order value);
}  // namespace OrderMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
