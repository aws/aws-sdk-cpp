/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediapackagev2/model/ScteInManifests.h>

using namespace Aws::Utils;

namespace Aws {
namespace mediapackagev2 {
namespace Model {
namespace ScteInManifestsMapper {

static const int ALL_HASH = HashingUtils::HashString("ALL");
static const int MATCHES_FILTER_HASH = HashingUtils::HashString("MATCHES_FILTER");

ScteInManifests GetScteInManifestsForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALL_HASH) {
    return ScteInManifests::ALL;
  } else if (hashCode == MATCHES_FILTER_HASH) {
    return ScteInManifests::MATCHES_FILTER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScteInManifests>(hashCode);
  }

  return ScteInManifests::NOT_SET;
}

Aws::String GetNameForScteInManifests(ScteInManifests enumValue) {
  switch (enumValue) {
    case ScteInManifests::NOT_SET:
      return {};
    case ScteInManifests::ALL:
      return "ALL";
    case ScteInManifests::MATCHES_FILTER:
      return "MATCHES_FILTER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScteInManifestsMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
