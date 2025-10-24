﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

namespace Aws {
namespace mgn {
namespace Model {
enum class ActionCategory {
  NOT_SET,
  DISASTER_RECOVERY,
  OPERATING_SYSTEM,
  LICENSE_AND_SUBSCRIPTION,
  VALIDATION,
  OBSERVABILITY,
  REFACTORING,
  SECURITY,
  NETWORKING,
  CONFIGURATION,
  BACKUP,
  OTHER
};

namespace ActionCategoryMapper {
AWS_MGN_API ActionCategory GetActionCategoryForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForActionCategory(ActionCategory value);
}  // namespace ActionCategoryMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
