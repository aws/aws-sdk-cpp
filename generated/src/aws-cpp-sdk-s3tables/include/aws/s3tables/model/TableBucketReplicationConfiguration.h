/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/TableBucketReplicationRule.h>

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
 * <p>The replication configuration for a table bucket. This configuration defines
 * how tables in the source bucket are replicated to destination table buckets,
 * including the IAM role used for replication.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/TableBucketReplicationConfiguration">AWS
 * API Reference</a></p>
 */
class TableBucketReplicationConfiguration {
 public:
  AWS_S3TABLES_API TableBucketReplicationConfiguration() = default;
  AWS_S3TABLES_API TableBucketReplicationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API TableBucketReplicationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that S3 Tables assumes to
   * replicate tables on your behalf.</p>
   */
  inline const Aws::String& GetRole() const { return m_role; }
  inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
  template <typename RoleT = Aws::String>
  void SetRole(RoleT&& value) {
    m_roleHasBeenSet = true;
    m_role = std::forward<RoleT>(value);
  }
  template <typename RoleT = Aws::String>
  TableBucketReplicationConfiguration& WithRole(RoleT&& value) {
    SetRole(std::forward<RoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of replication rules that define which tables to replicate and where
   * to replicate them.</p>
   */
  inline const Aws::Vector<TableBucketReplicationRule>& GetRules() const { return m_rules; }
  inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
  template <typename RulesT = Aws::Vector<TableBucketReplicationRule>>
  void SetRules(RulesT&& value) {
    m_rulesHasBeenSet = true;
    m_rules = std::forward<RulesT>(value);
  }
  template <typename RulesT = Aws::Vector<TableBucketReplicationRule>>
  TableBucketReplicationConfiguration& WithRules(RulesT&& value) {
    SetRules(std::forward<RulesT>(value));
    return *this;
  }
  template <typename RulesT = TableBucketReplicationRule>
  TableBucketReplicationConfiguration& AddRules(RulesT&& value) {
    m_rulesHasBeenSet = true;
    m_rules.emplace_back(std::forward<RulesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_role;

  Aws::Vector<TableBucketReplicationRule> m_rules;
  bool m_roleHasBeenSet = false;
  bool m_rulesHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
