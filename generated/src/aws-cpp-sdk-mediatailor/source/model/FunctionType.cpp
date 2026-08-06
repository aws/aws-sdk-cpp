/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediatailor/model/FunctionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {
namespace FunctionTypeMapper {

static const int HTTP_REQUEST_HASH = HashingUtils::HashString("HTTP_REQUEST");
static const int CUSTOM_OUTPUT_HASH = HashingUtils::HashString("CUSTOM_OUTPUT");
static const int CONCURRENT_EXECUTOR_HASH = HashingUtils::HashString("CONCURRENT_EXECUTOR");
static const int SEQUENTIAL_EXECUTOR_HASH = HashingUtils::HashString("SEQUENTIAL_EXECUTOR");

FunctionType GetFunctionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HTTP_REQUEST_HASH) {
    return FunctionType::HTTP_REQUEST;
  } else if (hashCode == CUSTOM_OUTPUT_HASH) {
    return FunctionType::CUSTOM_OUTPUT;
  } else if (hashCode == CONCURRENT_EXECUTOR_HASH) {
    return FunctionType::CONCURRENT_EXECUTOR;
  } else if (hashCode == SEQUENTIAL_EXECUTOR_HASH) {
    return FunctionType::SEQUENTIAL_EXECUTOR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FunctionType>(hashCode);
  }

  return FunctionType::NOT_SET;
}

Aws::String GetNameForFunctionType(FunctionType enumValue) {
  switch (enumValue) {
    case FunctionType::NOT_SET:
      return {};
    case FunctionType::HTTP_REQUEST:
      return "HTTP_REQUEST";
    case FunctionType::CUSTOM_OUTPUT:
      return "CUSTOM_OUTPUT";
    case FunctionType::CONCURRENT_EXECUTOR:
      return "CONCURRENT_EXECUTOR";
    case FunctionType::SEQUENTIAL_EXECUTOR:
      return "SEQUENTIAL_EXECUTOR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FunctionTypeMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
