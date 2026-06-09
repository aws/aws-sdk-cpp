/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>

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
class CreateAutonomousDatabaseWalletResult {
 public:
  AWS_ODB_API CreateAutonomousDatabaseWalletResult() = default;
  AWS_ODB_API CreateAutonomousDatabaseWalletResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ODB_API CreateAutonomousDatabaseWalletResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The generated wallet file for the Autonomous Database, returned as a
   * compressed archive.</p>
   */
  inline const Aws::Utils::CryptoBuffer& GetAutonomousDatabaseWalletFile() const { return m_autonomousDatabaseWalletFile; }
  template <typename AutonomousDatabaseWalletFileT = Aws::Utils::CryptoBuffer>
  void SetAutonomousDatabaseWalletFile(AutonomousDatabaseWalletFileT&& value) {
    m_autonomousDatabaseWalletFileHasBeenSet = true;
    m_autonomousDatabaseWalletFile = std::forward<AutonomousDatabaseWalletFileT>(value);
  }
  template <typename AutonomousDatabaseWalletFileT = Aws::Utils::CryptoBuffer>
  CreateAutonomousDatabaseWalletResult& WithAutonomousDatabaseWalletFile(AutonomousDatabaseWalletFileT&& value) {
    SetAutonomousDatabaseWalletFile(std::forward<AutonomousDatabaseWalletFileT>(value));
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
  CreateAutonomousDatabaseWalletResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Utils::CryptoBuffer m_autonomousDatabaseWalletFile{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_autonomousDatabaseWalletFileHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
