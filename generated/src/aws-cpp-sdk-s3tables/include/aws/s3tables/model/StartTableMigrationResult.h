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
class StartTableMigrationResult {
 public:
  AWS_S3TABLES_API StartTableMigrationResult() = default;
  AWS_S3TABLES_API StartTableMigrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_S3TABLES_API StartTableMigrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  StartTableMigrationResult& WithMigrationId(MigrationIdT&& value) {
    SetMigrationId(std::forward<MigrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the migration when the request is accepted, such as
   * <code>planning</code>.</p>
   */
  inline MigrationState GetState() const { return m_state; }
  inline void SetState(MigrationState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline StartTableMigrationResult& WithState(MigrationState value) {
    SetState(value);
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
  StartTableMigrationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_migrationId;

  MigrationState m_state{MigrationState::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_migrationIdHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
