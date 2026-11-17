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
enum class InsightProducerName { NOT_SET, MAPPING, MAPPING_UPDATE, CODE_GENERATION, DEPLOY, DEPLOYED_STACKS_DELETION, ANALYZE };

namespace InsightProducerNameMapper {
AWS_MGN_API InsightProducerName GetInsightProducerNameForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForInsightProducerName(InsightProducerName value);
}  // namespace InsightProducerNameMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
