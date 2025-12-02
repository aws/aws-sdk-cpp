/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/IcebergSchema.h>

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
 * <p>Contains details about the metadata for an Iceberg table.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/IcebergMetadata">AWS
 * API Reference</a></p>
 */
class IcebergMetadata {
 public:
  AWS_S3TABLES_API IcebergMetadata() = default;
  AWS_S3TABLES_API IcebergMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API IcebergMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The schema for an Iceberg table.</p>
   */
  inline const IcebergSchema& GetSchema() const { return m_schema; }
  inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
  template <typename SchemaT = IcebergSchema>
  void SetSchema(SchemaT&& value) {
    m_schemaHasBeenSet = true;
    m_schema = std::forward<SchemaT>(value);
  }
  template <typename SchemaT = IcebergSchema>
  IcebergMetadata& WithSchema(SchemaT&& value) {
    SetSchema(std::forward<SchemaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains configuration properties for an Iceberg table.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const { return m_properties; }
  inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
  template <typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
  void SetProperties(PropertiesT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties = std::forward<PropertiesT>(value);
  }
  template <typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
  IcebergMetadata& WithProperties(PropertiesT&& value) {
    SetProperties(std::forward<PropertiesT>(value));
    return *this;
  }
  template <typename PropertiesKeyT = Aws::String, typename PropertiesValueT = Aws::String>
  IcebergMetadata& AddProperties(PropertiesKeyT&& key, PropertiesValueT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties.emplace(std::forward<PropertiesKeyT>(key), std::forward<PropertiesValueT>(value));
    return *this;
  }
  ///@}
 private:
  IcebergSchema m_schema;
  bool m_schemaHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_properties;
  bool m_propertiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
