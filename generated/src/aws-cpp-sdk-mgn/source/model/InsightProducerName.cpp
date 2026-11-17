/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/InsightProducerName.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace InsightProducerNameMapper {

static const int MAPPING_HASH = HashingUtils::HashString("MAPPING");
static const int MAPPING_UPDATE_HASH = HashingUtils::HashString("MAPPING_UPDATE");
static const int CODE_GENERATION_HASH = HashingUtils::HashString("CODE_GENERATION");
static const int DEPLOY_HASH = HashingUtils::HashString("DEPLOY");
static const int DEPLOYED_STACKS_DELETION_HASH = HashingUtils::HashString("DEPLOYED_STACKS_DELETION");
static const int ANALYZE_HASH = HashingUtils::HashString("ANALYZE");

InsightProducerName GetInsightProducerNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MAPPING_HASH) {
    return InsightProducerName::MAPPING;
  } else if (hashCode == MAPPING_UPDATE_HASH) {
    return InsightProducerName::MAPPING_UPDATE;
  } else if (hashCode == CODE_GENERATION_HASH) {
    return InsightProducerName::CODE_GENERATION;
  } else if (hashCode == DEPLOY_HASH) {
    return InsightProducerName::DEPLOY;
  } else if (hashCode == DEPLOYED_STACKS_DELETION_HASH) {
    return InsightProducerName::DEPLOYED_STACKS_DELETION;
  } else if (hashCode == ANALYZE_HASH) {
    return InsightProducerName::ANALYZE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InsightProducerName>(hashCode);
  }

  return InsightProducerName::NOT_SET;
}

Aws::String GetNameForInsightProducerName(InsightProducerName enumValue) {
  switch (enumValue) {
    case InsightProducerName::NOT_SET:
      return {};
    case InsightProducerName::MAPPING:
      return "MAPPING";
    case InsightProducerName::MAPPING_UPDATE:
      return "MAPPING_UPDATE";
    case InsightProducerName::CODE_GENERATION:
      return "CODE_GENERATION";
    case InsightProducerName::DEPLOY:
      return "DEPLOY";
    case InsightProducerName::DEPLOYED_STACKS_DELETION:
      return "DEPLOYED_STACKS_DELETION";
    case InsightProducerName::ANALYZE:
      return "ANALYZE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InsightProducerNameMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
