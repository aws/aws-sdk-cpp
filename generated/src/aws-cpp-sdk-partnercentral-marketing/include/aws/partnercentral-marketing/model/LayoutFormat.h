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
enum class LayoutFormat { NOT_SET, HTML, PDF, IMAGE };

namespace LayoutFormatMapper {
AWS_PARTNERCENTRALMARKETING_API LayoutFormat GetLayoutFormatForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForLayoutFormat(LayoutFormat value);
}  // namespace LayoutFormatMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
