/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/AutonomousDatabase.h>

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
class GetAutonomousDatabaseResult {
 public:
  AWS_ODB_API GetAutonomousDatabaseResult() = default;
  AWS_ODB_API GetAutonomousDatabaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ODB_API GetAutonomousDatabaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The details of the requested Autonomous Database.</p>
   */
  inline const AutonomousDatabase& GetAutonomousDatabase() const { return m_autonomousDatabase; }
  template <typename AutonomousDatabaseT = AutonomousDatabase>
  void SetAutonomousDatabase(AutonomousDatabaseT&& value) {
    m_autonomousDatabaseHasBeenSet = true;
    m_autonomousDatabase = std::forward<AutonomousDatabaseT>(value);
  }
  template <typename AutonomousDatabaseT = AutonomousDatabase>
  GetAutonomousDatabaseResult& WithAutonomousDatabase(AutonomousDatabaseT&& value) {
    SetAutonomousDatabase(std::forward<AutonomousDatabaseT>(value));
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
  GetAutonomousDatabaseResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  AutonomousDatabase m_autonomousDatabase;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_autonomousDatabaseHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
