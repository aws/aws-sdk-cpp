/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediatailor/model/CompressionMethod.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {
namespace CompressionMethodMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int GZIP_HASH = HashingUtils::HashString("GZIP");

CompressionMethod GetCompressionMethodForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return CompressionMethod::NONE;
  } else if (hashCode == GZIP_HASH) {
    return CompressionMethod::GZIP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CompressionMethod>(hashCode);
  }

  return CompressionMethod::NOT_SET;
}

Aws::String GetNameForCompressionMethod(CompressionMethod enumValue) {
  switch (enumValue) {
    case CompressionMethod::NOT_SET:
      return {};
    case CompressionMethod::NONE:
      return "NONE";
    case CompressionMethod::GZIP:
      return "GZIP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CompressionMethodMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
