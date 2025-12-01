/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
enum class PrimarySolutionType {
  NOT_SET,
  SOFTWARE_PRODUCTS,
  CONSULTING_SERVICES,
  PROFESSIONAL_SERVICES,
  MANAGED_SERVICES,
  HARDWARE_PRODUCTS,
  COMMUNICATION_SERVICES,
  VALUE_ADDED_RESALE_AWS_SERVICES,
  TRAINING_SERVICES
};

namespace PrimarySolutionTypeMapper {
AWS_PARTNERCENTRALACCOUNT_API PrimarySolutionType GetPrimarySolutionTypeForName(const Aws::String& name);

AWS_PARTNERCENTRALACCOUNT_API Aws::String GetNameForPrimarySolutionType(PrimarySolutionType value);
}  // namespace PrimarySolutionTypeMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
