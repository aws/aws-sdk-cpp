/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3TablesRequest.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/MigrationState.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace S3Tables {
namespace Model {

/**
 */
class ListTableMigrationsRequest : public S3TablesRequest {
 public:
  AWS_S3TABLES_API ListTableMigrationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListTableMigrations"; }

  AWS_S3TABLES_API Aws::String SerializePayload() const override;

  AWS_S3TABLES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the table bucket to list migrations
   * for.</p>
   */
  inline const Aws::String& GetTableBucketARN() const { return m_tableBucketARN; }
  inline bool TableBucketARNHasBeenSet() const { return m_tableBucketARNHasBeenSet; }
  template <typename TableBucketARNT = Aws::String>
  void SetTableBucketARN(TableBucketARNT&& value) {
    m_tableBucketARNHasBeenSet = true;
    m_tableBucketARN = std::forward<TableBucketARNT>(value);
  }
  template <typename TableBucketARNT = Aws::String>
  ListTableMigrationsRequest& WithTableBucketARN(TableBucketARNT&& value) {
    SetTableBucketARN(std::forward<TableBucketARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The namespace to list migrations for. Requires
   * <code>tableBucketARN</code>.</p>
   */
  inline const Aws::String& GetNamespace() const { return m_namespace; }
  inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
  template <typename NamespaceT = Aws::String>
  void SetNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace = std::forward<NamespaceT>(value);
  }
  template <typename NamespaceT = Aws::String>
  ListTableMigrationsRequest& WithNamespace(NamespaceT&& value) {
    SetNamespace(std::forward<NamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the table to list migrations for. Requires
   * <code>tableBucketARN</code> and <code>namespace</code>.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ListTableMigrationsRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the table to list migrations for. The list
   * includes the migrations into this table. To also list migrations into an earlier
   * table of the same name, specify <code>tableBucketARN</code>,
   * <code>namespace</code> and <code>name</code> instead. Specify either
   * <code>tableARN</code> or <code>tableBucketARN</code>, not both.</p>
   */
  inline const Aws::String& GetTableARN() const { return m_tableARN; }
  inline bool TableARNHasBeenSet() const { return m_tableARNHasBeenSet; }
  template <typename TableARNT = Aws::String>
  void SetTableARN(TableARNT&& value) {
    m_tableARNHasBeenSet = true;
    m_tableARN = std::forward<TableARNT>(value);
  }
  template <typename TableARNT = Aws::String>
  ListTableMigrationsRequest& WithTableARN(TableARNT&& value) {
    SetTableARN(std::forward<TableARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state to filter the list by. For the valid values, see the
   * <code>state</code> member of <code>GetTableMigration</code>.</p>
   */
  inline MigrationState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(MigrationState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline ListTableMigrationsRequest& WithState(MigrationState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>hasValidPlan</code> value to filter the list by. Migrations that
   * are still planning aren't listed, whichever value you specify.</p>
   */
  inline bool GetHasValidPlan() const { return m_hasValidPlan; }
  inline bool HasValidPlanHasBeenSet() const { return m_hasValidPlanHasBeenSet; }
  inline void SetHasValidPlan(bool value) {
    m_hasValidPlanHasBeenSet = true;
    m_hasValidPlan = value;
  }
  inline ListTableMigrationsRequest& WithHasValidPlan(bool value) {
    SetHasValidPlan(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of migrations to return, from 1 to 1,000. If you don't
   * specify a value, the default is 100.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListTableMigrationsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>nextToken</code> from a previous response, to get the next page of
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListTableMigrationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tableBucketARN;

  Aws::String m_namespace;

  Aws::String m_name;

  Aws::String m_tableARN;

  MigrationState m_state{MigrationState::NOT_SET};

  bool m_hasValidPlan{false};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_tableBucketARNHasBeenSet = false;
  bool m_namespaceHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_tableARNHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_hasValidPlanHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
