/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pcs/PCS_EXPORTS.h>

namespace Aws {
namespace PCS {
namespace Model {
enum class OnError { NOT_SET, TERMINATE, STOP_SEQUENCE, CONTINUE };

namespace OnErrorMapper {
AWS_PCS_API OnError GetOnErrorForName(const Aws::String& name);

AWS_PCS_API Aws::String GetNameForOnError(OnError value);
}  // namespace OnErrorMapper
}  // namespace Model
}  // namespace PCS
}  // namespace Aws
