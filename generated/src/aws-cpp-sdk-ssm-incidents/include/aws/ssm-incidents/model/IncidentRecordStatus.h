/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>

namespace Aws {
namespace SSMIncidents {
namespace Model {
enum class IncidentRecordStatus { NOT_SET, OPEN, RESOLVED };

namespace IncidentRecordStatusMapper {
AWS_SSMINCIDENTS_API IncidentRecordStatus GetIncidentRecordStatusForName(const Aws::String& name);

AWS_SSMINCIDENTS_API Aws::String GetNameForIncidentRecordStatus(IncidentRecordStatus value);
}  // namespace IncidentRecordStatusMapper
}  // namespace Model
}  // namespace SSMIncidents
}  // namespace Aws
