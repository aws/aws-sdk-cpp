/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3TablesRequest.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/MigrationRequestedState.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace S3Tables {
namespace Model {

/**
 */
class UpdateTableMigrationRequest : public S3TablesRequest {
 public:
  AWS_S3TABLES_API UpdateTableMigrationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateTableMigration"; }

  AWS_S3TABLES_API Aws::String SerializePayload() const override;

  AWS_S3TABLES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the destination table. Updates the table's
   * most recent migration. Until the migration creates the destination table,
   * specify <code>migrationId</code>. Specify either <code>tableARN</code> or
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
  UpdateTableMigrationRequest& WithTableARN(TableARNT&& value) {
    SetTableARN(std::forward<TableARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the migration to update. Specify either <code>migrationId</code> or
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
  UpdateTableMigrationRequest& WithMigrationId(MigrationIdT&& value) {
    SetMigrationId(std::forward<MigrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state to move the migration to: <code>queued</code> to continue a
   * migration in the <code>pendingReview</code> state, or <code>cancelled</code> to
   * cancel a migration in the <code>new</code>, <code>planning</code>,
   * <code>pendingReview</code>, <code>queued</code> or <code>migrating</code>
   * state.</p>
   */
  inline MigrationRequestedState GetRequestedState() const { return m_requestedState; }
  inline bool RequestedStateHasBeenSet() const { return m_requestedStateHasBeenSet; }
  inline void SetRequestedState(MigrationRequestedState value) {
    m_requestedStateHasBeenSet = true;
    m_requestedState = value;
  }
  inline UpdateTableMigrationRequest& WithRequestedState(MigrationRequestedState value) {
    SetRequestedState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the update, up to 1,024 characters, with no control
   * characters. <code>GetTableMigration</code> doesn't return it.</p>
   */
  inline const Aws::String& GetUpdateDescription() const { return m_updateDescription; }
  inline bool UpdateDescriptionHasBeenSet() const { return m_updateDescriptionHasBeenSet; }
  template <typename UpdateDescriptionT = Aws::String>
  void SetUpdateDescription(UpdateDescriptionT&& value) {
    m_updateDescriptionHasBeenSet = true;
    m_updateDescription = std::forward<UpdateDescriptionT>(value);
  }
  template <typename UpdateDescriptionT = Aws::String>
  UpdateTableMigrationRequest& WithUpdateDescription(UpdateDescriptionT&& value) {
    SetUpdateDescription(std::forward<UpdateDescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tableARN;

  Aws::String m_migrationId;

  MigrationRequestedState m_requestedState{MigrationRequestedState::NOT_SET};

  Aws::String m_updateDescription;
  bool m_tableARNHasBeenSet = false;
  bool m_migrationIdHasBeenSet = false;
  bool m_requestedStateHasBeenSet = false;
  bool m_updateDescriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
