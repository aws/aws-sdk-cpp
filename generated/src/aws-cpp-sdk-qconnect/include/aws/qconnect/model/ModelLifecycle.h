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
enum class ModelLifecycle { NOT_SET, ACTIVE, LEGACY };

namespace ModelLifecycleMapper {
AWS_QCONNECT_API ModelLifecycle GetModelLifecycleForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForModelLifecycle(ModelLifecycle value);
}  // namespace ModelLifecycleMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
