/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3TablesRequest.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace S3Tables {
namespace Model {

/**
 */
class GetTableMigrationRequest : public S3TablesRequest {
 public:
  AWS_S3TABLES_API GetTableMigrationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetTableMigration"; }

  AWS_S3TABLES_API Aws::String SerializePayload() const override;

  AWS_S3TABLES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The ID of the migration to get. Specify either <code>migrationId</code> or
   * <code>tableARN</code>, not both.</p>
   */
  inline const Aws::String& GetMigrationId() const { return m_migrationId; }
  inline bool MigrationIdHasBeenSet() const { return m_migrationIdHasBeenSet; }
  template <typename MigrationIdT = Aws::String>
  void SetMigrationId(MigrationIdT&& value) {
    m_migrationIdHasBeenSet = true;
    m_migrationId = std::forward<MigrationIdT>(value);
  }
  template <typename MigrationIdT = Aws::String>
  GetTableMigrationRequest& WithMigrationId(MigrationIdT&& value) {
    SetMigrationId(std::forward<MigrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the destination table. Gets the table's
   * most recent migration. Specify either <code>tableARN</code> or
   * <code>migrationId</code>, not both.</p>
   */
  inline const Aws::String& GetTableARN() const { return m_tableARN; }
  inline bool TableARNHasBeenSet() const { return m_tableARNHasBeenSet; }
  template <typename TableARNT = Aws::String>
  void SetTableARN(TableARNT&& value) {
    m_tableARNHasBeenSet = true;
    m_tableARN = std::forward<TableARNT>(value);
  }
  template <typename TableARNT = Aws::String>
  GetTableMigrationRequest& WithTableARN(TableARNT&& value) {
    SetTableARN(std::forward<TableARNT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_migrationId;

  Aws::String m_tableARN;
  bool m_migrationIdHasBeenSet = false;
  bool m_tableARNHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
