/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>

namespace Aws {
namespace ServiceCatalog {
namespace Model {
enum class ChangeAction { NOT_SET, ADD, MODIFY, REMOVE };

namespace ChangeActionMapper {
AWS_SERVICECATALOG_API ChangeAction GetChangeActionForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForChangeAction(ChangeAction value);
}  // namespace ChangeActionMapper
}  // namespace Model
}  // namespace ServiceCatalog
}  // namespace Aws
