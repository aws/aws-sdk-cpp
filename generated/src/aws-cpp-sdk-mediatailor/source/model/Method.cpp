/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediatailor/model/Method.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {
namespace MethodMapper {

static const int GET__HASH = HashingUtils::HashString("GET");
static const int POST_HASH = HashingUtils::HashString("POST");

Method GetMethodForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GET__HASH) {
    return Method::GET_;
  } else if (hashCode == POST_HASH) {
    return Method::POST;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Method>(hashCode);
  }

  return Method::NOT_SET;
}

Aws::String GetNameForMethod(Method enumValue) {
  switch (enumValue) {
    case Method::NOT_SET:
      return {};
    case Method::GET_:
      return "GET";
    case Method::POST:
      return "POST";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MethodMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
