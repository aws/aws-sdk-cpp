/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
enum class RecordFormat { NOT_SET, STRING, JSON };

namespace RecordFormatMapper {
AWS_OBSERVABILITYADMIN_API RecordFormat GetRecordFormatForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForRecordFormat(RecordFormat value);
}  // namespace RecordFormatMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
