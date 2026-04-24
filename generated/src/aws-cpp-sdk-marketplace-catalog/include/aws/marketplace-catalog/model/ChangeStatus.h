/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
enum class ChangeStatus { NOT_SET, PREPARING, APPLYING, SUCCEEDED, CANCELLED, FAILED };

namespace ChangeStatusMapper {
AWS_MARKETPLACECATALOG_API ChangeStatus GetChangeStatusForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForChangeStatus(ChangeStatus value);
}  // namespace ChangeStatusMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
