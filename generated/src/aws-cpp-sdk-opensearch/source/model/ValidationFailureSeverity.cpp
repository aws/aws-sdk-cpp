/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/ValidationFailureSeverity.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace ValidationFailureSeverityMapper {

static const int Critical_HASH = HashingUtils::HashString("Critical");
static const int Warning_HASH = HashingUtils::HashString("Warning");

ValidationFailureSeverity GetValidationFailureSeverityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Critical_HASH) {
    return ValidationFailureSeverity::Critical;
  } else if (hashCode == Warning_HASH) {
    return ValidationFailureSeverity::Warning;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ValidationFailureSeverity>(hashCode);
  }

  return ValidationFailureSeverity::NOT_SET;
}

Aws::String GetNameForValidationFailureSeverity(ValidationFailureSeverity enumValue) {
  switch (enumValue) {
    case ValidationFailureSeverity::NOT_SET:
      return {};
    case ValidationFailureSeverity::Critical:
      return "Critical";
    case ValidationFailureSeverity::Warning:
      return "Warning";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ValidationFailureSeverityMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
