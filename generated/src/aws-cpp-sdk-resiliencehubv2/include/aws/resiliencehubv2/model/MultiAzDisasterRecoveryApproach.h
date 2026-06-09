/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
enum class MultiAzDisasterRecoveryApproach { NOT_SET, ACTIVE_ACTIVE, HOT_STANDBY, WARM_STANDBY, PILOT_LIGHT, BACKUP_AND_RESTORE };

namespace MultiAzDisasterRecoveryApproachMapper {
AWS_RESILIENCEHUBV2_API MultiAzDisasterRecoveryApproach GetMultiAzDisasterRecoveryApproachForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForMultiAzDisasterRecoveryApproach(MultiAzDisasterRecoveryApproach value);
}  // namespace MultiAzDisasterRecoveryApproachMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
