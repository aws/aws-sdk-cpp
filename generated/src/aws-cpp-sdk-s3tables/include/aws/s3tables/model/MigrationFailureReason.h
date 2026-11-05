/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/MigrationFailureCode.h>

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
 * <p>The reason that a migration failed: a code and, when there is one, the
 * resource or reason it applies to. This value is returned only when the migration
 * is in the <code>failed</code> state.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/MigrationFailureReason">AWS
 * API Reference</a></p>
 */
class MigrationFailureReason {
 public:
  AWS_S3TABLES_API MigrationFailureReason() = default;
  AWS_S3TABLES_API MigrationFailureReason(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API MigrationFailureReason& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The failure code. It names the cause or the report that lists the findings.
   * Valid values:</p> <ul> <li> <p> <code>rolePermissions</code> - S3 Tables
   * couldn't assume the migration role, or the role doesn't have a permission that
   * the migration needs. <code>detail</code> is the role ARN.</p> </li> <li> <p>
   * <code>sourcePermissions</code> - The migration role couldn't read the Amazon Web
   * Services Glue table or the source objects. <code>detail</code> names the table
   * (<code>database.table</code>) or the source bucket.</p> </li> <li> <p>
   * <code>destinationPermissions</code> - The migration role couldn't write to the
   * table bucket or the report bucket. <code>detail</code> names the bucket.</p>
   * </li> <li> <p> <code>resourceNotFound</code> - A resource that you specified
   * doesn't exist, such as the Amazon Web Services Glue table or the source bucket.
   * <code>detail</code> names it.</p> </li> <li> <p> <code>sourceNotSupported</code>
   * - The source table can't be migrated, for example because it is empty, has too
   * many objects, or has columns or partitions that can't be migrated. The table
   * compatibility report lists the findings.</p> </li> <li> <p>
   * <code>tableCompatibilityReport</code> - The migration couldn't create the
   * destination table, for example because a table with that name already exists or
   * the KMS key can't be used. For a sync, the destination table changed after the
   * previous migration. The table compatibility report lists the finding.</p> </li>
   * <li> <p> <code>objectCompatibilityReport</code> - Some source objects can't be
   * migrated, for example because they are archived, or because they were
   * overwritten after an earlier migration migrated them. The object compatibility
   * report lists them.</p> </li> <li> <p> <code>objectMigrationReport</code> - Some
   * source objects failed to migrate. The object migration report lists them and the
   * cause for each.</p> </li> <li> <p> <code>reportBucketNotSupported</code> - The
   * report bucket can't receive the migration's reports, for example because it is
   * in a different Region than the table bucket.</p> </li> <li> <p>
   * <code>internalError</code> - S3 Tables encountered an internal error. Retry the
   * migration, and contact Amazon Web Services Support if the error persists.</p>
   * </li> </ul>
   */
  inline MigrationFailureCode GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(MigrationFailureCode value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline MigrationFailureReason& WithCode(MigrationFailureCode value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource that the failure applies to, such as the role ARN, the Amazon
   * Web Services Glue table (<code>database.table</code>) or a bucket. For
   * <code>sourceNotSupported</code>, the reason that the source isn't supported,
   * such as <code>EMPTY_TABLE</code>. This value isn't returned for the report codes
   * or for <code>internalError</code>.</p>
   */
  inline const Aws::String& GetDetail() const { return m_detail; }
  inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }
  template <typename DetailT = Aws::String>
  void SetDetail(DetailT&& value) {
    m_detailHasBeenSet = true;
    m_detail = std::forward<DetailT>(value);
  }
  template <typename DetailT = Aws::String>
  MigrationFailureReason& WithDetail(DetailT&& value) {
    SetDetail(std::forward<DetailT>(value));
    return *this;
  }
  ///@}
 private:
  MigrationFailureCode m_code{MigrationFailureCode::NOT_SET};

  Aws::String m_detail;
  bool m_codeHasBeenSet = false;
  bool m_detailHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
