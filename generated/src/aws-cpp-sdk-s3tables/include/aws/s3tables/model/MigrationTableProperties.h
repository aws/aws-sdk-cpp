/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/CompressionCodec.h>
#include <aws/s3tables/model/DataFileFormat.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace S3Tables {
namespace Model {

/**
 * <p>The properties of the data files that a migration writes. The migration also
 * sets the compression codec and dictionary encoding as the destination table's
 * write properties, so they remain the table's defaults after you complete the
 * migration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/MigrationTableProperties">AWS
 * API Reference</a></p>
 */
class MigrationTableProperties {
 public:
  AWS_S3TABLES_API MigrationTableProperties() = default;
  AWS_S3TABLES_API MigrationTableProperties(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API MigrationTableProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The file format of the data files. The only supported format is
   * <code>parquet</code>, the default.</p>
   */
  inline DataFileFormat GetWriteFormat() const { return m_writeFormat; }
  inline bool WriteFormatHasBeenSet() const { return m_writeFormatHasBeenSet; }
  inline void SetWriteFormat(DataFileFormat value) {
    m_writeFormatHasBeenSet = true;
    m_writeFormat = value;
  }
  inline MigrationTableProperties& WithWriteFormat(DataFileFormat value) {
    SetWriteFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Iceberg format version of the destination table. Valid values are
   * <code>2</code> and <code>3</code>. The default is <code>2</code>.</p>
   */
  inline int GetIcebergFormatVersion() const { return m_icebergFormatVersion; }
  inline bool IcebergFormatVersionHasBeenSet() const { return m_icebergFormatVersionHasBeenSet; }
  inline void SetIcebergFormatVersion(int value) {
    m_icebergFormatVersionHasBeenSet = true;
    m_icebergFormatVersion = value;
  }
  inline MigrationTableProperties& WithIcebergFormatVersion(int value) {
    SetIcebergFormatVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compression codec of the data files. The default is
   * <code>zstd</code>.</p>
   */
  inline CompressionCodec GetCompressionCodec() const { return m_compressionCodec; }
  inline bool CompressionCodecHasBeenSet() const { return m_compressionCodecHasBeenSet; }
  inline void SetCompressionCodec(CompressionCodec value) {
    m_compressionCodecHasBeenSet = true;
    m_compressionCodec = value;
  }
  inline MigrationTableProperties& WithCompressionCodec(CompressionCodec value) {
    SetCompressionCodec(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the data files use dictionary encoding. The default is
   * <code>true</code>.</p>
   */
  inline bool GetDictionaryEncoding() const { return m_dictionaryEncoding; }
  inline bool DictionaryEncodingHasBeenSet() const { return m_dictionaryEncodingHasBeenSet; }
  inline void SetDictionaryEncoding(bool value) {
    m_dictionaryEncodingHasBeenSet = true;
    m_dictionaryEncoding = value;
  }
  inline MigrationTableProperties& WithDictionaryEncoding(bool value) {
    SetDictionaryEncoding(value);
    return *this;
  }
  ///@}
 private:
  DataFileFormat m_writeFormat{DataFileFormat::NOT_SET};

  int m_icebergFormatVersion{0};

  CompressionCodec m_compressionCodec{CompressionCodec::NOT_SET};

  bool m_dictionaryEncoding{false};
  bool m_writeFormatHasBeenSet = false;
  bool m_icebergFormatVersionHasBeenSet = false;
  bool m_compressionCodecHasBeenSet = false;
  bool m_dictionaryEncodingHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
