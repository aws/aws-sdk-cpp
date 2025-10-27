/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/SWF_EXPORTS.h>

namespace Aws {
namespace SWF {
namespace Model {
enum class RegistrationStatus { NOT_SET, REGISTERED, DEPRECATED };

namespace RegistrationStatusMapper {
AWS_SWF_API RegistrationStatus GetRegistrationStatusForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForRegistrationStatus(RegistrationStatus value);
}  // namespace RegistrationStatusMapper
}  // namespace Model
}  // namespace SWF
}  // namespace Aws
