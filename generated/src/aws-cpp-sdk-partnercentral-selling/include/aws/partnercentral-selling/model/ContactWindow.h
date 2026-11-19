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
enum class ContactWindow { NOT_SET, MORNING, AFTERNOON, EVENING };

namespace ContactWindowMapper {
AWS_PARTNERCENTRALSELLING_API ContactWindow GetContactWindowForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForContactWindow(ContactWindow value);
}  // namespace ContactWindowMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
