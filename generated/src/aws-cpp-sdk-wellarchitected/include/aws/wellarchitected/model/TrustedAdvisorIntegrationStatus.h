/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

namespace Aws {
namespace WellArchitected {
namespace Model {
enum class TrustedAdvisorIntegrationStatus { NOT_SET, ENABLED, DISABLED };

namespace TrustedAdvisorIntegrationStatusMapper {
AWS_WELLARCHITECTED_API TrustedAdvisorIntegrationStatus GetTrustedAdvisorIntegrationStatusForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForTrustedAdvisorIntegrationStatus(TrustedAdvisorIntegrationStatus value);
}  // namespace TrustedAdvisorIntegrationStatusMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
