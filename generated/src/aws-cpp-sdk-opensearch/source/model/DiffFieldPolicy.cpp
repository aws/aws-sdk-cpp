/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/DiffFieldPolicy.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace DiffFieldPolicyMapper {

static const int redacted_HASH = HashingUtils::HashString("redacted");

DiffFieldPolicy GetDiffFieldPolicyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == redacted_HASH) {
    return DiffFieldPolicy::redacted;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DiffFieldPolicy>(hashCode);
  }

  return DiffFieldPolicy::NOT_SET;
}

Aws::String GetNameForDiffFieldPolicy(DiffFieldPolicy enumValue) {
  switch (enumValue) {
    case DiffFieldPolicy::NOT_SET:
      return {};
    case DiffFieldPolicy::redacted:
      return "redacted";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DiffFieldPolicyMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
