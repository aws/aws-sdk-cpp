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
enum class StandbyAllowlistedIpsSource { NOT_SET, PRIMARY, SEPARATE, NOT_APPLICABLE };

namespace StandbyAllowlistedIpsSourceMapper {
AWS_ODB_API StandbyAllowlistedIpsSource GetStandbyAllowlistedIpsSourceForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForStandbyAllowlistedIpsSource(StandbyAllowlistedIpsSource value);
}  // namespace StandbyAllowlistedIpsSourceMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
