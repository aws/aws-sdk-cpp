﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
enum class NationalSecurity { NOT_SET, Yes, No };

namespace NationalSecurityMapper {
AWS_PARTNERCENTRALSELLING_API NationalSecurity GetNationalSecurityForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForNationalSecurity(NationalSecurity value);
}  // namespace NationalSecurityMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
