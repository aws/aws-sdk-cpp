/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>

namespace Aws {
namespace NovaAct {
namespace Model {
enum class ModelStatus { NOT_SET, ACTIVE, LEGACY, DEPRECATED, PREVIEW };

namespace ModelStatusMapper {
AWS_NOVAACT_API ModelStatus GetModelStatusForName(const Aws::String& name);

AWS_NOVAACT_API Aws::String GetNameForModelStatus(ModelStatus value);
}  // namespace ModelStatusMapper
}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
