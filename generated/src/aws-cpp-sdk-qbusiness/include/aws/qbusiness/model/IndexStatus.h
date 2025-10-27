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
enum class IndexStatus { NOT_SET, CREATING, ACTIVE, DELETING, FAILED, UPDATING };

namespace IndexStatusMapper {
AWS_QBUSINESS_API IndexStatus GetIndexStatusForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForIndexStatus(IndexStatus value);
}  // namespace IndexStatusMapper
}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws
