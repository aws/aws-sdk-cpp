/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/InsightType.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace InsightTypeMapper {

static const int INTENT_GAP_HASH = HashingUtils::HashString("INTENT_GAP");
static const int WARNING_HASH = HashingUtils::HashString("WARNING");
static const int QUESTION_HASH = HashingUtils::HashString("QUESTION");
static const int INFO_HASH = HashingUtils::HashString("INFO");
static const int ERROR__HASH = HashingUtils::HashString("ERROR");
static const int CONTEXT_HASH = HashingUtils::HashString("CONTEXT");
static const int EXCLUDED_HASH = HashingUtils::HashString("EXCLUDED");
static const int BEHAVIOR_CHANGE_HASH = HashingUtils::HashString("BEHAVIOR_CHANGE");

InsightType GetInsightTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INTENT_GAP_HASH) {
    return InsightType::INTENT_GAP;
  } else if (hashCode == WARNING_HASH) {
    return InsightType::WARNING;
  } else if (hashCode == QUESTION_HASH) {
    return InsightType::QUESTION;
  } else if (hashCode == INFO_HASH) {
    return InsightType::INFO;
  } else if (hashCode == ERROR__HASH) {
    return InsightType::ERROR_;
  } else if (hashCode == CONTEXT_HASH) {
    return InsightType::CONTEXT;
  } else if (hashCode == EXCLUDED_HASH) {
    return InsightType::EXCLUDED;
  } else if (hashCode == BEHAVIOR_CHANGE_HASH) {
    return InsightType::BEHAVIOR_CHANGE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InsightType>(hashCode);
  }

  return InsightType::NOT_SET;
}

Aws::String GetNameForInsightType(InsightType enumValue) {
  switch (enumValue) {
    case InsightType::NOT_SET:
      return {};
    case InsightType::INTENT_GAP:
      return "INTENT_GAP";
    case InsightType::WARNING:
      return "WARNING";
    case InsightType::QUESTION:
      return "QUESTION";
    case InsightType::INFO:
      return "INFO";
    case InsightType::ERROR_:
      return "ERROR";
    case InsightType::CONTEXT:
      return "CONTEXT";
    case InsightType::EXCLUDED:
      return "EXCLUDED";
    case InsightType::BEHAVIOR_CHANGE:
      return "BEHAVIOR_CHANGE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InsightTypeMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
