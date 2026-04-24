/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/Polly_EXPORTS.h>

namespace Aws {
namespace Polly {
namespace Model {
enum class ServiceCode { NOT_SET, polly };

namespace ServiceCodeMapper {
AWS_POLLY_API ServiceCode GetServiceCodeForName(const Aws::String& name);

AWS_POLLY_API Aws::String GetNameForServiceCode(ServiceCode value);
}  // namespace ServiceCodeMapper
}  // namespace Model
}  // namespace Polly
}  // namespace Aws
