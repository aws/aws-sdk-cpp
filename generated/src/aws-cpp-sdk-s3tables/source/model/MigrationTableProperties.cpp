/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/MigrationTableProperties.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

MigrationTableProperties::MigrationTableProperties(JsonView jsonValue) { *this = jsonValue; }

MigrationTableProperties& MigrationTableProperties::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("writeFormat")) {
    m_writeFormat = DataFileFormatMapper::GetDataFileFormatForName(jsonValue.GetString("writeFormat"));
    m_writeFormatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("icebergFormatVersion")) {
    m_icebergFormatVersion = jsonValue.GetInteger("icebergFormatVersion");
    m_icebergFormatVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("compressionCodec")) {
    m_compressionCodec = CompressionCodecMapper::GetCompressionCodecForName(jsonValue.GetString("compressionCodec"));
    m_compressionCodecHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dictionaryEncoding")) {
    m_dictionaryEncoding = jsonValue.GetBool("dictionaryEncoding");
    m_dictionaryEncodingHasBeenSet = true;
  }
  return *this;
}

JsonValue MigrationTableProperties::Jsonize() const {
  JsonValue payload;

  if (m_writeFormatHasBeenSet) {
    payload.WithString("writeFormat", DataFileFormatMapper::GetNameForDataFileFormat(m_writeFormat));
  }

  if (m_icebergFormatVersionHasBeenSet) {
    payload.WithInteger("icebergFormatVersion", m_icebergFormatVersion);
  }

  if (m_compressionCodecHasBeenSet) {
    payload.WithString("compressionCodec", CompressionCodecMapper::GetNameForCompressionCodec(m_compressionCodec));
  }

  if (m_dictionaryEncodingHasBeenSet) {
    payload.WithBool("dictionaryEncoding", m_dictionaryEncoding);
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
