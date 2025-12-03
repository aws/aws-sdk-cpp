/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/Peft.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace PeftMapper {

static const int LORA_HASH = HashingUtils::HashString("LORA");

Peft GetPeftForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LORA_HASH) {
    return Peft::LORA;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Peft>(hashCode);
  }

  return Peft::NOT_SET;
}

Aws::String GetNameForPeft(Peft enumValue) {
  switch (enumValue) {
    case Peft::NOT_SET:
      return {};
    case Peft::LORA:
      return "LORA";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PeftMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
