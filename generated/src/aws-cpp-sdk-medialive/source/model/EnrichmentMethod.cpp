/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medialive/model/EnrichmentMethod.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {
namespace EnrichmentMethodMapper {

static const int SCTE35_ELEMENTAL_INFERENCE_QUERY_PARAMS_HASH = HashingUtils::HashString("SCTE35_ELEMENTAL_INFERENCE_QUERY_PARAMS");

EnrichmentMethod GetEnrichmentMethodForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SCTE35_ELEMENTAL_INFERENCE_QUERY_PARAMS_HASH) {
    return EnrichmentMethod::SCTE35_ELEMENTAL_INFERENCE_QUERY_PARAMS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EnrichmentMethod>(hashCode);
  }

  return EnrichmentMethod::NOT_SET;
}

Aws::String GetNameForEnrichmentMethod(EnrichmentMethod enumValue) {
  switch (enumValue) {
    case EnrichmentMethod::NOT_SET:
      return {};
    case EnrichmentMethod::SCTE35_ELEMENTAL_INFERENCE_QUERY_PARAMS:
      return "SCTE35_ELEMENTAL_INFERENCE_QUERY_PARAMS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EnrichmentMethodMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
