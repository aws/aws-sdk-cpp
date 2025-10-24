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
enum class Status { NOT_SET, CREATE_IN_PROGRESS, CREATE_FAILED, ACTIVE, DELETE_IN_PROGRESS, DELETE_FAILED, DELETED };

namespace StatusMapper {
AWS_QCONNECT_API Status GetStatusForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForStatus(Status value);
}  // namespace StatusMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
