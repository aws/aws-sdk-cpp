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
enum class MessageUsefulness { NOT_SET, USEFUL, NOT_USEFUL };

namespace MessageUsefulnessMapper {
AWS_QBUSINESS_API MessageUsefulness GetMessageUsefulnessForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForMessageUsefulness(MessageUsefulness value);
}  // namespace MessageUsefulnessMapper
}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws
