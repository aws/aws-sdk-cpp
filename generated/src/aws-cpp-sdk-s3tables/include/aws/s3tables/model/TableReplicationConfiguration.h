/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/TableReplicationRule.h>

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
 * <p>The replication configuration for an individual table. This configuration
 * defines how the table is replicated to destination tables.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/TableReplicationConfiguration">AWS
 * API Reference</a></p>
 */
class TableReplicationConfiguration {
 public:
  AWS_S3TABLES_API TableReplicationConfiguration() = default;
  AWS_S3TABLES_API TableReplicationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API TableReplicationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that S3 Tables assumes to
   * replicate the table on your behalf.</p>
   */
  inline const Aws::String& GetRole() const { return m_role; }
  inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
  template <typename RoleT = Aws::String>
  void SetRole(RoleT&& value) {
    m_roleHasBeenSet = true;
    m_role = std::forward<RoleT>(value);
  }
  template <typename RoleT = Aws::String>
  TableReplicationConfiguration& WithRole(RoleT&& value) {
    SetRole(std::forward<RoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of replication rules that define where this table should be
   * replicated.</p>
   */
  inline const Aws::Vector<TableReplicationRule>& GetRules() const { return m_rules; }
  inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
  template <typename RulesT = Aws::Vector<TableReplicationRule>>
  void SetRules(RulesT&& value) {
    m_rulesHasBeenSet = true;
    m_rules = std::forward<RulesT>(value);
  }
  template <typename RulesT = Aws::Vector<TableReplicationRule>>
  TableReplicationConfiguration& WithRules(RulesT&& value) {
    SetRules(std::forward<RulesT>(value));
    return *this;
  }
  template <typename RulesT = TableReplicationRule>
  TableReplicationConfiguration& AddRules(RulesT&& value) {
    m_rulesHasBeenSet = true;
    m_rules.emplace_back(std::forward<RulesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_role;
  bool m_roleHasBeenSet = false;

  Aws::Vector<TableReplicationRule> m_rules;
  bool m_rulesHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
