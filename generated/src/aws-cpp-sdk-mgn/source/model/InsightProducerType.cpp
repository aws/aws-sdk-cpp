/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/InsightProducerType.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace InsightProducerTypeMapper {

static const int JOB_HASH = HashingUtils::HashString("JOB");
static const int API_HASH = HashingUtils::HashString("API");

InsightProducerType GetInsightProducerTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == JOB_HASH) {
    return InsightProducerType::JOB;
  } else if (hashCode == API_HASH) {
    return InsightProducerType::API;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InsightProducerType>(hashCode);
  }

  return InsightProducerType::NOT_SET;
}

Aws::String GetNameForInsightProducerType(InsightProducerType enumValue) {
  switch (enumValue) {
    case InsightProducerType::NOT_SET:
      return {};
    case InsightProducerType::JOB:
      return "JOB";
    case InsightProducerType::API:
      return "API";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InsightProducerTypeMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
