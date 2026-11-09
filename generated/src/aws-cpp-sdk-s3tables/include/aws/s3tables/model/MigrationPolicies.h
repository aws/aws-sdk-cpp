/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/IncompatibleValuesPolicy.h>
#include <aws/s3tables/model/UnmatchedSourceFieldsPolicy.h>

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
 * <p>The policies for source data that doesn't fit the destination
 * schema.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/MigrationPolicies">AWS
 * API Reference</a></p>
 */
class MigrationPolicies {
 public:
  AWS_S3TABLES_API MigrationPolicies() = default;
  AWS_S3TABLES_API MigrationPolicies(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API MigrationPolicies& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The migration policy for a source field that has no matching column in the
   * destination schema. Valid values:</p> <ul> <li> <p> <code>fail</code> - Fails
   * the migration. This is the default.</p> </li> <li> <p> <code>drop</code> -
   * Leaves source columns that the destination schema doesn't have out of the
   * destination table, and doesn't migrate source objects outside the Amazon Web
   * Services Glue table's partition locations.</p> </li> </ul> <p>A destination
   * schema that leaves out a partition column or a field of a struct column fails
   * the migration under either value.</p>
   */
  inline UnmatchedSourceFieldsPolicy GetUnmatchedSourceFieldsPolicy() const { return m_unmatchedSourceFieldsPolicy; }
  inline bool UnmatchedSourceFieldsPolicyHasBeenSet() const { return m_unmatchedSourceFieldsPolicyHasBeenSet; }
  inline void SetUnmatchedSourceFieldsPolicy(UnmatchedSourceFieldsPolicy value) {
    m_unmatchedSourceFieldsPolicyHasBeenSet = true;
    m_unmatchedSourceFieldsPolicy = value;
  }
  inline MigrationPolicies& WithUnmatchedSourceFieldsPolicy(UnmatchedSourceFieldsPolicy value) {
    SetUnmatchedSourceFieldsPolicy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The migration policy for a source value that the destination column's type
   * can't hold. Valid values:</p> <ul> <li> <p> <code>fail</code> - Fails the
   * migration. This is the default.</p> </li> <li> <p> <code>setNull</code> - Writes
   * null for a value that the destination column's type can't hold. If a column's
   * type in a source object is incompatible with the destination column's type, the
   * column is null for that whole object.</p> </li> </ul> <p>A required column, or a
   * type that migration doesn't support, fails the migration under either value.</p>
   */
  inline IncompatibleValuesPolicy GetIncompatibleValuesPolicy() const { return m_incompatibleValuesPolicy; }
  inline bool IncompatibleValuesPolicyHasBeenSet() const { return m_incompatibleValuesPolicyHasBeenSet; }
  inline void SetIncompatibleValuesPolicy(IncompatibleValuesPolicy value) {
    m_incompatibleValuesPolicyHasBeenSet = true;
    m_incompatibleValuesPolicy = value;
  }
  inline MigrationPolicies& WithIncompatibleValuesPolicy(IncompatibleValuesPolicy value) {
    SetIncompatibleValuesPolicy(value);
    return *this;
  }
  ///@}
 private:
  UnmatchedSourceFieldsPolicy m_unmatchedSourceFieldsPolicy{UnmatchedSourceFieldsPolicy::NOT_SET};

  IncompatibleValuesPolicy m_incompatibleValuesPolicy{IncompatibleValuesPolicy::NOT_SET};
  bool m_unmatchedSourceFieldsPolicyHasBeenSet = false;
  bool m_incompatibleValuesPolicyHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
