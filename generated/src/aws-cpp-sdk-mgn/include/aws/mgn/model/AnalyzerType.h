/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

namespace Aws {
namespace mgn {
namespace Model {
enum class AnalyzerType { NOT_SET, REACHABILITY_ANALYZER };

namespace AnalyzerTypeMapper {
AWS_MGN_API AnalyzerType GetAnalyzerTypeForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForAnalyzerType(AnalyzerType value);
}  // namespace AnalyzerTypeMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
