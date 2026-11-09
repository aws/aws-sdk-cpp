/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>

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
 * <p>The key prefix for each report. If you don't specify a prefix for a report,
 * its keys start at the root of the bucket.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/MigrationReportPrefixes">AWS
 * API Reference</a></p>
 */
class MigrationReportPrefixes {
 public:
  AWS_S3TABLES_API MigrationReportPrefixes() = default;
  AWS_S3TABLES_API MigrationReportPrefixes(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API MigrationReportPrefixes& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The key prefix for the table compatibility report, up to 512 bytes. If not
   * specified, the report's keys start at the root of the bucket.</p>
   */
  inline const Aws::String& GetTableCompatibilityReport() const { return m_tableCompatibilityReport; }
  inline bool TableCompatibilityReportHasBeenSet() const { return m_tableCompatibilityReportHasBeenSet; }
  template <typename TableCompatibilityReportT = Aws::String>
  void SetTableCompatibilityReport(TableCompatibilityReportT&& value) {
    m_tableCompatibilityReportHasBeenSet = true;
    m_tableCompatibilityReport = std::forward<TableCompatibilityReportT>(value);
  }
  template <typename TableCompatibilityReportT = Aws::String>
  MigrationReportPrefixes& WithTableCompatibilityReport(TableCompatibilityReportT&& value) {
    SetTableCompatibilityReport(std::forward<TableCompatibilityReportT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key prefix for the object compatibility report, up to 512 bytes. If not
   * specified, the report's keys start at the root of the bucket.</p>
   */
  inline const Aws::String& GetObjectCompatibilityReport() const { return m_objectCompatibilityReport; }
  inline bool ObjectCompatibilityReportHasBeenSet() const { return m_objectCompatibilityReportHasBeenSet; }
  template <typename ObjectCompatibilityReportT = Aws::String>
  void SetObjectCompatibilityReport(ObjectCompatibilityReportT&& value) {
    m_objectCompatibilityReportHasBeenSet = true;
    m_objectCompatibilityReport = std::forward<ObjectCompatibilityReportT>(value);
  }
  template <typename ObjectCompatibilityReportT = Aws::String>
  MigrationReportPrefixes& WithObjectCompatibilityReport(ObjectCompatibilityReportT&& value) {
    SetObjectCompatibilityReport(std::forward<ObjectCompatibilityReportT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key prefix for the object migration report, up to 512 bytes. If not
   * specified, the report's keys start at the root of the bucket.</p>
   */
  inline const Aws::String& GetObjectMigrationReport() const { return m_objectMigrationReport; }
  inline bool ObjectMigrationReportHasBeenSet() const { return m_objectMigrationReportHasBeenSet; }
  template <typename ObjectMigrationReportT = Aws::String>
  void SetObjectMigrationReport(ObjectMigrationReportT&& value) {
    m_objectMigrationReportHasBeenSet = true;
    m_objectMigrationReport = std::forward<ObjectMigrationReportT>(value);
  }
  template <typename ObjectMigrationReportT = Aws::String>
  MigrationReportPrefixes& WithObjectMigrationReport(ObjectMigrationReportT&& value) {
    SetObjectMigrationReport(std::forward<ObjectMigrationReportT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tableCompatibilityReport;

  Aws::String m_objectCompatibilityReport;

  Aws::String m_objectMigrationReport;
  bool m_tableCompatibilityReportHasBeenSet = false;
  bool m_objectCompatibilityReportHasBeenSet = false;
  bool m_objectMigrationReportHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
