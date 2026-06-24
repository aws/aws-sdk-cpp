/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/AutonomousDatabaseSummary.h>

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
class ListAutonomousDatabasesResult {
 public:
  AWS_ODB_API ListAutonomousDatabasesResult() = default;
  AWS_ODB_API ListAutonomousDatabasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ODB_API ListAutonomousDatabasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The token to include in another request to get the next page of items. This
   * value is <code>null</code> when there are no more items to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAutonomousDatabasesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of Autonomous Databases along with their properties.</p>
   */
  inline const Aws::Vector<AutonomousDatabaseSummary>& GetAutonomousDatabases() const { return m_autonomousDatabases; }
  template <typename AutonomousDatabasesT = Aws::Vector<AutonomousDatabaseSummary>>
  void SetAutonomousDatabases(AutonomousDatabasesT&& value) {
    m_autonomousDatabasesHasBeenSet = true;
    m_autonomousDatabases = std::forward<AutonomousDatabasesT>(value);
  }
  template <typename AutonomousDatabasesT = Aws::Vector<AutonomousDatabaseSummary>>
  ListAutonomousDatabasesResult& WithAutonomousDatabases(AutonomousDatabasesT&& value) {
    SetAutonomousDatabases(std::forward<AutonomousDatabasesT>(value));
    return *this;
  }
  template <typename AutonomousDatabasesT = AutonomousDatabaseSummary>
  ListAutonomousDatabasesResult& AddAutonomousDatabases(AutonomousDatabasesT&& value) {
    m_autonomousDatabasesHasBeenSet = true;
    m_autonomousDatabases.emplace_back(std::forward<AutonomousDatabasesT>(value));
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
  ListAutonomousDatabasesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<AutonomousDatabaseSummary> m_autonomousDatabases;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_autonomousDatabasesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
