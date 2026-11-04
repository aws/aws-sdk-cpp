/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/MigrationState.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace S3Tables {
namespace Model {
class UpdateTableMigrationResult {
 public:
  AWS_S3TABLES_API UpdateTableMigrationResult() = default;
  AWS_S3TABLES_API UpdateTableMigrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_S3TABLES_API UpdateTableMigrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the migration.</p>
   */
  inline const Aws::String& GetMigrationId() const { return m_migrationId; }
  template <typename MigrationIdT = Aws::String>
  void SetMigrationId(MigrationIdT&& value) {
    m_migrationIdHasBeenSet = true;
    m_migrationId = std::forward<MigrationIdT>(value);
  }
  template <typename MigrationIdT = Aws::String>
  UpdateTableMigrationResult& WithMigrationId(MigrationIdT&& value) {
    SetMigrationId(std::forward<MigrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the migration after the update, such as <code>queued</code>,
   * <code>migrating</code> or <code>cancelling</code>.</p>
   */
  inline MigrationState GetState() const { return m_state; }
  inline void SetState(MigrationState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline UpdateTableMigrationResult& WithState(MigrationState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the destination table.</p>
   */
  inline const Aws::String& GetTableARN() const { return m_tableARN; }
  template <typename TableARNT = Aws::String>
  void SetTableARN(TableARNT&& value) {
    m_tableARNHasBeenSet = true;
    m_tableARN = std::forward<TableARNT>(value);
  }
  template <typename TableARNT = Aws::String>
  UpdateTableMigrationResult& WithTableARN(TableARNT&& value) {
    SetTableARN(std::forward<TableARNT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  UpdateTableMigrationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_migrationId;

  MigrationState m_state{MigrationState::NOT_SET};

  Aws::String m_tableARN;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_migrationIdHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_tableARNHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
