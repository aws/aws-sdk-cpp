/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/ElementalInferenceFeature.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace ElementalInferenceFeatureMapper {

static const int SMART_CROP_HASH = HashingUtils::HashString("SMART_CROP");

ElementalInferenceFeature GetElementalInferenceFeatureForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SMART_CROP_HASH) {
    return ElementalInferenceFeature::SMART_CROP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ElementalInferenceFeature>(hashCode);
  }

  return ElementalInferenceFeature::NOT_SET;
}

Aws::String GetNameForElementalInferenceFeature(ElementalInferenceFeature enumValue) {
  switch (enumValue) {
    case ElementalInferenceFeature::NOT_SET:
      return {};
    case ElementalInferenceFeature::SMART_CROP:
      return "SMART_CROP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ElementalInferenceFeatureMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
