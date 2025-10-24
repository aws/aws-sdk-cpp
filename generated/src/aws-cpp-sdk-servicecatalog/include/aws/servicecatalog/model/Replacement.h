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
enum class Replacement { NOT_SET, TRUE, FALSE, CONDITIONAL };

namespace ReplacementMapper {
AWS_SERVICECATALOG_API Replacement GetReplacementForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForReplacement(Replacement value);
}  // namespace ReplacementMapper
}  // namespace Model
}  // namespace ServiceCatalog
}  // namespace Aws
