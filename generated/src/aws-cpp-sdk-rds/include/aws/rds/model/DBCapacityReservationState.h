/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/RDS_EXPORTS.h>

namespace Aws {
namespace RDS {
namespace Model {
enum class DBCapacityReservationState { NOT_SET, active, expired, cancelled, pending, failed, assessing, scheduled, delayed, unsupported };

namespace DBCapacityReservationStateMapper {
AWS_RDS_API DBCapacityReservationState GetDBCapacityReservationStateForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForDBCapacityReservationState(DBCapacityReservationState value);
}  // namespace DBCapacityReservationStateMapper
}  // namespace Model
}  // namespace RDS
}  // namespace Aws
