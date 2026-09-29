/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/SESV2_EXPORTS.h>

namespace Aws {
namespace SESV2 {
namespace Model {
enum class ListTenantsFilterKey { NOT_SET, TENANT_NAME_CONTAINS, SENDING_STATUS };

namespace ListTenantsFilterKeyMapper {
AWS_SESV2_API ListTenantsFilterKey GetListTenantsFilterKeyForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForListTenantsFilterKey(ListTenantsFilterKey value);
}  // namespace ListTenantsFilterKeyMapper
}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
