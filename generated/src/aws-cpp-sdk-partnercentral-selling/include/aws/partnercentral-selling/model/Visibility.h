/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
enum class Visibility { NOT_SET, Full, Limited };

namespace VisibilityMapper {
AWS_PARTNERCENTRALSELLING_API Visibility GetVisibilityForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForVisibility(Visibility value);
}  // namespace VisibilityMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
