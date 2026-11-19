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
enum class TemplateFieldSection { NOT_SET, HEADER, BODY, FOOTER };

namespace TemplateFieldSectionMapper {
AWS_PARTNERCENTRALMARKETING_API TemplateFieldSection GetTemplateFieldSectionForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForTemplateFieldSection(TemplateFieldSection value);
}  // namespace TemplateFieldSectionMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
