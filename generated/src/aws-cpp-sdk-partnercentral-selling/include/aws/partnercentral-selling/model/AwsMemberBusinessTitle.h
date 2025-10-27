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
enum class AwsMemberBusinessTitle { NOT_SET, AWSSalesRep, AWSAccountOwner, WWPSPDM, PDM, PSM, ISVSM };

namespace AwsMemberBusinessTitleMapper {
AWS_PARTNERCENTRALSELLING_API AwsMemberBusinessTitle GetAwsMemberBusinessTitleForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForAwsMemberBusinessTitle(AwsMemberBusinessTitle value);
}  // namespace AwsMemberBusinessTitleMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
