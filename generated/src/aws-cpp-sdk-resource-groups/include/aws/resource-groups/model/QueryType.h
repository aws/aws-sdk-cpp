/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>

namespace Aws {
namespace ResourceGroups {
namespace Model {
enum class QueryType { NOT_SET, TAG_FILTERS_1_0, CLOUDFORMATION_STACK_1_0 };

namespace QueryTypeMapper {
AWS_RESOURCEGROUPS_API QueryType GetQueryTypeForName(const Aws::String& name);

AWS_RESOURCEGROUPS_API Aws::String GetNameForQueryType(QueryType value);
}  // namespace QueryTypeMapper
}  // namespace Model
}  // namespace ResourceGroups
}  // namespace Aws
