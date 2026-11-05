/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3tables/model/CompressionCodec.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {
namespace CompressionCodecMapper {

static const int zstd_HASH = HashingUtils::HashString("zstd");
static const int snappy_HASH = HashingUtils::HashString("snappy");
static const int gzip_HASH = HashingUtils::HashString("gzip");
static const int uncompressed_HASH = HashingUtils::HashString("uncompressed");

CompressionCodec GetCompressionCodecForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == zstd_HASH) {
    return CompressionCodec::zstd;
  } else if (hashCode == snappy_HASH) {
    return CompressionCodec::snappy;
  } else if (hashCode == gzip_HASH) {
    return CompressionCodec::gzip;
  } else if (hashCode == uncompressed_HASH) {
    return CompressionCodec::uncompressed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CompressionCodec>(hashCode);
  }

  return CompressionCodec::NOT_SET;
}

Aws::String GetNameForCompressionCodec(CompressionCodec enumValue) {
  switch (enumValue) {
    case CompressionCodec::NOT_SET:
      return {};
    case CompressionCodec::zstd:
      return "zstd";
    case CompressionCodec::snappy:
      return "snappy";
    case CompressionCodec::gzip:
      return "gzip";
    case CompressionCodec::uncompressed:
      return "uncompressed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CompressionCodecMapper
}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
