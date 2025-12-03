/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/CustomizationTechnique.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace CustomizationTechniqueMapper {

static const int SFT_HASH = HashingUtils::HashString("SFT");
static const int DPO_HASH = HashingUtils::HashString("DPO");
static const int RLVR_HASH = HashingUtils::HashString("RLVR");
static const int RLAIF_HASH = HashingUtils::HashString("RLAIF");

CustomizationTechnique GetCustomizationTechniqueForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SFT_HASH) {
    return CustomizationTechnique::SFT;
  } else if (hashCode == DPO_HASH) {
    return CustomizationTechnique::DPO;
  } else if (hashCode == RLVR_HASH) {
    return CustomizationTechnique::RLVR;
  } else if (hashCode == RLAIF_HASH) {
    return CustomizationTechnique::RLAIF;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CustomizationTechnique>(hashCode);
  }

  return CustomizationTechnique::NOT_SET;
}

Aws::String GetNameForCustomizationTechnique(CustomizationTechnique enumValue) {
  switch (enumValue) {
    case CustomizationTechnique::NOT_SET:
      return {};
    case CustomizationTechnique::SFT:
      return "SFT";
    case CustomizationTechnique::DPO:
      return "DPO";
    case CustomizationTechnique::RLVR:
      return "RLVR";
    case CustomizationTechnique::RLAIF:
      return "RLAIF";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CustomizationTechniqueMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
