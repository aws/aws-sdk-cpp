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
enum class DbWorkload { NOT_SET, OLTP, AJD, APEX, LH };

namespace DbWorkloadMapper {
AWS_ODB_API DbWorkload GetDbWorkloadForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForDbWorkload(DbWorkload value);
}  // namespace DbWorkloadMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
