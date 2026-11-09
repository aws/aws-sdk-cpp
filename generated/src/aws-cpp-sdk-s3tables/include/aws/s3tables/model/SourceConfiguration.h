/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/GlueTableSource.h>

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
 * <p>The source to migrate from. Set exactly one member, and set
 * <code>sourceType</code> to match it.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/SourceConfiguration">AWS
 * API Reference</a></p>
 */
class SourceConfiguration {
 public:
  AWS_S3TABLES_API SourceConfiguration() = default;
  AWS_S3TABLES_API SourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API SourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An Amazon Web Services Glue Data Catalog table to migrate. The table must be
   * an external Apache Hive table whose data is stored as Parquet in a general
   * purpose bucket in the same account and Region as the table bucket. Views,
   * transactional (ACID) tables, tables in an open table format such as Apache
   * Iceberg, and tables registered with Amazon Web Services Lake Formation can't be
   * migrated. If the table can't be migrated, the migration fails, and the table
   * compatibility report lists the reason.</p>
   */
  inline const GlueTableSource& GetGlueTable() const { return m_glueTable; }
  inline bool GlueTableHasBeenSet() const { return m_glueTableHasBeenSet; }
  template <typename GlueTableT = GlueTableSource>
  void SetGlueTable(GlueTableT&& value) {
    m_glueTableHasBeenSet = true;
    m_glueTable = std::forward<GlueTableT>(value);
  }
  template <typename GlueTableT = GlueTableSource>
  SourceConfiguration& WithGlueTable(GlueTableT&& value) {
    SetGlueTable(std::forward<GlueTableT>(value));
    return *this;
  }
  ///@}
 private:
  GlueTableSource m_glueTable;
  bool m_glueTableHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
