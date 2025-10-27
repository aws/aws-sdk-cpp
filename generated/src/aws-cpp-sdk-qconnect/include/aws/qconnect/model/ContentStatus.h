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
enum class ContentStatus { NOT_SET, CREATE_IN_PROGRESS, CREATE_FAILED, ACTIVE, DELETE_IN_PROGRESS, DELETE_FAILED, DELETED, UPDATE_FAILED };

namespace ContentStatusMapper {
AWS_QCONNECT_API ContentStatus GetContentStatusForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForContentStatus(ContentStatus value);
}  // namespace ContentStatusMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
