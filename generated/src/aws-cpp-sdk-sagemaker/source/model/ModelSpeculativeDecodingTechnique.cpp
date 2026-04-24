/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ModelSpeculativeDecodingTechnique.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ModelSpeculativeDecodingTechniqueMapper {

static const int EAGLE_HASH = HashingUtils::HashString("EAGLE");

ModelSpeculativeDecodingTechnique GetModelSpeculativeDecodingTechniqueForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EAGLE_HASH) {
    return ModelSpeculativeDecodingTechnique::EAGLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ModelSpeculativeDecodingTechnique>(hashCode);
  }

  return ModelSpeculativeDecodingTechnique::NOT_SET;
}

Aws::String GetNameForModelSpeculativeDecodingTechnique(ModelSpeculativeDecodingTechnique enumValue) {
  switch (enumValue) {
    case ModelSpeculativeDecodingTechnique::NOT_SET:
      return {};
    case ModelSpeculativeDecodingTechnique::EAGLE:
      return "EAGLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ModelSpeculativeDecodingTechniqueMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
