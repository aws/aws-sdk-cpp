/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/ReportOverview.h>

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
 * <p>Where a migration writes its reports, and the location of each report once it
 * is written.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/MigrationOutputOverview">AWS
 * API Reference</a></p>
 */
class MigrationOutputOverview {
 public:
  AWS_S3TABLES_API MigrationOutputOverview() = default;
  AWS_S3TABLES_API MigrationOutputOverview(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API MigrationOutputOverview& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The general purpose bucket that the migration writes every report to.</p>
   */
  inline const Aws::String& GetBucket() const { return m_bucket; }
  inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
  template <typename BucketT = Aws::String>
  void SetBucket(BucketT&& value) {
    m_bucketHasBeenSet = true;
    m_bucket = std::forward<BucketT>(value);
  }
  template <typename BucketT = Aws::String>
  MigrationOutputOverview& WithBucket(BucketT&& value) {
    SetBucket(std::forward<BucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The table compatibility report: the sample object that the schema is inferred
   * from, the table-level findings, and one row for each destination column with its
   * type change and how the migration policies apply to it. The migration writes it
   * when planning finishes, before any data migrates. If planning fails, the report
   * might not be written.</p>
   */
  inline const ReportOverview& GetTableCompatibilityReport() const { return m_tableCompatibilityReport; }
  inline bool TableCompatibilityReportHasBeenSet() const { return m_tableCompatibilityReportHasBeenSet; }
  template <typename TableCompatibilityReportT = ReportOverview>
  void SetTableCompatibilityReport(TableCompatibilityReportT&& value) {
    m_tableCompatibilityReportHasBeenSet = true;
    m_tableCompatibilityReport = std::forward<TableCompatibilityReportT>(value);
  }
  template <typename TableCompatibilityReportT = ReportOverview>
  MigrationOutputOverview& WithTableCompatibilityReport(TableCompatibilityReportT&& value) {
    SetTableCompatibilityReport(std::forward<TableCompatibilityReportT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The object compatibility report: one row for each source object under the
   * source table's location, with whether the migration includes the object and its
   * most severe finding. The migration writes it when planning finishes. If planning
   * fails, the report might not be written.</p>
   */
  inline const ReportOverview& GetObjectCompatibilityReport() const { return m_objectCompatibilityReport; }
  inline bool ObjectCompatibilityReportHasBeenSet() const { return m_objectCompatibilityReportHasBeenSet; }
  template <typename ObjectCompatibilityReportT = ReportOverview>
  void SetObjectCompatibilityReport(ObjectCompatibilityReportT&& value) {
    m_objectCompatibilityReportHasBeenSet = true;
    m_objectCompatibilityReport = std::forward<ObjectCompatibilityReportT>(value);
  }
  template <typename ObjectCompatibilityReportT = ReportOverview>
  MigrationOutputOverview& WithObjectCompatibilityReport(ObjectCompatibilityReportT&& value) {
    SetObjectCompatibilityReport(std::forward<ObjectCompatibilityReportT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The object migration report: one row for each source object that the
   * migration tried to migrate, with whether it migrated, how it was transformed,
   * and why it failed. The migration writes it once, when the migration ends. It
   * isn't written if planning fails or if a sync has nothing to migrate.</p>
   */
  inline const ReportOverview& GetObjectMigrationReport() const { return m_objectMigrationReport; }
  inline bool ObjectMigrationReportHasBeenSet() const { return m_objectMigrationReportHasBeenSet; }
  template <typename ObjectMigrationReportT = ReportOverview>
  void SetObjectMigrationReport(ObjectMigrationReportT&& value) {
    m_objectMigrationReportHasBeenSet = true;
    m_objectMigrationReport = std::forward<ObjectMigrationReportT>(value);
  }
  template <typename ObjectMigrationReportT = ReportOverview>
  MigrationOutputOverview& WithObjectMigrationReport(ObjectMigrationReportT&& value) {
    SetObjectMigrationReport(std::forward<ObjectMigrationReportT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucket;

  ReportOverview m_tableCompatibilityReport;

  ReportOverview m_objectCompatibilityReport;

  ReportOverview m_objectMigrationReport;
  bool m_bucketHasBeenSet = false;
  bool m_tableCompatibilityReportHasBeenSet = false;
  bool m_objectCompatibilityReportHasBeenSet = false;
  bool m_objectMigrationReportHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
