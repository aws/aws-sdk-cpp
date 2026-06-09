/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/AutonomousDatabaseBackup.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {
class GetAutonomousDatabaseBackupResult {
 public:
  AWS_ODB_API GetAutonomousDatabaseBackupResult() = default;
  AWS_ODB_API GetAutonomousDatabaseBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ODB_API GetAutonomousDatabaseBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The details of the requested Autonomous Database backup.</p>
   */
  inline const AutonomousDatabaseBackup& GetAutonomousDatabaseBackup() const { return m_autonomousDatabaseBackup; }
  template <typename AutonomousDatabaseBackupT = AutonomousDatabaseBackup>
  void SetAutonomousDatabaseBackup(AutonomousDatabaseBackupT&& value) {
    m_autonomousDatabaseBackupHasBeenSet = true;
    m_autonomousDatabaseBackup = std::forward<AutonomousDatabaseBackupT>(value);
  }
  template <typename AutonomousDatabaseBackupT = AutonomousDatabaseBackup>
  GetAutonomousDatabaseBackupResult& WithAutonomousDatabaseBackup(AutonomousDatabaseBackupT&& value) {
    SetAutonomousDatabaseBackup(std::forward<AutonomousDatabaseBackupT>(value));
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
  GetAutonomousDatabaseBackupResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  AutonomousDatabaseBackup m_autonomousDatabaseBackup;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_autonomousDatabaseBackupHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
