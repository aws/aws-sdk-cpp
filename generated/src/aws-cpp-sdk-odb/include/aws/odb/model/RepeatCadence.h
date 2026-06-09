/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>

namespace Aws {
namespace odb {
namespace Model {
enum class RepeatCadence { NOT_SET, ONE_TIME, WEEKLY, MONTHLY, YEARLY };

namespace RepeatCadenceMapper {
AWS_ODB_API RepeatCadence GetRepeatCadenceForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForRepeatCadence(RepeatCadence value);
}  // namespace RepeatCadenceMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
