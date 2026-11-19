/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
enum class LayoutPageType { NOT_SET, FORM, CONFIRMATION };

namespace LayoutPageTypeMapper {
AWS_PARTNERCENTRALMARKETING_API LayoutPageType GetLayoutPageTypeForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForLayoutPageType(LayoutPageType value);
}  // namespace LayoutPageTypeMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
