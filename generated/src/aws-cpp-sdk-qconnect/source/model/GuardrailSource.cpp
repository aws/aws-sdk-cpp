/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/GuardrailSource.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace GuardrailSourceMapper {

static const int INPUT_HASH = HashingUtils::HashString("INPUT");
static const int OUTPUT_HASH = HashingUtils::HashString("OUTPUT");

GuardrailSource GetGuardrailSourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INPUT_HASH) {
    return GuardrailSource::INPUT;
  } else if (hashCode == OUTPUT_HASH) {
    return GuardrailSource::OUTPUT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GuardrailSource>(hashCode);
  }

  return GuardrailSource::NOT_SET;
}

Aws::String GetNameForGuardrailSource(GuardrailSource enumValue) {
  switch (enumValue) {
    case GuardrailSource::NOT_SET:
      return {};
    case GuardrailSource::INPUT:
      return "INPUT";
    case GuardrailSource::OUTPUT:
      return "OUTPUT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GuardrailSourceMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
